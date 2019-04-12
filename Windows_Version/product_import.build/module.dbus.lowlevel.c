/* Generated code for Python module 'dbus.lowlevel'
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

/* The "_module_dbus$lowlevel" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dbus$lowlevel;
PyDictObject *moduledict_dbus$lowlevel;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_PendingCall;
static PyObject *const_str_plain_MESSAGE_TYPE_ERROR;
static PyObject *const_str_plain_Message;
extern PyObject *const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED;
static PyObject *const_str_plain_HANDLER_RESULT_HANDLED;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_491d884195767fc6bbf76933ebfa602c_tuple;
extern PyObject *const_str_plain__dbus_bindings;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ErrorMessage;
static PyObject *const_str_plain_MESSAGE_TYPE_METHOD_RETURN;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_afdcdbdc0b31ee1d41f080da9a68df5a;
extern PyObject *const_str_digest_b45a3c6f685a3991de51197626bab5ca;
extern PyObject *const_str_plain_MethodCallMessage;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_MESSAGE_TYPE_INVALID;
static PyObject *const_str_digest_a2ddffe2dfe813897109cccd49814e19;
extern PyObject *const_str_plain_MethodReturnMessage;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_MESSAGE_TYPE_SIGNAL;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_SignalMessage;
static PyObject *const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_MESSAGE_TYPE_METHOD_CALL;
static PyObject *const_str_digest_8f7c3d65be88d740545c0ec6a6afa505;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_PendingCall = UNSTREAM_STRING_ASCII( &constant_bin[ 22631 ], 11, 1 );
    const_str_plain_MESSAGE_TYPE_ERROR = UNSTREAM_STRING_ASCII( &constant_bin[ 23767 ], 18, 1 );
    const_str_plain_Message = UNSTREAM_STRING_ASCII( &constant_bin[ 18715 ], 7, 1 );
    const_str_plain_HANDLER_RESULT_HANDLED = UNSTREAM_STRING_ASCII( &constant_bin[ 23785 ], 22, 1 );
    const_tuple_491d884195767fc6bbf76933ebfa602c_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 0, const_str_plain_ErrorMessage ); Py_INCREF( const_str_plain_ErrorMessage );
    PyTuple_SET_ITEM( const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 1, const_str_plain_HANDLER_RESULT_HANDLED ); Py_INCREF( const_str_plain_HANDLER_RESULT_HANDLED );
    PyTuple_SET_ITEM( const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 2, const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED ); Py_INCREF( const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED );
    PyTuple_SET_ITEM( const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 3, const_str_plain_MESSAGE_TYPE_ERROR ); Py_INCREF( const_str_plain_MESSAGE_TYPE_ERROR );
    const_str_plain_MESSAGE_TYPE_INVALID = UNSTREAM_STRING_ASCII( &constant_bin[ 23807 ], 20, 1 );
    PyTuple_SET_ITEM( const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 4, const_str_plain_MESSAGE_TYPE_INVALID ); Py_INCREF( const_str_plain_MESSAGE_TYPE_INVALID );
    const_str_plain_MESSAGE_TYPE_METHOD_CALL = UNSTREAM_STRING_ASCII( &constant_bin[ 23827 ], 24, 1 );
    PyTuple_SET_ITEM( const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 5, const_str_plain_MESSAGE_TYPE_METHOD_CALL ); Py_INCREF( const_str_plain_MESSAGE_TYPE_METHOD_CALL );
    const_str_plain_MESSAGE_TYPE_METHOD_RETURN = UNSTREAM_STRING_ASCII( &constant_bin[ 23851 ], 26, 1 );
    PyTuple_SET_ITEM( const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 6, const_str_plain_MESSAGE_TYPE_METHOD_RETURN ); Py_INCREF( const_str_plain_MESSAGE_TYPE_METHOD_RETURN );
    const_str_plain_MESSAGE_TYPE_SIGNAL = UNSTREAM_STRING_ASCII( &constant_bin[ 23877 ], 19, 1 );
    PyTuple_SET_ITEM( const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 7, const_str_plain_MESSAGE_TYPE_SIGNAL ); Py_INCREF( const_str_plain_MESSAGE_TYPE_SIGNAL );
    PyTuple_SET_ITEM( const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 8, const_str_plain_Message ); Py_INCREF( const_str_plain_Message );
    PyTuple_SET_ITEM( const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 9, const_str_plain_MethodCallMessage ); Py_INCREF( const_str_plain_MethodCallMessage );
    PyTuple_SET_ITEM( const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 10, const_str_plain_MethodReturnMessage ); Py_INCREF( const_str_plain_MethodReturnMessage );
    PyTuple_SET_ITEM( const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 11, const_str_plain_PendingCall ); Py_INCREF( const_str_plain_PendingCall );
    PyTuple_SET_ITEM( const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 12, const_str_plain_SignalMessage ); Py_INCREF( const_str_plain_SignalMessage );
    const_str_digest_afdcdbdc0b31ee1d41f080da9a68df5a = UNSTREAM_STRING_ASCII( &constant_bin[ 23896 ], 29, 0 );
    const_str_digest_a2ddffe2dfe813897109cccd49814e19 = UNSTREAM_STRING_ASCII( &constant_bin[ 23925 ], 16, 0 );
    const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 0, const_str_plain_PendingCall ); Py_INCREF( const_str_plain_PendingCall );
    PyTuple_SET_ITEM( const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 1, const_str_plain_Message ); Py_INCREF( const_str_plain_Message );
    PyTuple_SET_ITEM( const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 2, const_str_plain_MethodCallMessage ); Py_INCREF( const_str_plain_MethodCallMessage );
    PyTuple_SET_ITEM( const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 3, const_str_plain_MethodReturnMessage ); Py_INCREF( const_str_plain_MethodReturnMessage );
    PyTuple_SET_ITEM( const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 4, const_str_plain_ErrorMessage ); Py_INCREF( const_str_plain_ErrorMessage );
    PyTuple_SET_ITEM( const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 5, const_str_plain_SignalMessage ); Py_INCREF( const_str_plain_SignalMessage );
    PyTuple_SET_ITEM( const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 6, const_str_plain_HANDLER_RESULT_HANDLED ); Py_INCREF( const_str_plain_HANDLER_RESULT_HANDLED );
    PyTuple_SET_ITEM( const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 7, const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED ); Py_INCREF( const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED );
    PyTuple_SET_ITEM( const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 8, const_str_plain_MESSAGE_TYPE_INVALID ); Py_INCREF( const_str_plain_MESSAGE_TYPE_INVALID );
    PyTuple_SET_ITEM( const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 9, const_str_plain_MESSAGE_TYPE_METHOD_CALL ); Py_INCREF( const_str_plain_MESSAGE_TYPE_METHOD_CALL );
    PyTuple_SET_ITEM( const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 10, const_str_plain_MESSAGE_TYPE_METHOD_RETURN ); Py_INCREF( const_str_plain_MESSAGE_TYPE_METHOD_RETURN );
    PyTuple_SET_ITEM( const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 11, const_str_plain_MESSAGE_TYPE_ERROR ); Py_INCREF( const_str_plain_MESSAGE_TYPE_ERROR );
    PyTuple_SET_ITEM( const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 12, const_str_plain_MESSAGE_TYPE_SIGNAL ); Py_INCREF( const_str_plain_MESSAGE_TYPE_SIGNAL );
    const_str_digest_8f7c3d65be88d740545c0ec6a6afa505 = UNSTREAM_STRING_ASCII( &constant_bin[ 23941 ], 22, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dbus$lowlevel( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a34357a8183c3a697a9f3724add4d8df;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_a2ddffe2dfe813897109cccd49814e19 );
    codeobj_a34357a8183c3a697a9f3724add4d8df = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8f7c3d65be88d740545c0ec6a6afa505, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_dbus$lowlevel =
{
    PyModuleDef_HEAD_INIT,
    "dbus.lowlevel",
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

MOD_INIT_DECL( dbus$lowlevel )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_dbus$lowlevel );
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
    puts("dbus.lowlevel: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dbus.lowlevel: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dbus.lowlevel: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdbus$lowlevel" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_dbus$lowlevel = Py_InitModule4(
        "dbus.lowlevel",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_dbus$lowlevel = PyModule_Create( &mdef_dbus$lowlevel );
#endif

    moduledict_dbus$lowlevel = MODULE_DICT( module_dbus$lowlevel );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_dbus$lowlevel,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_dbus$lowlevel,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_dbus$lowlevel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_dbus$lowlevel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_dbus$lowlevel );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_b45a3c6f685a3991de51197626bab5ca, module_dbus$lowlevel );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_a34357a8183c3a697a9f3724add4d8df;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_afdcdbdc0b31ee1d41f080da9a68df5a;
        UPDATE_STRING_DICT0( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_a34357a8183c3a697a9f3724add4d8df = MAKE_MODULE_FRAME( codeobj_a34357a8183c3a697a9f3724add4d8df, module_dbus$lowlevel );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a34357a8183c3a697a9f3724add4d8df );
    assert( Py_REFCNT( frame_a34357a8183c3a697a9f3724add4d8df ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple;
        UPDATE_STRING_DICT0( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain__dbus_bindings;
        tmp_globals_name_1 = (PyObject *)moduledict_dbus$lowlevel;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_491d884195767fc6bbf76933ebfa602c_tuple;
        tmp_level_name_1 = const_int_0;
        frame_a34357a8183c3a697a9f3724add4d8df->m_frame.f_lineno = 32;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

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
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ErrorMessage );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_ErrorMessage, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_HANDLER_RESULT_HANDLED );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_HANDLER_RESULT_HANDLED, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_MESSAGE_TYPE_ERROR );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_MESSAGE_TYPE_ERROR, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_5 = tmp_import_from_1__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_MESSAGE_TYPE_INVALID );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_MESSAGE_TYPE_INVALID, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_6 = tmp_import_from_1__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_MESSAGE_TYPE_METHOD_CALL );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_MESSAGE_TYPE_METHOD_CALL, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_7 = tmp_import_from_1__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_MESSAGE_TYPE_METHOD_RETURN );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_MESSAGE_TYPE_METHOD_RETURN, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_8 = tmp_import_from_1__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_MESSAGE_TYPE_SIGNAL );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_MESSAGE_TYPE_SIGNAL, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_9 = tmp_import_from_1__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_Message );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_Message, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_10 = tmp_import_from_1__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_MethodCallMessage );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_MethodCallMessage, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_11 = tmp_import_from_1__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_MethodReturnMessage );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_MethodReturnMessage, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_12 = tmp_import_from_1__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_PendingCall );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_PendingCall, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_13 = tmp_import_from_1__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_SignalMessage );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_SignalMessage, tmp_assign_source_18 );
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

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a34357a8183c3a697a9f3724add4d8df );
#endif
    popFrameStack();

    assertFrameObject( frame_a34357a8183c3a697a9f3724add4d8df );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a34357a8183c3a697a9f3724add4d8df );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a34357a8183c3a697a9f3724add4d8df, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a34357a8183c3a697a9f3724add4d8df->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a34357a8183c3a697a9f3724add4d8df, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_dbus$lowlevel );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
