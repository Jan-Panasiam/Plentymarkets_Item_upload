/* Generated code for Python module 'sortedcontainers'
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

/* The "_module_sortedcontainers" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_sortedcontainers;
PyDictObject *moduledict_sortedcontainers;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain___copyright__;
extern PyObject *const_str_plain_SortedKeyList;
extern PyObject *const_str_plain_environ;
static PyObject *const_str_plain_sorteddict;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_sortedlist;
static PyObject *const_str_digest_830b29dc1e99b9b7996b45708b034bb3;
static PyObject *const_str_digest_c732b0001bd9466f3f59e4e065102217;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_SortedItemsView;
static PyObject *const_str_plain___build__;
static PyObject *const_str_digest_d633a6eb172b5c2d11046e89de383483;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_SortedDict;
static PyObject *const_str_plain___version__;
static PyObject *const_str_digest_72c6ae501e3d6797f9f30ea230c4ea9f;
extern PyObject *const_str_plain_path;
extern PyObject *const_tuple_str_plain_SortedSet_tuple;
static PyObject *const_str_plain_NUITKA_PACKAGE_sortedcontainers;
static PyObject *const_list_8448343342a4d875dadf9bf7a12a0303_list;
static PyObject *const_int_pos_131328;
extern PyObject *const_str_plain_SortedSet;
static PyObject *const_tuple_5dabbeb90e8e9f5e7ee296c7a891b9ec_tuple;
extern PyObject *const_str_plain_SortedValuesView;
static PyObject *const_str_plain___author__;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_82b820451be11adebfaa34e133657d64;
static PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain_SortedKeysView;
extern PyObject *const_str_plain_sortedcontainers;
static PyObject *const_str_plain___license__;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_sortedset;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_get;
static PyObject *const_str_plain___title__;
extern PyObject *const_str_plain_SortedList;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_8243ed8238dc12f1d476556126f624b4_tuple;
static PyObject *const_tuple_baf7ace65fadc69d9d4382b889137f09_tuple;
static PyObject *const_str_digest_8a538a59ce8fe44e281b361b1f345407;
static PyObject *const_str_digest_e28de25f797a85811aa4f5f500d234cc;
static PyObject *const_str_plain_dirname;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_SortedListWithKey;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain___copyright__ = UNSTREAM_STRING_ASCII( &constant_bin[ 4938 ], 13, 1 );
    const_str_plain_sorteddict = UNSTREAM_STRING_ASCII( &constant_bin[ 4951 ], 10, 1 );
    const_str_digest_830b29dc1e99b9b7996b45708b034bb3 = UNSTREAM_STRING_ASCII( &constant_bin[ 4961 ], 11, 0 );
    const_str_digest_c732b0001bd9466f3f59e4e065102217 = UNSTREAM_STRING_ASCII( &constant_bin[ 4972 ], 10, 0 );
    const_str_plain___build__ = UNSTREAM_STRING_ASCII( &constant_bin[ 4982 ], 9, 1 );
    const_str_digest_d633a6eb172b5c2d11046e89de383483 = UNSTREAM_STRING_ASCII( &constant_bin[ 4991 ], 28, 0 );
    const_str_plain___version__ = UNSTREAM_STRING_ASCII( &constant_bin[ 5019 ], 11, 1 );
    const_str_digest_72c6ae501e3d6797f9f30ea230c4ea9f = UNSTREAM_STRING_ASCII( &constant_bin[ 5030 ], 1560, 0 );
    const_str_plain_NUITKA_PACKAGE_sortedcontainers = UNSTREAM_STRING_ASCII( &constant_bin[ 6590 ], 31, 1 );
    const_list_8448343342a4d875dadf9bf7a12a0303_list = PyList_New( 8 );
    PyList_SET_ITEM( const_list_8448343342a4d875dadf9bf7a12a0303_list, 0, const_str_plain_SortedList ); Py_INCREF( const_str_plain_SortedList );
    PyList_SET_ITEM( const_list_8448343342a4d875dadf9bf7a12a0303_list, 1, const_str_plain_SortedKeyList ); Py_INCREF( const_str_plain_SortedKeyList );
    PyList_SET_ITEM( const_list_8448343342a4d875dadf9bf7a12a0303_list, 2, const_str_plain_SortedListWithKey ); Py_INCREF( const_str_plain_SortedListWithKey );
    PyList_SET_ITEM( const_list_8448343342a4d875dadf9bf7a12a0303_list, 3, const_str_plain_SortedDict ); Py_INCREF( const_str_plain_SortedDict );
    PyList_SET_ITEM( const_list_8448343342a4d875dadf9bf7a12a0303_list, 4, const_str_plain_SortedKeysView ); Py_INCREF( const_str_plain_SortedKeysView );
    PyList_SET_ITEM( const_list_8448343342a4d875dadf9bf7a12a0303_list, 5, const_str_plain_SortedItemsView ); Py_INCREF( const_str_plain_SortedItemsView );
    PyList_SET_ITEM( const_list_8448343342a4d875dadf9bf7a12a0303_list, 6, const_str_plain_SortedValuesView ); Py_INCREF( const_str_plain_SortedValuesView );
    PyList_SET_ITEM( const_list_8448343342a4d875dadf9bf7a12a0303_list, 7, const_str_plain_SortedSet ); Py_INCREF( const_str_plain_SortedSet );
    const_int_pos_131328 = PyLong_FromUnsignedLong( 131328ul );
    const_tuple_5dabbeb90e8e9f5e7ee296c7a891b9ec_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_5dabbeb90e8e9f5e7ee296c7a891b9ec_tuple, 0, const_str_plain_SortedDict ); Py_INCREF( const_str_plain_SortedDict );
    PyTuple_SET_ITEM( const_tuple_5dabbeb90e8e9f5e7ee296c7a891b9ec_tuple, 1, const_str_plain_SortedKeysView ); Py_INCREF( const_str_plain_SortedKeysView );
    PyTuple_SET_ITEM( const_tuple_5dabbeb90e8e9f5e7ee296c7a891b9ec_tuple, 2, const_str_plain_SortedItemsView ); Py_INCREF( const_str_plain_SortedItemsView );
    PyTuple_SET_ITEM( const_tuple_5dabbeb90e8e9f5e7ee296c7a891b9ec_tuple, 3, const_str_plain_SortedValuesView ); Py_INCREF( const_str_plain_SortedValuesView );
    const_str_plain___author__ = UNSTREAM_STRING_ASCII( &constant_bin[ 6621 ], 10, 1 );
    const_str_digest_82b820451be11adebfaa34e133657d64 = UNSTREAM_STRING_ASCII( &constant_bin[ 6631 ], 5, 0 );
    const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 = UNSTREAM_STRING_ASCII( &constant_bin[ 6636 ], 9, 0 );
    const_str_plain___license__ = UNSTREAM_STRING_ASCII( &constant_bin[ 6645 ], 11, 1 );
    const_str_plain___title__ = UNSTREAM_STRING_ASCII( &constant_bin[ 6656 ], 9, 1 );
    const_tuple_8243ed8238dc12f1d476556126f624b4_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_8243ed8238dc12f1d476556126f624b4_tuple, 0, const_str_plain_NUITKA_PACKAGE_sortedcontainers ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_sortedcontainers );
    PyTuple_SET_ITEM( const_tuple_8243ed8238dc12f1d476556126f624b4_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_tuple_baf7ace65fadc69d9d4382b889137f09_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_baf7ace65fadc69d9d4382b889137f09_tuple, 0, const_str_plain_SortedList ); Py_INCREF( const_str_plain_SortedList );
    PyTuple_SET_ITEM( const_tuple_baf7ace65fadc69d9d4382b889137f09_tuple, 1, const_str_plain_SortedKeyList ); Py_INCREF( const_str_plain_SortedKeyList );
    PyTuple_SET_ITEM( const_tuple_baf7ace65fadc69d9d4382b889137f09_tuple, 2, const_str_plain_SortedListWithKey ); Py_INCREF( const_str_plain_SortedListWithKey );
    const_str_digest_8a538a59ce8fe44e281b361b1f345407 = UNSTREAM_STRING_ASCII( &constant_bin[ 6665 ], 22, 0 );
    const_str_digest_e28de25f797a85811aa4f5f500d234cc = UNSTREAM_STRING_ASCII( &constant_bin[ 6687 ], 25, 0 );
    const_str_plain_dirname = UNSTREAM_STRING_ASCII( &constant_bin[ 6712 ], 7, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_sortedcontainers( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4d46643e85a32878b43c496eaf2e0276;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_d633a6eb172b5c2d11046e89de383483 );
    codeobj_4d46643e85a32878b43c496eaf2e0276 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_e28de25f797a85811aa4f5f500d234cc, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_sortedcontainers =
{
    PyModuleDef_HEAD_INIT,
    "sortedcontainers",
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

MOD_INIT_DECL( sortedcontainers )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_sortedcontainers );
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
    puts("sortedcontainers: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("sortedcontainers: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("sortedcontainers: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initsortedcontainers" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_sortedcontainers = Py_InitModule4(
        "sortedcontainers",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_sortedcontainers = PyModule_Create( &mdef_sortedcontainers );
#endif

    moduledict_sortedcontainers = MODULE_DICT( module_sortedcontainers );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_sortedcontainers,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_sortedcontainers,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_sortedcontainers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_sortedcontainers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_sortedcontainers );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_plain_sortedcontainers, module_sortedcontainers );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___name__ ),
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
#if 1
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_4d46643e85a32878b43c496eaf2e0276;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_72c6ae501e3d6797f9f30ea230c4ea9f;
        UPDATE_STRING_DICT0( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_4d46643e85a32878b43c496eaf2e0276 = MAKE_MODULE_FRAME( codeobj_4d46643e85a32878b43c496eaf2e0276, module_sortedcontainers );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_4d46643e85a32878b43c496eaf2e0276 );
    assert( Py_REFCNT( frame_4d46643e85a32878b43c496eaf2e0276 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        frame_4d46643e85a32878b43c496eaf2e0276->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely( module != NULL ))
            {
                tmp_source_name_1 = PyObject_GetAttr( module, const_str_plain_path );
            }
            else
            {
                tmp_source_name_1 = NULL;
            }
        }

        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dirname );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = module_filename_obj;
        frame_4d46643e85a32878b43c496eaf2e0276->m_frame.f_lineno = 1;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
        frame_4d46643e85a32878b43c496eaf2e0276->m_frame.f_lineno = 1;
        {
            PyObject *module = PyImport_ImportModule("os");
            if (likely( module != NULL ))
            {
                tmp_called_instance_1 = PyObject_GetAttr( module, const_str_plain_environ );
            }
            else
            {
                tmp_called_instance_1 = NULL;
            }
        }

        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        frame_4d46643e85a32878b43c496eaf2e0276->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_8243ed8238dc12f1d476556126f624b4_tuple, 0 ) );

        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_3 );

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
        UPDATE_STRING_DICT1( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_sortedlist;
        tmp_globals_name_1 = (PyObject *)moduledict_sortedcontainers;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_baf7ace65fadc69d9d4382b889137f09_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_4d46643e85a32878b43c496eaf2e0276->m_frame.f_lineno = 49;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_1 ) )
        {
           tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)MODULE_DICT(tmp_import_name_from_1),
                const_str_plain_SortedList,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_SortedList );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain_SortedList, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_2 ) )
        {
           tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)MODULE_DICT(tmp_import_name_from_2),
                const_str_plain_SortedKeyList,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_SortedKeyList );
        }

        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain_SortedKeyList, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if ( PyModule_Check( tmp_import_name_from_3 ) )
        {
           tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)MODULE_DICT(tmp_import_name_from_3),
                const_str_plain_SortedListWithKey,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_SortedListWithKey );
        }

        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain_SortedListWithKey, tmp_assign_source_8 );
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_sortedset;
        tmp_globals_name_2 = (PyObject *)moduledict_sortedcontainers;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_SortedSet_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_4d46643e85a32878b43c496eaf2e0276->m_frame.f_lineno = 50;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        if ( PyModule_Check( tmp_import_name_from_4 ) )
        {
           tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)MODULE_DICT(tmp_import_name_from_4),
                const_str_plain_SortedSet,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_SortedSet );
        }

        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain_SortedSet, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_sorteddict;
        tmp_globals_name_3 = (PyObject *)moduledict_sortedcontainers;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_5dabbeb90e8e9f5e7ee296c7a891b9ec_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_4d46643e85a32878b43c496eaf2e0276->m_frame.f_lineno = 51;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_5 ) )
        {
           tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)MODULE_DICT(tmp_import_name_from_5),
                const_str_plain_SortedDict,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_SortedDict );
        }

        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain_SortedDict, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_6 ) )
        {
           tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)MODULE_DICT(tmp_import_name_from_6),
                const_str_plain_SortedKeysView,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_SortedKeysView );
        }

        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain_SortedKeysView, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_7 ) )
        {
           tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)MODULE_DICT(tmp_import_name_from_7),
                const_str_plain_SortedItemsView,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_SortedItemsView );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain_SortedItemsView, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if ( PyModule_Check( tmp_import_name_from_8 ) )
        {
           tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)MODULE_DICT(tmp_import_name_from_8),
                const_str_plain_SortedValuesView,
                const_int_pos_1
            );
        }
        else
        {
           tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_SortedValuesView );
        }

        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain_SortedValuesView, tmp_assign_source_14 );
    }
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d46643e85a32878b43c496eaf2e0276 );
#endif
    popFrameStack();

    assertFrameObject( frame_4d46643e85a32878b43c496eaf2e0276 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4d46643e85a32878b43c496eaf2e0276 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4d46643e85a32878b43c496eaf2e0276, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4d46643e85a32878b43c496eaf2e0276->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4d46643e85a32878b43c496eaf2e0276, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = LIST_COPY( const_list_8448343342a4d875dadf9bf7a12a0303_list );
        UPDATE_STRING_DICT1( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = const_str_plain_sortedcontainers;
        UPDATE_STRING_DICT0( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___title__, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = const_str_digest_82b820451be11adebfaa34e133657d64;
        UPDATE_STRING_DICT0( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = const_int_pos_131328;
        UPDATE_STRING_DICT0( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___build__, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = const_str_digest_830b29dc1e99b9b7996b45708b034bb3;
        UPDATE_STRING_DICT0( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = const_str_digest_c732b0001bd9466f3f59e4e065102217;
        UPDATE_STRING_DICT0( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = const_str_digest_8a538a59ce8fe44e281b361b1f345407;
        UPDATE_STRING_DICT0( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___copyright__, tmp_assign_source_21 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 1 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_sortedcontainers, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_sortedcontainers );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
