/* Generated code for Python module 'gi.importer'
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

/* The "_module_gi$importer" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_gi$importer;
PyDictObject *moduledict_gi$importer;

/* The declarations of module constants used, if any. */
static PyObject *const_tuple_int_pos_3_int_pos_2_tuple;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_get_import_stacklevel;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_digest_3c73fd63a7cf9aaa70e0252faea2199c;
static PyObject *const_str_digest_2779f140b052d7c4d7b59e5d675c8e9f;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_get_version;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_is_registered;
extern PyObject *const_str_plain___exit__;
static PyObject *const_tuple_str_plain_GLib_str_plain_GObject_str_plain_Gio_tuple;
extern PyObject *const_str_plain_get_required_version;
extern PyObject *const_str_plain_enumerate_versions;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain___enter__;
static PyObject *const_str_plain_py_version;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_506620dc2fed48c9cd06b50e5565f1c6;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_contextlib;
static PyObject *const_slice_none_int_pos_2_none;
static PyObject *const_str_digest_7df6a861b1b2cd7838fc3723262fa3a4;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain___orig_bases__;
static PyObject *const_tuple_str_plain_load_overrides_tuple;
extern PyObject *const_str_plain_import_module;
extern PyObject *const_str_plain_PyGIWarning;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_plain_dep;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_tuple_str_plain_self_str_plain_path_tuple;
extern PyObject *const_tuple_str_dot_int_pos_1_tuple;
static PyObject *const_str_plain_fullname;
static PyObject *const_str_plain__check_require_version;
static PyObject *const_str_digest_e3207721a489afdbe564147e299ac132;
extern PyObject *const_str_plain_importlib;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_chr_45;
extern PyObject *const_str_plain_gi;
static PyObject *const_str_plain_load_module;
static PyObject *const_tuple_int_pos_3_int_pos_4_tuple;
extern PyObject *const_str_plain_GObject;
extern PyObject *const_str_plain_e;
extern PyObject *const_int_pos_8;
static PyObject *const_dict_ecb6704bab3f53b840a26cc0996fa7ce;
static PyObject *const_tuple_str_chr_45_tuple;
static PyObject *const_str_digest_4677122ef9be386f7963a3d6fe162c2e;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_38b3d63cad44423b3921cc9c9b262e34;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_introspection_module;
extern PyObject *const_str_plain_get_default;
extern PyObject *const_int_pos_10;
static PyObject *const_tuple_str_plain_contextmanager_tuple;
extern PyObject *const_str_plain_stacklevel;
extern PyObject *const_str_plain_split;
static PyObject *const_str_plain_contextmanager;
static PyObject *const_str_plain_RepositoryError;
static PyObject *const_str_digest_f28812161f364a88311ca4fe0480111c;
extern PyObject *const_str_plain__gi;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain_overrides;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_Repository;
extern PyObject *const_str_plain_repository;
static PyObject *const_str_digest_1b3a1dfca67f6ccfe7d6052b72b7ab8e;
extern PyObject *const_str_plain_DynamicImporter;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_tuple_str_plain_PyGIWarning_tuple;
static PyObject *const_str_digest_c0c3759da123e387798315e75d2fed70;
static PyObject *const_str_plain_find_module;
extern PyObject *const_int_pos_4;
static PyObject *const_str_plain_get_immediate_dependencies;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_6e033883b4266c7624e4ec16617f4d68;
static PyObject *const_str_plain_dynamic_module;
extern PyObject *const_str_plain_load_overrides;
static PyObject *const_tuple_ff7725aa947c09cece638d181077246b_tuple;
extern PyObject *const_str_plain_namespace;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_modules;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_plain_was_loaded;
static PyObject *const_str_plain_Gio;
static PyObject *const_tuple_str_plain_import_hook_str_plain_py_version_tuple;
extern PyObject *const_str_plain_get_introspection_module;
extern PyObject *const_str_digest_2dddc6e15ab2dcfb5a2b2205b5654fb4;
static PyObject *const_tuple_str_plain_Repository_str_plain_RepositoryError_tuple;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_import_hook;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_int_pos_3_int_pos_3_tuple;
extern PyObject *const_str_plain_rsplit;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain_module;
static PyObject *const_tuple_ccefd87f05877825ef431deead11a223_tuple;
static PyObject *const_tuple_e4a7ffd3759d96d52855f0796dbba7d8_tuple;
static PyObject *const_str_plain_GLib;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_version;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_str_plain_get_introspection_module_tuple;
extern PyObject *const_str_plain_startswith;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_int_pos_3_int_pos_2_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_3_int_pos_2_tuple, 0, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_3_int_pos_2_tuple, 1, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    const_str_plain_get_import_stacklevel = UNSTREAM_STRING_ASCII( &constant_bin[ 45022 ], 21, 1 );
    const_str_digest_3c73fd63a7cf9aaa70e0252faea2199c = UNSTREAM_STRING_ASCII( &constant_bin[ 45043 ], 20, 0 );
    const_str_digest_2779f140b052d7c4d7b59e5d675c8e9f = UNSTREAM_STRING_ASCII( &constant_bin[ 45063 ], 24, 0 );
    const_str_plain_is_registered = UNSTREAM_STRING_ASCII( &constant_bin[ 45087 ], 13, 1 );
    const_tuple_str_plain_GLib_str_plain_GObject_str_plain_Gio_tuple = PyTuple_New( 3 );
    const_str_plain_GLib = UNSTREAM_STRING_ASCII( &constant_bin[ 24167 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_GLib_str_plain_GObject_str_plain_Gio_tuple, 0, const_str_plain_GLib ); Py_INCREF( const_str_plain_GLib );
    PyTuple_SET_ITEM( const_tuple_str_plain_GLib_str_plain_GObject_str_plain_Gio_tuple, 1, const_str_plain_GObject ); Py_INCREF( const_str_plain_GObject );
    const_str_plain_Gio = UNSTREAM_STRING_ASCII( &constant_bin[ 34169 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_GLib_str_plain_GObject_str_plain_Gio_tuple, 2, const_str_plain_Gio ); Py_INCREF( const_str_plain_Gio );
    const_str_plain_py_version = UNSTREAM_STRING_ASCII( &constant_bin[ 45100 ], 10, 1 );
    const_str_digest_506620dc2fed48c9cd06b50e5565f1c6 = UNSTREAM_STRING_ASCII( &constant_bin[ 45110 ], 306, 0 );
    const_str_plain_contextlib = UNSTREAM_STRING_ASCII( &constant_bin[ 45416 ], 10, 1 );
    const_slice_none_int_pos_2_none = PySlice_New( Py_None, const_int_pos_2, Py_None );
    const_str_digest_7df6a861b1b2cd7838fc3723262fa3a4 = UNSTREAM_STRING_ASCII( &constant_bin[ 45051 ], 11, 0 );
    const_tuple_str_plain_load_overrides_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_load_overrides_tuple, 0, const_str_plain_load_overrides ); Py_INCREF( const_str_plain_load_overrides );
    const_str_plain_dep = UNSTREAM_STRING_ASCII( &constant_bin[ 9639 ], 3, 1 );
    const_str_plain_fullname = UNSTREAM_STRING_ASCII( &constant_bin[ 45426 ], 8, 1 );
    const_str_plain__check_require_version = UNSTREAM_STRING_ASCII( &constant_bin[ 45434 ], 22, 1 );
    const_str_digest_e3207721a489afdbe564147e299ac132 = UNSTREAM_STRING_ASCII( &constant_bin[ 45456 ], 54, 0 );
    const_str_plain_load_module = UNSTREAM_STRING_ASCII( &constant_bin[ 45385 ], 11, 1 );
    const_tuple_int_pos_3_int_pos_4_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_3_int_pos_4_tuple, 0, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_3_int_pos_4_tuple, 1, const_int_pos_4 ); Py_INCREF( const_int_pos_4 );
    const_dict_ecb6704bab3f53b840a26cc0996fa7ce = _PyDict_NewPresized( 1 );
    const_str_plain_import_hook = UNSTREAM_STRING_ASCII( &constant_bin[ 45293 ], 11, 1 );
    PyDict_SetItem( const_dict_ecb6704bab3f53b840a26cc0996fa7ce, const_str_plain_import_hook, Py_True );
    assert( PyDict_Size( const_dict_ecb6704bab3f53b840a26cc0996fa7ce ) == 1 );
    const_tuple_str_chr_45_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_chr_45_tuple, 0, const_str_chr_45 ); Py_INCREF( const_str_chr_45 );
    const_str_digest_4677122ef9be386f7963a3d6fe162c2e = UNSTREAM_STRING_ASCII( &constant_bin[ 45510 ], 27, 0 );
    const_str_digest_38b3d63cad44423b3921cc9c9b262e34 = UNSTREAM_STRING_ASCII( &constant_bin[ 45537 ], 14, 0 );
    const_tuple_str_plain_contextmanager_tuple = PyTuple_New( 1 );
    const_str_plain_contextmanager = UNSTREAM_STRING_ASCII( &constant_bin[ 45551 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_contextmanager_tuple, 0, const_str_plain_contextmanager ); Py_INCREF( const_str_plain_contextmanager );
    const_str_plain_RepositoryError = UNSTREAM_STRING_ASCII( &constant_bin[ 45565 ], 15, 1 );
    const_str_digest_f28812161f364a88311ca4fe0480111c = UNSTREAM_STRING_ASCII( &constant_bin[ 45580 ], 27, 0 );
    const_str_digest_1b3a1dfca67f6ccfe7d6052b72b7ab8e = UNSTREAM_STRING_ASCII( &constant_bin[ 45607 ], 335, 0 );
    const_str_digest_c0c3759da123e387798315e75d2fed70 = UNSTREAM_STRING_ASCII( &constant_bin[ 45942 ], 4, 0 );
    const_str_plain_find_module = UNSTREAM_STRING_ASCII( &constant_bin[ 45596 ], 11, 1 );
    const_str_plain_get_immediate_dependencies = UNSTREAM_STRING_ASCII( &constant_bin[ 45946 ], 26, 1 );
    const_str_digest_6e033883b4266c7624e4ec16617f4d68 = UNSTREAM_STRING_ASCII( &constant_bin[ 45972 ], 177, 0 );
    const_str_plain_dynamic_module = UNSTREAM_STRING_ASCII( &constant_bin[ 46149 ], 14, 1 );
    const_tuple_ff7725aa947c09cece638d181077246b_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ff7725aa947c09cece638d181077246b_tuple, 0, const_str_plain_namespace ); Py_INCREF( const_str_plain_namespace );
    PyTuple_SET_ITEM( const_tuple_ff7725aa947c09cece638d181077246b_tuple, 1, const_str_plain_stacklevel ); Py_INCREF( const_str_plain_stacklevel );
    const_str_plain_was_loaded = UNSTREAM_STRING_ASCII( &constant_bin[ 46163 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_ff7725aa947c09cece638d181077246b_tuple, 2, const_str_plain_was_loaded ); Py_INCREF( const_str_plain_was_loaded );
    PyTuple_SET_ITEM( const_tuple_ff7725aa947c09cece638d181077246b_tuple, 3, const_str_plain_version ); Py_INCREF( const_str_plain_version );
    const_tuple_str_plain_import_hook_str_plain_py_version_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_import_hook_str_plain_py_version_tuple, 0, const_str_plain_import_hook ); Py_INCREF( const_str_plain_import_hook );
    PyTuple_SET_ITEM( const_tuple_str_plain_import_hook_str_plain_py_version_tuple, 1, const_str_plain_py_version ); Py_INCREF( const_str_plain_py_version );
    const_tuple_str_plain_Repository_str_plain_RepositoryError_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Repository_str_plain_RepositoryError_tuple, 0, const_str_plain_Repository ); Py_INCREF( const_str_plain_Repository );
    PyTuple_SET_ITEM( const_tuple_str_plain_Repository_str_plain_RepositoryError_tuple, 1, const_str_plain_RepositoryError ); Py_INCREF( const_str_plain_RepositoryError );
    const_tuple_ccefd87f05877825ef431deead11a223_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_ccefd87f05877825ef431deead11a223_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ccefd87f05877825ef431deead11a223_tuple, 1, const_str_plain_fullname ); Py_INCREF( const_str_plain_fullname );
    PyTuple_SET_ITEM( const_tuple_ccefd87f05877825ef431deead11a223_tuple, 2, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_ccefd87f05877825ef431deead11a223_tuple, 3, const_str_plain_namespace ); Py_INCREF( const_str_plain_namespace );
    PyTuple_SET_ITEM( const_tuple_ccefd87f05877825ef431deead11a223_tuple, 4, const_str_plain_stacklevel ); Py_INCREF( const_str_plain_stacklevel );
    PyTuple_SET_ITEM( const_tuple_ccefd87f05877825ef431deead11a223_tuple, 5, const_str_plain_introspection_module ); Py_INCREF( const_str_plain_introspection_module );
    PyTuple_SET_ITEM( const_tuple_ccefd87f05877825ef431deead11a223_tuple, 6, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_ccefd87f05877825ef431deead11a223_tuple, 7, const_str_plain_dep ); Py_INCREF( const_str_plain_dep );
    PyTuple_SET_ITEM( const_tuple_ccefd87f05877825ef431deead11a223_tuple, 8, const_str_plain_dynamic_module ); Py_INCREF( const_str_plain_dynamic_module );
    const_tuple_e4a7ffd3759d96d52855f0796dbba7d8_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e4a7ffd3759d96d52855f0796dbba7d8_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e4a7ffd3759d96d52855f0796dbba7d8_tuple, 1, const_str_plain_fullname ); Py_INCREF( const_str_plain_fullname );
    PyTuple_SET_ITEM( const_tuple_e4a7ffd3759d96d52855f0796dbba7d8_tuple, 2, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_e4a7ffd3759d96d52855f0796dbba7d8_tuple, 3, const_str_plain_namespace ); Py_INCREF( const_str_plain_namespace );
    const_tuple_str_plain_get_introspection_module_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_get_introspection_module_tuple, 0, const_str_plain_get_introspection_module ); Py_INCREF( const_str_plain_get_introspection_module );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_gi$importer( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_103448d7dce7c5f65b1b50a695224520;
static PyCodeObject *codeobj_12e1c0b8d2ed29fe5060fbb6a27d7e68;
static PyCodeObject *codeobj_6a0fde62a3465df6f84b88b542dc4fe0;
static PyCodeObject *codeobj_24bce6cba695b06cfa78df4be9c8a09e;
static PyCodeObject *codeobj_005f3332218c101a5c97fa2944ac48d7;
static PyCodeObject *codeobj_77677ba4bbc14486295070a890d36668;
static PyCodeObject *codeobj_951f843964de3cd36892a052deaad603;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_38b3d63cad44423b3921cc9c9b262e34 );
    codeobj_103448d7dce7c5f65b1b50a695224520 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_3c73fd63a7cf9aaa70e0252faea2199c, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_12e1c0b8d2ed29fe5060fbb6a27d7e68 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_DynamicImporter, 104, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_6a0fde62a3465df6f84b88b542dc4fe0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 108, const_tuple_str_plain_self_str_plain_path_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_24bce6cba695b06cfa78df4be9c8a09e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__check_require_version, 43, const_tuple_ff7725aa947c09cece638d181077246b_tuple, 2, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_005f3332218c101a5c97fa2944ac48d7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_find_module, 111, const_tuple_e4a7ffd3759d96d52855f0796dbba7d8_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_77677ba4bbc14486295070a890d36668 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_import_stacklevel, 82, const_tuple_str_plain_import_hook_str_plain_py_version_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_951f843964de3cd36892a052deaad603 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_module, 121, const_tuple_ccefd87f05877825ef431deead11a223_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *gi$importer$$$function_1__check_require_version$$$genobj_1__check_require_version_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_2__mro_entries_conversion( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_gi$importer$$$function_1__check_require_version(  );


static PyObject *MAKE_FUNCTION_gi$importer$$$function_2_get_import_stacklevel(  );


static PyObject *MAKE_FUNCTION_gi$importer$$$function_3___init__(  );


static PyObject *MAKE_FUNCTION_gi$importer$$$function_4_find_module( PyObject *defaults );


static PyObject *MAKE_FUNCTION_gi$importer$$$function_5_load_module(  );


// The module function definitions.
static PyObject *impl_gi$importer$$$function_1__check_require_version( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_namespace = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_stacklevel = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = gi$importer$$$function_1__check_require_version$$$genobj_1__check_require_version_maker();

    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] = par_namespace;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] = par_stacklevel;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_return_value)->m_closure[1] );


    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gi$importer$$$function_1__check_require_version );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_namespace );
    Py_DECREF( par_namespace );
    par_namespace = NULL;

    CHECK_OBJECT( (PyObject *)par_stacklevel );
    Py_DECREF( par_stacklevel );
    par_stacklevel = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_namespace );
    Py_DECREF( par_namespace );
    par_namespace = NULL;

    CHECK_OBJECT( (PyObject *)par_stacklevel );
    Py_DECREF( par_stacklevel );
    par_stacklevel = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gi$importer$$$function_1__check_require_version );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct gi$importer$$$function_1__check_require_version$$$genobj_1__check_require_version_locals {
    PyObject *var_was_loaded;
    PyObject *var_version;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_return_value;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
};

static PyObject *gi$importer$$$function_1__check_require_version$$$genobj_1__check_require_version_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct gi$importer$$$function_1__check_require_version$$$genobj_1__check_require_version_locals *generator_heap = (struct gi$importer$$$function_1__check_require_version$$$genobj_1__check_require_version_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_was_loaded = NULL;
    generator_heap->var_version = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;
    generator_heap->tmp_return_value = NULL;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_24bce6cba695b06cfa78df4be9c8a09e, module_gi$importer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.
    {
        PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
        generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
        Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
        generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
        if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
        Py_XINCREF( generator->m_exc_state.exc_type );
        generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_value );
        generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
        Py_XINCREF( generator->m_exc_state.exc_traceback );
#endif
    }

#endif

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_repository );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_repository );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "repository" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 56;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_registered );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 56;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "namespace" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 56;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = PyCell_GET( generator->m_closure[0] );
        generator->m_frame->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 56;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->var_was_loaded == NULL );
        generator_heap->var_was_loaded = tmp_assign_source_1;
    }
    {
        PyObject *tmp_expression_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_name_1 = Py_None;
        Py_INCREF( tmp_expression_name_1 );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 58;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( generator_heap->var_was_loaded );
        tmp_truth_name_1 = CHECK_IF_TRUE( generator_heap->var_was_loaded );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 60;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        generator_heap->tmp_return_value = Py_None;
        Py_INCREF( generator_heap->tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "namespace" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 65;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = PyCell_GET( generator->m_closure[0] );
        tmp_compexpr_right_1 = const_tuple_str_plain_GLib_str_plain_GObject_str_plain_Gio_tuple;
        generator_heap->tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 65;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( generator_heap->tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        generator_heap->tmp_return_value = Py_None;
        Py_INCREF( generator_heap->tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_gi );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gi );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gi" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 69;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_required_version );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 69;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "namespace" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 69;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = PyCell_GET( generator->m_closure[0] );
        generator->m_frame->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_compexpr_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 69;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        generator_heap->tmp_return_value = Py_None;
        Py_INCREF( generator_heap->tmp_return_value );
        goto frame_return_exit_1;
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_repository );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_repository );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "repository" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 73;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_3;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_get_version );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 73;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "namespace" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 73;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = PyCell_GET( generator->m_closure[0] );
        generator->m_frame->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 73;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        assert( generator_heap->var_version == NULL );
        generator_heap->var_version = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_warnings );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warnings" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 74;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_4;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_warn );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 74;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = const_str_digest_6e033883b4266c7624e4ec16617f4d68;
        tmp_dict_key_1 = const_str_plain_namespace;
        if ( PyCell_GET( generator->m_closure[0] ) == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "namespace" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 78;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_1 = PyCell_GET( generator->m_closure[0] );
        tmp_right_name_1 = _PyDict_NewPresized( 2 );
        generator_heap->tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(generator_heap->tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_version;
        CHECK_OBJECT( generator_heap->var_version );
        tmp_dict_value_2 = generator_heap->var_version;
        generator_heap->tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(generator_heap->tmp_res != 0) );
        tmp_tuple_element_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_called_name_4 );

            generator_heap->exception_lineno = 75;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_PyGIWarning );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyGIWarning );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PyGIWarning" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 79;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_5;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_dict_key_3 = const_str_plain_stacklevel;
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_1 );
            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "stacklevel" );
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            CHAIN_EXCEPTION( generator_heap->exception_value );

            generator_heap->exception_lineno = 79;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_3 = PyCell_GET( generator->m_closure[1] );
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        generator_heap->tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(generator_heap->tmp_res != 0) );
        generator->m_frame->m_frame.f_lineno = 74;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 74;
            generator_heap->type_description_1 = "ccoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_return_exit_1:;

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    goto try_return_handler_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[0],
            generator->m_closure[1],
            generator_heap->var_was_loaded,
            generator_heap->var_version
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)generator_heap->var_was_loaded );
    Py_DECREF( generator_heap->var_was_loaded );
    generator_heap->var_was_loaded = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_was_loaded );
    generator_heap->var_was_loaded = NULL;

    Py_XDECREF( generator_heap->var_version );
    generator_heap->var_version = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)generator_heap->var_was_loaded );
    Py_DECREF( generator_heap->var_was_loaded );
    generator_heap->var_was_loaded = NULL;

    CHECK_OBJECT( (PyObject *)generator_heap->var_version );
    Py_DECREF( generator_heap->var_version );
    generator_heap->var_version = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;
    // The above won't return, but we need to make it clear to the compiler
    // as well, or else it will complain and/or generate inferior code.
    assert(false);
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 300
    generator->m_returned = generator_heap->tmp_return_value;
#endif

    return NULL;

}

static PyObject *gi$importer$$$function_1__check_require_version$$$genobj_1__check_require_version_maker( void )
{
    return Nuitka_Generator_New(
        gi$importer$$$function_1__check_require_version$$$genobj_1__check_require_version_context,
        module_gi$importer,
        const_str_plain__check_require_version,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_24bce6cba695b06cfa78df4be9c8a09e,
        2,
        sizeof(struct gi$importer$$$function_1__check_require_version$$$genobj_1__check_require_version_locals)
    );
}


static PyObject *impl_gi$importer$$$function_2_get_import_stacklevel( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_import_hook = python_pars[ 0 ];
    PyObject *var_py_version = NULL;
    struct Nuitka_FrameObject *frame_77677ba4bbc14486295070a890d36668;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_77677ba4bbc14486295070a890d36668 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_77677ba4bbc14486295070a890d36668, codeobj_77677ba4bbc14486295070a890d36668, module_gi$importer, sizeof(void *)+sizeof(void *) );
    frame_77677ba4bbc14486295070a890d36668 = cache_frame_77677ba4bbc14486295070a890d36668;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_77677ba4bbc14486295070a890d36668 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_77677ba4bbc14486295070a890d36668 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_slice_none_int_pos_2_none;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_py_version == NULL );
        var_py_version = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_py_version );
        tmp_compexpr_left_1 = var_py_version;
        tmp_compexpr_right_1 = const_tuple_int_pos_3_int_pos_2_tuple;
        tmp_res = RICH_COMPARE_BOOL_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "oo";
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
            nuitka_bool tmp_condition_result_2;
            int tmp_truth_name_1;
            CHECK_OBJECT( par_import_hook );
            tmp_truth_name_1 = CHECK_IF_TRUE( par_import_hook );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto condexpr_true_1;
            }
            else
            {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            tmp_return_value = const_int_pos_4;
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_return_value = const_int_pos_2;
            condexpr_end_1:;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( var_py_version );
            tmp_compexpr_left_2 = var_py_version;
            tmp_compexpr_right_2 = const_tuple_int_pos_3_int_pos_3_tuple;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 95;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                nuitka_bool tmp_condition_result_4;
                int tmp_truth_name_2;
                CHECK_OBJECT( par_import_hook );
                tmp_truth_name_2 = CHECK_IF_TRUE( par_import_hook );
                if ( tmp_truth_name_2 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 96;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
                {
                    goto condexpr_true_2;
                }
                else
                {
                    goto condexpr_false_2;
                }
                condexpr_true_2:;
                tmp_return_value = const_int_pos_8;
                goto condexpr_end_2;
                condexpr_false_2:;
                tmp_return_value = const_int_pos_10;
                condexpr_end_2:;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_3;
                PyObject *tmp_compexpr_right_3;
                CHECK_OBJECT( var_py_version );
                tmp_compexpr_left_3 = var_py_version;
                tmp_compexpr_right_3 = const_tuple_int_pos_3_int_pos_4_tuple;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 97;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_3;
                }
                else
                {
                    goto branch_no_3;
                }
                branch_yes_3:;
                {
                    nuitka_bool tmp_condition_result_6;
                    int tmp_truth_name_3;
                    CHECK_OBJECT( par_import_hook );
                    tmp_truth_name_3 = CHECK_IF_TRUE( par_import_hook );
                    if ( tmp_truth_name_3 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 98;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_6 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
                    {
                        goto condexpr_true_3;
                    }
                    else
                    {
                        goto condexpr_false_3;
                    }
                    condexpr_true_3:;
                    tmp_return_value = const_int_pos_10;
                    goto condexpr_end_3;
                    condexpr_false_3:;
                    tmp_return_value = const_int_pos_8;
                    condexpr_end_3:;
                    Py_INCREF( tmp_return_value );
                    goto frame_return_exit_1;
                }
                goto branch_end_3;
                branch_no_3:;
                {
                    nuitka_bool tmp_condition_result_7;
                    int tmp_truth_name_4;
                    CHECK_OBJECT( par_import_hook );
                    tmp_truth_name_4 = CHECK_IF_TRUE( par_import_hook );
                    if ( tmp_truth_name_4 == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 101;
                        type_description_1 = "oo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_7 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
                    {
                        goto condexpr_true_4;
                    }
                    else
                    {
                        goto condexpr_false_4;
                    }
                    condexpr_true_4:;
                    tmp_return_value = const_int_pos_4;
                    goto condexpr_end_4;
                    condexpr_false_4:;
                    tmp_return_value = const_int_pos_2;
                    condexpr_end_4:;
                    Py_INCREF( tmp_return_value );
                    goto frame_return_exit_1;
                }
                branch_end_3:;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_77677ba4bbc14486295070a890d36668 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_77677ba4bbc14486295070a890d36668 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_77677ba4bbc14486295070a890d36668 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_77677ba4bbc14486295070a890d36668, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_77677ba4bbc14486295070a890d36668->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_77677ba4bbc14486295070a890d36668, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_77677ba4bbc14486295070a890d36668,
        type_description_1,
        par_import_hook,
        var_py_version
    );


    // Release cached frame.
    if ( frame_77677ba4bbc14486295070a890d36668 == cache_frame_77677ba4bbc14486295070a890d36668 )
    {
        Py_DECREF( frame_77677ba4bbc14486295070a890d36668 );
    }
    cache_frame_77677ba4bbc14486295070a890d36668 = NULL;

    assertFrameObject( frame_77677ba4bbc14486295070a890d36668 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gi$importer$$$function_2_get_import_stacklevel );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_import_hook );
    Py_DECREF( par_import_hook );
    par_import_hook = NULL;

    CHECK_OBJECT( (PyObject *)var_py_version );
    Py_DECREF( var_py_version );
    var_py_version = NULL;

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

    CHECK_OBJECT( (PyObject *)par_import_hook );
    Py_DECREF( par_import_hook );
    par_import_hook = NULL;

    Py_XDECREF( var_py_version );
    var_py_version = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gi$importer$$$function_2_get_import_stacklevel );
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


static PyObject *impl_gi$importer$$$function_3___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_path = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_6a0fde62a3465df6f84b88b542dc4fe0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6a0fde62a3465df6f84b88b542dc4fe0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6a0fde62a3465df6f84b88b542dc4fe0, codeobj_6a0fde62a3465df6f84b88b542dc4fe0, module_gi$importer, sizeof(void *)+sizeof(void *) );
    frame_6a0fde62a3465df6f84b88b542dc4fe0 = cache_frame_6a0fde62a3465df6f84b88b542dc4fe0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6a0fde62a3465df6f84b88b542dc4fe0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6a0fde62a3465df6f84b88b542dc4fe0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_path );
        tmp_assattr_name_1 = par_path;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_path, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a0fde62a3465df6f84b88b542dc4fe0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6a0fde62a3465df6f84b88b542dc4fe0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6a0fde62a3465df6f84b88b542dc4fe0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6a0fde62a3465df6f84b88b542dc4fe0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6a0fde62a3465df6f84b88b542dc4fe0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6a0fde62a3465df6f84b88b542dc4fe0,
        type_description_1,
        par_self,
        par_path
    );


    // Release cached frame.
    if ( frame_6a0fde62a3465df6f84b88b542dc4fe0 == cache_frame_6a0fde62a3465df6f84b88b542dc4fe0 )
    {
        Py_DECREF( frame_6a0fde62a3465df6f84b88b542dc4fe0 );
    }
    cache_frame_6a0fde62a3465df6f84b88b542dc4fe0 = NULL;

    assertFrameObject( frame_6a0fde62a3465df6f84b88b542dc4fe0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gi$importer$$$function_3___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gi$importer$$$function_3___init__ );
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


static PyObject *impl_gi$importer$$$function_4_find_module( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_fullname = python_pars[ 1 ];
    PyObject *par_path = python_pars[ 2 ];
    PyObject *var_namespace = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_005f3332218c101a5c97fa2944ac48d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_005f3332218c101a5c97fa2944ac48d7 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_005f3332218c101a5c97fa2944ac48d7, codeobj_005f3332218c101a5c97fa2944ac48d7, module_gi$importer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_005f3332218c101a5c97fa2944ac48d7 = cache_frame_005f3332218c101a5c97fa2944ac48d7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_005f3332218c101a5c97fa2944ac48d7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_005f3332218c101a5c97fa2944ac48d7 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_fullname );
        tmp_source_name_1 = par_fullname;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_startswith );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_005f3332218c101a5c97fa2944ac48d7->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "oooo";
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_fullname );
        tmp_called_instance_1 = par_fullname;
        frame_005f3332218c101a5c97fa2944ac48d7->m_frame.f_lineno = 115;
        tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_rsplit, &PyTuple_GET_ITEM( const_tuple_str_dot_int_pos_1_tuple, 0 ) );

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooo";
            exception_lineno = 115;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "oooo";
            exception_lineno = 115;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "oooo";
                    exception_lineno = 115;
                    goto try_except_handler_3;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "oooo";
            exception_lineno = 115;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_path;
            assert( old != NULL );
            par_path = tmp_assign_source_4;
            Py_INCREF( par_path );
            Py_DECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_namespace == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_namespace = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_path );
        tmp_compexpr_left_1 = par_path;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_path );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_005f3332218c101a5c97fa2944ac48d7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_005f3332218c101a5c97fa2944ac48d7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_005f3332218c101a5c97fa2944ac48d7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_005f3332218c101a5c97fa2944ac48d7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_005f3332218c101a5c97fa2944ac48d7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_005f3332218c101a5c97fa2944ac48d7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_005f3332218c101a5c97fa2944ac48d7,
        type_description_1,
        par_self,
        par_fullname,
        par_path,
        var_namespace
    );


    // Release cached frame.
    if ( frame_005f3332218c101a5c97fa2944ac48d7 == cache_frame_005f3332218c101a5c97fa2944ac48d7 )
    {
        Py_DECREF( frame_005f3332218c101a5c97fa2944ac48d7 );
    }
    cache_frame_005f3332218c101a5c97fa2944ac48d7 = NULL;

    assertFrameObject( frame_005f3332218c101a5c97fa2944ac48d7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_self );
    tmp_return_value = par_self;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gi$importer$$$function_4_find_module );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fullname );
    Py_DECREF( par_fullname );
    par_fullname = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    Py_XDECREF( var_namespace );
    var_namespace = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fullname );
    Py_DECREF( par_fullname );
    par_fullname = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    Py_XDECREF( var_namespace );
    var_namespace = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gi$importer$$$function_4_find_module );
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


static PyObject *impl_gi$importer$$$function_5_load_module( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_fullname = python_pars[ 1 ];
    PyObject *var_path = NULL;
    PyObject *var_namespace = NULL;
    PyObject *var_stacklevel = NULL;
    PyObject *var_introspection_module = NULL;
    PyObject *var_e = NULL;
    PyObject *var_dep = NULL;
    PyObject *var_dynamic_module = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_951f843964de3cd36892a052deaad603;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    bool tmp_result;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_951f843964de3cd36892a052deaad603 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_951f843964de3cd36892a052deaad603, codeobj_951f843964de3cd36892a052deaad603, module_gi$importer, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_951f843964de3cd36892a052deaad603 = cache_frame_951f843964de3cd36892a052deaad603;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_951f843964de3cd36892a052deaad603 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_951f843964de3cd36892a052deaad603 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_fullname );
        tmp_compexpr_left_1 = par_fullname;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_modules );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 123;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_modules );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 123;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_fullname );
            tmp_subscript_name_1 = par_fullname;
            tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 123;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_fullname );
        tmp_called_instance_1 = par_fullname;
        frame_951f843964de3cd36892a052deaad603->m_frame.f_lineno = 125;
        tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_rsplit, &PyTuple_GET_ITEM( const_tuple_str_dot_int_pos_1_tuple, 0 ) );

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 125;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                exception_type = PyExc_StopIteration;
                Py_INCREF( exception_type );
                exception_value = NULL;
                exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 125;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( tmp_iterator_attempt == NULL ))
        {
            PyObject *error = GET_ERROR_OCCURRED();

            if ( error != NULL )
            {
                if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
                {
                    CLEAR_ERROR_OCCURRED();
                }
                else
                {
                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                    type_description_1 = "ooooooooo";
                    exception_lineno = 125;
                    goto try_except_handler_3;
                }
            }
        }
        else
        {
            Py_DECREF( tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooooooooo";
            exception_lineno = 125;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert( var_path == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_path = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_namespace == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_namespace = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_repository );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_repository );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "repository" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 130;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_namespace );
        tmp_args_element_name_1 = var_namespace;
        frame_951f843964de3cd36892a052deaad603->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_operand_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_is_registered, call_args );
        }

        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_1 == 1 )
        {
            goto and_right_1;
        }
        else
        {
            goto and_left_1;
        }
        and_right_1:;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_repository );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_repository );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "repository" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 131;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_4;
        CHECK_OBJECT( var_namespace );
        tmp_args_element_name_2 = var_namespace;
        frame_951f843964de3cd36892a052deaad603->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_operand_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_enumerate_versions, call_args );
        }

        if ( tmp_operand_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        Py_DECREF( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            tmp_left_name_1 = const_str_digest_e3207721a489afdbe564147e299ac132;
            CHECK_OBJECT( var_namespace );
            tmp_right_name_1 = var_namespace;
            tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 132;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_951f843964de3cd36892a052deaad603->m_frame.f_lineno = 132;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 132;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_get_import_stacklevel );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_import_stacklevel );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_import_stacklevel" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 135;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_5;
        tmp_kw_name_1 = PyDict_Copy( const_dict_ecb6704bab3f53b840a26cc0996fa7ce );
        frame_951f843964de3cd36892a052deaad603->m_frame.f_lineno = 135;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_stacklevel == NULL );
        var_stacklevel = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain__check_require_version );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__check_require_version );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_check_require_version" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 136;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_2 = tmp_mvar_value_6;
        CHECK_OBJECT( var_namespace );
        tmp_tuple_element_1 = var_namespace;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_stacklevel;
        CHECK_OBJECT( var_stacklevel );
        tmp_dict_value_1 = var_stacklevel;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_951f843964de3cd36892a052deaad603->m_frame.f_lineno = 136;
        tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_3 = tmp_with_1__source;
        tmp_called_name_3 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___enter__ );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        frame_951f843964de3cd36892a052deaad603->m_frame.f_lineno = 136;
        tmp_assign_source_8 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_3 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_4 = tmp_with_1__source;
        tmp_assign_source_9 = LOOKUP_SPECIAL( tmp_source_name_4, const_str_plain___exit__ );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_assign_source_10;
        tmp_assign_source_10 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_10;
    }
    // Tried code:
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_get_introspection_module );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_introspection_module );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "get_introspection_module" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 138;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_name_4 = tmp_mvar_value_7;
        CHECK_OBJECT( var_namespace );
        tmp_args_element_name_3 = var_namespace;
        frame_951f843964de3cd36892a052deaad603->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }
        assert( var_introspection_module == NULL );
        var_introspection_module = tmp_assign_source_11;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_951f843964de3cd36892a052deaad603, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_951f843964de3cd36892a052deaad603, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_mvar_value_8;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_RepositoryError );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RepositoryError );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RepositoryError" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 139;
            type_description_1 = "ooooooooo";
            goto try_except_handler_8;
        }

        tmp_compexpr_right_2 = tmp_mvar_value_8;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "ooooooooo";
            goto try_except_handler_8;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = EXC_VALUE(PyThreadState_GET());
            assert( var_e == NULL );
            Py_INCREF( tmp_assign_source_12 );
            var_e = tmp_assign_source_12;
        }
        // Tried code:
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            CHECK_OBJECT( var_e );
            tmp_make_exception_arg_2 = var_e;
            frame_951f843964de3cd36892a052deaad603->m_frame.f_lineno = 140;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 140;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( gi$importer$$$function_5_load_module );
        return NULL;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( var_e );
        var_e = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_8;
        // End of try:
        goto branch_end_3;
        branch_no_3:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 137;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_951f843964de3cd36892a052deaad603->m_frame) frame_951f843964de3cd36892a052deaad603->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooo";
        goto try_except_handler_8;
        branch_end_3:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gi$importer$$$function_5_load_module );
    return NULL;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_repository );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_repository );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "repository" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 144;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_instance_4 = tmp_mvar_value_9;
        CHECK_OBJECT( var_namespace );
        tmp_args_element_name_4 = var_namespace;
        frame_951f843964de3cd36892a052deaad603->m_frame.f_lineno = 144;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_iter_arg_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_get_immediate_dependencies, call_args );
        }

        if ( tmp_iter_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_2 );
        Py_DECREF( tmp_iter_arg_2 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_13;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_14 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooo";
                exception_lineno = 144;
                goto try_except_handler_10;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_14;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_15 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_dep;
            var_dep = tmp_assign_source_15;
            Py_INCREF( var_dep );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_subscript_name_2;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_importlib );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_importlib );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "importlib" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 145;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }

        tmp_source_name_5 = tmp_mvar_value_10;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_import_module );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }
        tmp_left_name_2 = const_str_digest_2dddc6e15ab2dcfb5a2b2205b5654fb4;
        CHECK_OBJECT( var_dep );
        tmp_called_instance_5 = var_dep;
        frame_951f843964de3cd36892a052deaad603->m_frame.f_lineno = 145;
        tmp_subscribed_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_45_tuple, 0 ) );

        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 145;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }
        tmp_subscript_name_2 = const_int_0;
        tmp_right_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_right_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 145;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }
        tmp_args_element_name_5 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_right_name_2 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_5 );

            exception_lineno = 145;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }
        frame_951f843964de3cd36892a052deaad603->m_frame.f_lineno = 145;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 145;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "ooooooooo";
        goto try_except_handler_10;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_load_overrides );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_load_overrides );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "load_overrides" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 146;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_name_6 = tmp_mvar_value_11;
        CHECK_OBJECT( var_introspection_module );
        tmp_args_element_name_6 = var_introspection_module;
        frame_951f843964de3cd36892a052deaad603->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
        }
        assert( var_dynamic_module == NULL );
        var_dynamic_module = tmp_assign_source_16;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_951f843964de3cd36892a052deaad603, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_951f843964de3cd36892a052deaad603, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PyException_SetTraceback( exception_keeper_value_7, (PyObject *)exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_3 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "ooooooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            nuitka_bool tmp_assign_source_17;
            tmp_assign_source_17 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_17;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_called_name_7;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_7 = tmp_with_1__exit;
            tmp_args_element_name_7 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_8 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_9 = EXC_TRACEBACK(PyThreadState_GET());
            frame_951f843964de3cd36892a052deaad603->m_frame.f_lineno = 136;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_operand_name_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
            }

            if ( tmp_operand_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_1 = "ooooooooo";
                goto try_except_handler_11;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            Py_DECREF( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_1 = "ooooooooo";
                goto try_except_handler_11;
            }
            tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_5;
            }
            else
            {
                goto branch_no_5;
            }
            branch_yes_5:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 136;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_951f843964de3cd36892a052deaad603->m_frame) frame_951f843964de3cd36892a052deaad603->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooooo";
            goto try_except_handler_11;
            branch_no_5:;
        }
        goto branch_end_4;
        branch_no_4:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 136;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_951f843964de3cd36892a052deaad603->m_frame) frame_951f843964de3cd36892a052deaad603->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooo";
        goto try_except_handler_11;
        branch_end_4:;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_5;
    // End of try:
    try_end_6:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gi$importer$$$function_5_load_module );
    return NULL;
    // End of try:
    try_end_5:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_6;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_4 = tmp_with_1__indicator;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_called_name_8;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_8 = tmp_with_1__exit;
            frame_951f843964de3cd36892a052deaad603->m_frame.f_lineno = 136;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_9 );
                Py_XDECREF( exception_keeper_value_9 );
                Py_XDECREF( exception_keeper_tb_9 );

                exception_lineno = 136;
                type_description_1 = "ooooooooo";
                goto try_except_handler_4;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_6:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_4;
    // End of try:
    try_end_7:;
    {
        nuitka_bool tmp_condition_result_7;
        nuitka_bool tmp_compexpr_left_5;
        nuitka_bool tmp_compexpr_right_5;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_5 = tmp_with_1__indicator;
        tmp_compexpr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = ( tmp_compexpr_left_5 == tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_called_name_9;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_9 = tmp_with_1__exit;
            frame_951f843964de3cd36892a052deaad603->m_frame.f_lineno = 136;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 136;
                type_description_1 = "ooooooooo";
                goto try_except_handler_4;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_7:;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_assattr_target_1;
        tmp_left_name_3 = const_str_digest_c0c3759da123e387798315e75d2fed70;
        CHECK_OBJECT( par_fullname );
        tmp_right_name_3 = par_fullname;
        tmp_assattr_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if ( var_dynamic_module == NULL )
        {
            Py_DECREF( tmp_assattr_name_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dynamic_module" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 148;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = var_dynamic_module;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___file__, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_self );
        tmp_assattr_name_2 = par_self;
        if ( var_dynamic_module == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dynamic_module" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 149;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = var_dynamic_module;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain___loader__, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 149;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_ass_subscript_1;
        if ( var_dynamic_module == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dynamic_module" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 150;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_1 = var_dynamic_module;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 150;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_12;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_modules );
        if ( tmp_ass_subscribed_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_fullname );
        tmp_ass_subscript_1 = par_fullname;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
    }
    if ( var_dynamic_module == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "dynamic_module" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_dynamic_module;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_951f843964de3cd36892a052deaad603 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_951f843964de3cd36892a052deaad603 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_951f843964de3cd36892a052deaad603 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_951f843964de3cd36892a052deaad603, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_951f843964de3cd36892a052deaad603->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_951f843964de3cd36892a052deaad603, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_951f843964de3cd36892a052deaad603,
        type_description_1,
        par_self,
        par_fullname,
        var_path,
        var_namespace,
        var_stacklevel,
        var_introspection_module,
        var_e,
        var_dep,
        var_dynamic_module
    );


    // Release cached frame.
    if ( frame_951f843964de3cd36892a052deaad603 == cache_frame_951f843964de3cd36892a052deaad603 )
    {
        Py_DECREF( frame_951f843964de3cd36892a052deaad603 );
    }
    cache_frame_951f843964de3cd36892a052deaad603 = NULL;

    assertFrameObject( frame_951f843964de3cd36892a052deaad603 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( gi$importer$$$function_5_load_module );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fullname );
    Py_DECREF( par_fullname );
    par_fullname = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_namespace );
    var_namespace = NULL;

    Py_XDECREF( var_stacklevel );
    var_stacklevel = NULL;

    Py_XDECREF( var_introspection_module );
    var_introspection_module = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_dep );
    var_dep = NULL;

    Py_XDECREF( var_dynamic_module );
    var_dynamic_module = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_fullname );
    Py_DECREF( par_fullname );
    par_fullname = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_namespace );
    var_namespace = NULL;

    Py_XDECREF( var_stacklevel );
    var_stacklevel = NULL;

    Py_XDECREF( var_introspection_module );
    var_introspection_module = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_dep );
    var_dep = NULL;

    Py_XDECREF( var_dynamic_module );
    var_dynamic_module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( gi$importer$$$function_5_load_module );
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



static PyObject *MAKE_FUNCTION_gi$importer$$$function_1__check_require_version(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$importer$$$function_1__check_require_version,
        const_str_plain__check_require_version,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_24bce6cba695b06cfa78df4be9c8a09e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gi$importer,
        const_str_digest_1b3a1dfca67f6ccfe7d6052b72b7ab8e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$importer$$$function_2_get_import_stacklevel(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$importer$$$function_2_get_import_stacklevel,
        const_str_plain_get_import_stacklevel,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_77677ba4bbc14486295070a890d36668,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gi$importer,
        const_str_digest_506620dc2fed48c9cd06b50e5565f1c6,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$importer$$$function_3___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$importer$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_2779f140b052d7c4d7b59e5d675c8e9f,
#endif
        codeobj_6a0fde62a3465df6f84b88b542dc4fe0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gi$importer,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$importer$$$function_4_find_module( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$importer$$$function_4_find_module,
        const_str_plain_find_module,
#if PYTHON_VERSION >= 300
        const_str_digest_f28812161f364a88311ca4fe0480111c,
#endif
        codeobj_005f3332218c101a5c97fa2944ac48d7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gi$importer,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$importer$$$function_5_load_module(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$importer$$$function_5_load_module,
        const_str_plain_load_module,
#if PYTHON_VERSION >= 300
        const_str_digest_4677122ef9be386f7963a3d6fe162c2e,
#endif
        codeobj_951f843964de3cd36892a052deaad603,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_gi$importer,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_gi$importer =
{
    PyModuleDef_HEAD_INIT,
    "gi.importer",
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

MOD_INIT_DECL( gi$importer )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_gi$importer );
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
    puts("gi.importer: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("gi.importer: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("gi.importer: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initgi$importer" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_gi$importer = Py_InitModule4(
        "gi.importer",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_gi$importer = PyModule_Create( &mdef_gi$importer );
#endif

    moduledict_gi$importer = MODULE_DICT( module_gi$importer );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_gi$importer,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_gi$importer,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_gi$importer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_gi$importer,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_gi$importer );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_7df6a861b1b2cd7838fc3723262fa3a4, module_gi$importer );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_103448d7dce7c5f65b1b50a695224520;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_gi$importer_104 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_12e1c0b8d2ed29fe5060fbb6a27d7e68_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_12e1c0b8d2ed29fe5060fbb6a27d7e68_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_103448d7dce7c5f65b1b50a695224520 = MAKE_MODULE_FRAME( codeobj_103448d7dce7c5f65b1b50a695224520, module_gi$importer );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_103448d7dce7c5f65b1b50a695224520 );
    assert( Py_REFCNT( frame_103448d7dce7c5f65b1b50a695224520 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        frame_103448d7dce7c5f65b1b50a695224520->m_frame.f_lineno = 24;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert( !(tmp_import_name_from_1 == NULL) );
        tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_sys;
        tmp_globals_name_1 = (PyObject *)moduledict_gi$importer;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_103448d7dce7c5f65b1b50a695224520->m_frame.f_lineno = 25;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_warnings;
        tmp_globals_name_2 = (PyObject *)moduledict_gi$importer;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_103448d7dce7c5f65b1b50a695224520->m_frame.f_lineno = 26;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_importlib;
        tmp_globals_name_3 = (PyObject *)moduledict_gi$importer;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_103448d7dce7c5f65b1b50a695224520->m_frame.f_lineno = 27;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_importlib, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_contextlib;
        tmp_globals_name_4 = (PyObject *)moduledict_gi$importer;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_contextmanager_tuple;
        tmp_level_name_4 = const_int_0;
        frame_103448d7dce7c5f65b1b50a695224520->m_frame.f_lineno = 28;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_contextmanager );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_contextmanager, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_gi;
        tmp_globals_name_5 = (PyObject *)moduledict_gi$importer;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = const_int_0;
        frame_103448d7dce7c5f65b1b50a695224520->m_frame.f_lineno = 30;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_gi, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain__gi;
        tmp_globals_name_6 = (PyObject *)moduledict_gi$importer;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_Repository_str_plain_RepositoryError_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_103448d7dce7c5f65b1b50a695224520->m_frame.f_lineno = 31;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_3 ) )
        {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)MODULE_DICT(tmp_import_name_from_3),
                const_str_plain_Repository,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Repository );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_Repository, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)MODULE_DICT(tmp_import_name_from_4),
                const_str_plain_RepositoryError,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_RepositoryError );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_RepositoryError, tmp_assign_source_12 );
    }
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain__gi;
        tmp_globals_name_7 = (PyObject *)moduledict_gi$importer;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_PyGIWarning_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_103448d7dce7c5f65b1b50a695224520->m_frame.f_lineno = 32;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)MODULE_DICT(tmp_import_name_from_5),
                const_str_plain_PyGIWarning,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_PyGIWarning );
        }

        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_PyGIWarning, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_module;
        tmp_globals_name_8 = (PyObject *)moduledict_gi$importer;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_get_introspection_module_tuple;
        tmp_level_name_8 = const_int_pos_1;
        frame_103448d7dce7c5f65b1b50a695224520->m_frame.f_lineno = 33;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)MODULE_DICT(tmp_import_name_from_6),
                const_str_plain_get_introspection_module,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_get_introspection_module );
        }

        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_get_introspection_module, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_plain_overrides;
        tmp_globals_name_9 = (PyObject *)moduledict_gi$importer;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_load_overrides_tuple;
        tmp_level_name_9 = const_int_pos_1;
        frame_103448d7dce7c5f65b1b50a695224520->m_frame.f_lineno = 34;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)MODULE_DICT(tmp_import_name_from_7),
                const_str_plain_load_overrides,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_load_overrides );
        }

        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_load_overrides, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_Repository );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Repository );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Repository" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        frame_103448d7dce7c5f65b1b50a695224520->m_frame.f_lineno = 37;
        tmp_assign_source_16 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_default );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_repository, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = PyDict_New();
        UPDATE_STRING_DICT1( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_modules, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_contextmanager );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_contextmanager );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "contextmanager" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 43;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_4;
        tmp_args_element_name_1 = MAKE_FUNCTION_gi$importer$$$function_1__check_require_version(  );



        frame_103448d7dce7c5f65b1b50a695224520->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain__check_require_version, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_gi$importer$$$function_2_get_import_stacklevel(  );



        UPDATE_STRING_DICT1( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_get_import_stacklevel, tmp_assign_source_19 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_20 = impl___internal__$$$function_2__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_2;
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
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = const_str_plain_metaclass;
        tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_class_creation_1__bases );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_subscribed_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = const_int_0;
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_type_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_1 );
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT( tmp_class_creation_1__bases );
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_22 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        tmp_key_name_3 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_2;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_2;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_source_name_1 = tmp_class_creation_1__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_1, const_str_plain___prepare__ );
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_23;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_2;
            }
            tmp_tuple_element_1 = const_str_plain_DynamicImporter;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_1 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_103448d7dce7c5f65b1b50a695224520->m_frame.f_lineno = 104;
            tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_23 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_23;
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_source_name_3 = tmp_class_creation_1__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_3, const_str_plain___getitem__ );
            tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_2;
            }
            tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_raise_value_1;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_1 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_2 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 104;

                    goto try_except_handler_2;
                }
                tmp_right_name_1 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_tuple_element_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_1 );

                    exception_lineno = 104;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_2 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 104;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 104;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_24;
            tmp_assign_source_24 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_24;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_gi$importer_104 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_7df6a861b1b2cd7838fc3723262fa3a4;
        tmp_res = PyObject_SetItem( locals_gi$importer_104, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_DynamicImporter;
        tmp_res = PyObject_SetItem( locals_gi$importer_104, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_12e1c0b8d2ed29fe5060fbb6a27d7e68_2, codeobj_12e1c0b8d2ed29fe5060fbb6a27d7e68, module_gi$importer, sizeof(void *) );
        frame_12e1c0b8d2ed29fe5060fbb6a27d7e68_2 = cache_frame_12e1c0b8d2ed29fe5060fbb6a27d7e68_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_12e1c0b8d2ed29fe5060fbb6a27d7e68_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_12e1c0b8d2ed29fe5060fbb6a27d7e68_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = MAKE_FUNCTION_gi$importer$$$function_3___init__(  );



        tmp_res = PyObject_SetItem( locals_gi$importer_104, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_gi$importer$$$function_4_find_module( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_gi$importer_104, const_str_plain_find_module, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_gi$importer$$$function_5_load_module(  );



        tmp_res = PyObject_SetItem( locals_gi$importer_104, const_str_plain_load_module, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_12e1c0b8d2ed29fe5060fbb6a27d7e68_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_12e1c0b8d2ed29fe5060fbb6a27d7e68_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_12e1c0b8d2ed29fe5060fbb6a27d7e68_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_12e1c0b8d2ed29fe5060fbb6a27d7e68_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_12e1c0b8d2ed29fe5060fbb6a27d7e68_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_12e1c0b8d2ed29fe5060fbb6a27d7e68_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_12e1c0b8d2ed29fe5060fbb6a27d7e68_2 == cache_frame_12e1c0b8d2ed29fe5060fbb6a27d7e68_2 )
        {
            Py_DECREF( frame_12e1c0b8d2ed29fe5060fbb6a27d7e68_2 );
        }
        cache_frame_12e1c0b8d2ed29fe5060fbb6a27d7e68_2 = NULL;

        assertFrameObject( frame_12e1c0b8d2ed29fe5060fbb6a27d7e68_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            tmp_compexpr_right_1 = const_tuple_type_object_tuple;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_4;
            }
            tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            tmp_dictset_value = const_tuple_type_object_tuple;
            tmp_res = PyObject_SetItem( locals_gi$importer_104, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_4;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = const_str_plain_DynamicImporter;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
            tmp_tuple_element_3 = locals_gi$importer_104;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_103448d7dce7c5f65b1b50a695224520->m_frame.f_lineno = 104;
            tmp_assign_source_26 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 104;

                goto try_except_handler_4;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_26;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_25 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_25 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( gi$importer );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_gi$importer_104 );
        locals_gi$importer_104 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_gi$importer_104 );
        locals_gi$importer_104 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( gi$importer );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
        Py_DECREF( outline_0_var___class__ );
        outline_0_var___class__ = NULL;

        goto outline_result_1;
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

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( gi$importer );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 104;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain_DynamicImporter, tmp_assign_source_25 );
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_103448d7dce7c5f65b1b50a695224520 );
#endif
    popFrameStack();

    assertFrameObject( frame_103448d7dce7c5f65b1b50a695224520 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_103448d7dce7c5f65b1b50a695224520 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_103448d7dce7c5f65b1b50a695224520, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_103448d7dce7c5f65b1b50a695224520->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_103448d7dce7c5f65b1b50a695224520, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_gi$importer, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_gi$importer );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
