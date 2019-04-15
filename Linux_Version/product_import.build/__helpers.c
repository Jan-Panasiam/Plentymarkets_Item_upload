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

PyObject *CALL_FUNCTION_WITH_ARGS6( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 6; i++ )
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

        if ( function->m_args_simple && 6 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 6; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 6 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 6 * sizeof(PyObject *) );
            memcpy( python_pars + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

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

            if ( parseArgumentsPos( function, python_pars, args, 6 ))
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

            if ( function->m_args_simple && 6 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 6; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 6 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 6 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

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

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 6 ) )
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
#if 6 == 0
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
                "%s() takes no arguments (6 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 6 == 1
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
                "%s() takes exactly one argument (6 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 6 );

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
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 6, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 6 );;
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
            6
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 6 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS8( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 8; i++ )
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

        if ( function->m_args_simple && 8 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 8; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 8 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 8 * sizeof(PyObject *) );
            memcpy( python_pars + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

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

            if ( parseArgumentsPos( function, python_pars, args, 8 ))
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

            if ( function->m_args_simple && 8 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 8; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 8 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 8 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

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

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 8 ) )
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
#if 8 == 0
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
                "%s() takes no arguments (8 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 8 == 1
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
                "%s() takes exactly one argument (8 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 8 );

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
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 8, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 8 );;
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
            8
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 8 );

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

PyObject *CALL_METHOD_WITH_ARGS4( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
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

                    PyObject *result = CALL_FUNCTION_WITH_ARGS4(
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

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
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
                    4
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
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

            PyObject *result = CALL_FUNCTION_WITH_ARGS4(
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
            return CALL_FUNCTION_WITH_ARGS4( called_object, args );
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
                    4
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

                PyObject *result = CALL_FUNCTION_WITH_ARGS4( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS4( called_object, args );
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

            PyObject *result = CALL_FUNCTION_WITH_ARGS4(
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

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
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

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
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
MOD_INIT_DECL( abrt_exception_handler3 );
MOD_INIT_DECL( dbus );
MOD_INIT_DECL( dbus$_compat );
MOD_INIT_DECL( dbus$_dbus );
MOD_INIT_DECL( dbus$_expat_introspect_parser );
MOD_INIT_DECL( dbus$bus );
MOD_INIT_DECL( dbus$connection );
MOD_INIT_DECL( dbus$exceptions );
MOD_INIT_DECL( dbus$lowlevel );
MOD_INIT_DECL( dbus$mainloop );
MOD_INIT_DECL( dbus$mainloop$glib );
MOD_INIT_DECL( dbus$proxies );
MOD_INIT_DECL( dbus$types );
MOD_INIT_DECL( gi );
MOD_INIT_DECL( gi$_compat );
MOD_INIT_DECL( gi$_constants );
MOD_INIT_DECL( gi$_error );
MOD_INIT_DECL( gi$_propertyhelper );
MOD_INIT_DECL( gi$_signalhelper );
MOD_INIT_DECL( gi$docstring );
MOD_INIT_DECL( gi$importer );
MOD_INIT_DECL( gi$module );
MOD_INIT_DECL( gi$overrides );
MOD_INIT_DECL( gi$repository );
MOD_INIT_DECL( gi$types );
MOD_INIT_DECL( packages );
MOD_INIT_DECL( packages$amazon_data_upload );
MOD_INIT_DECL( packages$image_upload );
MOD_INIT_DECL( packages$item_upload );
MOD_INIT_DECL( packages$stock_upload );
MOD_INIT_DECL( packages$variation_upload );
MOD_INIT_DECL( problem );
MOD_INIT_DECL( problem$config );
MOD_INIT_DECL( problem$exception );
MOD_INIT_DECL( problem$proxies );
MOD_INIT_DECL( problem$tools );
MOD_INIT_DECL( problem$watch );
MOD_INIT_DECL( pyanaconda );
MOD_INIT_DECL( pyanaconda$core );
MOD_INIT_DECL( pyanaconda$core$i18n );
MOD_INIT_DECL( pyanaconda$product );
MOD_INIT_DECL( report );
MOD_INIT_DECL( report$io );
MOD_INIT_DECL( report$io$GTKIO );
MOD_INIT_DECL( report$io$NewtIO );
MOD_INIT_DECL( report$io$TextIO );
MOD_INIT_DECL( sortedcontainers );
MOD_INIT_DECL( sortedcontainers$sorteddict );
MOD_INIT_DECL( sortedcontainers$sortedlist );
MOD_INIT_DECL( sortedcontainers$sortedset );
MOD_INIT_DECL( systemd );
MOD_INIT_DECL( systemd$journal );
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{
    { "__main__", MOD_INIT_NAME( __main__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { "_asyncio", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_bisect", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_blake2", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_bz2", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_codecs_cn", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_codecs_hk", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_codecs_iso2022", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_codecs_jp", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_codecs_kr", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_codecs_tw", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_contextvars", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_crypt", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_csv", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_ctypes", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_curses", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_curses_panel", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_datetime", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_dbm", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_dbus_bindings", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_dbus_glib_bindings", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_decimal", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_elementtree", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_gdbm", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_hashlib", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_heapq", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_json", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_lsprof", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_lzma", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_multibytecodec", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_multiprocessing", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_opcode", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_pickle", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_posixsubprocess", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_queue", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_random", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_sha3", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_socket", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_sqlite3", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_ssl", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_struct", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_tkinter", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "_uuid", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "abrt_exception_handler3", MOD_INIT_NAME( abrt_exception_handler3 ), 0, 0, NUITKA_COMPILED_MODULE },
    { "array", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "audioop", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "binascii", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "bisect", NULL, 143766, 2666, NUITKA_BYTECODE_FLAG },
    { "collections", NULL, 146432, 46578, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "configparser", NULL, 193010, 45848, NUITKA_BYTECODE_FLAG },
    { "contextlib", NULL, 238858, 19868, NUITKA_BYTECODE_FLAG },
    { "csv", NULL, 258726, 11800, NUITKA_BYTECODE_FLAG },
    { "datetime", NULL, 270526, 57217, NUITKA_BYTECODE_FLAG },
    { "dbus", MOD_INIT_NAME( dbus ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "dbus._compat", MOD_INIT_NAME( dbus$_compat ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dbus._dbus", MOD_INIT_NAME( dbus$_dbus ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dbus._expat_introspect_parser", MOD_INIT_NAME( dbus$_expat_introspect_parser ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dbus.bus", MOD_INIT_NAME( dbus$bus ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dbus.connection", MOD_INIT_NAME( dbus$connection ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dbus.exceptions", MOD_INIT_NAME( dbus$exceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dbus.lowlevel", MOD_INIT_NAME( dbus$lowlevel ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dbus.mainloop", MOD_INIT_NAME( dbus$mainloop ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "dbus.mainloop.glib", MOD_INIT_NAME( dbus$mainloop$glib ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dbus.proxies", MOD_INIT_NAME( dbus$proxies ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dbus.types", MOD_INIT_NAME( dbus$types ), 0, 0, NUITKA_COMPILED_MODULE },
    { "dummy_threading", NULL, 327743, 1092, NUITKA_BYTECODE_FLAG },
    { "fcntl", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "functools", NULL, 328835, 23917, NUITKA_BYTECODE_FLAG },
    { "gettext", NULL, 352752, 14136, NUITKA_BYTECODE_FLAG },
    { "gi", MOD_INIT_NAME( gi ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "gi._compat", MOD_INIT_NAME( gi$_compat ), 0, 0, NUITKA_COMPILED_MODULE },
    { "gi._constants", MOD_INIT_NAME( gi$_constants ), 0, 0, NUITKA_COMPILED_MODULE },
    { "gi._error", MOD_INIT_NAME( gi$_error ), 0, 0, NUITKA_COMPILED_MODULE },
    { "gi._gi", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "gi._propertyhelper", MOD_INIT_NAME( gi$_propertyhelper ), 0, 0, NUITKA_COMPILED_MODULE },
    { "gi._signalhelper", MOD_INIT_NAME( gi$_signalhelper ), 0, 0, NUITKA_COMPILED_MODULE },
    { "gi.docstring", MOD_INIT_NAME( gi$docstring ), 0, 0, NUITKA_COMPILED_MODULE },
    { "gi.importer", MOD_INIT_NAME( gi$importer ), 0, 0, NUITKA_COMPILED_MODULE },
    { "gi.module", MOD_INIT_NAME( gi$module ), 0, 0, NUITKA_COMPILED_MODULE },
    { "gi.overrides", MOD_INIT_NAME( gi$overrides ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "gi.repository", MOD_INIT_NAME( gi$repository ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "gi.types", MOD_INIT_NAME( gi$types ), 0, 0, NUITKA_COMPILED_MODULE },
    { "grp", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "hashlib", NULL, 366888, 6559, NUITKA_BYTECODE_FLAG },
    { "importlib", NULL, 373447, 3700, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "inspect", NULL, 377147, 80000, NUITKA_BYTECODE_FLAG },
    { "io", NULL, 457147, 3377, NUITKA_BYTECODE_FLAG },
    { "logging", NULL, 460524, 62526, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "math", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "mmap", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "operator", NULL, 523050, 13868, NUITKA_BYTECODE_FLAG },
    { "os", NULL, 536918, 29661, NUITKA_BYTECODE_FLAG },
    { "packages", MOD_INIT_NAME( packages ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "packages.amazon_data_upload", MOD_INIT_NAME( packages$amazon_data_upload ), 0, 0, NUITKA_COMPILED_MODULE },
    { "packages.image_upload", MOD_INIT_NAME( packages$image_upload ), 0, 0, NUITKA_COMPILED_MODULE },
    { "packages.item_upload", MOD_INIT_NAME( packages$item_upload ), 0, 0, NUITKA_COMPILED_MODULE },
    { "packages.stock_upload", MOD_INIT_NAME( packages$stock_upload ), 0, 0, NUITKA_COMPILED_MODULE },
    { "packages.variation_upload", MOD_INIT_NAME( packages$variation_upload ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pkgutil", NULL, 566579, 16328, NUITKA_BYTECODE_FLAG },
    { "posixpath", NULL, 582907, 10398, NUITKA_BYTECODE_FLAG },
    { "problem", MOD_INIT_NAME( problem ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "problem._py3abrt", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "problem.config", MOD_INIT_NAME( problem$config ), 0, 0, NUITKA_COMPILED_MODULE },
    { "problem.exception", MOD_INIT_NAME( problem$exception ), 0, 0, NUITKA_COMPILED_MODULE },
    { "problem.proxies", MOD_INIT_NAME( problem$proxies ), 0, 0, NUITKA_COMPILED_MODULE },
    { "problem.tools", MOD_INIT_NAME( problem$tools ), 0, 0, NUITKA_COMPILED_MODULE },
    { "problem.watch", MOD_INIT_NAME( problem$watch ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyanaconda", MOD_INIT_NAME( pyanaconda ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "pyanaconda.core", MOD_INIT_NAME( pyanaconda$core ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "pyanaconda.core.i18n", MOD_INIT_NAME( pyanaconda$core$i18n ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyanaconda.product", MOD_INIT_NAME( pyanaconda$product ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pyexpat", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "re", NULL, 593305, 13772, NUITKA_BYTECODE_FLAG },
    { "readline", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "report", MOD_INIT_NAME( report ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "report._py3report", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "report.io", MOD_INIT_NAME( report$io ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "report.io.GTKIO", MOD_INIT_NAME( report$io$GTKIO ), 0, 0, NUITKA_COMPILED_MODULE },
    { "report.io.NewtIO", MOD_INIT_NAME( report$io$NewtIO ), 0, 0, NUITKA_COMPILED_MODULE },
    { "report.io.TextIO", MOD_INIT_NAME( report$io$TextIO ), 0, 0, NUITKA_COMPILED_MODULE },
    { "select", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "site", NULL, 607077, 13406, NUITKA_BYTECODE_FLAG },
    { "socket", NULL, 620483, 21989, NUITKA_BYTECODE_FLAG },
    { "sortedcontainers", MOD_INIT_NAME( sortedcontainers ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "sortedcontainers.sorteddict", MOD_INIT_NAME( sortedcontainers$sorteddict ), 0, 0, NUITKA_COMPILED_MODULE },
    { "sortedcontainers.sortedlist", MOD_INIT_NAME( sortedcontainers$sortedlist ), 0, 0, NUITKA_COMPILED_MODULE },
    { "sortedcontainers.sortedset", MOD_INIT_NAME( sortedcontainers$sortedset ), 0, 0, NUITKA_COMPILED_MODULE },
    { "syslog", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "systemd", MOD_INIT_NAME( systemd ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "systemd._journal", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "systemd._reader", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "systemd.id128", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "systemd.journal", MOD_INIT_NAME( systemd$journal ), 0, 0, NUITKA_COMPILED_MODULE },
    { "termios", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "textwrap", NULL, 642472, 13580, NUITKA_BYTECODE_FLAG },
    { "threading", NULL, 656052, 37303, NUITKA_BYTECODE_FLAG },
    { "tkinter", NULL, 693355, 179143, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "tkinter.filedialog", NULL, 872498, 12238, NUITKA_BYTECODE_FLAG },
    { "traceback", NULL, 884736, 19591, NUITKA_BYTECODE_FLAG },
    { "types", NULL, 904327, 8942, NUITKA_BYTECODE_FLAG },
    { "unicodedata", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "uuid", NULL, 913269, 23167, NUITKA_BYTECODE_FLAG },
    { "warnings", NULL, 936436, 13917, NUITKA_BYTECODE_FLAG },
    { "weakref", NULL, 950353, 19078, NUITKA_BYTECODE_FLAG },
    { "xml", NULL, 969431, 674, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.parsers", NULL, 970105, 287, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.parsers.expat", NULL, 970392, 316, NUITKA_BYTECODE_FLAG },
    { "zlib", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "__future__", NULL, 970708, 4100, NUITKA_BYTECODE_FLAG },
    { "_bootlocale", NULL, 974808, 1217, NUITKA_BYTECODE_FLAG },
    { "_compat_pickle", NULL, 976025, 5776, NUITKA_BYTECODE_FLAG },
    { "_dummy_thread", NULL, 981801, 4821, NUITKA_BYTECODE_FLAG },
    { "_markupbase", NULL, 986622, 7753, NUITKA_BYTECODE_FLAG },
    { "_osx_support", NULL, 994375, 9563, NUITKA_BYTECODE_FLAG },
    { "_py_abc", NULL, 1003938, 4622, NUITKA_BYTECODE_FLAG },
    { "_pyio", NULL, 1008560, 72786, NUITKA_BYTECODE_FLAG },
    { "_sitebuiltins", NULL, 1081346, 3433, NUITKA_BYTECODE_FLAG },
    { "_strptime", NULL, 1084779, 16072, NUITKA_BYTECODE_FLAG },
    { "_sysconfigdata_dm_linux_x86_64-linux-gnu", NULL, 1100851, 23837, NUITKA_BYTECODE_FLAG },
    { "_sysconfigdata_m_linux_x86_64-linux-gnu", NULL, 1124688, 22755, NUITKA_BYTECODE_FLAG },
    { "_threading_local", NULL, 1147443, 6380, NUITKA_BYTECODE_FLAG },
    { "aifc", NULL, 1153823, 26111, NUITKA_BYTECODE_FLAG },
    { "argparse", NULL, 1179934, 61881, NUITKA_BYTECODE_FLAG },
    { "ast", NULL, 1241815, 12048, NUITKA_BYTECODE_FLAG },
    { "asynchat", NULL, 1253863, 6802, NUITKA_BYTECODE_FLAG },
    { "asyncio", NULL, 1260665, 658, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "asyncio.base_events", NULL, 1261323, 48084, NUITKA_BYTECODE_FLAG },
    { "asyncio.base_futures", NULL, 1309407, 2070, NUITKA_BYTECODE_FLAG },
    { "asyncio.base_subprocess", NULL, 1311477, 9159, NUITKA_BYTECODE_FLAG },
    { "asyncio.base_tasks", NULL, 1320636, 1834, NUITKA_BYTECODE_FLAG },
    { "asyncio.constants", NULL, 1322470, 559, NUITKA_BYTECODE_FLAG },
    { "asyncio.coroutines", NULL, 1323029, 6346, NUITKA_BYTECODE_FLAG },
    { "asyncio.events", NULL, 1329375, 27823, NUITKA_BYTECODE_FLAG },
    { "asyncio.format_helpers", NULL, 1357198, 2285, NUITKA_BYTECODE_FLAG },
    { "asyncio.futures", NULL, 1359483, 10713, NUITKA_BYTECODE_FLAG },
    { "asyncio.locks", NULL, 1370196, 15881, NUITKA_BYTECODE_FLAG },
    { "asyncio.log", NULL, 1386077, 208, NUITKA_BYTECODE_FLAG },
    { "asyncio.proactor_events", NULL, 1386285, 19927, NUITKA_BYTECODE_FLAG },
    { "asyncio.protocols", NULL, 1406212, 8696, NUITKA_BYTECODE_FLAG },
    { "asyncio.queues", NULL, 1414908, 8141, NUITKA_BYTECODE_FLAG },
    { "asyncio.runners", NULL, 1423049, 1882, NUITKA_BYTECODE_FLAG },
    { "asyncio.selector_events", NULL, 1424931, 28091, NUITKA_BYTECODE_FLAG },
    { "asyncio.sslproto", NULL, 1453022, 21179, NUITKA_BYTECODE_FLAG },
    { "asyncio.streams", NULL, 1474201, 20256, NUITKA_BYTECODE_FLAG },
    { "asyncio.subprocess", NULL, 1494457, 6720, NUITKA_BYTECODE_FLAG },
    { "asyncio.tasks", NULL, 1501177, 21834, NUITKA_BYTECODE_FLAG },
    { "asyncio.transports", NULL, 1523011, 12179, NUITKA_BYTECODE_FLAG },
    { "asyncio.unix_events", NULL, 1535190, 32074, NUITKA_BYTECODE_FLAG },
    { "asyncore", NULL, 1567264, 15812, NUITKA_BYTECODE_FLAG },
    { "bdb", NULL, 1583076, 24362, NUITKA_BYTECODE_FLAG },
    { "binhex", NULL, 1607438, 12027, NUITKA_BYTECODE_FLAG },
    { "bisect", NULL, 143766, 2666, NUITKA_BYTECODE_FLAG },
    { "cProfile", NULL, 1619465, 4519, NUITKA_BYTECODE_FLAG },
    { "calendar", NULL, 1623984, 27392, NUITKA_BYTECODE_FLAG },
    { "cgi", NULL, 1651376, 27159, NUITKA_BYTECODE_FLAG },
    { "cgitb", NULL, 1678535, 10080, NUITKA_BYTECODE_FLAG },
    { "chunk", NULL, 1688615, 4887, NUITKA_BYTECODE_FLAG },
    { "cmd", NULL, 1693502, 12558, NUITKA_BYTECODE_FLAG },
    { "code", NULL, 1706060, 9826, NUITKA_BYTECODE_FLAG },
    { "codeop", NULL, 1715886, 6258, NUITKA_BYTECODE_FLAG },
    { "colorsys", NULL, 1722144, 3265, NUITKA_BYTECODE_FLAG },
    { "compileall", NULL, 1725409, 9074, NUITKA_BYTECODE_FLAG },
    { "concurrent", NULL, 1734483, 114, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "concurrent.futures", NULL, 1734597, 1054, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "concurrent.futures._base", NULL, 1735651, 20851, NUITKA_BYTECODE_FLAG },
    { "concurrent.futures.process", NULL, 1756502, 19529, NUITKA_BYTECODE_FLAG },
    { "concurrent.futures.thread", NULL, 1776031, 5142, NUITKA_BYTECODE_FLAG },
    { "configparser", NULL, 193010, 45848, NUITKA_BYTECODE_FLAG },
    { "contextlib", NULL, 238858, 19868, NUITKA_BYTECODE_FLAG },
    { "contextvars", NULL, 1781173, 225, NUITKA_BYTECODE_FLAG },
    { "copy", NULL, 1781398, 7069, NUITKA_BYTECODE_FLAG },
    { "crypt", NULL, 1788467, 3102, NUITKA_BYTECODE_FLAG },
    { "csv", NULL, 258726, 11800, NUITKA_BYTECODE_FLAG },
    { "ctypes", NULL, 1791569, 15980, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "ctypes._aix", NULL, 1807549, 9791, NUITKA_BYTECODE_FLAG },
    { "ctypes._endian", NULL, 1817340, 1924, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib", NULL, 1819264, 281, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "ctypes.macholib.dyld", NULL, 1819545, 4314, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib.dylib", NULL, 1823859, 1908, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib.framework", NULL, 1825767, 2188, NUITKA_BYTECODE_FLAG },
    { "ctypes.util", NULL, 1827955, 7717, NUITKA_BYTECODE_FLAG },
    { "curses", NULL, 1835672, 1763, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "curses.ascii", NULL, 1837435, 3871, NUITKA_BYTECODE_FLAG },
    { "curses.has_key", NULL, 1841306, 4235, NUITKA_BYTECODE_FLAG },
    { "curses.panel", NULL, 1845541, 205, NUITKA_BYTECODE_FLAG },
    { "curses.textpad", NULL, 1845746, 5874, NUITKA_BYTECODE_FLAG },
    { "dataclasses", NULL, 1851620, 22455, NUITKA_BYTECODE_FLAG },
    { "datetime", NULL, 270526, 57217, NUITKA_BYTECODE_FLAG },
    { "dbm", NULL, 1874075, 4134, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "dbm.dumb", NULL, 1878209, 8368, NUITKA_BYTECODE_FLAG },
    { "dbm.gnu", NULL, 1886577, 185, NUITKA_BYTECODE_FLAG },
    { "dbm.ndbm", NULL, 1886762, 184, NUITKA_BYTECODE_FLAG },
    { "decimal", NULL, 1886946, 162140, NUITKA_BYTECODE_FLAG },
    { "difflib", NULL, 2049086, 59406, NUITKA_BYTECODE_FLAG },
    { "distutils", NULL, 2108492, 366, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "distutils.archive_util", NULL, 2108858, 6500, NUITKA_BYTECODE_FLAG },
    { "distutils.bcppcompiler", NULL, 2115358, 6469, NUITKA_BYTECODE_FLAG },
    { "distutils.ccompiler", NULL, 2121827, 33184, NUITKA_BYTECODE_FLAG },
    { "distutils.cmd", NULL, 2155011, 13876, NUITKA_BYTECODE_FLAG },
    { "distutils.command", NULL, 2168887, 523, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "distutils.command.bdist", NULL, 2169410, 3622, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_dumb", NULL, 2173032, 3537, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_rpm", NULL, 2176569, 12462, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_wininst", NULL, 2189031, 7998, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build", NULL, 2197029, 3803, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_clib", NULL, 2200832, 4853, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_ext", NULL, 2205685, 15731, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_py", NULL, 2221416, 10359, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_scripts", NULL, 2231775, 4258, NUITKA_BYTECODE_FLAG },
    { "distutils.command.check", NULL, 2236033, 4778, NUITKA_BYTECODE_FLAG },
    { "distutils.command.clean", NULL, 2240811, 2060, NUITKA_BYTECODE_FLAG },
    { "distutils.command.config", NULL, 2242871, 10164, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install", NULL, 2253035, 13654, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_data", NULL, 2266689, 2253, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_egg_info", NULL, 2268942, 2951, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_headers", NULL, 2271893, 1668, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_lib", NULL, 2273561, 5046, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_scripts", NULL, 2278607, 2110, NUITKA_BYTECODE_FLAG },
    { "distutils.command.register", NULL, 2280717, 8445, NUITKA_BYTECODE_FLAG },
    { "distutils.command.sdist", NULL, 2289162, 14476, NUITKA_BYTECODE_FLAG },
    { "distutils.command.upload", NULL, 2303638, 5058, NUITKA_BYTECODE_FLAG },
    { "distutils.config", NULL, 2308696, 3453, NUITKA_BYTECODE_FLAG },
    { "distutils.core", NULL, 2312149, 6578, NUITKA_BYTECODE_FLAG },
    { "distutils.cygwinccompiler", NULL, 2318727, 8496, NUITKA_BYTECODE_FLAG },
    { "distutils.debug", NULL, 2327223, 176, NUITKA_BYTECODE_FLAG },
    { "distutils.dep_util", NULL, 2327399, 2692, NUITKA_BYTECODE_FLAG },
    { "distutils.dir_util", NULL, 2330091, 5786, NUITKA_BYTECODE_FLAG },
    { "distutils.dist", NULL, 2335877, 34407, NUITKA_BYTECODE_FLAG },
    { "distutils.errors", NULL, 2370284, 5462, NUITKA_BYTECODE_FLAG },
    { "distutils.extension", NULL, 2375746, 6873, NUITKA_BYTECODE_FLAG },
    { "distutils.fancy_getopt", NULL, 2382619, 10585, NUITKA_BYTECODE_FLAG },
    { "distutils.file_util", NULL, 2393204, 5871, NUITKA_BYTECODE_FLAG },
    { "distutils.filelist", NULL, 2399075, 9806, NUITKA_BYTECODE_FLAG },
    { "distutils.log", NULL, 2408881, 2287, NUITKA_BYTECODE_FLAG },
    { "distutils.msvccompiler", NULL, 2411168, 14539, NUITKA_BYTECODE_FLAG },
    { "distutils.spawn", NULL, 2425707, 4977, NUITKA_BYTECODE_FLAG },
    { "distutils.sysconfig", NULL, 2430684, 11893, NUITKA_BYTECODE_FLAG },
    { "distutils.text_file", NULL, 2442577, 8413, NUITKA_BYTECODE_FLAG },
    { "distutils.unixccompiler", NULL, 2450990, 6768, NUITKA_BYTECODE_FLAG },
    { "distutils.util", NULL, 2457758, 15023, NUITKA_BYTECODE_FLAG },
    { "distutils.version", NULL, 2472781, 7324, NUITKA_BYTECODE_FLAG },
    { "distutils.versionpredicate", NULL, 2480105, 5071, NUITKA_BYTECODE_FLAG },
    { "doctest", NULL, 2485176, 75578, NUITKA_BYTECODE_FLAG },
    { "dummy_threading", NULL, 327743, 1092, NUITKA_BYTECODE_FLAG },
    { "email", NULL, 2560754, 1659, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "email._encoded_words", NULL, 2562413, 5576, NUITKA_BYTECODE_FLAG },
    { "email._header_value_parser", NULL, 2567989, 75598, NUITKA_BYTECODE_FLAG },
    { "email._parseaddr", NULL, 2643587, 12316, NUITKA_BYTECODE_FLAG },
    { "email._policybase", NULL, 2655903, 14818, NUITKA_BYTECODE_FLAG },
    { "email.base64mime", NULL, 2670721, 3203, NUITKA_BYTECODE_FLAG },
    { "email.charset", NULL, 2673924, 11497, NUITKA_BYTECODE_FLAG },
    { "email.contentmanager", NULL, 2685421, 7263, NUITKA_BYTECODE_FLAG },
    { "email.encoders", NULL, 2692684, 1632, NUITKA_BYTECODE_FLAG },
    { "email.errors", NULL, 2694316, 6159, NUITKA_BYTECODE_FLAG },
    { "email.feedparser", NULL, 2700475, 10593, NUITKA_BYTECODE_FLAG },
    { "email.generator", NULL, 2711068, 12468, NUITKA_BYTECODE_FLAG },
    { "email.header", NULL, 2723536, 16348, NUITKA_BYTECODE_FLAG },
    { "email.headerregistry", NULL, 2739884, 21265, NUITKA_BYTECODE_FLAG },
    { "email.iterators", NULL, 2761149, 1900, NUITKA_BYTECODE_FLAG },
    { "email.message", NULL, 2763049, 37908, NUITKA_BYTECODE_FLAG },
    { "email.mime", NULL, 2800957, 114, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "email.mime.application", NULL, 2801071, 1425, NUITKA_BYTECODE_FLAG },
    { "email.mime.audio", NULL, 2802496, 2584, NUITKA_BYTECODE_FLAG },
    { "email.mime.base", NULL, 2805080, 1050, NUITKA_BYTECODE_FLAG },
    { "email.mime.image", NULL, 2806130, 1870, NUITKA_BYTECODE_FLAG },
    { "email.mime.message", NULL, 2808000, 1299, NUITKA_BYTECODE_FLAG },
    { "email.mime.multipart", NULL, 2809299, 1521, NUITKA_BYTECODE_FLAG },
    { "email.mime.nonmultipart", NULL, 2810820, 736, NUITKA_BYTECODE_FLAG },
    { "email.mime.text", NULL, 2811556, 1283, NUITKA_BYTECODE_FLAG },
    { "email.parser", NULL, 2812839, 5715, NUITKA_BYTECODE_FLAG },
    { "email.policy", NULL, 2818554, 9608, NUITKA_BYTECODE_FLAG },
    { "email.quoprimime", NULL, 2828162, 7632, NUITKA_BYTECODE_FLAG },
    { "email.utils", NULL, 2835794, 9435, NUITKA_BYTECODE_FLAG },
    { "filecmp", NULL, 2845229, 8275, NUITKA_BYTECODE_FLAG },
    { "fileinput", NULL, 2853504, 13166, NUITKA_BYTECODE_FLAG },
    { "fnmatch", NULL, 2866670, 3305, NUITKA_BYTECODE_FLAG },
    { "formatter", NULL, 2869975, 17521, NUITKA_BYTECODE_FLAG },
    { "fractions", NULL, 2887496, 18396, NUITKA_BYTECODE_FLAG },
    { "ftplib", NULL, 2905892, 28035, NUITKA_BYTECODE_FLAG },
    { "getopt", NULL, 2933927, 6207, NUITKA_BYTECODE_FLAG },
    { "getpass", NULL, 2940134, 4132, NUITKA_BYTECODE_FLAG },
    { "gettext", NULL, 352752, 14136, NUITKA_BYTECODE_FLAG },
    { "glob", NULL, 2944266, 4227, NUITKA_BYTECODE_FLAG },
    { "gzip", NULL, 2948493, 17153, NUITKA_BYTECODE_FLAG },
    { "hashlib", NULL, 366888, 6559, NUITKA_BYTECODE_FLAG },
    { "hmac", NULL, 2965646, 6081, NUITKA_BYTECODE_FLAG },
    { "html", NULL, 2971727, 3365, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "html.entities", NULL, 2975092, 50437, NUITKA_BYTECODE_FLAG },
    { "html.parser", NULL, 3025529, 11075, NUITKA_BYTECODE_FLAG },
    { "http", NULL, 3036604, 5890, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "http.client", NULL, 3042494, 34016, NUITKA_BYTECODE_FLAG },
    { "http.cookiejar", NULL, 3076510, 53375, NUITKA_BYTECODE_FLAG },
    { "http.cookies", NULL, 3129885, 15212, NUITKA_BYTECODE_FLAG },
    { "http.server", NULL, 3145097, 33335, NUITKA_BYTECODE_FLAG },
    { "imaplib", NULL, 3178432, 41398, NUITKA_BYTECODE_FLAG },
    { "imghdr", NULL, 3219830, 4110, NUITKA_BYTECODE_FLAG },
    { "imp", NULL, 3223940, 9721, NUITKA_BYTECODE_FLAG },
    { "importlib.abc", NULL, 3233661, 13455, NUITKA_BYTECODE_FLAG },
    { "importlib.resources", NULL, 3247116, 8307, NUITKA_BYTECODE_FLAG },
    { "importlib.util", NULL, 3255423, 9324, NUITKA_BYTECODE_FLAG },
    { "ipaddress", NULL, 3264747, 62962, NUITKA_BYTECODE_FLAG },
    { "json", NULL, 3327709, 12306, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "json.decoder", NULL, 3340015, 9792, NUITKA_BYTECODE_FLAG },
    { "json.encoder", NULL, 3349807, 11274, NUITKA_BYTECODE_FLAG },
    { "json.scanner", NULL, 3361081, 1964, NUITKA_BYTECODE_FLAG },
    { "json.tool", NULL, 3363045, 1445, NUITKA_BYTECODE_FLAG },
    { "lib2to3", NULL, 3364490, 111, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.btm_matcher", NULL, 3364601, 4861, NUITKA_BYTECODE_FLAG },
    { "lib2to3.btm_utils", NULL, 3369462, 6111, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixer_base", NULL, 3375573, 6203, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixer_util", NULL, 3381776, 12014, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes", NULL, 3393790, 117, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.fixes.fix_apply", NULL, 3393907, 1655, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_asserts", NULL, 3395562, 1240, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_basestring", NULL, 3396802, 630, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_buffer", NULL, 3397432, 775, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_dict", NULL, 3398207, 3283, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_except", NULL, 3401490, 2785, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_exec", NULL, 3404275, 1116, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_execfile", NULL, 3405391, 1660, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_exitfunc", NULL, 3407051, 2263, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_filter", NULL, 3409314, 2328, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_funcattrs", NULL, 3411642, 941, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_future", NULL, 3412583, 751, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_getcwdu", NULL, 3413334, 755, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_has_key", NULL, 3414089, 2885, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_idioms", NULL, 3416974, 3870, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_import", NULL, 3420844, 2752, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_imports", NULL, 3423596, 4316, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_imports2", NULL, 3427912, 515, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_input", NULL, 3428427, 917, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_intern", NULL, 3429344, 1124, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_isinstance", NULL, 3430468, 1522, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_itertools", NULL, 3431990, 1511, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_itertools_imports", NULL, 3433501, 1547, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_long", NULL, 3435048, 672, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_map", NULL, 3435720, 3060, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_metaclass", NULL, 3438780, 5313, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_methodattrs", NULL, 3444093, 903, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_ne", NULL, 3444996, 774, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_next", NULL, 3445770, 3027, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_nonzero", NULL, 3448797, 890, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_numliterals", NULL, 3449687, 986, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_operator", NULL, 3450673, 4203, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_paren", NULL, 3454876, 1357, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_print", NULL, 3456233, 2292, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_raise", NULL, 3458525, 2216, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_raw_input", NULL, 3460741, 762, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_reduce", NULL, 3461503, 1097, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_reload", NULL, 3462600, 1136, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_renames", NULL, 3463736, 1960, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_repr", NULL, 3465696, 812, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_set_literal", NULL, 3466508, 1644, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_standarderror", NULL, 3468152, 687, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_sys_exc", NULL, 3468839, 1368, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_throw", NULL, 3470207, 1769, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_tuple_params", NULL, 3471976, 4563, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_types", NULL, 3476539, 1796, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_unicode", NULL, 3478335, 1508, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_urllib", NULL, 3479843, 5928, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_ws_comma", NULL, 3485771, 1090, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_xrange", NULL, 3486861, 2503, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_xreadlines", NULL, 3489364, 1084, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_zip", NULL, 3490448, 1548, NUITKA_BYTECODE_FLAG },
    { "lib2to3.main", NULL, 3491996, 8504, NUITKA_BYTECODE_FLAG },
    { "lib2to3.patcomp", NULL, 3500500, 5579, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2", NULL, 3506079, 147, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.pgen2.driver", NULL, 3506226, 5108, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.grammar", NULL, 3511334, 6984, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.literals", NULL, 3518318, 1526, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.parse", NULL, 3519844, 6272, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.pgen", NULL, 3526116, 9748, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.token", NULL, 3535864, 1840, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.tokenize", NULL, 3537704, 15108, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pygram", NULL, 3552812, 1166, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pytree", NULL, 3553978, 24971, NUITKA_BYTECODE_FLAG },
    { "lib2to3.refactor", NULL, 3578949, 20372, NUITKA_BYTECODE_FLAG },
    { "logging", NULL, 460524, 62526, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "logging.config", NULL, 3599321, 22983, NUITKA_BYTECODE_FLAG },
    { "logging.handlers", NULL, 3622304, 42951, NUITKA_BYTECODE_FLAG },
    { "lzma", NULL, 3665255, 11907, NUITKA_BYTECODE_FLAG },
    { "macpath", NULL, 3677162, 5775, NUITKA_BYTECODE_FLAG },
    { "mailbox", NULL, 3682937, 63616, NUITKA_BYTECODE_FLAG },
    { "mailcap", NULL, 3746553, 6452, NUITKA_BYTECODE_FLAG },
    { "mimetypes", NULL, 3753005, 15446, NUITKA_BYTECODE_FLAG },
    { "modulefinder", NULL, 3768451, 15320, NUITKA_BYTECODE_FLAG },
    { "multiprocessing", NULL, 3783771, 495, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "multiprocessing.connection", NULL, 3784266, 24900, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.context", NULL, 3809166, 13081, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.dummy", NULL, 3822247, 3773, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "multiprocessing.dummy.connection", NULL, 3826020, 2481, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.forkserver", NULL, 3828501, 7732, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.heap", NULL, 3836233, 6392, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.managers", NULL, 3842625, 33981, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.pool", NULL, 3876606, 21204, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.popen_fork", NULL, 3897810, 2494, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.popen_forkserver", NULL, 3900304, 2327, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.popen_spawn_posix", NULL, 3902631, 2109, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.process", NULL, 3904740, 9394, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.queues", NULL, 3914134, 9405, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.reduction", NULL, 3923539, 7986, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.resource_sharer", NULL, 3931525, 5171, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.semaphore_tracker", NULL, 3936696, 3708, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.sharedctypes", NULL, 3940404, 6885, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.spawn", NULL, 3947289, 6446, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.synchronize", NULL, 3953735, 11151, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.util", NULL, 3964886, 9915, NUITKA_BYTECODE_FLAG },
    { "netrc", NULL, 3974801, 3731, NUITKA_BYTECODE_FLAG },
    { "nntplib", NULL, 3978532, 33719, NUITKA_BYTECODE_FLAG },
    { "ntpath", NULL, 4012251, 12972, NUITKA_BYTECODE_FLAG },
    { "nturl2path", NULL, 4025223, 1583, NUITKA_BYTECODE_FLAG },
    { "numbers", NULL, 4026806, 12160, NUITKA_BYTECODE_FLAG },
    { "optparse", NULL, 4038966, 47861, NUITKA_BYTECODE_FLAG },
    { "pathlib", NULL, 4086827, 41431, NUITKA_BYTECODE_FLAG },
    { "pdb", NULL, 4128258, 46730, NUITKA_BYTECODE_FLAG },
    { "pickle", NULL, 4174988, 42934, NUITKA_BYTECODE_FLAG },
    { "pickletools", NULL, 4217922, 65299, NUITKA_BYTECODE_FLAG },
    { "pipes", NULL, 4283221, 7771, NUITKA_BYTECODE_FLAG },
    { "pkgutil", NULL, 566579, 16328, NUITKA_BYTECODE_FLAG },
    { "platform", NULL, 4290992, 28188, NUITKA_BYTECODE_FLAG },
    { "plistlib", NULL, 4319180, 25063, NUITKA_BYTECODE_FLAG },
    { "poplib", NULL, 4344243, 13304, NUITKA_BYTECODE_FLAG },
    { "pprint", NULL, 4357547, 15787, NUITKA_BYTECODE_FLAG },
    { "profile", NULL, 4373334, 13809, NUITKA_BYTECODE_FLAG },
    { "pstats", NULL, 4387143, 22262, NUITKA_BYTECODE_FLAG },
    { "pty", NULL, 4409405, 3851, NUITKA_BYTECODE_FLAG },
    { "py_compile", NULL, 4413256, 7159, NUITKA_BYTECODE_FLAG },
    { "pyclbr", NULL, 4420415, 10341, NUITKA_BYTECODE_FLAG },
    { "pydoc", NULL, 4430756, 84388, NUITKA_BYTECODE_FLAG },
    { "pydoc_data", NULL, 4515144, 114, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "pydoc_data.topics", NULL, 4515258, 411302, NUITKA_BYTECODE_FLAG },
    { "queue", NULL, 4926560, 11440, NUITKA_BYTECODE_FLAG },
    { "random", NULL, 4938000, 19362, NUITKA_BYTECODE_FLAG },
    { "rlcompleter", NULL, 4957362, 5715, NUITKA_BYTECODE_FLAG },
    { "runpy", NULL, 4963077, 7913, NUITKA_BYTECODE_FLAG },
    { "sched", NULL, 4970990, 6489, NUITKA_BYTECODE_FLAG },
    { "secrets", NULL, 4977479, 2152, NUITKA_BYTECODE_FLAG },
    { "selectors", NULL, 4979631, 16916, NUITKA_BYTECODE_FLAG },
    { "shelve", NULL, 4996547, 9474, NUITKA_BYTECODE_FLAG },
    { "shlex", NULL, 5006021, 6958, NUITKA_BYTECODE_FLAG },
    { "shutil", NULL, 5012979, 30832, NUITKA_BYTECODE_FLAG },
    { "signal", NULL, 5043811, 2480, NUITKA_BYTECODE_FLAG },
    { "site", NULL, 607077, 13406, NUITKA_BYTECODE_FLAG },
    { "smtpd", NULL, 5046291, 26572, NUITKA_BYTECODE_FLAG },
    { "smtplib", NULL, 5072863, 35318, NUITKA_BYTECODE_FLAG },
    { "sndhdr", NULL, 5108181, 6871, NUITKA_BYTECODE_FLAG },
    { "socket", NULL, 620483, 21989, NUITKA_BYTECODE_FLAG },
    { "socketserver", NULL, 5115052, 24166, NUITKA_BYTECODE_FLAG },
    { "sqlite3", NULL, 5139218, 142, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "sqlite3.dbapi2", NULL, 5139360, 2461, NUITKA_BYTECODE_FLAG },
    { "sqlite3.dump", NULL, 5141821, 1904, NUITKA_BYTECODE_FLAG },
    { "ssl", NULL, 5143725, 39739, NUITKA_BYTECODE_FLAG },
    { "statistics", NULL, 5183464, 18132, NUITKA_BYTECODE_FLAG },
    { "string", NULL, 5201596, 7803, NUITKA_BYTECODE_FLAG },
    { "subprocess", NULL, 5209399, 38733, NUITKA_BYTECODE_FLAG },
    { "sunau", NULL, 5248132, 17179, NUITKA_BYTECODE_FLAG },
    { "symbol", NULL, 5265311, 2533, NUITKA_BYTECODE_FLAG },
    { "symtable", NULL, 5267844, 10413, NUITKA_BYTECODE_FLAG },
    { "sysconfig", NULL, 5278257, 15338, NUITKA_BYTECODE_FLAG },
    { "tabnanny", NULL, 5293595, 6946, NUITKA_BYTECODE_FLAG },
    { "tarfile", NULL, 5300541, 61809, NUITKA_BYTECODE_FLAG },
    { "telnetlib", NULL, 5362350, 18070, NUITKA_BYTECODE_FLAG },
    { "tempfile", NULL, 5380420, 22113, NUITKA_BYTECODE_FLAG },
    { "textwrap", NULL, 642472, 13580, NUITKA_BYTECODE_FLAG },
    { "this", NULL, 5402533, 1245, NUITKA_BYTECODE_FLAG },
    { "timeit", NULL, 5403778, 11615, NUITKA_BYTECODE_FLAG },
    { "tkinter", NULL, 693355, 179143, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "tkinter.colorchooser", NULL, 5415393, 1103, NUITKA_BYTECODE_FLAG },
    { "tkinter.commondialog", NULL, 5416496, 1084, NUITKA_BYTECODE_FLAG },
    { "tkinter.constants", NULL, 5417580, 1636, NUITKA_BYTECODE_FLAG },
    { "tkinter.dialog", NULL, 5419216, 1412, NUITKA_BYTECODE_FLAG },
    { "tkinter.dnd", NULL, 5420628, 11154, NUITKA_BYTECODE_FLAG },
    { "tkinter.filedialog", NULL, 872498, 12238, NUITKA_BYTECODE_FLAG },
    { "tkinter.font", NULL, 5431782, 6155, NUITKA_BYTECODE_FLAG },
    { "tkinter.messagebox", NULL, 5437937, 3020, NUITKA_BYTECODE_FLAG },
    { "tkinter.scrolledtext", NULL, 5440957, 2147, NUITKA_BYTECODE_FLAG },
    { "tkinter.simpledialog", NULL, 5443104, 10514, NUITKA_BYTECODE_FLAG },
    { "tkinter.tix", NULL, 5453618, 83634, NUITKA_BYTECODE_FLAG },
    { "tkinter.ttk", NULL, 5537252, 57818, NUITKA_BYTECODE_FLAG },
    { "trace", NULL, 5595070, 19115, NUITKA_BYTECODE_FLAG },
    { "tracemalloc", NULL, 5614185, 17244, NUITKA_BYTECODE_FLAG },
    { "tty", NULL, 5631429, 1062, NUITKA_BYTECODE_FLAG },
    { "turtle", NULL, 5632491, 130759, NUITKA_BYTECODE_FLAG },
    { "typing", NULL, 5763250, 49926, NUITKA_BYTECODE_FLAG },
    { "unittest", NULL, 5813176, 3005, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "unittest.case", NULL, 5816181, 48522, NUITKA_BYTECODE_FLAG },
    { "unittest.loader", NULL, 5864703, 14237, NUITKA_BYTECODE_FLAG },
    { "unittest.main", NULL, 5878940, 7406, NUITKA_BYTECODE_FLAG },
    { "unittest.mock", NULL, 5886346, 63022, NUITKA_BYTECODE_FLAG },
    { "unittest.result", NULL, 5949368, 7220, NUITKA_BYTECODE_FLAG },
    { "unittest.runner", NULL, 5956588, 6949, NUITKA_BYTECODE_FLAG },
    { "unittest.signals", NULL, 5963537, 2162, NUITKA_BYTECODE_FLAG },
    { "unittest.suite", NULL, 5965699, 9171, NUITKA_BYTECODE_FLAG },
    { "unittest.util", NULL, 5974870, 4489, NUITKA_BYTECODE_FLAG },
    { "urllib", NULL, 5979359, 110, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "urllib.error", NULL, 5979469, 2744, NUITKA_BYTECODE_FLAG },
    { "urllib.parse", NULL, 5982213, 30398, NUITKA_BYTECODE_FLAG },
    { "urllib.request", NULL, 6012611, 72272, NUITKA_BYTECODE_FLAG },
    { "urllib.response", NULL, 6084883, 3217, NUITKA_BYTECODE_FLAG },
    { "urllib.robotparser", NULL, 6088100, 7029, NUITKA_BYTECODE_FLAG },
    { "uu", NULL, 6095129, 3581, NUITKA_BYTECODE_FLAG },
    { "uuid", NULL, 913269, 23167, NUITKA_BYTECODE_FLAG },
    { "venv", NULL, 6098710, 13090, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "wave", NULL, 6111800, 18256, NUITKA_BYTECODE_FLAG },
    { "weakref", NULL, 950353, 19078, NUITKA_BYTECODE_FLAG },
    { "webbrowser", NULL, 6130056, 16342, NUITKA_BYTECODE_FLAG },
    { "wsgiref", NULL, 6146398, 706, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "wsgiref.handlers", NULL, 6147104, 16115, NUITKA_BYTECODE_FLAG },
    { "wsgiref.headers", NULL, 6163219, 7727, NUITKA_BYTECODE_FLAG },
    { "wsgiref.simple_server", NULL, 6170946, 5173, NUITKA_BYTECODE_FLAG },
    { "wsgiref.util", NULL, 6176119, 5148, NUITKA_BYTECODE_FLAG },
    { "wsgiref.validate", NULL, 6181267, 14644, NUITKA_BYTECODE_FLAG },
    { "xdrlib", NULL, 6195911, 8292, NUITKA_BYTECODE_FLAG },
    { "xml", NULL, 969431, 674, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.dom", NULL, 6204203, 5426, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.dom.NodeFilter", NULL, 6209629, 941, NUITKA_BYTECODE_FLAG },
    { "xml.dom.domreg", NULL, 6210570, 2818, NUITKA_BYTECODE_FLAG },
    { "xml.dom.expatbuilder", NULL, 6213388, 26988, NUITKA_BYTECODE_FLAG },
    { "xml.dom.minicompat", NULL, 6240376, 2787, NUITKA_BYTECODE_FLAG },
    { "xml.dom.minidom", NULL, 6243163, 55587, NUITKA_BYTECODE_FLAG },
    { "xml.dom.pulldom", NULL, 6298750, 10460, NUITKA_BYTECODE_FLAG },
    { "xml.dom.xmlbuilder", NULL, 6309210, 12407, NUITKA_BYTECODE_FLAG },
    { "xml.etree", NULL, 6321617, 113, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.etree.ElementInclude", NULL, 6321730, 1549, NUITKA_BYTECODE_FLAG },
    { "xml.etree.ElementPath", NULL, 6323279, 6317, NUITKA_BYTECODE_FLAG },
    { "xml.etree.ElementTree", NULL, 6329596, 44781, NUITKA_BYTECODE_FLAG },
    { "xml.etree.cElementTree", NULL, 6374377, 155, NUITKA_BYTECODE_FLAG },
    { "xml.parsers", NULL, 970105, 287, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.parsers.expat", NULL, 970392, 316, NUITKA_BYTECODE_FLAG },
    { "xml.sax", NULL, 6374532, 3146, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.sax._exceptions", NULL, 6377678, 5455, NUITKA_BYTECODE_FLAG },
    { "xml.sax.expatreader", NULL, 6383133, 12358, NUITKA_BYTECODE_FLAG },
    { "xml.sax.handler", NULL, 6395491, 12331, NUITKA_BYTECODE_FLAG },
    { "xml.sax.saxutils", NULL, 6407822, 12784, NUITKA_BYTECODE_FLAG },
    { "xml.sax.xmlreader", NULL, 6420606, 16892, NUITKA_BYTECODE_FLAG },
    { "xmlrpc", NULL, 6437498, 110, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xmlrpc.client", NULL, 6437608, 34516, NUITKA_BYTECODE_FLAG },
    { "xmlrpc.server", NULL, 6472124, 29358, NUITKA_BYTECODE_FLAG },
    { "zipapp", NULL, 6501482, 5771, NUITKA_BYTECODE_FLAG },
    { "zipfile", NULL, 6507253, 49840, NUITKA_BYTECODE_FLAG },
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
