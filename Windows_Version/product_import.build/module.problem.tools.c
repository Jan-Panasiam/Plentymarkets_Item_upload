/* Generated code for Python module 'problem.tools'
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

/* The "_module_problem$tools" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_problem$tools;
PyDictObject *moduledict_problem$tools;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_e9480640b8997841e4b2ee49a5790308;
extern PyObject *const_str_plain_problemify;
extern PyObject *const_str_plain_Unknown;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_typ;
extern PyObject *const_str_plain_values;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_dc59ccedcb8e86646f0eb79b95ebaa0a;
extern PyObject *const_int_0;
extern PyObject *const_str_plain__proxy;
extern PyObject *const_str_plain__probdir;
extern PyObject *const_str_plain_problem;
extern PyObject *const_str_plain_PROBLEM_TYPES;
static PyObject *const_str_plain_class_name;
extern PyObject *const_str_plain__persisted;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_get_item;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_prob;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_capitalize;
static PyObject *const_str_plain_probdir;
static PyObject *const_str_digest_499979b635b7c845abd599857a0e57d4;
extern PyObject *const_str_plain_type;
static PyObject *const_tuple_d1d8fb94505c5290365af41c2389814a_tuple;
extern PyObject *const_str_plain_proxy;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_reason;
extern PyObject *const_str_plain_lower;
static PyObject *const_str_plain_by_typ;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_e9480640b8997841e4b2ee49a5790308 = UNSTREAM_STRING_ASCII( &constant_bin[ 61197 ], 13, 0 );
    const_str_digest_dc59ccedcb8e86646f0eb79b95ebaa0a = UNSTREAM_STRING_ASCII( &constant_bin[ 61210 ], 16, 0 );
    const_str_plain_class_name = UNSTREAM_STRING_ASCII( &constant_bin[ 61226 ], 10, 1 );
    const_str_plain_capitalize = UNSTREAM_STRING_ASCII( &constant_bin[ 61236 ], 10, 1 );
    const_str_plain_probdir = UNSTREAM_STRING_ASCII( &constant_bin[ 61246 ], 7, 1 );
    const_str_digest_499979b635b7c845abd599857a0e57d4 = UNSTREAM_STRING_ASCII( &constant_bin[ 61253 ], 22, 0 );
    const_tuple_d1d8fb94505c5290365af41c2389814a_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_d1d8fb94505c5290365af41c2389814a_tuple, 0, const_str_plain_probdir ); Py_INCREF( const_str_plain_probdir );
    PyTuple_SET_ITEM( const_tuple_d1d8fb94505c5290365af41c2389814a_tuple, 1, const_str_plain_proxy ); Py_INCREF( const_str_plain_proxy );
    const_str_plain_by_typ = UNSTREAM_STRING_ASCII( &constant_bin[ 61275 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_d1d8fb94505c5290365af41c2389814a_tuple, 2, const_str_plain_by_typ ); Py_INCREF( const_str_plain_by_typ );
    PyTuple_SET_ITEM( const_tuple_d1d8fb94505c5290365af41c2389814a_tuple, 3, const_str_plain_typ ); Py_INCREF( const_str_plain_typ );
    PyTuple_SET_ITEM( const_tuple_d1d8fb94505c5290365af41c2389814a_tuple, 4, const_str_plain_reason ); Py_INCREF( const_str_plain_reason );
    PyTuple_SET_ITEM( const_tuple_d1d8fb94505c5290365af41c2389814a_tuple, 5, const_str_plain_class_name ); Py_INCREF( const_str_plain_class_name );
    PyTuple_SET_ITEM( const_tuple_d1d8fb94505c5290365af41c2389814a_tuple, 6, const_str_plain_prob ); Py_INCREF( const_str_plain_prob );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_problem$tools( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a4a0a7f025d399266b1fa6b2e02694c9;
static PyCodeObject *codeobj_2fbe876a264adae43b46ac322742b500;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_dc59ccedcb8e86646f0eb79b95ebaa0a );
    codeobj_a4a0a7f025d399266b1fa6b2e02694c9 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_499979b635b7c845abd599857a0e57d4, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_2fbe876a264adae43b46ac322742b500 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_problemify, 4, const_tuple_d1d8fb94505c5290365af41c2389814a_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_problem$tools$$$function_1_problemify(  );


// The module function definitions.
static PyObject *impl_problem$tools$$$function_1_problemify( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_probdir = python_pars[ 0 ];
    PyObject *par_proxy = python_pars[ 1 ];
    PyObject *var_by_typ = NULL;
    PyObject *var_typ = NULL;
    PyObject *var_reason = NULL;
    PyObject *var_class_name = NULL;
    PyObject *var_prob = NULL;
    struct Nuitka_FrameObject *frame_2fbe876a264adae43b46ac322742b500;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_2fbe876a264adae43b46ac322742b500 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2fbe876a264adae43b46ac322742b500, codeobj_2fbe876a264adae43b46ac322742b500, module_problem$tools, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_2fbe876a264adae43b46ac322742b500 = cache_frame_2fbe876a264adae43b46ac322742b500;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2fbe876a264adae43b46ac322742b500 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2fbe876a264adae43b46ac322742b500 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_seq_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        tmp_called_name_1 = (PyObject *)&PyZip_Type;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain_problem );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_problem );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "problem" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 5;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PROBLEM_TYPES );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_2fbe876a264adae43b46ac322742b500->m_frame.f_lineno = 5;
        tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_values );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain_problem );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_problem );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "problem" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 6;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_PROBLEM_TYPES );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 6;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_2fbe876a264adae43b46ac322742b500->m_frame.f_lineno = 6;
        tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_keys );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 6;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_2fbe876a264adae43b46ac322742b500->m_frame.f_lineno = 5;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_dict_seq_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_dict_seq_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = TO_DICT( tmp_dict_seq_1, NULL );
        Py_DECREF( tmp_dict_seq_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_by_typ == NULL );
        var_by_typ = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        CHECK_OBJECT( par_proxy );
        tmp_called_instance_3 = par_proxy;
        CHECK_OBJECT( par_probdir );
        tmp_args_element_name_3 = par_probdir;
        tmp_args_element_name_4 = const_str_plain_type;
        frame_2fbe876a264adae43b46ac322742b500->m_frame.f_lineno = 8;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_get_item, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_typ == NULL );
        var_typ = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_proxy );
        tmp_called_instance_4 = par_proxy;
        CHECK_OBJECT( par_probdir );
        tmp_args_element_name_5 = par_probdir;
        tmp_args_element_name_6 = const_str_plain_reason;
        frame_2fbe876a264adae43b46ac322742b500->m_frame.f_lineno = 9;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_get_item, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_reason == NULL );
        var_reason = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        CHECK_OBJECT( var_typ );
        tmp_key_name_1 = var_typ;
        CHECK_OBJECT( var_by_typ );
        tmp_dict_name_1 = var_by_typ;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_4;
            tmp_assign_source_4 = const_str_plain_Unknown;
            assert( var_class_name == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_class_name = tmp_assign_source_4;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_dict_name_2;
            PyObject *tmp_key_name_2;
            CHECK_OBJECT( var_by_typ );
            tmp_dict_name_2 = var_by_typ;
            CHECK_OBJECT( var_typ );
            tmp_key_name_2 = var_typ;
            tmp_called_instance_6 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
            if ( tmp_called_instance_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 14;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_2fbe876a264adae43b46ac322742b500->m_frame.f_lineno = 14;
            tmp_called_instance_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_lower );
            Py_DECREF( tmp_called_instance_6 );
            if ( tmp_called_instance_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 14;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_2fbe876a264adae43b46ac322742b500->m_frame.f_lineno = 14;
            tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_capitalize );
            Py_DECREF( tmp_called_instance_5 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 14;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_class_name == NULL );
            var_class_name = tmp_assign_source_5;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_args_element_name_7;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain_problem );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_problem );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "problem" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 16;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_getattr_target_1 = tmp_mvar_value_3;
        CHECK_OBJECT( var_class_name );
        tmp_getattr_attr_1 = var_class_name;
        tmp_called_name_2 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_reason );
        tmp_args_element_name_7 = var_reason;
        frame_2fbe876a264adae43b46ac322742b500->m_frame.f_lineno = 16;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_prob == NULL );
        var_prob = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_probdir );
        tmp_assattr_name_1 = par_probdir;
        CHECK_OBJECT( var_prob );
        tmp_assattr_target_1 = var_prob;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__probdir, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_True;
        CHECK_OBJECT( var_prob );
        tmp_assattr_target_2 = var_prob;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__persisted, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_proxy );
        tmp_assattr_name_3 = par_proxy;
        CHECK_OBJECT( var_prob );
        tmp_assattr_target_3 = var_prob;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__proxy, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2fbe876a264adae43b46ac322742b500 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2fbe876a264adae43b46ac322742b500 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2fbe876a264adae43b46ac322742b500, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2fbe876a264adae43b46ac322742b500->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2fbe876a264adae43b46ac322742b500, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2fbe876a264adae43b46ac322742b500,
        type_description_1,
        par_probdir,
        par_proxy,
        var_by_typ,
        var_typ,
        var_reason,
        var_class_name,
        var_prob
    );


    // Release cached frame.
    if ( frame_2fbe876a264adae43b46ac322742b500 == cache_frame_2fbe876a264adae43b46ac322742b500 )
    {
        Py_DECREF( frame_2fbe876a264adae43b46ac322742b500 );
    }
    cache_frame_2fbe876a264adae43b46ac322742b500 = NULL;

    assertFrameObject( frame_2fbe876a264adae43b46ac322742b500 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_prob );
    tmp_return_value = var_prob;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( problem$tools$$$function_1_problemify );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_probdir );
    Py_DECREF( par_probdir );
    par_probdir = NULL;

    CHECK_OBJECT( (PyObject *)par_proxy );
    Py_DECREF( par_proxy );
    par_proxy = NULL;

    CHECK_OBJECT( (PyObject *)var_by_typ );
    Py_DECREF( var_by_typ );
    var_by_typ = NULL;

    CHECK_OBJECT( (PyObject *)var_typ );
    Py_DECREF( var_typ );
    var_typ = NULL;

    CHECK_OBJECT( (PyObject *)var_reason );
    Py_DECREF( var_reason );
    var_reason = NULL;

    CHECK_OBJECT( (PyObject *)var_class_name );
    Py_DECREF( var_class_name );
    var_class_name = NULL;

    CHECK_OBJECT( (PyObject *)var_prob );
    Py_DECREF( var_prob );
    var_prob = NULL;

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

    CHECK_OBJECT( (PyObject *)par_probdir );
    Py_DECREF( par_probdir );
    par_probdir = NULL;

    CHECK_OBJECT( (PyObject *)par_proxy );
    Py_DECREF( par_proxy );
    par_proxy = NULL;

    Py_XDECREF( var_by_typ );
    var_by_typ = NULL;

    Py_XDECREF( var_typ );
    var_typ = NULL;

    Py_XDECREF( var_reason );
    var_reason = NULL;

    Py_XDECREF( var_class_name );
    var_class_name = NULL;

    Py_XDECREF( var_prob );
    var_prob = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( problem$tools$$$function_1_problemify );
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



static PyObject *MAKE_FUNCTION_problem$tools$$$function_1_problemify(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_problem$tools$$$function_1_problemify,
        const_str_plain_problemify,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_2fbe876a264adae43b46ac322742b500,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_problem$tools,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_problem$tools =
{
    PyModuleDef_HEAD_INIT,
    "problem.tools",
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

MOD_INIT_DECL( problem$tools )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_problem$tools );
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
    puts("problem.tools: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("problem.tools: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("problem.tools: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initproblem$tools" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_problem$tools = Py_InitModule4(
        "problem.tools",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_problem$tools = PyModule_Create( &mdef_problem$tools );
#endif

    moduledict_problem$tools = MODULE_DICT( module_problem$tools );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_problem$tools,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_problem$tools,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_problem$tools,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_problem$tools,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_problem$tools );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_e9480640b8997841e4b2ee49a5790308, module_problem$tools );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_a4a0a7f025d399266b1fa6b2e02694c9;
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
        UPDATE_STRING_DICT0( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_a4a0a7f025d399266b1fa6b2e02694c9 = MAKE_MODULE_FRAME( codeobj_a4a0a7f025d399266b1fa6b2e02694c9, module_problem$tools );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a4a0a7f025d399266b1fa6b2e02694c9 );
    assert( Py_REFCNT( frame_a4a0a7f025d399266b1fa6b2e02694c9 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_problem;
        tmp_globals_name_1 = (PyObject *)moduledict_problem$tools;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_a4a0a7f025d399266b1fa6b2e02694c9->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain_problem, tmp_assign_source_4 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a4a0a7f025d399266b1fa6b2e02694c9 );
#endif
    popFrameStack();

    assertFrameObject( frame_a4a0a7f025d399266b1fa6b2e02694c9 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a4a0a7f025d399266b1fa6b2e02694c9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a4a0a7f025d399266b1fa6b2e02694c9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a4a0a7f025d399266b1fa6b2e02694c9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a4a0a7f025d399266b1fa6b2e02694c9, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_FUNCTION_problem$tools$$$function_1_problemify(  );



        UPDATE_STRING_DICT1( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain_problemify, tmp_assign_source_5 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_problem$tools, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_problem$tools );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
