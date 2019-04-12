// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.h"

extern PyObject *callPythonFunction( PyObject *func, PyObject **args, int count );


PyObject *CALL_FUNCTION_WITH_ARGS1( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 1 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 1; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 1 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 1 * sizeof(PyObject *) );
            memcpy( python_pars + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 1 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 1 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 1; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 1 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 1 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 1 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 1 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (1 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 1 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (1 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 1 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 1, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 1 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            1
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 1 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS2( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 2 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 2; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 2 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 2 * sizeof(PyObject *) );
            memcpy( python_pars + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 2 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 2 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 2; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 2 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 2 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 2 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 2 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (2 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 2 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (2 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 2 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 2, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 2 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            2
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 2 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS3( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 3 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 3; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 3 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 3 * sizeof(PyObject *) );
            memcpy( python_pars + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 3 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 3 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 3; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 3 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 3 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 3 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 3 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (3 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 3 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (3 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 3 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 3, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 3 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            3
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 3 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS4( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 4 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 4; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 4 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 4 * sizeof(PyObject *) );
            memcpy( python_pars + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 4 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 4 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 4; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 4 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 4 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 4 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 4 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (4 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 4 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (4 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 4 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 4, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 4 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            4
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 4 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS5( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 5; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 5 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 5; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 5 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 5 * sizeof(PyObject *) );
            memcpy( python_pars + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 5 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 5 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 5; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 5 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 5 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 5 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 5 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (5 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 5 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (5 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 5 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 5, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 5 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            5
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 5 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_METHOD_WITH_ARGS1( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    1
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS1( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    1
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS1( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS1( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS2( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    2
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS2( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    2
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS2( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS2( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS3( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    3
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS3( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    3
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS3( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS3( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS5( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 5; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    5
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS5( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    5
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS5( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS5( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS5(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS5(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS5(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}
/* Code to register embedded modules for meta path based loading if any. */

#include "nuitka/unfreezing.h"

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
MOD_INIT_DECL( __main__ );
MOD_INIT_DECL( packages );
MOD_INIT_DECL( packages$amazon_data_upload );
MOD_INIT_DECL( packages$image_upload );
MOD_INIT_DECL( packages$item_upload );
MOD_INIT_DECL( packages$stock_upload );
MOD_INIT_DECL( packages$variation_upload );
MOD_INIT_DECL( sortedcontainers );
MOD_INIT_DECL( sortedcontainers$sorteddict );
MOD_INIT_DECL( sortedcontainers$sortedlist );
MOD_INIT_DECL( sortedcontainers$sortedset );
MOD_INIT_DECL( tkinter$$45$preLoad );
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{
    { "__main__", MOD_INIT_NAME( __main__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { "_asyncio", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_bz2", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_contextvars", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_ctypes", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_decimal", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_elementtree", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_hashlib", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_lzma", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_msi", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_multiprocessing", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_overlapped", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_queue", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_socket", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_sqlite3", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_ssl", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_tkinter", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "bisect", NULL, 69877, 2706, NUITKA_BYTECODE_FLAG },
    { "collections", NULL, 72583, 46618, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "csv", NULL, 119201, 11840, NUITKA_BYTECODE_FLAG },
    { "functools", NULL, 131041, 23957, NUITKA_BYTECODE_FLAG },
    { "ntpath", NULL, 154998, 13012, NUITKA_BYTECODE_FLAG },
    { "operator", NULL, 168010, 13908, NUITKA_BYTECODE_FLAG },
    { "os", NULL, 181918, 29701, NUITKA_BYTECODE_FLAG },
    { "packages", MOD_INIT_NAME( packages ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "packages.amazon_data_upload", MOD_INIT_NAME( packages$amazon_data_upload ), 0, 0, NUITKA_COMPILED_MODULE },
    { "packages.image_upload", MOD_INIT_NAME( packages$image_upload ), 0, 0, NUITKA_COMPILED_MODULE },
    { "packages.item_upload", MOD_INIT_NAME( packages$item_upload ), 0, 0, NUITKA_COMPILED_MODULE },
    { "packages.stock_upload", MOD_INIT_NAME( packages$stock_upload ), 0, 0, NUITKA_COMPILED_MODULE },
    { "packages.variation_upload", MOD_INIT_NAME( packages$variation_upload ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyexpat", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "re", NULL, 211619, 13812, NUITKA_BYTECODE_FLAG },
    { "select", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "site", NULL, 225431, 13134, NUITKA_BYTECODE_FLAG },
    { "sortedcontainers", MOD_INIT_NAME( sortedcontainers ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "sortedcontainers.sorteddict", MOD_INIT_NAME( sortedcontainers$sorteddict ), 0, 0, NUITKA_COMPILED_MODULE },
    { "sortedcontainers.sortedlist", MOD_INIT_NAME( sortedcontainers$sortedlist ), 0, 0, NUITKA_COMPILED_MODULE },
    { "sortedcontainers.sortedset", MOD_INIT_NAME( sortedcontainers$sortedset ), 0, 0, NUITKA_COMPILED_MODULE },
    { "textwrap", NULL, 238565, 13620, NUITKA_BYTECODE_FLAG },
    { "tkinter", NULL, 252185, 179183, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "tkinter-preLoad", MOD_INIT_NAME( tkinter$$45$preLoad ), 0, 0, NUITKA_COMPILED_MODULE },
    { "tkinter.filedialog", NULL, 431368, 12278, NUITKA_BYTECODE_FLAG },
    { "traceback", NULL, 443646, 19631, NUITKA_BYTECODE_FLAG },
    { "unicodedata", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "warnings", NULL, 463277, 13957, NUITKA_BYTECODE_FLAG },
    { "__future__", NULL, 477234, 4140, NUITKA_BYTECODE_FLAG },
    { "_bootlocale", NULL, 481374, 1257, NUITKA_BYTECODE_FLAG },
    { "_compat_pickle", NULL, 482631, 5816, NUITKA_BYTECODE_FLAG },
    { "_dummy_thread", NULL, 488447, 4861, NUITKA_BYTECODE_FLAG },
    { "_markupbase", NULL, 493308, 7793, NUITKA_BYTECODE_FLAG },
    { "_osx_support", NULL, 501101, 9603, NUITKA_BYTECODE_FLAG },
    { "_py_abc", NULL, 510704, 4662, NUITKA_BYTECODE_FLAG },
    { "_pyio", NULL, 515366, 72826, NUITKA_BYTECODE_FLAG },
    { "_sitebuiltins", NULL, 588192, 3473, NUITKA_BYTECODE_FLAG },
    { "_strptime", NULL, 591665, 16112, NUITKA_BYTECODE_FLAG },
    { "_threading_local", NULL, 607777, 6420, NUITKA_BYTECODE_FLAG },
    { "aifc", NULL, 614197, 26151, NUITKA_BYTECODE_FLAG },
    { "argparse", NULL, 640348, 61921, NUITKA_BYTECODE_FLAG },
    { "ast", NULL, 702269, 12088, NUITKA_BYTECODE_FLAG },
    { "asynchat", NULL, 714357, 6842, NUITKA_BYTECODE_FLAG },
    { "asyncio", NULL, 721199, 698, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "asyncio.base_events", NULL, 721897, 48124, NUITKA_BYTECODE_FLAG },
    { "asyncio.base_futures", NULL, 770021, 2110, NUITKA_BYTECODE_FLAG },
    { "asyncio.base_subprocess", NULL, 772131, 9199, NUITKA_BYTECODE_FLAG },
    { "asyncio.base_tasks", NULL, 781330, 1874, NUITKA_BYTECODE_FLAG },
    { "asyncio.constants", NULL, 783204, 599, NUITKA_BYTECODE_FLAG },
    { "asyncio.coroutines", NULL, 783803, 6386, NUITKA_BYTECODE_FLAG },
    { "asyncio.events", NULL, 790189, 27863, NUITKA_BYTECODE_FLAG },
    { "asyncio.format_helpers", NULL, 818052, 2325, NUITKA_BYTECODE_FLAG },
    { "asyncio.futures", NULL, 820377, 10753, NUITKA_BYTECODE_FLAG },
    { "asyncio.locks", NULL, 831130, 15921, NUITKA_BYTECODE_FLAG },
    { "asyncio.log", NULL, 847051, 248, NUITKA_BYTECODE_FLAG },
    { "asyncio.proactor_events", NULL, 847299, 19967, NUITKA_BYTECODE_FLAG },
    { "asyncio.protocols", NULL, 867266, 8736, NUITKA_BYTECODE_FLAG },
    { "asyncio.queues", NULL, 876002, 8181, NUITKA_BYTECODE_FLAG },
    { "asyncio.runners", NULL, 884183, 1922, NUITKA_BYTECODE_FLAG },
    { "asyncio.selector_events", NULL, 886105, 28131, NUITKA_BYTECODE_FLAG },
    { "asyncio.sslproto", NULL, 914236, 21219, NUITKA_BYTECODE_FLAG },
    { "asyncio.streams", NULL, 935455, 20296, NUITKA_BYTECODE_FLAG },
    { "asyncio.subprocess", NULL, 955751, 6760, NUITKA_BYTECODE_FLAG },
    { "asyncio.tasks", NULL, 962511, 21874, NUITKA_BYTECODE_FLAG },
    { "asyncio.transports", NULL, 984385, 12219, NUITKA_BYTECODE_FLAG },
    { "asyncio.windows_events", NULL, 996604, 22617, NUITKA_BYTECODE_FLAG },
    { "asyncio.windows_utils", NULL, 1019221, 4409, NUITKA_BYTECODE_FLAG },
    { "asyncore", NULL, 1023630, 15852, NUITKA_BYTECODE_FLAG },
    { "bdb", NULL, 1039482, 24402, NUITKA_BYTECODE_FLAG },
    { "binhex", NULL, 1063884, 12067, NUITKA_BYTECODE_FLAG },
    { "bisect", NULL, 69877, 2706, NUITKA_BYTECODE_FLAG },
    { "cProfile", NULL, 1075951, 4559, NUITKA_BYTECODE_FLAG },
    { "calendar", NULL, 1080510, 27432, NUITKA_BYTECODE_FLAG },
    { "cgi", NULL, 1107942, 27199, NUITKA_BYTECODE_FLAG },
    { "cgitb", NULL, 1135141, 10120, NUITKA_BYTECODE_FLAG },
    { "chunk", NULL, 1145261, 4927, NUITKA_BYTECODE_FLAG },
    { "cmd", NULL, 1150188, 12598, NUITKA_BYTECODE_FLAG },
    { "code", NULL, 1162786, 9866, NUITKA_BYTECODE_FLAG },
    { "codeop", NULL, 1172652, 6298, NUITKA_BYTECODE_FLAG },
    { "colorsys", NULL, 1178950, 3305, NUITKA_BYTECODE_FLAG },
    { "compileall", NULL, 1182255, 9114, NUITKA_BYTECODE_FLAG },
    { "concurrent", NULL, 1191369, 154, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "concurrent.futures", NULL, 1191523, 1094, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "concurrent.futures._base", NULL, 1192617, 20891, NUITKA_BYTECODE_FLAG },
    { "concurrent.futures.process", NULL, 1213508, 19569, NUITKA_BYTECODE_FLAG },
    { "concurrent.futures.thread", NULL, 1233077, 5182, NUITKA_BYTECODE_FLAG },
    { "configparser", NULL, 1238259, 45888, NUITKA_BYTECODE_FLAG },
    { "contextlib", NULL, 1284147, 19908, NUITKA_BYTECODE_FLAG },
    { "contextvars", NULL, 1304055, 265, NUITKA_BYTECODE_FLAG },
    { "copy", NULL, 1304320, 7109, NUITKA_BYTECODE_FLAG },
    { "csv", NULL, 119201, 11840, NUITKA_BYTECODE_FLAG },
    { "ctypes", NULL, 1311429, 16157, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "ctypes._aix", NULL, 1327586, 9831, NUITKA_BYTECODE_FLAG },
    { "ctypes._endian", NULL, 1337417, 1964, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib", NULL, 1339381, 321, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "ctypes.macholib.dyld", NULL, 1339702, 4354, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib.dylib", NULL, 1344056, 1948, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib.framework", NULL, 1346004, 2228, NUITKA_BYTECODE_FLAG },
    { "ctypes.util", NULL, 1348232, 7757, NUITKA_BYTECODE_FLAG },
    { "ctypes.wintypes", NULL, 1355989, 5125, NUITKA_BYTECODE_FLAG },
    { "dataclasses", NULL, 1361114, 22495, NUITKA_BYTECODE_FLAG },
    { "datetime", NULL, 1383609, 57257, NUITKA_BYTECODE_FLAG },
    { "dbm", NULL, 1440866, 4174, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "dbm.dumb", NULL, 1445040, 8408, NUITKA_BYTECODE_FLAG },
    { "decimal", NULL, 1453448, 162180, NUITKA_BYTECODE_FLAG },
    { "difflib", NULL, 1615628, 59446, NUITKA_BYTECODE_FLAG },
    { "distutils", NULL, 1675074, 406, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "distutils._msvccompiler", NULL, 1675480, 13606, NUITKA_BYTECODE_FLAG },
    { "distutils.archive_util", NULL, 1689086, 6540, NUITKA_BYTECODE_FLAG },
    { "distutils.bcppcompiler", NULL, 1695626, 6509, NUITKA_BYTECODE_FLAG },
    { "distutils.ccompiler", NULL, 1702135, 33224, NUITKA_BYTECODE_FLAG },
    { "distutils.cmd", NULL, 1735359, 13916, NUITKA_BYTECODE_FLAG },
    { "distutils.command", NULL, 1749275, 563, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "distutils.command.bdist", NULL, 1749838, 3662, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_dumb", NULL, 1753500, 3577, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_msi", NULL, 1757077, 19409, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_rpm", NULL, 1776486, 12502, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_wininst", NULL, 1788988, 8017, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build", NULL, 1797005, 3843, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_clib", NULL, 1800848, 4893, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_ext", NULL, 1805741, 15771, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_py", NULL, 1821512, 10399, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_scripts", NULL, 1831911, 4298, NUITKA_BYTECODE_FLAG },
    { "distutils.command.check", NULL, 1836209, 4818, NUITKA_BYTECODE_FLAG },
    { "distutils.command.clean", NULL, 1841027, 2100, NUITKA_BYTECODE_FLAG },
    { "distutils.command.config", NULL, 1843127, 10204, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install", NULL, 1853331, 13527, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_data", NULL, 1866858, 2293, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_egg_info", NULL, 1869151, 2991, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_headers", NULL, 1872142, 1708, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_lib", NULL, 1873850, 5086, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_scripts", NULL, 1878936, 2150, NUITKA_BYTECODE_FLAG },
    { "distutils.command.register", NULL, 1881086, 8485, NUITKA_BYTECODE_FLAG },
    { "distutils.command.sdist", NULL, 1889571, 14516, NUITKA_BYTECODE_FLAG },
    { "distutils.command.upload", NULL, 1904087, 5098, NUITKA_BYTECODE_FLAG },
    { "distutils.config", NULL, 1909185, 3493, NUITKA_BYTECODE_FLAG },
    { "distutils.core", NULL, 1912678, 6618, NUITKA_BYTECODE_FLAG },
    { "distutils.cygwinccompiler", NULL, 1919296, 8536, NUITKA_BYTECODE_FLAG },
    { "distutils.debug", NULL, 1927832, 216, NUITKA_BYTECODE_FLAG },
    { "distutils.dep_util", NULL, 1928048, 2732, NUITKA_BYTECODE_FLAG },
    { "distutils.dir_util", NULL, 1930780, 5826, NUITKA_BYTECODE_FLAG },
    { "distutils.dist", NULL, 1936606, 34447, NUITKA_BYTECODE_FLAG },
    { "distutils.errors", NULL, 1971053, 5502, NUITKA_BYTECODE_FLAG },
    { "distutils.extension", NULL, 1976555, 6913, NUITKA_BYTECODE_FLAG },
    { "distutils.fancy_getopt", NULL, 1983468, 10625, NUITKA_BYTECODE_FLAG },
    { "distutils.file_util", NULL, 1994093, 5911, NUITKA_BYTECODE_FLAG },
    { "distutils.filelist", NULL, 2000004, 9846, NUITKA_BYTECODE_FLAG },
    { "distutils.log", NULL, 2009850, 2327, NUITKA_BYTECODE_FLAG },
    { "distutils.msvc9compiler", NULL, 2012177, 17391, NUITKA_BYTECODE_FLAG },
    { "distutils.msvccompiler", NULL, 2029568, 14579, NUITKA_BYTECODE_FLAG },
    { "distutils.spawn", NULL, 2044147, 5017, NUITKA_BYTECODE_FLAG },
    { "distutils.sysconfig", NULL, 2049164, 11866, NUITKA_BYTECODE_FLAG },
    { "distutils.text_file", NULL, 2061030, 8453, NUITKA_BYTECODE_FLAG },
    { "distutils.unixccompiler", NULL, 2069483, 6487, NUITKA_BYTECODE_FLAG },
    { "distutils.util", NULL, 2075970, 15063, NUITKA_BYTECODE_FLAG },
    { "distutils.version", NULL, 2091033, 7364, NUITKA_BYTECODE_FLAG },
    { "distutils.versionpredicate", NULL, 2098397, 5111, NUITKA_BYTECODE_FLAG },
    { "doctest", NULL, 2103508, 75618, NUITKA_BYTECODE_FLAG },
    { "dummy_threading", NULL, 2179126, 1132, NUITKA_BYTECODE_FLAG },
    { "email", NULL, 2180258, 1699, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "email._encoded_words", NULL, 2181957, 5616, NUITKA_BYTECODE_FLAG },
    { "email._header_value_parser", NULL, 2187573, 75638, NUITKA_BYTECODE_FLAG },
    { "email._parseaddr", NULL, 2263211, 12356, NUITKA_BYTECODE_FLAG },
    { "email._policybase", NULL, 2275567, 14858, NUITKA_BYTECODE_FLAG },
    { "email.base64mime", NULL, 2290425, 3243, NUITKA_BYTECODE_FLAG },
    { "email.charset", NULL, 2293668, 11537, NUITKA_BYTECODE_FLAG },
    { "email.contentmanager", NULL, 2305205, 7303, NUITKA_BYTECODE_FLAG },
    { "email.encoders", NULL, 2312508, 1672, NUITKA_BYTECODE_FLAG },
    { "email.errors", NULL, 2314180, 6199, NUITKA_BYTECODE_FLAG },
    { "email.feedparser", NULL, 2320379, 10633, NUITKA_BYTECODE_FLAG },
    { "email.generator", NULL, 2331012, 12508, NUITKA_BYTECODE_FLAG },
    { "email.header", NULL, 2343520, 16388, NUITKA_BYTECODE_FLAG },
    { "email.headerregistry", NULL, 2359908, 21305, NUITKA_BYTECODE_FLAG },
    { "email.iterators", NULL, 2381213, 1940, NUITKA_BYTECODE_FLAG },
    { "email.message", NULL, 2383153, 37948, NUITKA_BYTECODE_FLAG },
    { "email.mime", NULL, 2421101, 154, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "email.mime.application", NULL, 2421255, 1465, NUITKA_BYTECODE_FLAG },
    { "email.mime.audio", NULL, 2422720, 2624, NUITKA_BYTECODE_FLAG },
    { "email.mime.base", NULL, 2425344, 1090, NUITKA_BYTECODE_FLAG },
    { "email.mime.image", NULL, 2426434, 1910, NUITKA_BYTECODE_FLAG },
    { "email.mime.message", NULL, 2428344, 1339, NUITKA_BYTECODE_FLAG },
    { "email.mime.multipart", NULL, 2429683, 1561, NUITKA_BYTECODE_FLAG },
    { "email.mime.nonmultipart", NULL, 2431244, 776, NUITKA_BYTECODE_FLAG },
    { "email.mime.text", NULL, 2432020, 1323, NUITKA_BYTECODE_FLAG },
    { "email.parser", NULL, 2433343, 5755, NUITKA_BYTECODE_FLAG },
    { "email.policy", NULL, 2439098, 9648, NUITKA_BYTECODE_FLAG },
    { "email.quoprimime", NULL, 2448746, 7672, NUITKA_BYTECODE_FLAG },
    { "email.utils", NULL, 2456418, 9475, NUITKA_BYTECODE_FLAG },
    { "filecmp", NULL, 2465893, 8315, NUITKA_BYTECODE_FLAG },
    { "fileinput", NULL, 2474208, 13206, NUITKA_BYTECODE_FLAG },
    { "fnmatch", NULL, 2487414, 3345, NUITKA_BYTECODE_FLAG },
    { "formatter", NULL, 2490759, 17561, NUITKA_BYTECODE_FLAG },
    { "fractions", NULL, 2508320, 18436, NUITKA_BYTECODE_FLAG },
    { "ftplib", NULL, 2526756, 28075, NUITKA_BYTECODE_FLAG },
    { "getopt", NULL, 2554831, 6247, NUITKA_BYTECODE_FLAG },
    { "getpass", NULL, 2561078, 4172, NUITKA_BYTECODE_FLAG },
    { "gettext", NULL, 2565250, 14176, NUITKA_BYTECODE_FLAG },
    { "glob", NULL, 2579426, 4267, NUITKA_BYTECODE_FLAG },
    { "gzip", NULL, 2583693, 17193, NUITKA_BYTECODE_FLAG },
    { "hashlib", NULL, 2600886, 6599, NUITKA_BYTECODE_FLAG },
    { "hmac", NULL, 2607485, 6121, NUITKA_BYTECODE_FLAG },
    { "html", NULL, 2613606, 3405, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "html.entities", NULL, 2617011, 50477, NUITKA_BYTECODE_FLAG },
    { "html.parser", NULL, 2667488, 11115, NUITKA_BYTECODE_FLAG },
    { "http", NULL, 2678603, 5930, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "http.client", NULL, 2684533, 34056, NUITKA_BYTECODE_FLAG },
    { "http.cookiejar", NULL, 2718589, 53415, NUITKA_BYTECODE_FLAG },
    { "http.cookies", NULL, 2772004, 15252, NUITKA_BYTECODE_FLAG },
    { "http.server", NULL, 2787256, 33375, NUITKA_BYTECODE_FLAG },
    { "imaplib", NULL, 2820631, 41438, NUITKA_BYTECODE_FLAG },
    { "imghdr", NULL, 2862069, 4150, NUITKA_BYTECODE_FLAG },
    { "imp", NULL, 2866219, 9761, NUITKA_BYTECODE_FLAG },
    { "importlib.abc", NULL, 2875980, 13495, NUITKA_BYTECODE_FLAG },
    { "importlib.resources", NULL, 2889475, 8347, NUITKA_BYTECODE_FLAG },
    { "importlib.util", NULL, 2897822, 9364, NUITKA_BYTECODE_FLAG },
    { "ipaddress", NULL, 2907186, 63002, NUITKA_BYTECODE_FLAG },
    { "json", NULL, 2970188, 12346, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "json.decoder", NULL, 2982534, 9832, NUITKA_BYTECODE_FLAG },
    { "json.encoder", NULL, 2992366, 11314, NUITKA_BYTECODE_FLAG },
    { "json.scanner", NULL, 3003680, 2004, NUITKA_BYTECODE_FLAG },
    { "json.tool", NULL, 3005684, 1485, NUITKA_BYTECODE_FLAG },
    { "lib2to3", NULL, 3007169, 151, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.btm_matcher", NULL, 3007320, 4901, NUITKA_BYTECODE_FLAG },
    { "lib2to3.btm_utils", NULL, 3012221, 6151, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixer_base", NULL, 3018372, 6243, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixer_util", NULL, 3024615, 12054, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes", NULL, 3036669, 157, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.fixes.fix_apply", NULL, 3036826, 1695, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_asserts", NULL, 3038521, 1280, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_basestring", NULL, 3039801, 670, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_buffer", NULL, 3040471, 815, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_dict", NULL, 3041286, 3323, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_except", NULL, 3044609, 2825, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_exec", NULL, 3047434, 1156, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_execfile", NULL, 3048590, 1700, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_exitfunc", NULL, 3050290, 2303, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_filter", NULL, 3052593, 2368, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_funcattrs", NULL, 3054961, 981, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_future", NULL, 3055942, 791, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_getcwdu", NULL, 3056733, 795, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_has_key", NULL, 3057528, 2925, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_idioms", NULL, 3060453, 3910, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_import", NULL, 3064363, 2792, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_imports", NULL, 3067155, 4356, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_imports2", NULL, 3071511, 555, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_input", NULL, 3072066, 957, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_intern", NULL, 3073023, 1164, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_isinstance", NULL, 3074187, 1562, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_itertools", NULL, 3075749, 1551, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_itertools_imports", NULL, 3077300, 1587, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_long", NULL, 3078887, 712, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_map", NULL, 3079599, 3100, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_metaclass", NULL, 3082699, 5353, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_methodattrs", NULL, 3088052, 943, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_ne", NULL, 3088995, 814, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_next", NULL, 3089809, 3067, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_nonzero", NULL, 3092876, 930, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_numliterals", NULL, 3093806, 1026, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_operator", NULL, 3094832, 4243, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_paren", NULL, 3099075, 1397, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_print", NULL, 3100472, 2332, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_raise", NULL, 3102804, 2256, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_raw_input", NULL, 3105060, 802, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_reduce", NULL, 3105862, 1137, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_reload", NULL, 3106999, 1176, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_renames", NULL, 3108175, 2000, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_repr", NULL, 3110175, 852, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_set_literal", NULL, 3111027, 1684, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_standarderror", NULL, 3112711, 727, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_sys_exc", NULL, 3113438, 1408, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_throw", NULL, 3114846, 1809, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_tuple_params", NULL, 3116655, 4603, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_types", NULL, 3121258, 1836, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_unicode", NULL, 3123094, 1548, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_urllib", NULL, 3124642, 5968, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_ws_comma", NULL, 3130610, 1130, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_xrange", NULL, 3131740, 2543, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_xreadlines", NULL, 3134283, 1124, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_zip", NULL, 3135407, 1588, NUITKA_BYTECODE_FLAG },
    { "lib2to3.main", NULL, 3136995, 8544, NUITKA_BYTECODE_FLAG },
    { "lib2to3.patcomp", NULL, 3145539, 5619, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2", NULL, 3151158, 187, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.pgen2.driver", NULL, 3151345, 5148, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.grammar", NULL, 3156493, 7024, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.literals", NULL, 3163517, 1566, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.parse", NULL, 3165083, 6312, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.pgen", NULL, 3171395, 9788, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.token", NULL, 3181183, 1880, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.tokenize", NULL, 3183063, 15148, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pygram", NULL, 3198211, 1206, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pytree", NULL, 3199417, 25011, NUITKA_BYTECODE_FLAG },
    { "lib2to3.refactor", NULL, 3224428, 20412, NUITKA_BYTECODE_FLAG },
    { "logging", NULL, 3244840, 62566, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "logging.config", NULL, 3307406, 23023, NUITKA_BYTECODE_FLAG },
    { "logging.handlers", NULL, 3330429, 42991, NUITKA_BYTECODE_FLAG },
    { "lzma", NULL, 3373420, 11947, NUITKA_BYTECODE_FLAG },
    { "macpath", NULL, 3385367, 5815, NUITKA_BYTECODE_FLAG },
    { "mailbox", NULL, 3391182, 63656, NUITKA_BYTECODE_FLAG },
    { "mailcap", NULL, 3454838, 6492, NUITKA_BYTECODE_FLAG },
    { "mimetypes", NULL, 3461330, 15486, NUITKA_BYTECODE_FLAG },
    { "modulefinder", NULL, 3476816, 15360, NUITKA_BYTECODE_FLAG },
    { "msilib", NULL, 3492176, 15854, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "msilib.schema", NULL, 3508030, 56977, NUITKA_BYTECODE_FLAG },
    { "msilib.sequence", NULL, 3565007, 2632, NUITKA_BYTECODE_FLAG },
    { "msilib.text", NULL, 3567639, 8989, NUITKA_BYTECODE_FLAG },
    { "multiprocessing", NULL, 3576628, 535, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "multiprocessing.connection", NULL, 3577163, 24940, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.context", NULL, 3602103, 13121, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.dummy", NULL, 3615224, 3813, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "multiprocessing.dummy.connection", NULL, 3619037, 2521, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.forkserver", NULL, 3621558, 7772, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.heap", NULL, 3629330, 6432, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.managers", NULL, 3635762, 34021, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.pool", NULL, 3669783, 21244, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.popen_spawn_win32", NULL, 3691027, 2929, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.process", NULL, 3693956, 9434, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.queues", NULL, 3703390, 9445, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.reduction", NULL, 3712835, 8026, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.resource_sharer", NULL, 3720861, 5211, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.semaphore_tracker", NULL, 3726072, 3748, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.sharedctypes", NULL, 3729820, 6925, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.spawn", NULL, 3736745, 6486, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.synchronize", NULL, 3743231, 11191, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.util", NULL, 3754422, 9955, NUITKA_BYTECODE_FLAG },
    { "netrc", NULL, 3764377, 3771, NUITKA_BYTECODE_FLAG },
    { "nntplib", NULL, 3768148, 33759, NUITKA_BYTECODE_FLAG },
    { "nturl2path", NULL, 3801907, 1623, NUITKA_BYTECODE_FLAG },
    { "numbers", NULL, 3803530, 12200, NUITKA_BYTECODE_FLAG },
    { "optparse", NULL, 3815730, 47901, NUITKA_BYTECODE_FLAG },
    { "pathlib", NULL, 3863631, 41471, NUITKA_BYTECODE_FLAG },
    { "pdb", NULL, 3905102, 46770, NUITKA_BYTECODE_FLAG },
    { "pickle", NULL, 3951872, 42974, NUITKA_BYTECODE_FLAG },
    { "pickletools", NULL, 3994846, 65339, NUITKA_BYTECODE_FLAG },
    { "pipes", NULL, 4060185, 7811, NUITKA_BYTECODE_FLAG },
    { "pkgutil", NULL, 4067996, 16368, NUITKA_BYTECODE_FLAG },
    { "platform", NULL, 4084364, 28228, NUITKA_BYTECODE_FLAG },
    { "plistlib", NULL, 4112592, 25103, NUITKA_BYTECODE_FLAG },
    { "poplib", NULL, 4137695, 13344, NUITKA_BYTECODE_FLAG },
    { "posixpath", NULL, 4151039, 10438, NUITKA_BYTECODE_FLAG },
    { "pprint", NULL, 4161477, 15827, NUITKA_BYTECODE_FLAG },
    { "profile", NULL, 4177304, 13849, NUITKA_BYTECODE_FLAG },
    { "pstats", NULL, 4191153, 22302, NUITKA_BYTECODE_FLAG },
    { "py_compile", NULL, 4213455, 7199, NUITKA_BYTECODE_FLAG },
    { "pyclbr", NULL, 4220654, 10381, NUITKA_BYTECODE_FLAG },
    { "pydoc", NULL, 4231035, 84428, NUITKA_BYTECODE_FLAG },
    { "pydoc_data", NULL, 4315463, 154, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "pydoc_data.topics", NULL, 4315617, 411342, NUITKA_BYTECODE_FLAG },
    { "queue", NULL, 4726959, 11480, NUITKA_BYTECODE_FLAG },
    { "random", NULL, 4738439, 19402, NUITKA_BYTECODE_FLAG },
    { "rlcompleter", NULL, 4757841, 5755, NUITKA_BYTECODE_FLAG },
    { "runpy", NULL, 4763596, 7953, NUITKA_BYTECODE_FLAG },
    { "sched", NULL, 4771549, 6529, NUITKA_BYTECODE_FLAG },
    { "secrets", NULL, 4778078, 2192, NUITKA_BYTECODE_FLAG },
    { "selectors", NULL, 4780270, 16956, NUITKA_BYTECODE_FLAG },
    { "shelve", NULL, 4797226, 9514, NUITKA_BYTECODE_FLAG },
    { "shlex", NULL, 4806740, 6998, NUITKA_BYTECODE_FLAG },
    { "shutil", NULL, 4813738, 30872, NUITKA_BYTECODE_FLAG },
    { "signal", NULL, 4844610, 2520, NUITKA_BYTECODE_FLAG },
    { "site", NULL, 225431, 13134, NUITKA_BYTECODE_FLAG },
    { "smtpd", NULL, 4847130, 26612, NUITKA_BYTECODE_FLAG },
    { "smtplib", NULL, 4873742, 35358, NUITKA_BYTECODE_FLAG },
    { "sndhdr", NULL, 4909100, 6911, NUITKA_BYTECODE_FLAG },
    { "socket", NULL, 4916011, 22029, NUITKA_BYTECODE_FLAG },
    { "socketserver", NULL, 4938040, 24206, NUITKA_BYTECODE_FLAG },
    { "sqlite3", NULL, 4962246, 182, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "sqlite3.dbapi2", NULL, 4962428, 2501, NUITKA_BYTECODE_FLAG },
    { "sqlite3.dump", NULL, 4964929, 1944, NUITKA_BYTECODE_FLAG },
    { "ssl", NULL, 4966873, 39779, NUITKA_BYTECODE_FLAG },
    { "statistics", NULL, 5006652, 18172, NUITKA_BYTECODE_FLAG },
    { "string", NULL, 5024824, 7843, NUITKA_BYTECODE_FLAG },
    { "subprocess", NULL, 5032667, 38773, NUITKA_BYTECODE_FLAG },
    { "sunau", NULL, 5071440, 17219, NUITKA_BYTECODE_FLAG },
    { "symbol", NULL, 5088659, 2573, NUITKA_BYTECODE_FLAG },
    { "symtable", NULL, 5091232, 10453, NUITKA_BYTECODE_FLAG },
    { "sysconfig", NULL, 5101685, 15282, NUITKA_BYTECODE_FLAG },
    { "tabnanny", NULL, 5116967, 6986, NUITKA_BYTECODE_FLAG },
    { "tarfile", NULL, 5123953, 61849, NUITKA_BYTECODE_FLAG },
    { "telnetlib", NULL, 5185802, 18110, NUITKA_BYTECODE_FLAG },
    { "tempfile", NULL, 5203912, 22153, NUITKA_BYTECODE_FLAG },
    { "textwrap", NULL, 238565, 13620, NUITKA_BYTECODE_FLAG },
    { "this", NULL, 5226065, 1285, NUITKA_BYTECODE_FLAG },
    { "timeit", NULL, 5227350, 11655, NUITKA_BYTECODE_FLAG },
    { "tkinter", NULL, 252185, 179183, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "tkinter.colorchooser", NULL, 5239005, 1143, NUITKA_BYTECODE_FLAG },
    { "tkinter.commondialog", NULL, 5240148, 1124, NUITKA_BYTECODE_FLAG },
    { "tkinter.constants", NULL, 5241272, 1676, NUITKA_BYTECODE_FLAG },
    { "tkinter.dialog", NULL, 5242948, 1452, NUITKA_BYTECODE_FLAG },
    { "tkinter.dnd", NULL, 5244400, 11194, NUITKA_BYTECODE_FLAG },
    { "tkinter.filedialog", NULL, 431368, 12278, NUITKA_BYTECODE_FLAG },
    { "tkinter.font", NULL, 5255594, 6195, NUITKA_BYTECODE_FLAG },
    { "tkinter.messagebox", NULL, 5261789, 3060, NUITKA_BYTECODE_FLAG },
    { "tkinter.scrolledtext", NULL, 5264849, 2187, NUITKA_BYTECODE_FLAG },
    { "tkinter.simpledialog", NULL, 5267036, 10554, NUITKA_BYTECODE_FLAG },
    { "tkinter.tix", NULL, 5277590, 83674, NUITKA_BYTECODE_FLAG },
    { "tkinter.ttk", NULL, 5361264, 57858, NUITKA_BYTECODE_FLAG },
    { "trace", NULL, 5419122, 19155, NUITKA_BYTECODE_FLAG },
    { "tracemalloc", NULL, 5438277, 17284, NUITKA_BYTECODE_FLAG },
    { "turtle", NULL, 5455561, 130799, NUITKA_BYTECODE_FLAG },
    { "typing", NULL, 5586360, 49966, NUITKA_BYTECODE_FLAG },
    { "unittest", NULL, 5636326, 3019, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "unittest.case", NULL, 5639345, 48091, NUITKA_BYTECODE_FLAG },
    { "unittest.loader", NULL, 5687436, 14277, NUITKA_BYTECODE_FLAG },
    { "unittest.main", NULL, 5701713, 7446, NUITKA_BYTECODE_FLAG },
    { "unittest.mock", NULL, 5709159, 63062, NUITKA_BYTECODE_FLAG },
    { "unittest.result", NULL, 5772221, 7260, NUITKA_BYTECODE_FLAG },
    { "unittest.runner", NULL, 5779481, 6989, NUITKA_BYTECODE_FLAG },
    { "unittest.signals", NULL, 5786470, 2202, NUITKA_BYTECODE_FLAG },
    { "unittest.suite", NULL, 5788672, 9211, NUITKA_BYTECODE_FLAG },
    { "unittest.util", NULL, 5797883, 4529, NUITKA_BYTECODE_FLAG },
    { "urllib", NULL, 5802412, 150, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "urllib.error", NULL, 5802562, 2784, NUITKA_BYTECODE_FLAG },
    { "urllib.parse", NULL, 5805346, 30027, NUITKA_BYTECODE_FLAG },
    { "urllib.request", NULL, 5835373, 72312, NUITKA_BYTECODE_FLAG },
    { "urllib.response", NULL, 5907685, 3257, NUITKA_BYTECODE_FLAG },
    { "urllib.robotparser", NULL, 5910942, 7069, NUITKA_BYTECODE_FLAG },
    { "uu", NULL, 5918011, 3621, NUITKA_BYTECODE_FLAG },
    { "uuid", NULL, 5921632, 23207, NUITKA_BYTECODE_FLAG },
    { "venv", NULL, 5944839, 13130, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "wave", NULL, 5957969, 18296, NUITKA_BYTECODE_FLAG },
    { "weakref", NULL, 5976265, 19118, NUITKA_BYTECODE_FLAG },
    { "webbrowser", NULL, 5995383, 16382, NUITKA_BYTECODE_FLAG },
    { "wsgiref", NULL, 6011765, 746, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "wsgiref.handlers", NULL, 6012511, 16155, NUITKA_BYTECODE_FLAG },
    { "wsgiref.headers", NULL, 6028666, 7767, NUITKA_BYTECODE_FLAG },
    { "wsgiref.simple_server", NULL, 6036433, 5213, NUITKA_BYTECODE_FLAG },
    { "wsgiref.util", NULL, 6041646, 5188, NUITKA_BYTECODE_FLAG },
    { "wsgiref.validate", NULL, 6046834, 14684, NUITKA_BYTECODE_FLAG },
    { "xdrlib", NULL, 6061518, 8332, NUITKA_BYTECODE_FLAG },
    { "xml", NULL, 6069850, 714, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.dom", NULL, 6070564, 5466, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.dom.NodeFilter", NULL, 6076030, 981, NUITKA_BYTECODE_FLAG },
    { "xml.dom.domreg", NULL, 6077011, 2858, NUITKA_BYTECODE_FLAG },
    { "xml.dom.expatbuilder", NULL, 6079869, 27028, NUITKA_BYTECODE_FLAG },
    { "xml.dom.minicompat", NULL, 6106897, 2827, NUITKA_BYTECODE_FLAG },
    { "xml.dom.minidom", NULL, 6109724, 55627, NUITKA_BYTECODE_FLAG },
    { "xml.dom.pulldom", NULL, 6165351, 10500, NUITKA_BYTECODE_FLAG },
    { "xml.dom.xmlbuilder", NULL, 6175851, 12447, NUITKA_BYTECODE_FLAG },
    { "xml.etree", NULL, 6188298, 153, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.etree.ElementInclude", NULL, 6188451, 1589, NUITKA_BYTECODE_FLAG },
    { "xml.etree.ElementPath", NULL, 6190040, 6357, NUITKA_BYTECODE_FLAG },
    { "xml.etree.ElementTree", NULL, 6196397, 44821, NUITKA_BYTECODE_FLAG },
    { "xml.etree.cElementTree", NULL, 6241218, 195, NUITKA_BYTECODE_FLAG },
    { "xml.parsers", NULL, 6241413, 327, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.parsers.expat", NULL, 6241740, 356, NUITKA_BYTECODE_FLAG },
    { "xml.sax", NULL, 6242096, 3186, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.sax._exceptions", NULL, 6245282, 5495, NUITKA_BYTECODE_FLAG },
    { "xml.sax.expatreader", NULL, 6250777, 12398, NUITKA_BYTECODE_FLAG },
    { "xml.sax.handler", NULL, 6263175, 12371, NUITKA_BYTECODE_FLAG },
    { "xml.sax.saxutils", NULL, 6275546, 12824, NUITKA_BYTECODE_FLAG },
    { "xml.sax.xmlreader", NULL, 6288370, 16932, NUITKA_BYTECODE_FLAG },
    { "xmlrpc", NULL, 6305302, 150, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xmlrpc.client", NULL, 6305452, 34556, NUITKA_BYTECODE_FLAG },
    { "xmlrpc.server", NULL, 6340008, 29398, NUITKA_BYTECODE_FLAG },
    { "zipapp", NULL, 6369406, 5811, NUITKA_BYTECODE_FLAG },
    { "zipfile", NULL, 6375217, 49880, NUITKA_BYTECODE_FLAG },
    { NULL, NULL, 0, 0, 0 }
};

void setupMetaPathBasedLoader( void )
{
    static bool init_done = false;

    if ( init_done == false )
    {
        registerMetaPathBasedUnfreezer( meta_path_loader_entries );
        init_done = true;
    }
}
