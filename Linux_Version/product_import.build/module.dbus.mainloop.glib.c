/* Generated code for Python module 'dbus.mainloop.glib'
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

/* The "_module_dbus$mainloop$glib" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dbus$mainloop$glib;
PyDictObject *moduledict_dbus$mainloop$glib;

/* The declarations of module constants used, if any. */
static PyObject *const_tuple_str_plain_DBusGMainLoop_str_plain_gthreads_init_tuple;
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_digest_f10e2ec87b7dc4cd78c14bbcc06032c1;
extern PyObject *const_str_plain_DBusGMainLoop;
static PyObject *const_str_digest_1731cab4002b1018dc1016edf82d774b;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain__dbus_glib_bindings;
static PyObject *const_tuple_str_plain_DBusGMainLoop_str_plain_threads_init_tuple;
extern PyObject *const_str_plain_threads_init;
static PyObject *const_str_plain_gthreads_init;
extern PyObject *const_str_digest_168dabde1c45fe2c6a98ec9eae56b3f0;
extern PyObject *const_str_plain___file__;
extern PyObject *const_int_0;
static PyObject *const_str_digest_e440ee50d1c3006574b2b526fb1003e1;
extern PyObject *const_str_plain_origin;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_5aab96487d1936ff2c462fb158533f25;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain__dbus_gthreads_initialized;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_str_plain_DBusGMainLoop_str_plain_gthreads_init_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_DBusGMainLoop_str_plain_gthreads_init_tuple, 0, const_str_plain_DBusGMainLoop ); Py_INCREF( const_str_plain_DBusGMainLoop );
    const_str_plain_gthreads_init = UNSTREAM_STRING_ASCII( &constant_bin[ 24154 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_DBusGMainLoop_str_plain_gthreads_init_tuple, 1, const_str_plain_gthreads_init ); Py_INCREF( const_str_plain_gthreads_init );
    const_str_digest_f10e2ec87b7dc4cd78c14bbcc06032c1 = UNSTREAM_STRING_ASCII( &constant_bin[ 24167 ], 46, 0 );
    const_str_digest_1731cab4002b1018dc1016edf82d774b = UNSTREAM_STRING_ASCII( &constant_bin[ 24213 ], 21, 0 );
    const_str_plain__dbus_glib_bindings = UNSTREAM_STRING_ASCII( &constant_bin[ 24234 ], 19, 1 );
    const_tuple_str_plain_DBusGMainLoop_str_plain_threads_init_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_DBusGMainLoop_str_plain_threads_init_tuple, 0, const_str_plain_DBusGMainLoop ); Py_INCREF( const_str_plain_DBusGMainLoop );
    PyTuple_SET_ITEM( const_tuple_str_plain_DBusGMainLoop_str_plain_threads_init_tuple, 1, const_str_plain_threads_init ); Py_INCREF( const_str_plain_threads_init );
    const_str_digest_e440ee50d1c3006574b2b526fb1003e1 = UNSTREAM_STRING_ASCII( &constant_bin[ 24253 ], 169, 0 );
    const_str_digest_5aab96487d1936ff2c462fb158533f25 = UNSTREAM_STRING_ASCII( &constant_bin[ 24422 ], 27, 0 );
    const_str_plain__dbus_gthreads_initialized = UNSTREAM_STRING_ASCII( &constant_bin[ 24449 ], 26, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dbus$mainloop$glib( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_898fab06db015892e566f047251b199f;
static PyCodeObject *codeobj_4dc4afd0ac5180bf6306d95e18c58b06;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_1731cab4002b1018dc1016edf82d774b );
    codeobj_898fab06db015892e566f047251b199f = MAKE_CODEOBJ( module_filename_obj, const_str_digest_5aab96487d1936ff2c462fb158533f25, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_4dc4afd0ac5180bf6306d95e18c58b06 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_threads_init, 32, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_dbus$mainloop$glib$$$function_1_threads_init(  );


// The module function definitions.
static PyObject *impl_dbus$mainloop$glib$$$function_1_threads_init( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_4dc4afd0ac5180bf6306d95e18c58b06;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4dc4afd0ac5180bf6306d95e18c58b06 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_4dc4afd0ac5180bf6306d95e18c58b06, codeobj_4dc4afd0ac5180bf6306d95e18c58b06, module_dbus$mainloop$glib, 0 );
    frame_4dc4afd0ac5180bf6306d95e18c58b06 = cache_frame_4dc4afd0ac5180bf6306d95e18c58b06;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4dc4afd0ac5180bf6306d95e18c58b06 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4dc4afd0ac5180bf6306d95e18c58b06 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain__dbus_gthreads_initialized );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dbus_gthreads_initialized );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_dbus_gthreads_initialized" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }

        tmp_operand_name_1 = tmp_mvar_value_1;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;

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
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain_gthreads_init );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gthreads_init );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gthreads_init" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 40;

                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            frame_4dc4afd0ac5180bf6306d95e18c58b06->m_frame.f_lineno = 40;
            tmp_call_result_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 40;

                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = Py_True;
            UPDATE_STRING_DICT0( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain__dbus_gthreads_initialized, tmp_assign_source_1 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4dc4afd0ac5180bf6306d95e18c58b06 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4dc4afd0ac5180bf6306d95e18c58b06 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4dc4afd0ac5180bf6306d95e18c58b06, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4dc4afd0ac5180bf6306d95e18c58b06->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4dc4afd0ac5180bf6306d95e18c58b06, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4dc4afd0ac5180bf6306d95e18c58b06,
        type_description_1
    );


    // Release cached frame.
    if ( frame_4dc4afd0ac5180bf6306d95e18c58b06 == cache_frame_4dc4afd0ac5180bf6306d95e18c58b06 )
    {
        Py_DECREF( frame_4dc4afd0ac5180bf6306d95e18c58b06 );
    }
    cache_frame_4dc4afd0ac5180bf6306d95e18c58b06 = NULL;

    assertFrameObject( frame_4dc4afd0ac5180bf6306d95e18c58b06 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$mainloop$glib$$$function_1_threads_init );
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



static PyObject *MAKE_FUNCTION_dbus$mainloop$glib$$$function_1_threads_init(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$mainloop$glib$$$function_1_threads_init,
        const_str_plain_threads_init,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4dc4afd0ac5180bf6306d95e18c58b06,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$mainloop$glib,
        const_str_digest_e440ee50d1c3006574b2b526fb1003e1,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_dbus$mainloop$glib =
{
    PyModuleDef_HEAD_INIT,
    "dbus.mainloop.glib",
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

MOD_INIT_DECL( dbus$mainloop$glib )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_dbus$mainloop$glib );
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
    puts("dbus.mainloop.glib: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dbus.mainloop.glib: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dbus.mainloop.glib: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdbus$mainloop$glib" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_dbus$mainloop$glib = Py_InitModule4(
        "dbus.mainloop.glib",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_dbus$mainloop$glib = PyModule_Create( &mdef_dbus$mainloop$glib );
#endif

    moduledict_dbus$mainloop$glib = MODULE_DICT( module_dbus$mainloop$glib );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_dbus$mainloop$glib,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_dbus$mainloop$glib,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_dbus$mainloop$glib,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_dbus$mainloop$glib,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_dbus$mainloop$glib );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_168dabde1c45fe2c6a98ec9eae56b3f0, module_dbus$mainloop$glib );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_898fab06db015892e566f047251b199f;
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
        tmp_assign_source_1 = const_str_digest_f10e2ec87b7dc4cd78c14bbcc06032c1;
        UPDATE_STRING_DICT0( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_898fab06db015892e566f047251b199f = MAKE_MODULE_FRAME( codeobj_898fab06db015892e566f047251b199f, module_dbus$mainloop$glib );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_898fab06db015892e566f047251b199f );
    assert( Py_REFCNT( frame_898fab06db015892e566f047251b199f ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_tuple_str_plain_DBusGMainLoop_str_plain_threads_init_tuple;
        UPDATE_STRING_DICT0( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain__dbus_glib_bindings;
        tmp_globals_name_1 = (PyObject *)moduledict_dbus$mainloop$glib;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_DBusGMainLoop_str_plain_gthreads_init_tuple;
        tmp_level_name_1 = const_int_0;
        frame_898fab06db015892e566f047251b199f->m_frame.f_lineno = 29;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

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
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_DBusGMainLoop );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain_DBusGMainLoop, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_gthreads_init );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain_gthreads_init, tmp_assign_source_7 );
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
    RESTORE_FRAME_EXCEPTION( frame_898fab06db015892e566f047251b199f );
#endif
    popFrameStack();

    assertFrameObject( frame_898fab06db015892e566f047251b199f );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_898fab06db015892e566f047251b199f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_898fab06db015892e566f047251b199f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_898fab06db015892e566f047251b199f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_898fab06db015892e566f047251b199f, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = Py_False;
        UPDATE_STRING_DICT0( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain__dbus_gthreads_initialized, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_FUNCTION_dbus$mainloop$glib$$$function_1_threads_init(  );



        UPDATE_STRING_DICT1( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain_threads_init, tmp_assign_source_9 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_dbus$mainloop$glib, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_dbus$mainloop$glib );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
