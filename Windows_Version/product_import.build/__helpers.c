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
    { "bisect", NULL, 143409, 2666, NUITKA_BYTECODE_FLAG },
    { "collections", NULL, 146075, 46578, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "configparser", NULL, 192653, 45848, NUITKA_BYTECODE_FLAG },
    { "contextlib", NULL, 238501, 19868, NUITKA_BYTECODE_FLAG },
    { "csv", NULL, 258369, 11800, NUITKA_BYTECODE_FLAG },
    { "datetime", NULL, 270169, 57217, NUITKA_BYTECODE_FLAG },
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
    { "dummy_threading", NULL, 327386, 1092, NUITKA_BYTECODE_FLAG },
    { "fcntl", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "functools", NULL, 328478, 23917, NUITKA_BYTECODE_FLAG },
    { "gettext", NULL, 352395, 14136, NUITKA_BYTECODE_FLAG },
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
    { "hashlib", NULL, 366531, 6559, NUITKA_BYTECODE_FLAG },
    { "importlib", NULL, 373090, 3700, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "inspect", NULL, 376790, 80000, NUITKA_BYTECODE_FLAG },
    { "io", NULL, 456790, 3377, NUITKA_BYTECODE_FLAG },
    { "logging", NULL, 460167, 62526, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "math", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "mmap", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "operator", NULL, 522693, 13868, NUITKA_BYTECODE_FLAG },
    { "os", NULL, 536561, 29661, NUITKA_BYTECODE_FLAG },
    { "packages", MOD_INIT_NAME( packages ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "packages.amazon_data_upload", MOD_INIT_NAME( packages$amazon_data_upload ), 0, 0, NUITKA_COMPILED_MODULE },
    { "packages.image_upload", MOD_INIT_NAME( packages$image_upload ), 0, 0, NUITKA_COMPILED_MODULE },
    { "packages.item_upload", MOD_INIT_NAME( packages$item_upload ), 0, 0, NUITKA_COMPILED_MODULE },
    { "packages.stock_upload", MOD_INIT_NAME( packages$stock_upload ), 0, 0, NUITKA_COMPILED_MODULE },
    { "packages.variation_upload", MOD_INIT_NAME( packages$variation_upload ), 0, 0, NUITKA_COMPILED_MODULE },
    { "pkgutil", NULL, 566222, 16328, NUITKA_BYTECODE_FLAG },
    { "posixpath", NULL, 582550, 10398, NUITKA_BYTECODE_FLAG },
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
    { "re", NULL, 592948, 13772, NUITKA_BYTECODE_FLAG },
    { "readline", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "report", MOD_INIT_NAME( report ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "report._py3report", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "report.io", MOD_INIT_NAME( report$io ), 0, 0, NUITKA_PACKAGE_FLAG },
    { "report.io.GTKIO", MOD_INIT_NAME( report$io$GTKIO ), 0, 0, NUITKA_COMPILED_MODULE },
    { "report.io.NewtIO", MOD_INIT_NAME( report$io$NewtIO ), 0, 0, NUITKA_COMPILED_MODULE },
    { "report.io.TextIO", MOD_INIT_NAME( report$io$TextIO ), 0, 0, NUITKA_COMPILED_MODULE },
    { "select", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "site", NULL, 606720, 13406, NUITKA_BYTECODE_FLAG },
    { "socket", NULL, 620126, 21989, NUITKA_BYTECODE_FLAG },
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
    { "textwrap", NULL, 642115, 13580, NUITKA_BYTECODE_FLAG },
    { "threading", NULL, 655695, 37303, NUITKA_BYTECODE_FLAG },
    { "tkinter", NULL, 692998, 179143, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "tkinter.filedialog", NULL, 872141, 12238, NUITKA_BYTECODE_FLAG },
    { "traceback", NULL, 884379, 19591, NUITKA_BYTECODE_FLAG },
    { "types", NULL, 903970, 8942, NUITKA_BYTECODE_FLAG },
    { "unicodedata", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "uuid", NULL, 912912, 23167, NUITKA_BYTECODE_FLAG },
    { "warnings", NULL, 936079, 13917, NUITKA_BYTECODE_FLAG },
    { "weakref", NULL, 949996, 19078, NUITKA_BYTECODE_FLAG },
    { "xml", NULL, 969074, 674, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.parsers", NULL, 969748, 287, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.parsers.expat", NULL, 970035, 316, NUITKA_BYTECODE_FLAG },
    { "zlib", NULL, 0, 0, NUITKA_SHLIB_FLAG },
    { "__future__", NULL, 970351, 4100, NUITKA_BYTECODE_FLAG },
    { "_bootlocale", NULL, 974451, 1217, NUITKA_BYTECODE_FLAG },
    { "_compat_pickle", NULL, 975668, 5776, NUITKA_BYTECODE_FLAG },
    { "_dummy_thread", NULL, 981444, 4821, NUITKA_BYTECODE_FLAG },
    { "_markupbase", NULL, 986265, 7753, NUITKA_BYTECODE_FLAG },
    { "_osx_support", NULL, 994018, 9563, NUITKA_BYTECODE_FLAG },
    { "_py_abc", NULL, 1003581, 4622, NUITKA_BYTECODE_FLAG },
    { "_pyio", NULL, 1008203, 72786, NUITKA_BYTECODE_FLAG },
    { "_sitebuiltins", NULL, 1080989, 3433, NUITKA_BYTECODE_FLAG },
    { "_strptime", NULL, 1084422, 16072, NUITKA_BYTECODE_FLAG },
    { "_sysconfigdata_dm_linux_x86_64-linux-gnu", NULL, 1100494, 23837, NUITKA_BYTECODE_FLAG },
    { "_sysconfigdata_m_linux_x86_64-linux-gnu", NULL, 1124331, 22755, NUITKA_BYTECODE_FLAG },
    { "_threading_local", NULL, 1147086, 6380, NUITKA_BYTECODE_FLAG },
    { "aifc", NULL, 1153466, 26111, NUITKA_BYTECODE_FLAG },
    { "argparse", NULL, 1179577, 61881, NUITKA_BYTECODE_FLAG },
    { "ast", NULL, 1241458, 12048, NUITKA_BYTECODE_FLAG },
    { "asynchat", NULL, 1253506, 6802, NUITKA_BYTECODE_FLAG },
    { "asyncio", NULL, 1260308, 658, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "asyncio.base_events", NULL, 1260966, 48084, NUITKA_BYTECODE_FLAG },
    { "asyncio.base_futures", NULL, 1309050, 2070, NUITKA_BYTECODE_FLAG },
    { "asyncio.base_subprocess", NULL, 1311120, 9159, NUITKA_BYTECODE_FLAG },
    { "asyncio.base_tasks", NULL, 1320279, 1834, NUITKA_BYTECODE_FLAG },
    { "asyncio.constants", NULL, 1322113, 559, NUITKA_BYTECODE_FLAG },
    { "asyncio.coroutines", NULL, 1322672, 6346, NUITKA_BYTECODE_FLAG },
    { "asyncio.events", NULL, 1329018, 27823, NUITKA_BYTECODE_FLAG },
    { "asyncio.format_helpers", NULL, 1356841, 2285, NUITKA_BYTECODE_FLAG },
    { "asyncio.futures", NULL, 1359126, 10713, NUITKA_BYTECODE_FLAG },
    { "asyncio.locks", NULL, 1369839, 15881, NUITKA_BYTECODE_FLAG },
    { "asyncio.log", NULL, 1385720, 208, NUITKA_BYTECODE_FLAG },
    { "asyncio.proactor_events", NULL, 1385928, 19927, NUITKA_BYTECODE_FLAG },
    { "asyncio.protocols", NULL, 1405855, 8696, NUITKA_BYTECODE_FLAG },
    { "asyncio.queues", NULL, 1414551, 8141, NUITKA_BYTECODE_FLAG },
    { "asyncio.runners", NULL, 1422692, 1882, NUITKA_BYTECODE_FLAG },
    { "asyncio.selector_events", NULL, 1424574, 28091, NUITKA_BYTECODE_FLAG },
    { "asyncio.sslproto", NULL, 1452665, 21179, NUITKA_BYTECODE_FLAG },
    { "asyncio.streams", NULL, 1473844, 20256, NUITKA_BYTECODE_FLAG },
    { "asyncio.subprocess", NULL, 1494100, 6720, NUITKA_BYTECODE_FLAG },
    { "asyncio.tasks", NULL, 1500820, 21834, NUITKA_BYTECODE_FLAG },
    { "asyncio.transports", NULL, 1522654, 12179, NUITKA_BYTECODE_FLAG },
    { "asyncio.unix_events", NULL, 1534833, 32074, NUITKA_BYTECODE_FLAG },
    { "asyncore", NULL, 1566907, 15812, NUITKA_BYTECODE_FLAG },
    { "bdb", NULL, 1582719, 24362, NUITKA_BYTECODE_FLAG },
    { "binhex", NULL, 1607081, 12027, NUITKA_BYTECODE_FLAG },
    { "bisect", NULL, 143409, 2666, NUITKA_BYTECODE_FLAG },
    { "cProfile", NULL, 1619108, 4519, NUITKA_BYTECODE_FLAG },
    { "calendar", NULL, 1623627, 27392, NUITKA_BYTECODE_FLAG },
    { "cgi", NULL, 1651019, 27159, NUITKA_BYTECODE_FLAG },
    { "cgitb", NULL, 1678178, 10080, NUITKA_BYTECODE_FLAG },
    { "chunk", NULL, 1688258, 4887, NUITKA_BYTECODE_FLAG },
    { "cmd", NULL, 1693145, 12558, NUITKA_BYTECODE_FLAG },
    { "code", NULL, 1705703, 9826, NUITKA_BYTECODE_FLAG },
    { "codeop", NULL, 1715529, 6258, NUITKA_BYTECODE_FLAG },
    { "colorsys", NULL, 1721787, 3265, NUITKA_BYTECODE_FLAG },
    { "compileall", NULL, 1725052, 9074, NUITKA_BYTECODE_FLAG },
    { "concurrent", NULL, 1734126, 114, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "concurrent.futures", NULL, 1734240, 1054, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "concurrent.futures._base", NULL, 1735294, 20851, NUITKA_BYTECODE_FLAG },
    { "concurrent.futures.process", NULL, 1756145, 19529, NUITKA_BYTECODE_FLAG },
    { "concurrent.futures.thread", NULL, 1775674, 5142, NUITKA_BYTECODE_FLAG },
    { "configparser", NULL, 192653, 45848, NUITKA_BYTECODE_FLAG },
    { "contextlib", NULL, 238501, 19868, NUITKA_BYTECODE_FLAG },
    { "contextvars", NULL, 1780816, 225, NUITKA_BYTECODE_FLAG },
    { "copy", NULL, 1781041, 7069, NUITKA_BYTECODE_FLAG },
    { "crypt", NULL, 1788110, 3102, NUITKA_BYTECODE_FLAG },
    { "csv", NULL, 258369, 11800, NUITKA_BYTECODE_FLAG },
    { "ctypes", NULL, 1791212, 15980, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "ctypes._aix", NULL, 1807192, 9791, NUITKA_BYTECODE_FLAG },
    { "ctypes._endian", NULL, 1816983, 1924, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib", NULL, 1818907, 281, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "ctypes.macholib.dyld", NULL, 1819188, 4314, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib.dylib", NULL, 1823502, 1908, NUITKA_BYTECODE_FLAG },
    { "ctypes.macholib.framework", NULL, 1825410, 2188, NUITKA_BYTECODE_FLAG },
    { "ctypes.util", NULL, 1827598, 7717, NUITKA_BYTECODE_FLAG },
    { "curses", NULL, 1835315, 1763, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "curses.ascii", NULL, 1837078, 3871, NUITKA_BYTECODE_FLAG },
    { "curses.has_key", NULL, 1840949, 4235, NUITKA_BYTECODE_FLAG },
    { "curses.panel", NULL, 1845184, 205, NUITKA_BYTECODE_FLAG },
    { "curses.textpad", NULL, 1845389, 5874, NUITKA_BYTECODE_FLAG },
    { "dataclasses", NULL, 1851263, 22455, NUITKA_BYTECODE_FLAG },
    { "datetime", NULL, 270169, 57217, NUITKA_BYTECODE_FLAG },
    { "dbm", NULL, 1873718, 4134, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "dbm.dumb", NULL, 1877852, 8368, NUITKA_BYTECODE_FLAG },
    { "dbm.gnu", NULL, 1886220, 185, NUITKA_BYTECODE_FLAG },
    { "dbm.ndbm", NULL, 1886405, 184, NUITKA_BYTECODE_FLAG },
    { "decimal", NULL, 1886589, 162140, NUITKA_BYTECODE_FLAG },
    { "difflib", NULL, 2048729, 59406, NUITKA_BYTECODE_FLAG },
    { "distutils", NULL, 2108135, 366, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "distutils.archive_util", NULL, 2108501, 6500, NUITKA_BYTECODE_FLAG },
    { "distutils.bcppcompiler", NULL, 2115001, 6469, NUITKA_BYTECODE_FLAG },
    { "distutils.ccompiler", NULL, 2121470, 33184, NUITKA_BYTECODE_FLAG },
    { "distutils.cmd", NULL, 2154654, 13876, NUITKA_BYTECODE_FLAG },
    { "distutils.command", NULL, 2168530, 523, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "distutils.command.bdist", NULL, 2169053, 3622, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_dumb", NULL, 2172675, 3537, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_rpm", NULL, 2176212, 12462, NUITKA_BYTECODE_FLAG },
    { "distutils.command.bdist_wininst", NULL, 2188674, 7998, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build", NULL, 2196672, 3803, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_clib", NULL, 2200475, 4853, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_ext", NULL, 2205328, 15731, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_py", NULL, 2221059, 10359, NUITKA_BYTECODE_FLAG },
    { "distutils.command.build_scripts", NULL, 2231418, 4258, NUITKA_BYTECODE_FLAG },
    { "distutils.command.check", NULL, 2235676, 4778, NUITKA_BYTECODE_FLAG },
    { "distutils.command.clean", NULL, 2240454, 2060, NUITKA_BYTECODE_FLAG },
    { "distutils.command.config", NULL, 2242514, 10164, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install", NULL, 2252678, 13654, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_data", NULL, 2266332, 2253, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_egg_info", NULL, 2268585, 2951, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_headers", NULL, 2271536, 1668, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_lib", NULL, 2273204, 5046, NUITKA_BYTECODE_FLAG },
    { "distutils.command.install_scripts", NULL, 2278250, 2110, NUITKA_BYTECODE_FLAG },
    { "distutils.command.register", NULL, 2280360, 8445, NUITKA_BYTECODE_FLAG },
    { "distutils.command.sdist", NULL, 2288805, 14476, NUITKA_BYTECODE_FLAG },
    { "distutils.command.upload", NULL, 2303281, 5058, NUITKA_BYTECODE_FLAG },
    { "distutils.config", NULL, 2308339, 3453, NUITKA_BYTECODE_FLAG },
    { "distutils.core", NULL, 2311792, 6578, NUITKA_BYTECODE_FLAG },
    { "distutils.cygwinccompiler", NULL, 2318370, 8496, NUITKA_BYTECODE_FLAG },
    { "distutils.debug", NULL, 2326866, 176, NUITKA_BYTECODE_FLAG },
    { "distutils.dep_util", NULL, 2327042, 2692, NUITKA_BYTECODE_FLAG },
    { "distutils.dir_util", NULL, 2329734, 5786, NUITKA_BYTECODE_FLAG },
    { "distutils.dist", NULL, 2335520, 34407, NUITKA_BYTECODE_FLAG },
    { "distutils.errors", NULL, 2369927, 5462, NUITKA_BYTECODE_FLAG },
    { "distutils.extension", NULL, 2375389, 6873, NUITKA_BYTECODE_FLAG },
    { "distutils.fancy_getopt", NULL, 2382262, 10585, NUITKA_BYTECODE_FLAG },
    { "distutils.file_util", NULL, 2392847, 5871, NUITKA_BYTECODE_FLAG },
    { "distutils.filelist", NULL, 2398718, 9806, NUITKA_BYTECODE_FLAG },
    { "distutils.log", NULL, 2408524, 2287, NUITKA_BYTECODE_FLAG },
    { "distutils.msvccompiler", NULL, 2410811, 14539, NUITKA_BYTECODE_FLAG },
    { "distutils.spawn", NULL, 2425350, 4977, NUITKA_BYTECODE_FLAG },
    { "distutils.sysconfig", NULL, 2430327, 11893, NUITKA_BYTECODE_FLAG },
    { "distutils.text_file", NULL, 2442220, 8413, NUITKA_BYTECODE_FLAG },
    { "distutils.unixccompiler", NULL, 2450633, 6768, NUITKA_BYTECODE_FLAG },
    { "distutils.util", NULL, 2457401, 15023, NUITKA_BYTECODE_FLAG },
    { "distutils.version", NULL, 2472424, 7324, NUITKA_BYTECODE_FLAG },
    { "distutils.versionpredicate", NULL, 2479748, 5071, NUITKA_BYTECODE_FLAG },
    { "doctest", NULL, 2484819, 75578, NUITKA_BYTECODE_FLAG },
    { "dummy_threading", NULL, 327386, 1092, NUITKA_BYTECODE_FLAG },
    { "email", NULL, 2560397, 1659, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "email._encoded_words", NULL, 2562056, 5576, NUITKA_BYTECODE_FLAG },
    { "email._header_value_parser", NULL, 2567632, 75598, NUITKA_BYTECODE_FLAG },
    { "email._parseaddr", NULL, 2643230, 12316, NUITKA_BYTECODE_FLAG },
    { "email._policybase", NULL, 2655546, 14818, NUITKA_BYTECODE_FLAG },
    { "email.base64mime", NULL, 2670364, 3203, NUITKA_BYTECODE_FLAG },
    { "email.charset", NULL, 2673567, 11497, NUITKA_BYTECODE_FLAG },
    { "email.contentmanager", NULL, 2685064, 7263, NUITKA_BYTECODE_FLAG },
    { "email.encoders", NULL, 2692327, 1632, NUITKA_BYTECODE_FLAG },
    { "email.errors", NULL, 2693959, 6159, NUITKA_BYTECODE_FLAG },
    { "email.feedparser", NULL, 2700118, 10593, NUITKA_BYTECODE_FLAG },
    { "email.generator", NULL, 2710711, 12468, NUITKA_BYTECODE_FLAG },
    { "email.header", NULL, 2723179, 16348, NUITKA_BYTECODE_FLAG },
    { "email.headerregistry", NULL, 2739527, 21265, NUITKA_BYTECODE_FLAG },
    { "email.iterators", NULL, 2760792, 1900, NUITKA_BYTECODE_FLAG },
    { "email.message", NULL, 2762692, 37908, NUITKA_BYTECODE_FLAG },
    { "email.mime", NULL, 2800600, 114, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "email.mime.application", NULL, 2800714, 1425, NUITKA_BYTECODE_FLAG },
    { "email.mime.audio", NULL, 2802139, 2584, NUITKA_BYTECODE_FLAG },
    { "email.mime.base", NULL, 2804723, 1050, NUITKA_BYTECODE_FLAG },
    { "email.mime.image", NULL, 2805773, 1870, NUITKA_BYTECODE_FLAG },
    { "email.mime.message", NULL, 2807643, 1299, NUITKA_BYTECODE_FLAG },
    { "email.mime.multipart", NULL, 2808942, 1521, NUITKA_BYTECODE_FLAG },
    { "email.mime.nonmultipart", NULL, 2810463, 736, NUITKA_BYTECODE_FLAG },
    { "email.mime.text", NULL, 2811199, 1283, NUITKA_BYTECODE_FLAG },
    { "email.parser", NULL, 2812482, 5715, NUITKA_BYTECODE_FLAG },
    { "email.policy", NULL, 2818197, 9608, NUITKA_BYTECODE_FLAG },
    { "email.quoprimime", NULL, 2827805, 7632, NUITKA_BYTECODE_FLAG },
    { "email.utils", NULL, 2835437, 9435, NUITKA_BYTECODE_FLAG },
    { "filecmp", NULL, 2844872, 8275, NUITKA_BYTECODE_FLAG },
    { "fileinput", NULL, 2853147, 13166, NUITKA_BYTECODE_FLAG },
    { "fnmatch", NULL, 2866313, 3305, NUITKA_BYTECODE_FLAG },
    { "formatter", NULL, 2869618, 17521, NUITKA_BYTECODE_FLAG },
    { "fractions", NULL, 2887139, 18396, NUITKA_BYTECODE_FLAG },
    { "ftplib", NULL, 2905535, 28035, NUITKA_BYTECODE_FLAG },
    { "getopt", NULL, 2933570, 6207, NUITKA_BYTECODE_FLAG },
    { "getpass", NULL, 2939777, 4132, NUITKA_BYTECODE_FLAG },
    { "gettext", NULL, 352395, 14136, NUITKA_BYTECODE_FLAG },
    { "glob", NULL, 2943909, 4227, NUITKA_BYTECODE_FLAG },
    { "gzip", NULL, 2948136, 17153, NUITKA_BYTECODE_FLAG },
    { "hashlib", NULL, 366531, 6559, NUITKA_BYTECODE_FLAG },
    { "hmac", NULL, 2965289, 6081, NUITKA_BYTECODE_FLAG },
    { "html", NULL, 2971370, 3365, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "html.entities", NULL, 2974735, 50437, NUITKA_BYTECODE_FLAG },
    { "html.parser", NULL, 3025172, 11075, NUITKA_BYTECODE_FLAG },
    { "http", NULL, 3036247, 5890, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "http.client", NULL, 3042137, 34016, NUITKA_BYTECODE_FLAG },
    { "http.cookiejar", NULL, 3076153, 53375, NUITKA_BYTECODE_FLAG },
    { "http.cookies", NULL, 3129528, 15212, NUITKA_BYTECODE_FLAG },
    { "http.server", NULL, 3144740, 33335, NUITKA_BYTECODE_FLAG },
    { "imaplib", NULL, 3178075, 41398, NUITKA_BYTECODE_FLAG },
    { "imghdr", NULL, 3219473, 4110, NUITKA_BYTECODE_FLAG },
    { "imp", NULL, 3223583, 9721, NUITKA_BYTECODE_FLAG },
    { "importlib.abc", NULL, 3233304, 13455, NUITKA_BYTECODE_FLAG },
    { "importlib.resources", NULL, 3246759, 8307, NUITKA_BYTECODE_FLAG },
    { "importlib.util", NULL, 3255066, 9324, NUITKA_BYTECODE_FLAG },
    { "ipaddress", NULL, 3264390, 62962, NUITKA_BYTECODE_FLAG },
    { "json", NULL, 3327352, 12306, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "json.decoder", NULL, 3339658, 9792, NUITKA_BYTECODE_FLAG },
    { "json.encoder", NULL, 3349450, 11274, NUITKA_BYTECODE_FLAG },
    { "json.scanner", NULL, 3360724, 1964, NUITKA_BYTECODE_FLAG },
    { "json.tool", NULL, 3362688, 1445, NUITKA_BYTECODE_FLAG },
    { "lib2to3", NULL, 3364133, 111, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.btm_matcher", NULL, 3364244, 4861, NUITKA_BYTECODE_FLAG },
    { "lib2to3.btm_utils", NULL, 3369105, 6111, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixer_base", NULL, 3375216, 6203, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixer_util", NULL, 3381419, 12014, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes", NULL, 3393433, 117, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.fixes.fix_apply", NULL, 3393550, 1655, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_asserts", NULL, 3395205, 1240, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_basestring", NULL, 3396445, 630, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_buffer", NULL, 3397075, 775, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_dict", NULL, 3397850, 3283, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_except", NULL, 3401133, 2785, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_exec", NULL, 3403918, 1116, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_execfile", NULL, 3405034, 1660, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_exitfunc", NULL, 3406694, 2263, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_filter", NULL, 3408957, 2328, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_funcattrs", NULL, 3411285, 941, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_future", NULL, 3412226, 751, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_getcwdu", NULL, 3412977, 755, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_has_key", NULL, 3413732, 2885, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_idioms", NULL, 3416617, 3870, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_import", NULL, 3420487, 2752, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_imports", NULL, 3423239, 4316, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_imports2", NULL, 3427555, 515, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_input", NULL, 3428070, 917, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_intern", NULL, 3428987, 1124, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_isinstance", NULL, 3430111, 1522, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_itertools", NULL, 3431633, 1511, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_itertools_imports", NULL, 3433144, 1547, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_long", NULL, 3434691, 672, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_map", NULL, 3435363, 3060, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_metaclass", NULL, 3438423, 5313, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_methodattrs", NULL, 3443736, 903, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_ne", NULL, 3444639, 774, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_next", NULL, 3445413, 3027, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_nonzero", NULL, 3448440, 890, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_numliterals", NULL, 3449330, 986, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_operator", NULL, 3450316, 4203, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_paren", NULL, 3454519, 1357, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_print", NULL, 3455876, 2292, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_raise", NULL, 3458168, 2216, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_raw_input", NULL, 3460384, 762, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_reduce", NULL, 3461146, 1097, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_reload", NULL, 3462243, 1136, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_renames", NULL, 3463379, 1960, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_repr", NULL, 3465339, 812, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_set_literal", NULL, 3466151, 1644, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_standarderror", NULL, 3467795, 687, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_sys_exc", NULL, 3468482, 1368, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_throw", NULL, 3469850, 1769, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_tuple_params", NULL, 3471619, 4563, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_types", NULL, 3476182, 1796, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_unicode", NULL, 3477978, 1508, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_urllib", NULL, 3479486, 5928, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_ws_comma", NULL, 3485414, 1090, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_xrange", NULL, 3486504, 2503, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_xreadlines", NULL, 3489007, 1084, NUITKA_BYTECODE_FLAG },
    { "lib2to3.fixes.fix_zip", NULL, 3490091, 1548, NUITKA_BYTECODE_FLAG },
    { "lib2to3.main", NULL, 3491639, 8504, NUITKA_BYTECODE_FLAG },
    { "lib2to3.patcomp", NULL, 3500143, 5579, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2", NULL, 3505722, 147, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "lib2to3.pgen2.driver", NULL, 3505869, 5108, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.grammar", NULL, 3510977, 6984, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.literals", NULL, 3517961, 1526, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.parse", NULL, 3519487, 6272, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.pgen", NULL, 3525759, 9748, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.token", NULL, 3535507, 1840, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pgen2.tokenize", NULL, 3537347, 15108, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pygram", NULL, 3552455, 1166, NUITKA_BYTECODE_FLAG },
    { "lib2to3.pytree", NULL, 3553621, 24971, NUITKA_BYTECODE_FLAG },
    { "lib2to3.refactor", NULL, 3578592, 20372, NUITKA_BYTECODE_FLAG },
    { "logging", NULL, 460167, 62526, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "logging.config", NULL, 3598964, 22983, NUITKA_BYTECODE_FLAG },
    { "logging.handlers", NULL, 3621947, 42951, NUITKA_BYTECODE_FLAG },
    { "lzma", NULL, 3664898, 11907, NUITKA_BYTECODE_FLAG },
    { "macpath", NULL, 3676805, 5775, NUITKA_BYTECODE_FLAG },
    { "mailbox", NULL, 3682580, 63616, NUITKA_BYTECODE_FLAG },
    { "mailcap", NULL, 3746196, 6452, NUITKA_BYTECODE_FLAG },
    { "mimetypes", NULL, 3752648, 15446, NUITKA_BYTECODE_FLAG },
    { "modulefinder", NULL, 3768094, 15320, NUITKA_BYTECODE_FLAG },
    { "multiprocessing", NULL, 3783414, 495, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "multiprocessing.connection", NULL, 3783909, 24900, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.context", NULL, 3808809, 13081, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.dummy", NULL, 3821890, 3773, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "multiprocessing.dummy.connection", NULL, 3825663, 2481, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.forkserver", NULL, 3828144, 7732, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.heap", NULL, 3835876, 6392, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.managers", NULL, 3842268, 33981, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.pool", NULL, 3876249, 21204, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.popen_fork", NULL, 3897453, 2494, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.popen_forkserver", NULL, 3899947, 2327, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.popen_spawn_posix", NULL, 3902274, 2109, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.process", NULL, 3904383, 9394, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.queues", NULL, 3913777, 9405, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.reduction", NULL, 3923182, 7986, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.resource_sharer", NULL, 3931168, 5171, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.semaphore_tracker", NULL, 3936339, 3708, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.sharedctypes", NULL, 3940047, 6885, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.spawn", NULL, 3946932, 6446, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.synchronize", NULL, 3953378, 11151, NUITKA_BYTECODE_FLAG },
    { "multiprocessing.util", NULL, 3964529, 9915, NUITKA_BYTECODE_FLAG },
    { "netrc", NULL, 3974444, 3731, NUITKA_BYTECODE_FLAG },
    { "nntplib", NULL, 3978175, 33719, NUITKA_BYTECODE_FLAG },
    { "ntpath", NULL, 4011894, 12972, NUITKA_BYTECODE_FLAG },
    { "nturl2path", NULL, 4024866, 1583, NUITKA_BYTECODE_FLAG },
    { "numbers", NULL, 4026449, 12160, NUITKA_BYTECODE_FLAG },
    { "optparse", NULL, 4038609, 47861, NUITKA_BYTECODE_FLAG },
    { "pathlib", NULL, 4086470, 41431, NUITKA_BYTECODE_FLAG },
    { "pdb", NULL, 4127901, 46730, NUITKA_BYTECODE_FLAG },
    { "pickle", NULL, 4174631, 42934, NUITKA_BYTECODE_FLAG },
    { "pickletools", NULL, 4217565, 65299, NUITKA_BYTECODE_FLAG },
    { "pipes", NULL, 4282864, 7771, NUITKA_BYTECODE_FLAG },
    { "pkgutil", NULL, 566222, 16328, NUITKA_BYTECODE_FLAG },
    { "platform", NULL, 4290635, 28188, NUITKA_BYTECODE_FLAG },
    { "plistlib", NULL, 4318823, 25063, NUITKA_BYTECODE_FLAG },
    { "poplib", NULL, 4343886, 13304, NUITKA_BYTECODE_FLAG },
    { "pprint", NULL, 4357190, 15787, NUITKA_BYTECODE_FLAG },
    { "profile", NULL, 4372977, 13809, NUITKA_BYTECODE_FLAG },
    { "pstats", NULL, 4386786, 22262, NUITKA_BYTECODE_FLAG },
    { "pty", NULL, 4409048, 3851, NUITKA_BYTECODE_FLAG },
    { "py_compile", NULL, 4412899, 7159, NUITKA_BYTECODE_FLAG },
    { "pyclbr", NULL, 4420058, 10341, NUITKA_BYTECODE_FLAG },
    { "pydoc", NULL, 4430399, 84388, NUITKA_BYTECODE_FLAG },
    { "pydoc_data", NULL, 4514787, 114, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "pydoc_data.topics", NULL, 4514901, 411302, NUITKA_BYTECODE_FLAG },
    { "queue", NULL, 4926203, 11440, NUITKA_BYTECODE_FLAG },
    { "random", NULL, 4937643, 19362, NUITKA_BYTECODE_FLAG },
    { "rlcompleter", NULL, 4957005, 5715, NUITKA_BYTECODE_FLAG },
    { "runpy", NULL, 4962720, 7913, NUITKA_BYTECODE_FLAG },
    { "sched", NULL, 4970633, 6489, NUITKA_BYTECODE_FLAG },
    { "secrets", NULL, 4977122, 2152, NUITKA_BYTECODE_FLAG },
    { "selectors", NULL, 4979274, 16916, NUITKA_BYTECODE_FLAG },
    { "shelve", NULL, 4996190, 9474, NUITKA_BYTECODE_FLAG },
    { "shlex", NULL, 5005664, 6958, NUITKA_BYTECODE_FLAG },
    { "shutil", NULL, 5012622, 30832, NUITKA_BYTECODE_FLAG },
    { "signal", NULL, 5043454, 2480, NUITKA_BYTECODE_FLAG },
    { "site", NULL, 606720, 13406, NUITKA_BYTECODE_FLAG },
    { "smtpd", NULL, 5045934, 26572, NUITKA_BYTECODE_FLAG },
    { "smtplib", NULL, 5072506, 35318, NUITKA_BYTECODE_FLAG },
    { "sndhdr", NULL, 5107824, 6871, NUITKA_BYTECODE_FLAG },
    { "socket", NULL, 620126, 21989, NUITKA_BYTECODE_FLAG },
    { "socketserver", NULL, 5114695, 24166, NUITKA_BYTECODE_FLAG },
    { "sqlite3", NULL, 5138861, 142, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "sqlite3.dbapi2", NULL, 5139003, 2461, NUITKA_BYTECODE_FLAG },
    { "sqlite3.dump", NULL, 5141464, 1904, NUITKA_BYTECODE_FLAG },
    { "ssl", NULL, 5143368, 39739, NUITKA_BYTECODE_FLAG },
    { "statistics", NULL, 5183107, 18132, NUITKA_BYTECODE_FLAG },
    { "string", NULL, 5201239, 7803, NUITKA_BYTECODE_FLAG },
    { "subprocess", NULL, 5209042, 38733, NUITKA_BYTECODE_FLAG },
    { "sunau", NULL, 5247775, 17179, NUITKA_BYTECODE_FLAG },
    { "symbol", NULL, 5264954, 2533, NUITKA_BYTECODE_FLAG },
    { "symtable", NULL, 5267487, 10413, NUITKA_BYTECODE_FLAG },
    { "sysconfig", NULL, 5277900, 15338, NUITKA_BYTECODE_FLAG },
    { "tabnanny", NULL, 5293238, 6946, NUITKA_BYTECODE_FLAG },
    { "tarfile", NULL, 5300184, 61809, NUITKA_BYTECODE_FLAG },
    { "telnetlib", NULL, 5361993, 18070, NUITKA_BYTECODE_FLAG },
    { "tempfile", NULL, 5380063, 22113, NUITKA_BYTECODE_FLAG },
    { "textwrap", NULL, 642115, 13580, NUITKA_BYTECODE_FLAG },
    { "this", NULL, 5402176, 1245, NUITKA_BYTECODE_FLAG },
    { "timeit", NULL, 5403421, 11615, NUITKA_BYTECODE_FLAG },
    { "tkinter", NULL, 692998, 179143, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "tkinter.colorchooser", NULL, 5415036, 1103, NUITKA_BYTECODE_FLAG },
    { "tkinter.commondialog", NULL, 5416139, 1084, NUITKA_BYTECODE_FLAG },
    { "tkinter.constants", NULL, 5417223, 1636, NUITKA_BYTECODE_FLAG },
    { "tkinter.dialog", NULL, 5418859, 1412, NUITKA_BYTECODE_FLAG },
    { "tkinter.dnd", NULL, 5420271, 11154, NUITKA_BYTECODE_FLAG },
    { "tkinter.filedialog", NULL, 872141, 12238, NUITKA_BYTECODE_FLAG },
    { "tkinter.font", NULL, 5431425, 6155, NUITKA_BYTECODE_FLAG },
    { "tkinter.messagebox", NULL, 5437580, 3020, NUITKA_BYTECODE_FLAG },
    { "tkinter.scrolledtext", NULL, 5440600, 2147, NUITKA_BYTECODE_FLAG },
    { "tkinter.simpledialog", NULL, 5442747, 10514, NUITKA_BYTECODE_FLAG },
    { "tkinter.tix", NULL, 5453261, 83634, NUITKA_BYTECODE_FLAG },
    { "tkinter.ttk", NULL, 5536895, 57818, NUITKA_BYTECODE_FLAG },
    { "trace", NULL, 5594713, 19115, NUITKA_BYTECODE_FLAG },
    { "tracemalloc", NULL, 5613828, 17244, NUITKA_BYTECODE_FLAG },
    { "tty", NULL, 5631072, 1062, NUITKA_BYTECODE_FLAG },
    { "turtle", NULL, 5632134, 130759, NUITKA_BYTECODE_FLAG },
    { "typing", NULL, 5762893, 49926, NUITKA_BYTECODE_FLAG },
    { "unittest", NULL, 5812819, 3005, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "unittest.case", NULL, 5815824, 48522, NUITKA_BYTECODE_FLAG },
    { "unittest.loader", NULL, 5864346, 14237, NUITKA_BYTECODE_FLAG },
    { "unittest.main", NULL, 5878583, 7406, NUITKA_BYTECODE_FLAG },
    { "unittest.mock", NULL, 5885989, 63022, NUITKA_BYTECODE_FLAG },
    { "unittest.result", NULL, 5949011, 7220, NUITKA_BYTECODE_FLAG },
    { "unittest.runner", NULL, 5956231, 6949, NUITKA_BYTECODE_FLAG },
    { "unittest.signals", NULL, 5963180, 2162, NUITKA_BYTECODE_FLAG },
    { "unittest.suite", NULL, 5965342, 9171, NUITKA_BYTECODE_FLAG },
    { "unittest.util", NULL, 5974513, 4489, NUITKA_BYTECODE_FLAG },
    { "urllib", NULL, 5979002, 110, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "urllib.error", NULL, 5979112, 2744, NUITKA_BYTECODE_FLAG },
    { "urllib.parse", NULL, 5981856, 30398, NUITKA_BYTECODE_FLAG },
    { "urllib.request", NULL, 6012254, 72272, NUITKA_BYTECODE_FLAG },
    { "urllib.response", NULL, 6084526, 3217, NUITKA_BYTECODE_FLAG },
    { "urllib.robotparser", NULL, 6087743, 7029, NUITKA_BYTECODE_FLAG },
    { "uu", NULL, 6094772, 3581, NUITKA_BYTECODE_FLAG },
    { "uuid", NULL, 912912, 23167, NUITKA_BYTECODE_FLAG },
    { "venv", NULL, 6098353, 13090, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "wave", NULL, 6111443, 18256, NUITKA_BYTECODE_FLAG },
    { "weakref", NULL, 949996, 19078, NUITKA_BYTECODE_FLAG },
    { "webbrowser", NULL, 6129699, 16342, NUITKA_BYTECODE_FLAG },
    { "wsgiref", NULL, 6146041, 706, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "wsgiref.handlers", NULL, 6146747, 16115, NUITKA_BYTECODE_FLAG },
    { "wsgiref.headers", NULL, 6162862, 7727, NUITKA_BYTECODE_FLAG },
    { "wsgiref.simple_server", NULL, 6170589, 5173, NUITKA_BYTECODE_FLAG },
    { "wsgiref.util", NULL, 6175762, 5148, NUITKA_BYTECODE_FLAG },
    { "wsgiref.validate", NULL, 6180910, 14644, NUITKA_BYTECODE_FLAG },
    { "xdrlib", NULL, 6195554, 8292, NUITKA_BYTECODE_FLAG },
    { "xml", NULL, 969074, 674, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.dom", NULL, 6203846, 5426, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.dom.NodeFilter", NULL, 6209272, 941, NUITKA_BYTECODE_FLAG },
    { "xml.dom.domreg", NULL, 6210213, 2818, NUITKA_BYTECODE_FLAG },
    { "xml.dom.expatbuilder", NULL, 6213031, 26988, NUITKA_BYTECODE_FLAG },
    { "xml.dom.minicompat", NULL, 6240019, 2787, NUITKA_BYTECODE_FLAG },
    { "xml.dom.minidom", NULL, 6242806, 55587, NUITKA_BYTECODE_FLAG },
    { "xml.dom.pulldom", NULL, 6298393, 10460, NUITKA_BYTECODE_FLAG },
    { "xml.dom.xmlbuilder", NULL, 6308853, 12407, NUITKA_BYTECODE_FLAG },
    { "xml.etree", NULL, 6321260, 113, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.etree.ElementInclude", NULL, 6321373, 1549, NUITKA_BYTECODE_FLAG },
    { "xml.etree.ElementPath", NULL, 6322922, 6317, NUITKA_BYTECODE_FLAG },
    { "xml.etree.ElementTree", NULL, 6329239, 44781, NUITKA_BYTECODE_FLAG },
    { "xml.etree.cElementTree", NULL, 6374020, 155, NUITKA_BYTECODE_FLAG },
    { "xml.parsers", NULL, 969748, 287, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.parsers.expat", NULL, 970035, 316, NUITKA_BYTECODE_FLAG },
    { "xml.sax", NULL, 6374175, 3146, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xml.sax._exceptions", NULL, 6377321, 5455, NUITKA_BYTECODE_FLAG },
    { "xml.sax.expatreader", NULL, 6382776, 12358, NUITKA_BYTECODE_FLAG },
    { "xml.sax.handler", NULL, 6395134, 12331, NUITKA_BYTECODE_FLAG },
    { "xml.sax.saxutils", NULL, 6407465, 12784, NUITKA_BYTECODE_FLAG },
    { "xml.sax.xmlreader", NULL, 6420249, 16892, NUITKA_BYTECODE_FLAG },
    { "xmlrpc", NULL, 6437141, 110, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { "xmlrpc.client", NULL, 6437251, 34516, NUITKA_BYTECODE_FLAG },
    { "xmlrpc.server", NULL, 6471767, 29358, NUITKA_BYTECODE_FLAG },
    { "zipapp", NULL, 6501125, 5771, NUITKA_BYTECODE_FLAG },
    { "zipfile", NULL, 6506896, 49840, NUITKA_BYTECODE_FLAG },
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
