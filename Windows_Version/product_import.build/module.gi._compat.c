/* Generated code for Python module 'gi._compat'
 * created by Nuitka version 0.6.3
 *
 * This code is in part copyright 2019 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module_gi$_compat" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_gi$_compat;
PyDictObject *moduledict_gi$_compat;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_b;
static PyObject *const_str_plain_cmp;
static PyObject *const_str_plain_PY2;
static PyObject *const_str_digest_58ff6ccfc11c8774c9d298b85af436df;
static PyObject *const_str_plain_eval;
static PyObject *const_tuple_str_plain_UserList_tuple;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple;
extern PyObject *const_str_plain_sys;
static PyObject *const_tuple_str_plain_StringIO_tuple;
static PyObject *const_str_plain_xrange;
extern PyObject *const_str_plain_io;
extern PyObject *const_str_plain_str;
static PyObject *const_str_plain_StringIO;
static PyObject *const_str_plain_text_type;
static PyObject *const_str_digest_5671faa48d5f8576f16d769e90b8dbff;
static PyObject *const_str_digest_1a6288f59e7208b4832970c7a8e4e197;
extern PyObject *const_str_plain_range;
static PyObject *const_tuple_str_plain_tp_str_plain_value_str_plain_tb_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_with_traceback;
static PyObject *const_str_plain_long;
extern PyObject *const_str_plain_importlib;
extern PyObject *const_str_plain_int;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_tb;
static PyObject *const_str_digest_6179944d8bb339d712b456a36789f415;
extern PyObject *const_str_plain_string_types;
static PyObject *const_str_plain_UserList;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_unicode;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_collections;
static PyObject *const_str_digest_44ab03b5bbbd1d928e5f7be94e20c80a;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_version_info;
static PyObject *const_str_plain_tp;
static PyObject *const_str_digest_bc431905b930e533433c92e81a7ea71c;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_strip;
static PyObject *const_str_plain_integer_types;
static PyObject *const_str_plain_exec;
static PyObject *const_tuple_type_int_tuple;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_str_plain_reload_tuple;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_ac02ab0238280e341b2aff0eed15b128;
static PyObject *const_tuple_str_plain_a_str_plain_b_tuple;
extern PyObject *const_str_angle_lambda;
static PyObject *const_str_angle_string;
extern PyObject *const_tuple_type_str_tuple;
static PyObject *const_str_plain_reraise;
static PyObject *const_str_plain_PY3;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_reload;
extern PyObject *const_str_plain_long_;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_b = UNSTREAM_STRING_ASCII( &constant_bin[ 234 ], 1, 1 );
    const_str_plain_cmp = UNSTREAM_STRING_ASCII( &constant_bin[ 35752 ], 3, 1 );
    const_str_plain_PY2 = UNSTREAM_STRING_ASCII( &constant_bin[ 35755 ], 3, 1 );
    const_str_digest_58ff6ccfc11c8774c9d298b85af436df = UNSTREAM_STRING_ASCII( &constant_bin[ 35758 ], 48, 0 );
    const_str_plain_eval = UNSTREAM_STRING_ASCII( &constant_bin[ 35806 ], 4, 1 );
    const_tuple_str_plain_UserList_tuple = PyTuple_New( 1 );
    const_str_plain_UserList = UNSTREAM_STRING_ASCII( &constant_bin[ 35810 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_UserList_tuple, 0, const_str_plain_UserList ); Py_INCREF( const_str_plain_UserList );
    const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple = PyTuple_New( 1 );
    const_str_digest_ac02ab0238280e341b2aff0eed15b128 = UNSTREAM_STRING_ASCII( &constant_bin[ 35818 ], 2, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple, 0, const_str_digest_ac02ab0238280e341b2aff0eed15b128 ); Py_INCREF( const_str_digest_ac02ab0238280e341b2aff0eed15b128 );
    const_tuple_str_plain_StringIO_tuple = PyTuple_New( 1 );
    const_str_plain_StringIO = UNSTREAM_STRING_ASCII( &constant_bin[ 35820 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_StringIO_tuple, 0, const_str_plain_StringIO ); Py_INCREF( const_str_plain_StringIO );
    const_str_plain_xrange = UNSTREAM_STRING_ASCII( &constant_bin[ 35828 ], 6, 1 );
    const_str_plain_text_type = UNSTREAM_STRING_ASCII( &constant_bin[ 35834 ], 9, 1 );
    const_str_digest_5671faa48d5f8576f16d769e90b8dbff = UNSTREAM_STRING_ASCII( &constant_bin[ 35843 ], 10, 0 );
    const_str_digest_1a6288f59e7208b4832970c7a8e4e197 = UNSTREAM_STRING_ASCII( &constant_bin[ 35853 ], 13, 0 );
    const_tuple_str_plain_tp_str_plain_value_str_plain_tb_tuple = PyTuple_New( 3 );
    const_str_plain_tp = UNSTREAM_STRING_ASCII( &constant_bin[ 8076 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_tp_str_plain_value_str_plain_tb_tuple, 0, const_str_plain_tp ); Py_INCREF( const_str_plain_tp );
    PyTuple_SET_ITEM( const_tuple_str_plain_tp_str_plain_value_str_plain_tb_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_tp_str_plain_value_str_plain_tb_tuple, 2, const_str_plain_tb ); Py_INCREF( const_str_plain_tb );
    const_str_plain_with_traceback = UNSTREAM_STRING_ASCII( &constant_bin[ 35866 ], 14, 1 );
    const_str_plain_long = UNSTREAM_STRING_ASCII( &constant_bin[ 35880 ], 4, 1 );
    const_str_digest_6179944d8bb339d712b456a36789f415 = UNSTREAM_STRING_ASCII( &constant_bin[ 35884 ], 11, 0 );
    const_str_digest_44ab03b5bbbd1d928e5f7be94e20c80a = UNSTREAM_STRING_ASCII( &constant_bin[ 35895 ], 13, 0 );
    const_str_digest_bc431905b930e533433c92e81a7ea71c = UNSTREAM_STRING_ASCII( &constant_bin[ 35908 ], 19, 0 );
    const_str_plain_integer_types = UNSTREAM_STRING_ASCII( &constant_bin[ 35927 ], 13, 1 );
    const_str_plain_exec = UNSTREAM_STRING_ASCII( &constant_bin[ 1575 ], 4, 1 );
    const_tuple_type_int_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_type_int_tuple, 0, (PyObject *)&PyLong_Type ); Py_INCREF( (PyObject *)&PyLong_Type );
    const_tuple_str_plain_reload_tuple = PyTuple_New( 1 );
    const_str_plain_reload = UNSTREAM_STRING_ASCII( &constant_bin[ 35940 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_reload_tuple, 0, const_str_plain_reload ); Py_INCREF( const_str_plain_reload );
    const_tuple_str_plain_a_str_plain_b_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_b_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_b_tuple, 1, const_str_plain_b ); Py_INCREF( const_str_plain_b );
    const_str_angle_string = UNSTREAM_STRING_ASCII( &constant_bin[ 35946 ], 8, 0 );
    const_str_plain_reraise = UNSTREAM_STRING_ASCII( &constant_bin[ 35762 ], 7, 1 );
    const_str_plain_PY3 = UNSTREAM_STRING_ASCII( &constant_bin[ 35954 ], 3, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_gi$_compat( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a761331b88bfb3002a1931dd2bebeb95;
static PyCodeObject *codeobj_158919088c58de14a3074744c1c289e5;
static PyCodeObject *codeobj_9429450ca11bae7fa99c84d4ae98ba16;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_44ab03b5bbbd1d928e5f7be94e20c80a );
    codeobj_a761331b88bfb3002a1931dd2bebeb95 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 53, const_tuple_str_plain_a_str_plain_b_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_158919088c58de14a3074744c1c289e5 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_bc431905b930e533433c92e81a7ea71c, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_9429450ca11bae7fa99c84d4ae98ba16 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reraise, 55, const_tuple_str_plain_tp_str_plain_value_str_plain_tb_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_gi$_compat$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_gi$_compat$$$function_2_reraise(  );


// The module function definitions.
static PyObject *impl_gi$_compat$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_b = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_a761331b88bfb3002a1931dd2bebeb95;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a761331b88bfb3002a1931dd2bebeb95 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a761331b88bfb3002a1931dd2bebeb95, codeobj_a761331b88bfb3002a1931dd2bebeb95, module_gi$_compat, sizeof(void *)+sizeof(void *) );
    frame_a761331b88bfb3002a1931dd2bebeb95 = cache_frame_a761331b88bfb3002a1931dd2bebeb95;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a761331b88bfb3002a1931dd2bebeb95 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a761331b88bfb3002a1931dd2bebeb95 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_left_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_a );
        tmp_compexpr_left_1 = par_a;
        CHECK_OBJECT( par_b );
        tmp_compexpr_right_1 = par_b;
        tmp_left_name_1 = RICH_COMPARE_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_a );
        tmp_compexpr_left_2 = par_a;
        CHECK_OBJECT( par_b );
        tmp_compexpr_right_2 = par_b;
        tmp_right_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a761331b88bfb3002a1931dd2bebeb95 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a761331b88bfb3002a1931dd2bebeb95 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a761331b88bfb3002a1931dd2bebeb95 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a761331b88bfb3002a1931dd2bebeb95, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a761331b88bfb3002a1931dd2bebeb95->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a761331b88bfb3002a1931dd2bebeb95, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a761331b88bfb3002a1931dd2bebeb95,
        type_description_1,
        par_a,
        par_b
    );


    // Release cached frame.
    if ( frame_a761331b88bfb3002a1931dd2bebeb95 == cache_frame_a761331b88bfb3002a1931dd2bebeb95 )
    {
        Py_DECREF( frame_a761331b88bfb3002a1931dd2bebeb95 );
    }
    cache_frame_a761331b88bfb3002a1931dd2bebeb95 = NULL;

    assertFrameObject( frame_a761331b88bfb3002a1931dd2bebeb95 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gi$_compat$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_b );
    Py_DECREF( par_b );
    par_b = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gi$_compat$$$function_1_lambda );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_gi$_compat$$$function_2_reraise( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tp = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *par_tb = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_9429450ca11bae7fa99c84d4ae98ba16;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9429450ca11bae7fa99c84d4ae98ba16 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9429450ca11bae7fa99c84d4ae98ba16, codeobj_9429450ca11bae7fa99c84d4ae98ba16, module_gi$_compat, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9429450ca11bae7fa99c84d4ae98ba16 = cache_frame_9429450ca11bae7fa99c84d4ae98ba16;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9429450ca11bae7fa99c84d4ae98ba16 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9429450ca11bae7fa99c84d4ae98ba16 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_tp );
        tmp_called_name_1 = par_tp;
        CHECK_OBJECT( par_value );
        tmp_args_element_name_1 = par_value;
        frame_9429450ca11bae7fa99c84d4ae98ba16->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_tb );
        tmp_args_element_name_2 = par_tb;
        frame_9429450ca11bae7fa99c84d4ae98ba16->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_raise_type_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_with_traceback, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_raise_type_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 56;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 56;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9429450ca11bae7fa99c84d4ae98ba16 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9429450ca11bae7fa99c84d4ae98ba16 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9429450ca11bae7fa99c84d4ae98ba16, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9429450ca11bae7fa99c84d4ae98ba16->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9429450ca11bae7fa99c84d4ae98ba16, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9429450ca11bae7fa99c84d4ae98ba16,
        type_description_1,
        par_tp,
        par_value,
        par_tb
    );


    // Release cached frame.
    if ( frame_9429450ca11bae7fa99c84d4ae98ba16 == cache_frame_9429450ca11bae7fa99c84d4ae98ba16 )
    {
        Py_DECREF( frame_9429450ca11bae7fa99c84d4ae98ba16 );
    }
    cache_frame_9429450ca11bae7fa99c84d4ae98ba16 = NULL;

    assertFrameObject( frame_9429450ca11bae7fa99c84d4ae98ba16 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gi$_compat$$$function_2_reraise );
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_tp );
    Py_DECREF( par_tp );
    par_tp = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_tb );
    Py_DECREF( par_tb );
    par_tb = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gi$_compat$$$function_2_reraise );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}



static PyObject *MAKE_FUNCTION_gi$_compat$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$_compat$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a761331b88bfb3002a1931dd2bebeb95,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gi$_compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$_compat$$$function_2_reraise(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$_compat$$$function_2_reraise,
        const_str_plain_reraise,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9429450ca11bae7fa99c84d4ae98ba16,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gi$_compat,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_gi$_compat =
{
    PyModuleDef_HEAD_INIT,
    "gi._compat",
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

extern PyTypeObject Nuitka_Loader_Type;

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( gi$_compat )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_gi$_compat );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("gi._compat: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("gi._compat: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("gi._compat: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initgi$_compat" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_gi$_compat = Py_InitModule4(
        "gi._compat",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_gi$_compat = PyModule_Create( &mdef_gi$_compat );
#endif

    moduledict_gi$_compat = MODULE_DICT( module_gi$_compat );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_gi$_compat,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_gi$_compat,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_gi$_compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_gi$_compat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_gi$_compat );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_5671faa48d5f8576f16d769e90b8dbff, module_gi$_compat );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___name__ ),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF( module_spec_class );

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT( spec_value );

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_eval_call_1__globals = NULL;
    PyObject *tmp_eval_call_1__locals = NULL;
    PyObject *tmp_eval_call_1__source = NULL;
    PyObject *tmp_eval_call_2__globals = NULL;
    PyObject *tmp_eval_call_2__locals = NULL;
    PyObject *tmp_eval_call_2__source = NULL;
    PyObject *tmp_eval_call_3__globals = NULL;
    PyObject *tmp_eval_call_3__locals = NULL;
    PyObject *tmp_eval_call_3__source = NULL;
    PyObject *tmp_eval_call_4__globals = NULL;
    PyObject *tmp_eval_call_4__locals = NULL;
    PyObject *tmp_eval_call_4__source = NULL;
    PyObject *tmp_eval_call_5__globals = NULL;
    PyObject *tmp_eval_call_5__locals = NULL;
    PyObject *tmp_eval_call_5__source = NULL;
    PyObject *tmp_eval_call_6__globals = NULL;
    PyObject *tmp_eval_call_6__locals = NULL;
    PyObject *tmp_eval_call_6__source = NULL;
    PyObject *tmp_eval_call_7__globals = NULL;
    PyObject *tmp_eval_call_7__locals = NULL;
    PyObject *tmp_eval_call_7__source = NULL;
    PyObject *tmp_exec_call_1__globals = NULL;
    PyObject *tmp_exec_call_1__locals = NULL;
    struct Nuitka_FrameObject *frame_158919088c58de14a3074744c1c289e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_158919088c58de14a3074744c1c289e5 = MAKE_MODULE_FRAME( codeobj_158919088c58de14a3074744c1c289e5, module_gi$_compat );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_158919088c58de14a3074744c1c289e5 );
    assert( Py_REFCNT( frame_158919088c58de14a3074744c1c289e5 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___spec__ );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__ );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_assattr_target_1 = tmp_mvar_value_1;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_origin, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_2;
        tmp_assattr_name_2 = Py_True;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___spec__ );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__ );
        }

        CHECK_OBJECT( tmp_mvar_value_2 );
        tmp_assattr_target_2 = tmp_mvar_value_2;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_has_location, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_gi$_compat;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_158919088c58de14a3074744c1c289e5->m_frame.f_lineno = 14;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_False;
        UPDATE_STRING_DICT0( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_PY2, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_False;
        UPDATE_STRING_DICT0( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_PY3, tmp_assign_source_6 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        CHECK_OBJECT( tmp_mvar_value_3 );
        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = Py_True;
            UPDATE_STRING_DICT0( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_PY2, tmp_assign_source_7 );
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_import_name_from_1;
            PyObject *tmp_name_name_2;
            PyObject *tmp_globals_name_2;
            PyObject *tmp_locals_name_2;
            PyObject *tmp_fromlist_name_2;
            PyObject *tmp_level_name_2;
            tmp_name_name_2 = const_str_plain_StringIO;
            tmp_globals_name_2 = (PyObject *)moduledict_gi$_compat;
            tmp_locals_name_2 = Py_None;
            tmp_fromlist_name_2 = const_tuple_str_plain_StringIO_tuple;
            tmp_level_name_2 = const_int_0;
            frame_158919088c58de14a3074744c1c289e5->m_frame.f_lineno = 20;
            tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
            if ( tmp_import_name_from_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 20;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_StringIO );
            Py_DECREF( tmp_import_name_from_1 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 20;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_StringIO, tmp_assign_source_8 );
        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_import_name_from_2;
            PyObject *tmp_name_name_3;
            PyObject *tmp_globals_name_3;
            PyObject *tmp_locals_name_3;
            PyObject *tmp_fromlist_name_3;
            PyObject *tmp_level_name_3;
            tmp_name_name_3 = const_str_plain_UserList;
            tmp_globals_name_3 = (PyObject *)moduledict_gi$_compat;
            tmp_locals_name_3 = Py_None;
            tmp_fromlist_name_3 = const_tuple_str_plain_UserList_tuple;
            tmp_level_name_3 = const_int_0;
            frame_158919088c58de14a3074744c1c289e5->m_frame.f_lineno = 23;
            tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
            if ( tmp_import_name_from_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_UserList );
            Py_DECREF( tmp_import_name_from_2 );
            if ( tmp_assign_source_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_UserList, tmp_assign_source_9 );
        }
        {
            PyObject *tmp_assign_source_10;
            {
                PyObject *tmp_assign_source_11;
                tmp_assign_source_11 = (PyObject *)moduledict_gi$_compat;
                assert( tmp_eval_call_1__locals == NULL );
                Py_INCREF( tmp_assign_source_11 );
                tmp_eval_call_1__locals = tmp_assign_source_11;
            }
            {
                PyObject *tmp_assign_source_12;
                tmp_assign_source_12 = (PyObject *)moduledict_gi$_compat;
                assert( tmp_eval_call_1__globals == NULL );
                Py_INCREF( tmp_assign_source_12 );
                tmp_eval_call_1__globals = tmp_assign_source_12;
            }
            {
                PyObject *tmp_assign_source_13;
                tmp_assign_source_13 = const_str_plain_long;
                assert( tmp_eval_call_1__source == NULL );
                Py_INCREF( tmp_assign_source_13 );
                tmp_eval_call_1__source = tmp_assign_source_13;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_14;
                PyObject *tmp_called_instance_1;
                tmp_called_instance_1 = const_str_plain_long;
                frame_158919088c58de14a3074744c1c289e5->m_frame.f_lineno = 26;
                tmp_assign_source_14 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_strip, &PyTuple_GET_ITEM( const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple, 0 ) );

                if ( tmp_assign_source_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 26;

                    goto try_except_handler_1;
                }
                {
                    PyObject *old = tmp_eval_call_1__source;
                    assert( old != NULL );
                    tmp_eval_call_1__source = tmp_assign_source_14;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_eval_source_1;
                PyObject *tmp_eval_globals_1;
                PyObject *tmp_eval_locals_1;
                PyObject *tmp_eval_compiled_1;
                CHECK_OBJECT( tmp_eval_call_1__source );
                tmp_eval_source_1 = tmp_eval_call_1__source;
                CHECK_OBJECT( tmp_eval_call_1__globals );
                tmp_eval_globals_1 = tmp_eval_call_1__globals;
                CHECK_OBJECT( tmp_eval_call_1__locals );
                tmp_eval_locals_1 = tmp_eval_call_1__locals;
                tmp_eval_compiled_1 = COMPILE_CODE( tmp_eval_source_1, const_str_angle_string, const_str_plain_eval, NULL, NULL, NULL );
                if ( tmp_eval_compiled_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 26;

                    goto try_except_handler_1;
                }
                tmp_assign_source_10 = EVAL_CODE( tmp_eval_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1 );
                Py_DECREF( tmp_eval_compiled_1 );
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 26;

                    goto try_except_handler_1;
                }
                goto try_return_handler_1;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( gi$_compat );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_1:;
            CHECK_OBJECT( (PyObject *)tmp_eval_call_1__globals );
            Py_DECREF( tmp_eval_call_1__globals );
            tmp_eval_call_1__globals = NULL;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_1__locals );
            Py_DECREF( tmp_eval_call_1__locals );
            tmp_eval_call_1__locals = NULL;

            Py_XDECREF( tmp_eval_call_1__source );
            tmp_eval_call_1__source = NULL;

            goto outline_result_1;
            // Exception handler code:
            try_except_handler_1:;
            exception_keeper_type_1 = exception_type;
            exception_keeper_value_1 = exception_value;
            exception_keeper_tb_1 = exception_tb;
            exception_keeper_lineno_1 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_1__globals );
            Py_DECREF( tmp_eval_call_1__globals );
            tmp_eval_call_1__globals = NULL;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_1__locals );
            Py_DECREF( tmp_eval_call_1__locals );
            tmp_eval_call_1__locals = NULL;

            Py_XDECREF( tmp_eval_call_1__source );
            tmp_eval_call_1__source = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto frame_exception_exit_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( gi$_compat );
            return MOD_RETURN_VALUE( NULL );
            outline_result_1:;
            UPDATE_STRING_DICT1( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_long_, tmp_assign_source_10 );
        }
        {
            PyObject *tmp_assign_source_15;
            {
                PyObject *tmp_assign_source_16;
                tmp_assign_source_16 = (PyObject *)moduledict_gi$_compat;
                assert( tmp_eval_call_2__locals == NULL );
                Py_INCREF( tmp_assign_source_16 );
                tmp_eval_call_2__locals = tmp_assign_source_16;
            }
            {
                PyObject *tmp_assign_source_17;
                tmp_assign_source_17 = (PyObject *)moduledict_gi$_compat;
                assert( tmp_eval_call_2__globals == NULL );
                Py_INCREF( tmp_assign_source_17 );
                tmp_eval_call_2__globals = tmp_assign_source_17;
            }
            {
                PyObject *tmp_assign_source_18;
                tmp_assign_source_18 = const_str_digest_6179944d8bb339d712b456a36789f415;
                assert( tmp_eval_call_2__source == NULL );
                Py_INCREF( tmp_assign_source_18 );
                tmp_eval_call_2__source = tmp_assign_source_18;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_19;
                PyObject *tmp_called_instance_2;
                tmp_called_instance_2 = const_str_digest_6179944d8bb339d712b456a36789f415;
                frame_158919088c58de14a3074744c1c289e5->m_frame.f_lineno = 27;
                tmp_assign_source_19 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_strip, &PyTuple_GET_ITEM( const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple, 0 ) );

                if ( tmp_assign_source_19 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 27;

                    goto try_except_handler_2;
                }
                {
                    PyObject *old = tmp_eval_call_2__source;
                    assert( old != NULL );
                    tmp_eval_call_2__source = tmp_assign_source_19;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_eval_source_2;
                PyObject *tmp_eval_globals_2;
                PyObject *tmp_eval_locals_2;
                PyObject *tmp_eval_compiled_2;
                CHECK_OBJECT( tmp_eval_call_2__source );
                tmp_eval_source_2 = tmp_eval_call_2__source;
                CHECK_OBJECT( tmp_eval_call_2__globals );
                tmp_eval_globals_2 = tmp_eval_call_2__globals;
                CHECK_OBJECT( tmp_eval_call_2__locals );
                tmp_eval_locals_2 = tmp_eval_call_2__locals;
                tmp_eval_compiled_2 = COMPILE_CODE( tmp_eval_source_2, const_str_angle_string, const_str_plain_eval, NULL, NULL, NULL );
                if ( tmp_eval_compiled_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 27;

                    goto try_except_handler_2;
                }
                tmp_assign_source_15 = EVAL_CODE( tmp_eval_compiled_2, tmp_eval_globals_2, tmp_eval_locals_2 );
                Py_DECREF( tmp_eval_compiled_2 );
                if ( tmp_assign_source_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 27;

                    goto try_except_handler_2;
                }
                goto try_return_handler_2;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( gi$_compat );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_2:;
            CHECK_OBJECT( (PyObject *)tmp_eval_call_2__globals );
            Py_DECREF( tmp_eval_call_2__globals );
            tmp_eval_call_2__globals = NULL;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_2__locals );
            Py_DECREF( tmp_eval_call_2__locals );
            tmp_eval_call_2__locals = NULL;

            Py_XDECREF( tmp_eval_call_2__source );
            tmp_eval_call_2__source = NULL;

            goto outline_result_2;
            // Exception handler code:
            try_except_handler_2:;
            exception_keeper_type_2 = exception_type;
            exception_keeper_value_2 = exception_value;
            exception_keeper_tb_2 = exception_tb;
            exception_keeper_lineno_2 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_2__globals );
            Py_DECREF( tmp_eval_call_2__globals );
            tmp_eval_call_2__globals = NULL;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_2__locals );
            Py_DECREF( tmp_eval_call_2__locals );
            tmp_eval_call_2__locals = NULL;

            Py_XDECREF( tmp_eval_call_2__source );
            tmp_eval_call_2__source = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto frame_exception_exit_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( gi$_compat );
            return MOD_RETURN_VALUE( NULL );
            outline_result_2:;
            UPDATE_STRING_DICT1( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_15 );
        }
        {
            PyObject *tmp_assign_source_20;
            {
                PyObject *tmp_assign_source_21;
                tmp_assign_source_21 = (PyObject *)moduledict_gi$_compat;
                assert( tmp_eval_call_3__locals == NULL );
                Py_INCREF( tmp_assign_source_21 );
                tmp_eval_call_3__locals = tmp_assign_source_21;
            }
            {
                PyObject *tmp_assign_source_22;
                tmp_assign_source_22 = (PyObject *)moduledict_gi$_compat;
                assert( tmp_eval_call_3__globals == NULL );
                Py_INCREF( tmp_assign_source_22 );
                tmp_eval_call_3__globals = tmp_assign_source_22;
            }
            {
                PyObject *tmp_assign_source_23;
                tmp_assign_source_23 = const_str_digest_1a6288f59e7208b4832970c7a8e4e197;
                assert( tmp_eval_call_3__source == NULL );
                Py_INCREF( tmp_assign_source_23 );
                tmp_eval_call_3__source = tmp_assign_source_23;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_24;
                PyObject *tmp_called_instance_3;
                tmp_called_instance_3 = const_str_digest_1a6288f59e7208b4832970c7a8e4e197;
                frame_158919088c58de14a3074744c1c289e5->m_frame.f_lineno = 28;
                tmp_assign_source_24 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_strip, &PyTuple_GET_ITEM( const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple, 0 ) );

                if ( tmp_assign_source_24 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 28;

                    goto try_except_handler_3;
                }
                {
                    PyObject *old = tmp_eval_call_3__source;
                    assert( old != NULL );
                    tmp_eval_call_3__source = tmp_assign_source_24;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_eval_source_3;
                PyObject *tmp_eval_globals_3;
                PyObject *tmp_eval_locals_3;
                PyObject *tmp_eval_compiled_3;
                CHECK_OBJECT( tmp_eval_call_3__source );
                tmp_eval_source_3 = tmp_eval_call_3__source;
                CHECK_OBJECT( tmp_eval_call_3__globals );
                tmp_eval_globals_3 = tmp_eval_call_3__globals;
                CHECK_OBJECT( tmp_eval_call_3__locals );
                tmp_eval_locals_3 = tmp_eval_call_3__locals;
                tmp_eval_compiled_3 = COMPILE_CODE( tmp_eval_source_3, const_str_angle_string, const_str_plain_eval, NULL, NULL, NULL );
                if ( tmp_eval_compiled_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 28;

                    goto try_except_handler_3;
                }
                tmp_assign_source_20 = EVAL_CODE( tmp_eval_compiled_3, tmp_eval_globals_3, tmp_eval_locals_3 );
                Py_DECREF( tmp_eval_compiled_3 );
                if ( tmp_assign_source_20 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 28;

                    goto try_except_handler_3;
                }
                goto try_return_handler_3;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( gi$_compat );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_3:;
            CHECK_OBJECT( (PyObject *)tmp_eval_call_3__globals );
            Py_DECREF( tmp_eval_call_3__globals );
            tmp_eval_call_3__globals = NULL;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_3__locals );
            Py_DECREF( tmp_eval_call_3__locals );
            tmp_eval_call_3__locals = NULL;

            Py_XDECREF( tmp_eval_call_3__source );
            tmp_eval_call_3__source = NULL;

            goto outline_result_3;
            // Exception handler code:
            try_except_handler_3:;
            exception_keeper_type_3 = exception_type;
            exception_keeper_value_3 = exception_value;
            exception_keeper_tb_3 = exception_tb;
            exception_keeper_lineno_3 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_3__globals );
            Py_DECREF( tmp_eval_call_3__globals );
            tmp_eval_call_3__globals = NULL;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_3__locals );
            Py_DECREF( tmp_eval_call_3__locals );
            tmp_eval_call_3__locals = NULL;

            Py_XDECREF( tmp_eval_call_3__source );
            tmp_eval_call_3__source = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto frame_exception_exit_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( gi$_compat );
            return MOD_RETURN_VALUE( NULL );
            outline_result_3:;
            UPDATE_STRING_DICT1( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_string_types, tmp_assign_source_20 );
        }
        {
            PyObject *tmp_assign_source_25;
            {
                PyObject *tmp_assign_source_26;
                tmp_assign_source_26 = (PyObject *)moduledict_gi$_compat;
                assert( tmp_eval_call_4__locals == NULL );
                Py_INCREF( tmp_assign_source_26 );
                tmp_eval_call_4__locals = tmp_assign_source_26;
            }
            {
                PyObject *tmp_assign_source_27;
                tmp_assign_source_27 = (PyObject *)moduledict_gi$_compat;
                assert( tmp_eval_call_4__globals == NULL );
                Py_INCREF( tmp_assign_source_27 );
                tmp_eval_call_4__globals = tmp_assign_source_27;
            }
            {
                PyObject *tmp_assign_source_28;
                tmp_assign_source_28 = const_str_plain_unicode;
                assert( tmp_eval_call_4__source == NULL );
                Py_INCREF( tmp_assign_source_28 );
                tmp_eval_call_4__source = tmp_assign_source_28;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_29;
                PyObject *tmp_called_instance_4;
                tmp_called_instance_4 = const_str_plain_unicode;
                frame_158919088c58de14a3074744c1c289e5->m_frame.f_lineno = 29;
                tmp_assign_source_29 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_strip, &PyTuple_GET_ITEM( const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple, 0 ) );

                if ( tmp_assign_source_29 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 29;

                    goto try_except_handler_4;
                }
                {
                    PyObject *old = tmp_eval_call_4__source;
                    assert( old != NULL );
                    tmp_eval_call_4__source = tmp_assign_source_29;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_eval_source_4;
                PyObject *tmp_eval_globals_4;
                PyObject *tmp_eval_locals_4;
                PyObject *tmp_eval_compiled_4;
                CHECK_OBJECT( tmp_eval_call_4__source );
                tmp_eval_source_4 = tmp_eval_call_4__source;
                CHECK_OBJECT( tmp_eval_call_4__globals );
                tmp_eval_globals_4 = tmp_eval_call_4__globals;
                CHECK_OBJECT( tmp_eval_call_4__locals );
                tmp_eval_locals_4 = tmp_eval_call_4__locals;
                tmp_eval_compiled_4 = COMPILE_CODE( tmp_eval_source_4, const_str_angle_string, const_str_plain_eval, NULL, NULL, NULL );
                if ( tmp_eval_compiled_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 29;

                    goto try_except_handler_4;
                }
                tmp_assign_source_25 = EVAL_CODE( tmp_eval_compiled_4, tmp_eval_globals_4, tmp_eval_locals_4 );
                Py_DECREF( tmp_eval_compiled_4 );
                if ( tmp_assign_source_25 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 29;

                    goto try_except_handler_4;
                }
                goto try_return_handler_4;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( gi$_compat );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_4:;
            CHECK_OBJECT( (PyObject *)tmp_eval_call_4__globals );
            Py_DECREF( tmp_eval_call_4__globals );
            tmp_eval_call_4__globals = NULL;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_4__locals );
            Py_DECREF( tmp_eval_call_4__locals );
            tmp_eval_call_4__locals = NULL;

            Py_XDECREF( tmp_eval_call_4__source );
            tmp_eval_call_4__source = NULL;

            goto outline_result_4;
            // Exception handler code:
            try_except_handler_4:;
            exception_keeper_type_4 = exception_type;
            exception_keeper_value_4 = exception_value;
            exception_keeper_tb_4 = exception_tb;
            exception_keeper_lineno_4 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_4__globals );
            Py_DECREF( tmp_eval_call_4__globals );
            tmp_eval_call_4__globals = NULL;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_4__locals );
            Py_DECREF( tmp_eval_call_4__locals );
            tmp_eval_call_4__locals = NULL;

            Py_XDECREF( tmp_eval_call_4__source );
            tmp_eval_call_4__source = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto frame_exception_exit_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( gi$_compat );
            return MOD_RETURN_VALUE( NULL );
            outline_result_4:;
            UPDATE_STRING_DICT1( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_text_type, tmp_assign_source_25 );
        }
        {
            PyObject *tmp_assign_source_30;
            {
                PyObject *tmp_assign_source_31;
                tmp_assign_source_31 = (PyObject *)moduledict_gi$_compat;
                assert( tmp_eval_call_5__locals == NULL );
                Py_INCREF( tmp_assign_source_31 );
                tmp_eval_call_5__locals = tmp_assign_source_31;
            }
            {
                PyObject *tmp_assign_source_32;
                tmp_assign_source_32 = (PyObject *)moduledict_gi$_compat;
                assert( tmp_eval_call_5__globals == NULL );
                Py_INCREF( tmp_assign_source_32 );
                tmp_eval_call_5__globals = tmp_assign_source_32;
            }
            {
                PyObject *tmp_assign_source_33;
                tmp_assign_source_33 = const_str_plain_reload;
                assert( tmp_eval_call_5__source == NULL );
                Py_INCREF( tmp_assign_source_33 );
                tmp_eval_call_5__source = tmp_assign_source_33;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_34;
                PyObject *tmp_called_instance_5;
                tmp_called_instance_5 = const_str_plain_reload;
                frame_158919088c58de14a3074744c1c289e5->m_frame.f_lineno = 31;
                tmp_assign_source_34 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_strip, &PyTuple_GET_ITEM( const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple, 0 ) );

                if ( tmp_assign_source_34 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 31;

                    goto try_except_handler_5;
                }
                {
                    PyObject *old = tmp_eval_call_5__source;
                    assert( old != NULL );
                    tmp_eval_call_5__source = tmp_assign_source_34;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_eval_source_5;
                PyObject *tmp_eval_globals_5;
                PyObject *tmp_eval_locals_5;
                PyObject *tmp_eval_compiled_5;
                CHECK_OBJECT( tmp_eval_call_5__source );
                tmp_eval_source_5 = tmp_eval_call_5__source;
                CHECK_OBJECT( tmp_eval_call_5__globals );
                tmp_eval_globals_5 = tmp_eval_call_5__globals;
                CHECK_OBJECT( tmp_eval_call_5__locals );
                tmp_eval_locals_5 = tmp_eval_call_5__locals;
                tmp_eval_compiled_5 = COMPILE_CODE( tmp_eval_source_5, const_str_angle_string, const_str_plain_eval, NULL, NULL, NULL );
                if ( tmp_eval_compiled_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 31;

                    goto try_except_handler_5;
                }
                tmp_assign_source_30 = EVAL_CODE( tmp_eval_compiled_5, tmp_eval_globals_5, tmp_eval_locals_5 );
                Py_DECREF( tmp_eval_compiled_5 );
                if ( tmp_assign_source_30 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 31;

                    goto try_except_handler_5;
                }
                goto try_return_handler_5;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( gi$_compat );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_5:;
            CHECK_OBJECT( (PyObject *)tmp_eval_call_5__globals );
            Py_DECREF( tmp_eval_call_5__globals );
            tmp_eval_call_5__globals = NULL;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_5__locals );
            Py_DECREF( tmp_eval_call_5__locals );
            tmp_eval_call_5__locals = NULL;

            Py_XDECREF( tmp_eval_call_5__source );
            tmp_eval_call_5__source = NULL;

            goto outline_result_5;
            // Exception handler code:
            try_except_handler_5:;
            exception_keeper_type_5 = exception_type;
            exception_keeper_value_5 = exception_value;
            exception_keeper_tb_5 = exception_tb;
            exception_keeper_lineno_5 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_5__globals );
            Py_DECREF( tmp_eval_call_5__globals );
            tmp_eval_call_5__globals = NULL;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_5__locals );
            Py_DECREF( tmp_eval_call_5__locals );
            tmp_eval_call_5__locals = NULL;

            Py_XDECREF( tmp_eval_call_5__source );
            tmp_eval_call_5__source = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_5;
            exception_value = exception_keeper_value_5;
            exception_tb = exception_keeper_tb_5;
            exception_lineno = exception_keeper_lineno_5;

            goto frame_exception_exit_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( gi$_compat );
            return MOD_RETURN_VALUE( NULL );
            outline_result_5:;
            UPDATE_STRING_DICT1( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_reload, tmp_assign_source_30 );
        }
        {
            PyObject *tmp_assign_source_35;
            {
                PyObject *tmp_assign_source_36;
                tmp_assign_source_36 = (PyObject *)moduledict_gi$_compat;
                assert( tmp_eval_call_6__locals == NULL );
                Py_INCREF( tmp_assign_source_36 );
                tmp_eval_call_6__locals = tmp_assign_source_36;
            }
            {
                PyObject *tmp_assign_source_37;
                tmp_assign_source_37 = (PyObject *)moduledict_gi$_compat;
                assert( tmp_eval_call_6__globals == NULL );
                Py_INCREF( tmp_assign_source_37 );
                tmp_eval_call_6__globals = tmp_assign_source_37;
            }
            {
                PyObject *tmp_assign_source_38;
                tmp_assign_source_38 = const_str_plain_xrange;
                assert( tmp_eval_call_6__source == NULL );
                Py_INCREF( tmp_assign_source_38 );
                tmp_eval_call_6__source = tmp_assign_source_38;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_39;
                PyObject *tmp_called_instance_6;
                tmp_called_instance_6 = const_str_plain_xrange;
                frame_158919088c58de14a3074744c1c289e5->m_frame.f_lineno = 32;
                tmp_assign_source_39 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_strip, &PyTuple_GET_ITEM( const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple, 0 ) );

                if ( tmp_assign_source_39 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 32;

                    goto try_except_handler_6;
                }
                {
                    PyObject *old = tmp_eval_call_6__source;
                    assert( old != NULL );
                    tmp_eval_call_6__source = tmp_assign_source_39;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_eval_source_6;
                PyObject *tmp_eval_globals_6;
                PyObject *tmp_eval_locals_6;
                PyObject *tmp_eval_compiled_6;
                CHECK_OBJECT( tmp_eval_call_6__source );
                tmp_eval_source_6 = tmp_eval_call_6__source;
                CHECK_OBJECT( tmp_eval_call_6__globals );
                tmp_eval_globals_6 = tmp_eval_call_6__globals;
                CHECK_OBJECT( tmp_eval_call_6__locals );
                tmp_eval_locals_6 = tmp_eval_call_6__locals;
                tmp_eval_compiled_6 = COMPILE_CODE( tmp_eval_source_6, const_str_angle_string, const_str_plain_eval, NULL, NULL, NULL );
                if ( tmp_eval_compiled_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 32;

                    goto try_except_handler_6;
                }
                tmp_assign_source_35 = EVAL_CODE( tmp_eval_compiled_6, tmp_eval_globals_6, tmp_eval_locals_6 );
                Py_DECREF( tmp_eval_compiled_6 );
                if ( tmp_assign_source_35 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 32;

                    goto try_except_handler_6;
                }
                goto try_return_handler_6;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( gi$_compat );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_6:;
            CHECK_OBJECT( (PyObject *)tmp_eval_call_6__globals );
            Py_DECREF( tmp_eval_call_6__globals );
            tmp_eval_call_6__globals = NULL;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_6__locals );
            Py_DECREF( tmp_eval_call_6__locals );
            tmp_eval_call_6__locals = NULL;

            Py_XDECREF( tmp_eval_call_6__source );
            tmp_eval_call_6__source = NULL;

            goto outline_result_6;
            // Exception handler code:
            try_except_handler_6:;
            exception_keeper_type_6 = exception_type;
            exception_keeper_value_6 = exception_value;
            exception_keeper_tb_6 = exception_tb;
            exception_keeper_lineno_6 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_6__globals );
            Py_DECREF( tmp_eval_call_6__globals );
            tmp_eval_call_6__globals = NULL;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_6__locals );
            Py_DECREF( tmp_eval_call_6__locals );
            tmp_eval_call_6__locals = NULL;

            Py_XDECREF( tmp_eval_call_6__source );
            tmp_eval_call_6__source = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_6;
            exception_value = exception_keeper_value_6;
            exception_tb = exception_keeper_tb_6;
            exception_lineno = exception_keeper_lineno_6;

            goto frame_exception_exit_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( gi$_compat );
            return MOD_RETURN_VALUE( NULL );
            outline_result_6:;
            UPDATE_STRING_DICT1( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_xrange, tmp_assign_source_35 );
        }
        {
            PyObject *tmp_assign_source_40;
            {
                PyObject *tmp_assign_source_41;
                tmp_assign_source_41 = (PyObject *)moduledict_gi$_compat;
                assert( tmp_eval_call_7__locals == NULL );
                Py_INCREF( tmp_assign_source_41 );
                tmp_eval_call_7__locals = tmp_assign_source_41;
            }
            {
                PyObject *tmp_assign_source_42;
                tmp_assign_source_42 = (PyObject *)moduledict_gi$_compat;
                assert( tmp_eval_call_7__globals == NULL );
                Py_INCREF( tmp_assign_source_42 );
                tmp_eval_call_7__globals = tmp_assign_source_42;
            }
            {
                PyObject *tmp_assign_source_43;
                tmp_assign_source_43 = const_str_plain_cmp;
                assert( tmp_eval_call_7__source == NULL );
                Py_INCREF( tmp_assign_source_43 );
                tmp_eval_call_7__source = tmp_assign_source_43;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_44;
                PyObject *tmp_called_instance_7;
                tmp_called_instance_7 = const_str_plain_cmp;
                frame_158919088c58de14a3074744c1c289e5->m_frame.f_lineno = 33;
                tmp_assign_source_44 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_strip, &PyTuple_GET_ITEM( const_tuple_str_digest_ac02ab0238280e341b2aff0eed15b128_tuple, 0 ) );

                if ( tmp_assign_source_44 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 33;

                    goto try_except_handler_7;
                }
                {
                    PyObject *old = tmp_eval_call_7__source;
                    assert( old != NULL );
                    tmp_eval_call_7__source = tmp_assign_source_44;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_eval_source_7;
                PyObject *tmp_eval_globals_7;
                PyObject *tmp_eval_locals_7;
                PyObject *tmp_eval_compiled_7;
                CHECK_OBJECT( tmp_eval_call_7__source );
                tmp_eval_source_7 = tmp_eval_call_7__source;
                CHECK_OBJECT( tmp_eval_call_7__globals );
                tmp_eval_globals_7 = tmp_eval_call_7__globals;
                CHECK_OBJECT( tmp_eval_call_7__locals );
                tmp_eval_locals_7 = tmp_eval_call_7__locals;
                tmp_eval_compiled_7 = COMPILE_CODE( tmp_eval_source_7, const_str_angle_string, const_str_plain_eval, NULL, NULL, NULL );
                if ( tmp_eval_compiled_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 33;

                    goto try_except_handler_7;
                }
                tmp_assign_source_40 = EVAL_CODE( tmp_eval_compiled_7, tmp_eval_globals_7, tmp_eval_locals_7 );
                Py_DECREF( tmp_eval_compiled_7 );
                if ( tmp_assign_source_40 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 33;

                    goto try_except_handler_7;
                }
                goto try_return_handler_7;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( gi$_compat );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_7:;
            CHECK_OBJECT( (PyObject *)tmp_eval_call_7__globals );
            Py_DECREF( tmp_eval_call_7__globals );
            tmp_eval_call_7__globals = NULL;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_7__locals );
            Py_DECREF( tmp_eval_call_7__locals );
            tmp_eval_call_7__locals = NULL;

            Py_XDECREF( tmp_eval_call_7__source );
            tmp_eval_call_7__source = NULL;

            goto outline_result_7;
            // Exception handler code:
            try_except_handler_7:;
            exception_keeper_type_7 = exception_type;
            exception_keeper_value_7 = exception_value;
            exception_keeper_tb_7 = exception_tb;
            exception_keeper_lineno_7 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_7__globals );
            Py_DECREF( tmp_eval_call_7__globals );
            tmp_eval_call_7__globals = NULL;

            CHECK_OBJECT( (PyObject *)tmp_eval_call_7__locals );
            Py_DECREF( tmp_eval_call_7__locals );
            tmp_eval_call_7__locals = NULL;

            Py_XDECREF( tmp_eval_call_7__source );
            tmp_eval_call_7__source = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_7;
            exception_value = exception_keeper_value_7;
            exception_tb = exception_keeper_tb_7;
            exception_lineno = exception_keeper_lineno_7;

            goto frame_exception_exit_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( gi$_compat );
            return MOD_RETURN_VALUE( NULL );
            outline_result_7:;
            UPDATE_STRING_DICT1( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_cmp, tmp_assign_source_40 );
        }
        {
            PyObject *tmp_outline_return_value_1;
            {
                PyObject *tmp_assign_source_45;
                tmp_assign_source_45 = (PyObject *)moduledict_gi$_compat;
                assert( tmp_exec_call_1__locals == NULL );
                Py_INCREF( tmp_assign_source_45 );
                tmp_exec_call_1__locals = tmp_assign_source_45;
            }
            {
                PyObject *tmp_assign_source_46;
                tmp_assign_source_46 = (PyObject *)moduledict_gi$_compat;
                assert( tmp_exec_call_1__globals == NULL );
                Py_INCREF( tmp_assign_source_46 );
                tmp_exec_call_1__globals = tmp_assign_source_46;
            }
            // Tried code:
            {
                PyObject *tmp_eval_source_8;
                PyObject *tmp_eval_globals_8;
                PyObject *tmp_eval_locals_8;
                PyObject *tmp_eval_compiled_8;
                tmp_eval_source_8 = const_str_digest_58ff6ccfc11c8774c9d298b85af436df;
                CHECK_OBJECT( tmp_exec_call_1__globals );
                tmp_eval_globals_8 = tmp_exec_call_1__globals;
                CHECK_OBJECT( tmp_exec_call_1__locals );
                tmp_eval_locals_8 = tmp_exec_call_1__locals;
                tmp_eval_compiled_8 = COMPILE_CODE( tmp_eval_source_8, const_str_angle_string, const_str_plain_exec, NULL, NULL, NULL );
                if ( tmp_eval_compiled_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 35;

                    goto try_except_handler_8;
                }
                tmp_outline_return_value_1 = EVAL_CODE( tmp_eval_compiled_8, tmp_eval_globals_8, tmp_eval_locals_8 );
                Py_DECREF( tmp_eval_compiled_8 );
                if ( tmp_outline_return_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 35;

                    goto try_except_handler_8;
                }
                goto try_return_handler_8;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( gi$_compat );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_8:;
            CHECK_OBJECT( (PyObject *)tmp_exec_call_1__globals );
            Py_DECREF( tmp_exec_call_1__globals );
            tmp_exec_call_1__globals = NULL;

            CHECK_OBJECT( (PyObject *)tmp_exec_call_1__locals );
            Py_DECREF( tmp_exec_call_1__locals );
            tmp_exec_call_1__locals = NULL;

            goto outline_result_8;
            // Exception handler code:
            try_except_handler_8:;
            exception_keeper_type_8 = exception_type;
            exception_keeper_value_8 = exception_value;
            exception_keeper_tb_8 = exception_tb;
            exception_keeper_lineno_8 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_exec_call_1__globals );
            Py_DECREF( tmp_exec_call_1__globals );
            tmp_exec_call_1__globals = NULL;

            CHECK_OBJECT( (PyObject *)tmp_exec_call_1__locals );
            Py_DECREF( tmp_exec_call_1__locals );
            tmp_exec_call_1__locals = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_8;
            exception_value = exception_keeper_value_8;
            exception_tb = exception_keeper_tb_8;
            exception_lineno = exception_keeper_lineno_8;

            goto frame_exception_exit_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( gi$_compat );
            return MOD_RETURN_VALUE( NULL );
            outline_result_8:;
            Py_DECREF( tmp_outline_return_value_1 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_47;
            tmp_assign_source_47 = Py_True;
            UPDATE_STRING_DICT0( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_PY3, tmp_assign_source_47 );
        }
        {
            PyObject *tmp_assign_source_48;
            PyObject *tmp_import_name_from_3;
            PyObject *tmp_name_name_4;
            PyObject *tmp_globals_name_4;
            PyObject *tmp_locals_name_4;
            PyObject *tmp_fromlist_name_4;
            PyObject *tmp_level_name_4;
            tmp_name_name_4 = const_str_plain_io;
            tmp_globals_name_4 = (PyObject *)moduledict_gi$_compat;
            tmp_locals_name_4 = Py_None;
            tmp_fromlist_name_4 = const_tuple_str_plain_StringIO_tuple;
            tmp_level_name_4 = const_int_0;
            frame_158919088c58de14a3074744c1c289e5->m_frame.f_lineno = 39;
            tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
            if ( tmp_import_name_from_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_48 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_StringIO );
            Py_DECREF( tmp_import_name_from_3 );
            if ( tmp_assign_source_48 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_StringIO, tmp_assign_source_48 );
        }
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_import_name_from_4;
            PyObject *tmp_name_name_5;
            PyObject *tmp_globals_name_5;
            PyObject *tmp_locals_name_5;
            PyObject *tmp_fromlist_name_5;
            PyObject *tmp_level_name_5;
            tmp_name_name_5 = const_str_plain_collections;
            tmp_globals_name_5 = (PyObject *)moduledict_gi$_compat;
            tmp_locals_name_5 = Py_None;
            tmp_fromlist_name_5 = const_tuple_str_plain_UserList_tuple;
            tmp_level_name_5 = const_int_0;
            frame_158919088c58de14a3074744c1c289e5->m_frame.f_lineno = 42;
            tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
            if ( tmp_import_name_from_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_49 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_UserList );
            Py_DECREF( tmp_import_name_from_4 );
            if ( tmp_assign_source_49 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_UserList, tmp_assign_source_49 );
        }
        {
            PyObject *tmp_assign_source_50;
            tmp_assign_source_50 = (PyObject *)&PyLong_Type;
            UPDATE_STRING_DICT0( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_long_, tmp_assign_source_50 );
        }
        {
            PyObject *tmp_assign_source_51;
            tmp_assign_source_51 = const_tuple_type_int_tuple;
            UPDATE_STRING_DICT0( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_51 );
        }
        {
            PyObject *tmp_assign_source_52;
            tmp_assign_source_52 = const_tuple_type_str_tuple;
            UPDATE_STRING_DICT0( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_string_types, tmp_assign_source_52 );
        }
        {
            PyObject *tmp_assign_source_53;
            tmp_assign_source_53 = (PyObject *)&PyUnicode_Type;
            UPDATE_STRING_DICT0( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_text_type, tmp_assign_source_53 );
        }
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_import_name_from_5;
            PyObject *tmp_name_name_6;
            PyObject *tmp_globals_name_6;
            PyObject *tmp_locals_name_6;
            PyObject *tmp_fromlist_name_6;
            PyObject *tmp_level_name_6;
            tmp_name_name_6 = const_str_plain_importlib;
            tmp_globals_name_6 = (PyObject *)moduledict_gi$_compat;
            tmp_locals_name_6 = Py_None;
            tmp_fromlist_name_6 = const_tuple_str_plain_reload_tuple;
            tmp_level_name_6 = const_int_0;
            frame_158919088c58de14a3074744c1c289e5->m_frame.f_lineno = 50;
            tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
            if ( tmp_import_name_from_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_54 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_reload );
            Py_DECREF( tmp_import_name_from_5 );
            if ( tmp_assign_source_54 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_reload, tmp_assign_source_54 );
        }
        {
            PyObject *tmp_assign_source_55;
            tmp_assign_source_55 = (PyObject *)&PyRange_Type;
            UPDATE_STRING_DICT0( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_xrange, tmp_assign_source_55 );
        }
        {
            PyObject *tmp_assign_source_56;
            tmp_assign_source_56 = MAKE_FUNCTION_gi$_compat$$$function_1_lambda(  );



            UPDATE_STRING_DICT1( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_cmp, tmp_assign_source_56 );
        }
        {
            PyObject *tmp_assign_source_57;
            tmp_assign_source_57 = MAKE_FUNCTION_gi$_compat$$$function_2_reraise(  );



            UPDATE_STRING_DICT1( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain_reraise, tmp_assign_source_57 );
        }
        branch_end_1:;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_158919088c58de14a3074744c1c289e5 );
#endif
    popFrameStack();

    assertFrameObject( frame_158919088c58de14a3074744c1c289e5 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_158919088c58de14a3074744c1c289e5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_158919088c58de14a3074744c1c289e5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_158919088c58de14a3074744c1c289e5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_158919088c58de14a3074744c1c289e5, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_gi$_compat, (Nuitka_StringObject *)const_str_plain___path__ );

        if (path_value && PyList_CheckExact(path_value) && PyList_Size(path_value) > 0)
        {
            PyObject *path_element = PyList_GetItem( path_value, 0 );

            PyObject *path_importer_cache = PySys_GetObject((char *)"path_importer_cache");
            CHECK_OBJECT( path_importer_cache );

            int res = PyDict_SetItem( path_importer_cache, path_element, (PyObject *)&Nuitka_Loader_Type );
            assert( res == 0 );
        }
    }
#endif
#endif

    return MOD_RETURN_VALUE( module_gi$_compat );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
