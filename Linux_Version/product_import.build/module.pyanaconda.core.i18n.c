/* Generated code for Python module 'pyanaconda.core.i18n'
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

/* The "_module_pyanaconda$core$i18n" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyanaconda$core$i18n;
PyDictObject *moduledict_pyanaconda$core$i18n;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_a22a95a8a1458c25ae4bc5ec7d1fc8ef;
static PyObject *const_str_plain_fallback;
static PyObject *const_tuple_str_plain_c_str_plain_x_tuple;
static PyObject *const_str_plain_ctxid;
static PyObject *const_str_plain_msgctxt;
extern PyObject *const_str_plain___spec__;
static PyObject *const_list_830d0364cfa54296e4e01dcf682d4b05_list;
static PyObject *const_tuple_98f87f734f9fb1ab67172f0d908a1c6d_tuple;
static PyObject *const_str_plain_z;
extern PyObject *const_tuple_str_plain_x_tuple;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_y;
extern PyObject *const_str_digest_6807157bfb6aeb31712b82d637fd949a;
static PyObject *const_dict_473c2e80bee00322efee381030636345;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_248bf1bbbd8f85d18c457585c435999c;
static PyObject *const_str_plain_n;
static PyObject *const_str_plain_N_;
static PyObject *const_str_plain_msgid;
extern PyObject *const_int_0;
static PyObject *const_str_plain_ngettext;
static PyObject *const_str_plain_gettext;
static PyObject *const_str_plain_msgid_plural;
static PyObject *const_str_plain_P_;
static PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_z_tuple;
static PyObject *const_tuple_6f48abd8137833d35d208780e491b470_tuple;
extern PyObject *const_str_plain_origin;
static PyObject *const_tuple_str_plain_anaconda_tuple;
extern PyObject *const_str_plain_x;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_c;
static PyObject *const_str_plain_CP_;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_C_;
extern PyObject *const_str_plain_anaconda;
static PyObject *const_str_plain_CN_;
static PyObject *const_str_plain_translation;
extern PyObject *const_str_angle_lambda;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_8f81abcc758bd7d49237bccd59957fbf;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_a22a95a8a1458c25ae4bc5ec7d1fc8ef = UNSTREAM_STRING_ASCII( &constant_bin[ 62468 ], 29, 0 );
    const_str_plain_fallback = UNSTREAM_STRING_ASCII( &constant_bin[ 62497 ], 8, 1 );
    const_tuple_str_plain_c_str_plain_x_tuple = PyTuple_New( 2 );
    const_str_plain_c = UNSTREAM_STRING_ASCII( &constant_bin[ 97 ], 1, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_x_tuple, 0, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_x_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain_ctxid = UNSTREAM_STRING_ASCII( &constant_bin[ 62505 ], 5, 1 );
    const_str_plain_msgctxt = UNSTREAM_STRING_ASCII( &constant_bin[ 62510 ], 7, 1 );
    const_list_830d0364cfa54296e4e01dcf682d4b05_list = PyList_New( 6 );
    PyList_SET_ITEM( const_list_830d0364cfa54296e4e01dcf682d4b05_list, 0, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    const_str_plain_N_ = UNSTREAM_STRING_ASCII( &constant_bin[ 3386 ], 2, 1 );
    PyList_SET_ITEM( const_list_830d0364cfa54296e4e01dcf682d4b05_list, 1, const_str_plain_N_ ); Py_INCREF( const_str_plain_N_ );
    const_str_plain_P_ = UNSTREAM_STRING_ASCII( &constant_bin[ 62517 ], 2, 1 );
    PyList_SET_ITEM( const_list_830d0364cfa54296e4e01dcf682d4b05_list, 2, const_str_plain_P_ ); Py_INCREF( const_str_plain_P_ );
    const_str_plain_C_ = UNSTREAM_STRING_ASCII( &constant_bin[ 62519 ], 2, 1 );
    PyList_SET_ITEM( const_list_830d0364cfa54296e4e01dcf682d4b05_list, 3, const_str_plain_C_ ); Py_INCREF( const_str_plain_C_ );
    const_str_plain_CN_ = UNSTREAM_STRING_ASCII( &constant_bin[ 62521 ], 3, 1 );
    PyList_SET_ITEM( const_list_830d0364cfa54296e4e01dcf682d4b05_list, 4, const_str_plain_CN_ ); Py_INCREF( const_str_plain_CN_ );
    const_str_plain_CP_ = UNSTREAM_STRING_ASCII( &constant_bin[ 62524 ], 3, 1 );
    PyList_SET_ITEM( const_list_830d0364cfa54296e4e01dcf682d4b05_list, 5, const_str_plain_CP_ ); Py_INCREF( const_str_plain_CP_ );
    const_tuple_98f87f734f9fb1ab67172f0d908a1c6d_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_98f87f734f9fb1ab67172f0d908a1c6d_tuple, 0, const_str_plain_msgctxt ); Py_INCREF( const_str_plain_msgctxt );
    const_str_plain_msgid = UNSTREAM_STRING_ASCII( &constant_bin[ 62527 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_98f87f734f9fb1ab67172f0d908a1c6d_tuple, 1, const_str_plain_msgid ); Py_INCREF( const_str_plain_msgid );
    const_str_plain_msgid_plural = UNSTREAM_STRING_ASCII( &constant_bin[ 62532 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_98f87f734f9fb1ab67172f0d908a1c6d_tuple, 2, const_str_plain_msgid_plural ); Py_INCREF( const_str_plain_msgid_plural );
    const_str_plain_n = UNSTREAM_STRING_ASCII( &constant_bin[ 3 ], 1, 1 );
    PyTuple_SET_ITEM( const_tuple_98f87f734f9fb1ab67172f0d908a1c6d_tuple, 3, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_98f87f734f9fb1ab67172f0d908a1c6d_tuple, 4, const_str_plain_ctxid ); Py_INCREF( const_str_plain_ctxid );
    const_str_plain_translation = UNSTREAM_STRING_ASCII( &constant_bin[ 62544 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_98f87f734f9fb1ab67172f0d908a1c6d_tuple, 5, const_str_plain_translation ); Py_INCREF( const_str_plain_translation );
    const_str_plain_z = UNSTREAM_STRING_ASCII( &constant_bin[ 673 ], 1, 1 );
    const_str_plain_y = UNSTREAM_STRING_ASCII( &constant_bin[ 108 ], 1, 1 );
    const_dict_473c2e80bee00322efee381030636345 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_473c2e80bee00322efee381030636345, const_str_plain_fallback, Py_True );
    assert( PyDict_Size( const_dict_473c2e80bee00322efee381030636345 ) == 1 );
    const_str_digest_248bf1bbbd8f85d18c457585c435999c = UNSTREAM_STRING_ASCII( &constant_bin[ 62555 ], 23, 0 );
    const_str_plain_ngettext = UNSTREAM_STRING_ASCII( &constant_bin[ 62578 ], 8, 1 );
    const_str_plain_gettext = UNSTREAM_STRING_ASCII( &constant_bin[ 62579 ], 7, 1 );
    const_tuple_str_plain_x_str_plain_y_str_plain_z_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_y_str_plain_z_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_y_str_plain_z_tuple, 1, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_y_str_plain_z_tuple, 2, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    const_tuple_6f48abd8137833d35d208780e491b470_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_6f48abd8137833d35d208780e491b470_tuple, 0, const_str_plain_msgctxt ); Py_INCREF( const_str_plain_msgctxt );
    PyTuple_SET_ITEM( const_tuple_6f48abd8137833d35d208780e491b470_tuple, 1, const_str_plain_msgid ); Py_INCREF( const_str_plain_msgid );
    PyTuple_SET_ITEM( const_tuple_6f48abd8137833d35d208780e491b470_tuple, 2, const_str_plain_ctxid ); Py_INCREF( const_str_plain_ctxid );
    PyTuple_SET_ITEM( const_tuple_6f48abd8137833d35d208780e491b470_tuple, 3, const_str_plain_translation ); Py_INCREF( const_str_plain_translation );
    const_tuple_str_plain_anaconda_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_anaconda_tuple, 0, const_str_plain_anaconda ); Py_INCREF( const_str_plain_anaconda );
    const_str_digest_8f81abcc758bd7d49237bccd59957fbf = UNSTREAM_STRING_ASCII( &constant_bin[ 62586 ], 5, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyanaconda$core$i18n( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f730620f5ee989aac193fa77c67d6f4a;
static PyCodeObject *codeobj_d765fe45db9ef7595d660bb43896d023;
static PyCodeObject *codeobj_fdd80ad7539722ce2ee1767ffdb93d5a;
static PyCodeObject *codeobj_480615cbf52dc323ba5e9ee5031489a0;
static PyCodeObject *codeobj_d7b69a6e2471cfb718b957956bfa223e;
static PyCodeObject *codeobj_7c2a651ec1ba148f1aa253ff463e3423;
static PyCodeObject *codeobj_53cbd7eb6b277b0842ed240aae366bf7;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_248bf1bbbd8f85d18c457585c435999c );
    codeobj_f730620f5ee989aac193fa77c67d6f4a = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 24, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d765fe45db9ef7595d660bb43896d023 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 25, const_tuple_str_plain_x_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fdd80ad7539722ce2ee1767ffdb93d5a = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 26, const_tuple_str_plain_x_str_plain_y_str_plain_z_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_480615cbf52dc323ba5e9ee5031489a0 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 43, const_tuple_str_plain_c_str_plain_x_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d7b69a6e2471cfb718b957956bfa223e = MAKE_CODEOBJ( module_filename_obj, const_str_digest_a22a95a8a1458c25ae4bc5ec7d1fc8ef, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_7c2a651ec1ba148f1aa253ff463e3423 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CP_, 46, const_tuple_98f87f734f9fb1ab67172f0d908a1c6d_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_53cbd7eb6b277b0842ed240aae366bf7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_C_, 32, const_tuple_6f48abd8137833d35d208780e491b470_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_pyanaconda$core$i18n$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_pyanaconda$core$i18n$$$function_2_lambda(  );


static PyObject *MAKE_FUNCTION_pyanaconda$core$i18n$$$function_3_lambda(  );


static PyObject *MAKE_FUNCTION_pyanaconda$core$i18n$$$function_4_C_(  );


static PyObject *MAKE_FUNCTION_pyanaconda$core$i18n$$$function_5_lambda(  );


static PyObject *MAKE_FUNCTION_pyanaconda$core$i18n$$$function_6_CP_(  );


// The module function definitions.
static PyObject *impl_pyanaconda$core$i18n$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_x );
    tmp_return_value = par_x;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyanaconda$core$i18n$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyanaconda$core$i18n$$$function_1_lambda );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyanaconda$core$i18n$$$function_2_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_d765fe45db9ef7595d660bb43896d023;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d765fe45db9ef7595d660bb43896d023 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d765fe45db9ef7595d660bb43896d023, codeobj_d765fe45db9ef7595d660bb43896d023, module_pyanaconda$core$i18n, sizeof(void *) );
    frame_d765fe45db9ef7595d660bb43896d023 = cache_frame_d765fe45db9ef7595d660bb43896d023;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d765fe45db9ef7595d660bb43896d023 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d765fe45db9ef7595d660bb43896d023 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_x );
        tmp_compexpr_left_1 = par_x;
        tmp_compexpr_right_1 = const_str_empty;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain_gettext );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gettext );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gettext" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 25;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_translation );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = const_tuple_str_plain_anaconda_tuple;
        tmp_kw_name_1 = PyDict_Copy( const_dict_473c2e80bee00322efee381030636345 );
        frame_d765fe45db9ef7595d660bb43896d023->m_frame.f_lineno = 25;
        tmp_called_instance_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_d765fe45db9ef7595d660bb43896d023->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_gettext, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_return_value = const_str_empty;
        Py_INCREF( tmp_return_value );
        condexpr_end_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d765fe45db9ef7595d660bb43896d023 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d765fe45db9ef7595d660bb43896d023 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d765fe45db9ef7595d660bb43896d023 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d765fe45db9ef7595d660bb43896d023, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d765fe45db9ef7595d660bb43896d023->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d765fe45db9ef7595d660bb43896d023, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d765fe45db9ef7595d660bb43896d023,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_d765fe45db9ef7595d660bb43896d023 == cache_frame_d765fe45db9ef7595d660bb43896d023 )
    {
        Py_DECREF( frame_d765fe45db9ef7595d660bb43896d023 );
    }
    cache_frame_d765fe45db9ef7595d660bb43896d023 = NULL;

    assertFrameObject( frame_d765fe45db9ef7595d660bb43896d023 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyanaconda$core$i18n$$$function_2_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyanaconda$core$i18n$$$function_2_lambda );
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


static PyObject *impl_pyanaconda$core$i18n$$$function_3_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_z = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_fdd80ad7539722ce2ee1767ffdb93d5a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fdd80ad7539722ce2ee1767ffdb93d5a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fdd80ad7539722ce2ee1767ffdb93d5a, codeobj_fdd80ad7539722ce2ee1767ffdb93d5a, module_pyanaconda$core$i18n, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fdd80ad7539722ce2ee1767ffdb93d5a = cache_frame_fdd80ad7539722ce2ee1767ffdb93d5a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fdd80ad7539722ce2ee1767ffdb93d5a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fdd80ad7539722ce2ee1767ffdb93d5a ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain_gettext );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gettext );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gettext" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_translation );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = const_tuple_str_plain_anaconda_tuple;
        tmp_kw_name_1 = PyDict_Copy( const_dict_473c2e80bee00322efee381030636345 );
        frame_fdd80ad7539722ce2ee1767ffdb93d5a->m_frame.f_lineno = 26;
        tmp_called_instance_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        CHECK_OBJECT( par_y );
        tmp_args_element_name_2 = par_y;
        CHECK_OBJECT( par_z );
        tmp_args_element_name_3 = par_z;
        frame_fdd80ad7539722ce2ee1767ffdb93d5a->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_ngettext, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fdd80ad7539722ce2ee1767ffdb93d5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fdd80ad7539722ce2ee1767ffdb93d5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fdd80ad7539722ce2ee1767ffdb93d5a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fdd80ad7539722ce2ee1767ffdb93d5a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fdd80ad7539722ce2ee1767ffdb93d5a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fdd80ad7539722ce2ee1767ffdb93d5a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fdd80ad7539722ce2ee1767ffdb93d5a,
        type_description_1,
        par_x,
        par_y,
        par_z
    );


    // Release cached frame.
    if ( frame_fdd80ad7539722ce2ee1767ffdb93d5a == cache_frame_fdd80ad7539722ce2ee1767ffdb93d5a )
    {
        Py_DECREF( frame_fdd80ad7539722ce2ee1767ffdb93d5a );
    }
    cache_frame_fdd80ad7539722ce2ee1767ffdb93d5a = NULL;

    assertFrameObject( frame_fdd80ad7539722ce2ee1767ffdb93d5a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyanaconda$core$i18n$$$function_3_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyanaconda$core$i18n$$$function_3_lambda );
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


static PyObject *impl_pyanaconda$core$i18n$$$function_4_C_( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msgctxt = python_pars[ 0 ];
    PyObject *par_msgid = python_pars[ 1 ];
    PyObject *var_ctxid = NULL;
    PyObject *var_translation = NULL;
    struct Nuitka_FrameObject *frame_53cbd7eb6b277b0842ed240aae366bf7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_53cbd7eb6b277b0842ed240aae366bf7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_53cbd7eb6b277b0842ed240aae366bf7, codeobj_53cbd7eb6b277b0842ed240aae366bf7, module_pyanaconda$core$i18n, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_53cbd7eb6b277b0842ed240aae366bf7 = cache_frame_53cbd7eb6b277b0842ed240aae366bf7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_53cbd7eb6b277b0842ed240aae366bf7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_53cbd7eb6b277b0842ed240aae366bf7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        tmp_left_name_1 = const_str_digest_8f81abcc758bd7d49237bccd59957fbf;
        CHECK_OBJECT( par_msgctxt );
        tmp_tuple_element_1 = par_msgctxt;
        tmp_right_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_msgid );
        tmp_tuple_element_1 = par_msgid;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_ctxid == NULL );
        var_ctxid = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain__ );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 34;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_ctxid );
        tmp_args_element_name_1 = var_ctxid;
        frame_53cbd7eb6b277b0842ed240aae366bf7->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_translation == NULL );
        var_translation = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_translation );
        tmp_compexpr_left_1 = var_translation;
        CHECK_OBJECT( var_ctxid );
        tmp_compexpr_right_1 = var_ctxid;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "oooo";
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
        CHECK_OBJECT( par_msgid );
        tmp_return_value = par_msgid;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        CHECK_OBJECT( var_translation );
        tmp_return_value = var_translation;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_53cbd7eb6b277b0842ed240aae366bf7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_53cbd7eb6b277b0842ed240aae366bf7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_53cbd7eb6b277b0842ed240aae366bf7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_53cbd7eb6b277b0842ed240aae366bf7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_53cbd7eb6b277b0842ed240aae366bf7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_53cbd7eb6b277b0842ed240aae366bf7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_53cbd7eb6b277b0842ed240aae366bf7,
        type_description_1,
        par_msgctxt,
        par_msgid,
        var_ctxid,
        var_translation
    );


    // Release cached frame.
    if ( frame_53cbd7eb6b277b0842ed240aae366bf7 == cache_frame_53cbd7eb6b277b0842ed240aae366bf7 )
    {
        Py_DECREF( frame_53cbd7eb6b277b0842ed240aae366bf7 );
    }
    cache_frame_53cbd7eb6b277b0842ed240aae366bf7 = NULL;

    assertFrameObject( frame_53cbd7eb6b277b0842ed240aae366bf7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyanaconda$core$i18n$$$function_4_C_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_msgctxt );
    Py_DECREF( par_msgctxt );
    par_msgctxt = NULL;

    CHECK_OBJECT( (PyObject *)par_msgid );
    Py_DECREF( par_msgid );
    par_msgid = NULL;

    CHECK_OBJECT( (PyObject *)var_ctxid );
    Py_DECREF( var_ctxid );
    var_ctxid = NULL;

    CHECK_OBJECT( (PyObject *)var_translation );
    Py_DECREF( var_translation );
    var_translation = NULL;

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

    CHECK_OBJECT( (PyObject *)par_msgctxt );
    Py_DECREF( par_msgctxt );
    par_msgctxt = NULL;

    CHECK_OBJECT( (PyObject *)par_msgid );
    Py_DECREF( par_msgid );
    par_msgid = NULL;

    Py_XDECREF( var_ctxid );
    var_ctxid = NULL;

    Py_XDECREF( var_translation );
    var_translation = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyanaconda$core$i18n$$$function_4_C_ );
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


static PyObject *impl_pyanaconda$core$i18n$$$function_5_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    CHECK_OBJECT( par_x );
    tmp_return_value = par_x;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyanaconda$core$i18n$$$function_5_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyanaconda$core$i18n$$$function_5_lambda );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_pyanaconda$core$i18n$$$function_6_CP_( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msgctxt = python_pars[ 0 ];
    PyObject *par_msgid = python_pars[ 1 ];
    PyObject *par_msgid_plural = python_pars[ 2 ];
    PyObject *par_n = python_pars[ 3 ];
    PyObject *var_ctxid = NULL;
    PyObject *var_translation = NULL;
    struct Nuitka_FrameObject *frame_7c2a651ec1ba148f1aa253ff463e3423;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7c2a651ec1ba148f1aa253ff463e3423 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7c2a651ec1ba148f1aa253ff463e3423, codeobj_7c2a651ec1ba148f1aa253ff463e3423, module_pyanaconda$core$i18n, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7c2a651ec1ba148f1aa253ff463e3423 = cache_frame_7c2a651ec1ba148f1aa253ff463e3423;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7c2a651ec1ba148f1aa253ff463e3423 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7c2a651ec1ba148f1aa253ff463e3423 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        tmp_left_name_1 = const_str_digest_8f81abcc758bd7d49237bccd59957fbf;
        CHECK_OBJECT( par_msgctxt );
        tmp_tuple_element_1 = par_msgctxt;
        tmp_right_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_msgid );
        tmp_tuple_element_1 = par_msgid;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
        tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ctxid == NULL );
        var_ctxid = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain_P_ );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_P_ );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "P_" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_ctxid );
        tmp_args_element_name_1 = var_ctxid;
        CHECK_OBJECT( par_msgid_plural );
        tmp_args_element_name_2 = par_msgid_plural;
        CHECK_OBJECT( par_n );
        tmp_args_element_name_3 = par_n;
        frame_7c2a651ec1ba148f1aa253ff463e3423->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_translation == NULL );
        var_translation = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_translation );
        tmp_compexpr_left_1 = var_translation;
        CHECK_OBJECT( var_ctxid );
        tmp_compexpr_right_1 = var_ctxid;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "oooooo";
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
        CHECK_OBJECT( par_msgid );
        tmp_return_value = par_msgid;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        CHECK_OBJECT( var_translation );
        tmp_return_value = var_translation;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7c2a651ec1ba148f1aa253ff463e3423 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7c2a651ec1ba148f1aa253ff463e3423 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7c2a651ec1ba148f1aa253ff463e3423 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7c2a651ec1ba148f1aa253ff463e3423, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7c2a651ec1ba148f1aa253ff463e3423->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7c2a651ec1ba148f1aa253ff463e3423, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7c2a651ec1ba148f1aa253ff463e3423,
        type_description_1,
        par_msgctxt,
        par_msgid,
        par_msgid_plural,
        par_n,
        var_ctxid,
        var_translation
    );


    // Release cached frame.
    if ( frame_7c2a651ec1ba148f1aa253ff463e3423 == cache_frame_7c2a651ec1ba148f1aa253ff463e3423 )
    {
        Py_DECREF( frame_7c2a651ec1ba148f1aa253ff463e3423 );
    }
    cache_frame_7c2a651ec1ba148f1aa253ff463e3423 = NULL;

    assertFrameObject( frame_7c2a651ec1ba148f1aa253ff463e3423 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( pyanaconda$core$i18n$$$function_6_CP_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_msgctxt );
    Py_DECREF( par_msgctxt );
    par_msgctxt = NULL;

    CHECK_OBJECT( (PyObject *)par_msgid );
    Py_DECREF( par_msgid );
    par_msgid = NULL;

    CHECK_OBJECT( (PyObject *)par_msgid_plural );
    Py_DECREF( par_msgid_plural );
    par_msgid_plural = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)var_ctxid );
    Py_DECREF( var_ctxid );
    var_ctxid = NULL;

    CHECK_OBJECT( (PyObject *)var_translation );
    Py_DECREF( var_translation );
    var_translation = NULL;

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

    CHECK_OBJECT( (PyObject *)par_msgctxt );
    Py_DECREF( par_msgctxt );
    par_msgctxt = NULL;

    CHECK_OBJECT( (PyObject *)par_msgid );
    Py_DECREF( par_msgid );
    par_msgid = NULL;

    CHECK_OBJECT( (PyObject *)par_msgid_plural );
    Py_DECREF( par_msgid_plural );
    par_msgid_plural = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    Py_XDECREF( var_ctxid );
    var_ctxid = NULL;

    Py_XDECREF( var_translation );
    var_translation = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( pyanaconda$core$i18n$$$function_6_CP_ );
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



static PyObject *MAKE_FUNCTION_pyanaconda$core$i18n$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyanaconda$core$i18n$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f730620f5ee989aac193fa77c67d6f4a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyanaconda$core$i18n,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyanaconda$core$i18n$$$function_2_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyanaconda$core$i18n$$$function_2_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d765fe45db9ef7595d660bb43896d023,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyanaconda$core$i18n,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyanaconda$core$i18n$$$function_3_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyanaconda$core$i18n$$$function_3_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fdd80ad7539722ce2ee1767ffdb93d5a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyanaconda$core$i18n,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyanaconda$core$i18n$$$function_4_C_(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyanaconda$core$i18n$$$function_4_C_,
        const_str_plain_C_,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_53cbd7eb6b277b0842ed240aae366bf7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyanaconda$core$i18n,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyanaconda$core$i18n$$$function_5_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyanaconda$core$i18n$$$function_5_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_480615cbf52dc323ba5e9ee5031489a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyanaconda$core$i18n,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyanaconda$core$i18n$$$function_6_CP_(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyanaconda$core$i18n$$$function_6_CP_,
        const_str_plain_CP_,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7c2a651ec1ba148f1aa253ff463e3423,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_pyanaconda$core$i18n,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_pyanaconda$core$i18n =
{
    PyModuleDef_HEAD_INIT,
    "pyanaconda.core.i18n",
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

MOD_INIT_DECL( pyanaconda$core$i18n )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_pyanaconda$core$i18n );
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
    puts("pyanaconda.core.i18n: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyanaconda.core.i18n: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("pyanaconda.core.i18n: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpyanaconda$core$i18n" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_pyanaconda$core$i18n = Py_InitModule4(
        "pyanaconda.core.i18n",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_pyanaconda$core$i18n = PyModule_Create( &mdef_pyanaconda$core$i18n );
#endif

    moduledict_pyanaconda$core$i18n = MODULE_DICT( module_pyanaconda$core$i18n );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_pyanaconda$core$i18n,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_pyanaconda$core$i18n,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyanaconda$core$i18n,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_pyanaconda$core$i18n,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_pyanaconda$core$i18n );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_6807157bfb6aeb31712b82d637fd949a, module_pyanaconda$core$i18n );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_d7b69a6e2471cfb718b957956bfa223e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_d7b69a6e2471cfb718b957956bfa223e = MAKE_MODULE_FRAME( codeobj_d7b69a6e2471cfb718b957956bfa223e, module_pyanaconda$core$i18n );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_d7b69a6e2471cfb718b957956bfa223e );
    assert( Py_REFCNT( frame_d7b69a6e2471cfb718b957956bfa223e ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY( const_list_830d0364cfa54296e4e01dcf682d4b05_list );
        UPDATE_STRING_DICT1( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_gettext;
        tmp_globals_name_1 = (PyObject *)moduledict_pyanaconda$core$i18n;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_d7b69a6e2471cfb718b957956bfa223e->m_frame.f_lineno = 22;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain_gettext, tmp_assign_source_5 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7b69a6e2471cfb718b957956bfa223e );
#endif
    popFrameStack();

    assertFrameObject( frame_d7b69a6e2471cfb718b957956bfa223e );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d7b69a6e2471cfb718b957956bfa223e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d7b69a6e2471cfb718b957956bfa223e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d7b69a6e2471cfb718b957956bfa223e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d7b69a6e2471cfb718b957956bfa223e, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_FUNCTION_pyanaconda$core$i18n$$$function_1_lambda(  );



        UPDATE_STRING_DICT1( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain_N_, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_FUNCTION_pyanaconda$core$i18n$$$function_2_lambda(  );



        UPDATE_STRING_DICT1( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain__, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_FUNCTION_pyanaconda$core$i18n$$$function_3_lambda(  );



        UPDATE_STRING_DICT1( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain_P_, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_pyanaconda$core$i18n$$$function_4_C_(  );



        UPDATE_STRING_DICT1( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain_C_, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_pyanaconda$core$i18n$$$function_5_lambda(  );



        UPDATE_STRING_DICT1( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain_CN_, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_pyanaconda$core$i18n$$$function_6_CP_(  );



        UPDATE_STRING_DICT1( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain_CP_, tmp_assign_source_11 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_pyanaconda$core$i18n, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_pyanaconda$core$i18n );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
