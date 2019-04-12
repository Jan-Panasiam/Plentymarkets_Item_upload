/* Generated code for Python module 'dbus.bus'
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

/* The "_module_dbus$bus" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dbus$bus;
PyDictObject *moduledict_dbus$bus;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_named_service;
static PyObject *const_str_digest_2340eabd138a29ae4b04fdf9cd8a7c98;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_c19e8fc5a41c3051661c1a271a295eee;
extern PyObject *const_str_plain___spec__;
static PyObject *const_tuple_str_plain_self_str_plain_name_str_plain_flags_tuple;
extern PyObject *const_str_plain_call_async;
extern PyObject *const_tuple_str_plain_named_service_none_tuple;
extern PyObject *const_str_plain_getLogger;
static PyObject *const_str_plain_NameOwnerChanged;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_introspect;
static PyObject *const_str_digest_8c832cf4966598ec0b379aa737beb80d;
extern PyObject *const_str_plain_TYPE_SYSTEM;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
static PyObject *const_str_plain_NameOwnerWatch;
static PyObject *const_str_digest_8cfd57f5bdb2902606031c03398cad27;
static PyObject *const_tuple_str_plain_e_str_plain_callback_str_plain_bus_name_tuple;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_NAME_FLAG_DO_NOT_QUEUE;
extern PyObject *const_str_plain_handler_function;
static PyObject *const_str_plain_REQUEST_NAME_REPLY_IN_QUEUE;
static PyObject *const_str_digest_e999851d35cc852aaa40f88c2070809a;
static PyObject *const_tuple_str_plain_Connection_tuple;
static PyObject *const_str_plain_ListActivatableNames;
extern PyObject *const_str_plain__clean_up_signal_match;
extern PyObject *const_dict_f154c9a58c9419d7e391901d7b7fe49e;
extern PyObject *const_str_plain_add_signal_receiver;
static PyObject *const_tuple_str_plain_HANDLER_RESULT_NOT_YET_HANDLED_tuple;
extern PyObject *const_str_plain_ProxyObjectClass;
static PyObject *const_str_digest_6e5c793252676f18d73a202e7fb1ffc3;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain__match;
static PyObject *const_str_plain_get_name_owner;
static PyObject *const_str_digest_08d3bb4b963a6d930eb55b93e6d96bbd;
static PyObject *const_str_digest_bc0c927eb8dfbd0065f1174fe2b7799c;
extern PyObject *const_str_plain_cls;
static PyObject *const_str_digest_a93bae242fb22951c05525cc85ed89f6;
extern PyObject *const_str_plain__require_main_loop;
static PyObject *const_str_plain_error_cb;
static PyObject *const_str_digest_7fbbf9f76309eaea1ecaedf77c879df4;
extern PyObject *const_str_plain_basicConfig;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain___docformat__;
extern PyObject *const_str_plain_keywords;
extern PyObject *const_str_plain__logger;
static PyObject *const_str_plain_AddMatch;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_reStructuredText;
static PyObject *const_str_plain__new_for_bus;
static PyObject *const_dict_bc61ffba91e0a66db960a393668d500e;
extern PyObject *const_str_digest_79ed2cac4e638f0656fd263c1190bdb0;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_validate_error_name;
extern PyObject *const_str_plain___orig_bases__;
extern PyObject *const_tuple_str_plain_DBusException_tuple;
extern PyObject *const_str_plain_flags;
static PyObject *const_str_plain_get_unix_user;
static PyObject *const_str_digest_a27605767b7bcad573481468e1f88d55;
extern PyObject *const_str_plain_s;
static PyObject *const_str_plain_ListNames;
static PyObject *const_str_digest_3c8e9228e029a9d89bfd118d74660baa;
extern PyObject *const_str_digest_6090a95f7b926ecd6061b143b7cad52f;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_activate_name_owner;
extern PyObject *const_tuple_none_none_none_none_tuple;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_8774b80b529ff7aff9b515b594832858;
static PyObject *const_str_plain_REQUEST_NAME_REPLY_ALREADY_OWNER;
static PyObject *const_str_digest_c92029ffd5594ecfcddf686fb99db9b3;
extern PyObject *const_str_plain_BUS_DAEMON_PATH;
extern PyObject *const_str_plain__dbus_bindings;
extern PyObject *const_str_digest_3aa5bee4de9b0149ae46ffed8a38c6b4;
static PyObject *const_str_plain_list_names;
extern PyObject *const_str_plain_path;
static PyObject *const_str_plain_GetNameOwner;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_plain_signal_cb;
static PyObject *const_tuple_str_plain_self_str_plain_bus_name_str_plain_flags_tuple;
extern PyObject *const_str_plain_DeprecationWarning;
static PyObject *const_str_plain_address_or_type;
extern PyObject *const_str_digest_b45a3c6f685a3991de51197626bab5ca;
static PyObject *const_str_digest_fae6dafc089f11b5ccd025fb93f8a431;
static PyObject *const_str_plain_RELEASE_NAME_REPLY_NOT_OWNER;
static PyObject *const_str_plain_cancel;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_digest_18c67c412066bef703396d613a159b4d;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_follow_name_owner_changes;
static PyObject *const_str_digest_fb8bcfef324d7bb0dee4208007d02015;
static PyObject *const_str_digest_766e9906aa11daf8e69dc57aa61c42f9;
static PyObject *const_str_digest_b110aadd8d653e612d60e60b9f6ba37e;
static PyObject *const_str_digest_379b72cd01241fbb5f2e34320f26808d;
static PyObject *const_str_digest_19e4c08de4bba352d9181703cc6bbf99;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_watch_name_owner;
extern PyObject *const_str_plain_get_object;
extern PyObject *const_str_plain_weakref;
extern PyObject *const_str_plain_DBUS_START_REPLY_SUCCESS;
extern PyObject *const_str_plain_validate_interface_name;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_old_owner;
static PyObject *const_tuple_01e454ea8b7a9e3db8de381b27d64849_tuple;
static PyObject *const_tuple_str_plain_new_owner_str_plain_match_tuple;
static PyObject *const_str_plain_RequestName;
static PyObject *const_tuple_str_plain_self_str_plain_rule_tuple;
extern PyObject *const_str_plain_BUS_SESSION;
static PyObject *const_str_plain_REQUEST_NAME_REPLY_EXISTS;
static PyObject *const_str_digest_878d12eae2adc7d1b8ad875fe14751d8;
extern PyObject *const_str_plain_stacklevel;
extern PyObject *const_str_plain_remove;
static PyObject *const_str_digest_1a273ce6f2332072cda60b52c6cda859;
static PyObject *const_tuple_3c7d613615d11612752937ce855180ed_tuple;
static PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_match;
extern PyObject *const_str_plain_call_blocking;
static PyObject *const_str_plain__pending_call;
static PyObject *const_str_digest_497b0669b52c268bfacbc0d71adeb06c;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_DBUS_START_REPLY_ALREADY_RUNNING;
extern PyObject *const_tuple_str_empty_tuple;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_slice_none_int_pos_1_none;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_add_match_string;
static PyObject *const_str_plain__signal_sender_matches;
static PyObject *const_str_digest_81ce7bd71aaa481ef7a5b1ef2e87724c;
extern PyObject *const_str_plain___new__;
static PyObject *const_str_digest_37e935178460a5e492d12b33e7136d5c;
extern PyObject *const_str_plain_BusConnection;
extern PyObject *const_str_plain_pop;
extern PyObject *const_str_plain_TYPE_SESSION;
static PyObject *const_tuple_str_plain_self_str_plain_bus_name_str_plain_callback_tuple;
extern PyObject *const_int_0;
static PyObject *const_str_plain_GetConnectionUnixUser;
extern PyObject *const_str_plain_DBusException;
static PyObject *const_tuple_str_plain__match_str_plain__pending_call_tuple;
static PyObject *const_str_plain_START_REPLY_SUCCESS;
static PyObject *const_str_plain_start_service_by_name;
extern PyObject *const_str_plain_object_path;
static PyObject *const_str_plain_add_match_string_non_blocking;
static PyObject *const_tuple_52244f24c0cfbfed77be38f5672185bb_tuple;
extern PyObject *const_str_plain_BUS_DAEMON_NAME;
extern PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
extern PyObject *const_tuple_str_plain_is_py2_tuple;
extern PyObject *const_str_chr_58;
extern PyObject *const_str_digest_4289e46f026bf0dd92edd4764f9ca580;
extern PyObject *const_str_plain_origin;
extern PyObject *const_str_plain___slots__;
extern PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
static PyObject *const_str_plain_arg0;
extern PyObject *const_tuple_true_false_tuple;
extern PyObject *const_str_plain_bus;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_exc_info;
extern PyObject *const_str_plain_validate_member_name;
static PyObject *const_str_digest_94a578c10cf536dd19c9a166e05e48a8;
static PyObject *const_str_digest_03a93cd0120bbecca0e37c304976f032;
static PyObject *const_str_plain_RemoveMatch;
static PyObject *const_str_plain__NAME_OWNER_CHANGE_MATCH;
static PyObject *const_str_plain_owned;
static PyObject *const_tuple_15d5b61b69a0ae68c48b70f67510692d_tuple;
extern PyObject *const_str_plain_BUS_SYSTEM;
static PyObject *const_tuple_str_plain_self_str_plain_match_str_plain_watch_tuple;
extern PyObject *const_str_plain_callback;
static PyObject *const_str_digest_1bb8ed157f9c5ff263399971e52e65b7;
static PyObject *const_str_plain_REQUEST_NAME_REPLY_PRIMARY_OWNER;
static PyObject *const_str_plain_remove_match_string_non_blocking;
extern PyObject *const_str_plain_validate_object_path;
static PyObject *const_tuple_str_plain_self_str_plain_bus_name_str_plain_e_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_BUS_STARTER;
static PyObject *const_str_plain_su;
static PyObject *const_str_plain_new_owner;
static PyObject *const_str_plain_remove_match_string;
static PyObject *const_str_digest_baf79512df0a4f45e4c0ecaa946dcd8c;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_signal_name;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain_set_sender_name_owner;
static PyObject *const_str_plain_request_name;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_list_activatable_names;
static PyObject *const_str_plain_release_name;
extern PyObject *const_str_plain_validate_bus_name;
static PyObject *const_str_plain_RELEASE_NAME_REPLY_NON_EXISTENT;
extern PyObject *const_str_plain_rule;
extern PyObject *const_str_plain_debug;
static PyObject *const_str_plain_WeakValueDictionary;
extern PyObject *const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED;
static PyObject *const_str_plain_name_has_owner;
static PyObject *const_tuple_str_digest_79ed2cac4e638f0656fd263c1190bdb0_tuple;
extern PyObject *const_str_digest_0b385b2a67f6700b8faf677cdd479207;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_allow_unique;
static PyObject *const_str_digest_48651289a8a1cb058368125371b6f3c9;
extern PyObject *const_str_plain_TYPE_STARTER;
static PyObject *const_str_plain_ReleaseName;
static PyObject *const_str_plain_StartServiceByName;
extern PyObject *const_str_plain_watch;
static PyObject *const_str_plain_NameHasOwner;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_780e3566fc9eeb41930016f5614c1fd9;
static PyObject *const_tuple_e0146dd84aef78fd5f4c2a905faf983b_tuple;
extern PyObject *const_str_plain_utf8_strings;
static PyObject *const_str_plain__bus_names;
extern PyObject *const_tuple_str_plain_BusConnection_tuple;
static PyObject *const_str_digest_918dc2823287202d43165e99837cc45c;
static PyObject *const_str_digest_3d8978bab1bfc1fa9158c27db7d0ede5;
static PyObject *const_str_digest_ff934d6d17a1458a2c47bd54c4a331d9;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_str_plain_warn_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_bus_name_str_plain_keywords_tuple;
extern PyObject *const_str_plain_dbus_interface;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_plain__NAME_HAS_NO_OWNER;
extern PyObject *const_str_digest_3cc8fcb05b60f7b9437930cdc441ce30;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_plain_bus_conn;
extern PyObject *const_str_plain_BUS_DAEMON_IFACE;
static PyObject *const_str_plain_RELEASE_NAME_REPLY_RELEASED;
static PyObject *const_str_digest_d14a152df40e393cb38e12487c18148e;
static PyObject *const_str_plain_NAME_FLAG_REPLACE_EXISTING;
extern PyObject *const_str_plain_get_dbus_name;
extern PyObject *const_str_digest_e48610c30fffad33f2054d9dca0792b3;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_dcb472437b7fdb4349503cabaef5bc39;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_Connection;
extern PyObject *const_str_plain_bus_name;
static PyObject *const_str_digest_304405f1d5fc1e5b407095c25ba1cbd1;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_e649d21656ccc0c36f795c37dcc87c21;
static PyObject *const_str_digest_db1c4b2d543c9c89b083d98e49ee4837;
extern PyObject *const_str_plain_mainloop;
extern PyObject *const_tuple_str_plain_self_str_plain_bus_name_tuple;
extern PyObject *const_str_plain_is_py2;
static PyObject *const_str_digest_7ca7e21cc68bc06fb612408144c66f65;
static PyObject *const_tuple_85b12d98302c21d3a945bbab56d6093c_tuple;
static PyObject *const_str_plain_NAME_FLAG_ALLOW_REPLACEMENT;
static PyObject *const_str_digest_53c44955e793b025a6ddc912080679e1;
static PyObject *const_str_plain_START_REPLY_ALREADY_RUNNING;
static PyObject *const_tuple_str_plain_self_str_plain_keywords_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_2340eabd138a29ae4b04fdf9cd8a7c98 = UNSTREAM_STRING_ASCII( &constant_bin[ 8481 ], 21, 0 );
    const_str_digest_c19e8fc5a41c3051661c1a271a295eee = UNSTREAM_STRING_ASCII( &constant_bin[ 8502 ], 36, 0 );
    const_tuple_str_plain_self_str_plain_name_str_plain_flags_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_name_str_plain_flags_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_name_str_plain_flags_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_name_str_plain_flags_tuple, 2, const_str_plain_flags ); Py_INCREF( const_str_plain_flags );
    const_str_plain_NameOwnerChanged = UNSTREAM_STRING_ASCII( &constant_bin[ 8538 ], 16, 1 );
    const_str_digest_8c832cf4966598ec0b379aa737beb80d = UNSTREAM_STRING_ASCII( &constant_bin[ 8554 ], 120, 0 );
    const_str_plain_NameOwnerWatch = UNSTREAM_STRING_ASCII( &constant_bin[ 8674 ], 14, 1 );
    const_str_digest_8cfd57f5bdb2902606031c03398cad27 = UNSTREAM_STRING_ASCII( &constant_bin[ 8688 ], 87, 0 );
    const_tuple_str_plain_e_str_plain_callback_str_plain_bus_name_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_e_str_plain_callback_str_plain_bus_name_tuple, 0, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_str_plain_e_str_plain_callback_str_plain_bus_name_tuple, 1, const_str_plain_callback ); Py_INCREF( const_str_plain_callback );
    PyTuple_SET_ITEM( const_tuple_str_plain_e_str_plain_callback_str_plain_bus_name_tuple, 2, const_str_plain_bus_name ); Py_INCREF( const_str_plain_bus_name );
    const_str_plain_NAME_FLAG_DO_NOT_QUEUE = UNSTREAM_STRING_ASCII( &constant_bin[ 8775 ], 22, 1 );
    const_str_plain_REQUEST_NAME_REPLY_IN_QUEUE = UNSTREAM_STRING_ASCII( &constant_bin[ 8797 ], 27, 1 );
    const_str_digest_e999851d35cc852aaa40f88c2070809a = UNSTREAM_STRING_ASCII( &constant_bin[ 8824 ], 24, 0 );
    const_tuple_str_plain_Connection_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Connection_tuple, 0, const_str_plain_Connection ); Py_INCREF( const_str_plain_Connection );
    const_str_plain_ListActivatableNames = UNSTREAM_STRING_ASCII( &constant_bin[ 8848 ], 20, 1 );
    const_tuple_str_plain_HANDLER_RESULT_NOT_YET_HANDLED_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HANDLER_RESULT_NOT_YET_HANDLED_tuple, 0, const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED ); Py_INCREF( const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED );
    const_str_digest_6e5c793252676f18d73a202e7fb1ffc3 = UNSTREAM_STRING_ASCII( &constant_bin[ 8868 ], 21, 0 );
    const_str_plain__match = UNSTREAM_STRING_ASCII( &constant_bin[ 8532 ], 6, 1 );
    const_str_plain_get_name_owner = UNSTREAM_STRING_ASCII( &constant_bin[ 8889 ], 14, 1 );
    const_str_digest_08d3bb4b963a6d930eb55b93e6d96bbd = UNSTREAM_STRING_ASCII( &constant_bin[ 8903 ], 33, 0 );
    const_str_digest_bc0c927eb8dfbd0065f1174fe2b7799c = UNSTREAM_STRING_ASCII( &constant_bin[ 8936 ], 43, 0 );
    const_str_digest_a93bae242fb22951c05525cc85ed89f6 = UNSTREAM_STRING_ASCII( &constant_bin[ 8979 ], 41, 0 );
    const_str_plain_error_cb = UNSTREAM_STRING_ASCII( &constant_bin[ 9020 ], 8, 1 );
    const_str_digest_7fbbf9f76309eaea1ecaedf77c879df4 = UNSTREAM_STRING_ASCII( &constant_bin[ 9028 ], 23, 0 );
    const_str_plain_AddMatch = UNSTREAM_STRING_ASCII( &constant_bin[ 9051 ], 8, 1 );
    const_str_plain__new_for_bus = UNSTREAM_STRING_ASCII( &constant_bin[ 9059 ], 12, 1 );
    const_dict_bc61ffba91e0a66db960a393668d500e = _PyDict_NewPresized( 1 );
    const_str_plain_allow_unique = UNSTREAM_STRING_ASCII( &constant_bin[ 9071 ], 12, 1 );
    PyDict_SetItem( const_dict_bc61ffba91e0a66db960a393668d500e, const_str_plain_allow_unique, Py_False );
    assert( PyDict_Size( const_dict_bc61ffba91e0a66db960a393668d500e ) == 1 );
    const_str_plain_get_unix_user = UNSTREAM_STRING_ASCII( &constant_bin[ 9083 ], 13, 1 );
    const_str_digest_a27605767b7bcad573481468e1f88d55 = UNSTREAM_STRING_ASCII( &constant_bin[ 9096 ], 41, 0 );
    const_str_plain_ListNames = UNSTREAM_STRING_ASCII( &constant_bin[ 9137 ], 9, 1 );
    const_str_digest_3c8e9228e029a9d89bfd118d74660baa = UNSTREAM_STRING_ASCII( &constant_bin[ 9146 ], 33, 0 );
    const_str_digest_8774b80b529ff7aff9b515b594832858 = UNSTREAM_STRING_ASCII( &constant_bin[ 9179 ], 46, 0 );
    const_str_plain_REQUEST_NAME_REPLY_ALREADY_OWNER = UNSTREAM_STRING_ASCII( &constant_bin[ 9225 ], 32, 1 );
    const_str_digest_c92029ffd5594ecfcddf686fb99db9b3 = UNSTREAM_STRING_ASCII( &constant_bin[ 9257 ], 1610, 0 );
    const_str_plain_list_names = UNSTREAM_STRING_ASCII( &constant_bin[ 8838 ], 10, 1 );
    const_str_plain_GetNameOwner = UNSTREAM_STRING_ASCII( &constant_bin[ 10867 ], 12, 1 );
    const_str_plain_signal_cb = UNSTREAM_STRING_ASCII( &constant_bin[ 10879 ], 9, 1 );
    const_tuple_str_plain_self_str_plain_bus_name_str_plain_flags_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bus_name_str_plain_flags_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bus_name_str_plain_flags_tuple, 1, const_str_plain_bus_name ); Py_INCREF( const_str_plain_bus_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bus_name_str_plain_flags_tuple, 2, const_str_plain_flags ); Py_INCREF( const_str_plain_flags );
    const_str_plain_address_or_type = UNSTREAM_STRING_ASCII( &constant_bin[ 10888 ], 15, 1 );
    const_str_digest_fae6dafc089f11b5ccd025fb93f8a431 = UNSTREAM_STRING_ASCII( &constant_bin[ 10903 ], 51, 0 );
    const_str_plain_RELEASE_NAME_REPLY_NOT_OWNER = UNSTREAM_STRING_ASCII( &constant_bin[ 10954 ], 28, 1 );
    const_str_plain_cancel = UNSTREAM_STRING_ASCII( &constant_bin[ 8883 ], 6, 1 );
    const_str_digest_fb8bcfef324d7bb0dee4208007d02015 = UNSTREAM_STRING_ASCII( &constant_bin[ 10982 ], 187, 0 );
    const_str_digest_766e9906aa11daf8e69dc57aa61c42f9 = UNSTREAM_STRING_ASCII( &constant_bin[ 11169 ], 17, 0 );
    const_str_digest_b110aadd8d653e612d60e60b9f6ba37e = UNSTREAM_STRING_ASCII( &constant_bin[ 11186 ], 317, 0 );
    const_str_digest_379b72cd01241fbb5f2e34320f26808d = UNSTREAM_STRING_ASCII( &constant_bin[ 11503 ], 11, 0 );
    const_str_digest_19e4c08de4bba352d9181703cc6bbf99 = UNSTREAM_STRING_ASCII( &constant_bin[ 11514 ], 272, 0 );
    const_str_plain_watch_name_owner = UNSTREAM_STRING_ASCII( &constant_bin[ 11786 ], 16, 1 );
    const_str_plain_old_owner = UNSTREAM_STRING_ASCII( &constant_bin[ 11802 ], 9, 1 );
    const_tuple_01e454ea8b7a9e3db8de381b27d64849_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_01e454ea8b7a9e3db8de381b27d64849_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_bus_conn = UNSTREAM_STRING_ASCII( &constant_bin[ 11811 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_01e454ea8b7a9e3db8de381b27d64849_tuple, 1, const_str_plain_bus_conn ); Py_INCREF( const_str_plain_bus_conn );
    PyTuple_SET_ITEM( const_tuple_01e454ea8b7a9e3db8de381b27d64849_tuple, 2, const_str_plain_bus_name ); Py_INCREF( const_str_plain_bus_name );
    PyTuple_SET_ITEM( const_tuple_01e454ea8b7a9e3db8de381b27d64849_tuple, 3, const_str_plain_callback ); Py_INCREF( const_str_plain_callback );
    PyTuple_SET_ITEM( const_tuple_01e454ea8b7a9e3db8de381b27d64849_tuple, 4, const_str_plain_signal_cb ); Py_INCREF( const_str_plain_signal_cb );
    PyTuple_SET_ITEM( const_tuple_01e454ea8b7a9e3db8de381b27d64849_tuple, 5, const_str_plain_error_cb ); Py_INCREF( const_str_plain_error_cb );
    PyTuple_SET_ITEM( const_tuple_01e454ea8b7a9e3db8de381b27d64849_tuple, 6, const_str_plain_keywords ); Py_INCREF( const_str_plain_keywords );
    const_tuple_str_plain_new_owner_str_plain_match_tuple = PyTuple_New( 2 );
    const_str_plain_new_owner = UNSTREAM_STRING_ASCII( &constant_bin[ 11819 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_new_owner_str_plain_match_tuple, 0, const_str_plain_new_owner ); Py_INCREF( const_str_plain_new_owner );
    PyTuple_SET_ITEM( const_tuple_str_plain_new_owner_str_plain_match_tuple, 1, const_str_plain_match ); Py_INCREF( const_str_plain_match );
    const_str_plain_RequestName = UNSTREAM_STRING_ASCII( &constant_bin[ 11828 ], 11, 1 );
    const_tuple_str_plain_self_str_plain_rule_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_rule_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_rule_tuple, 1, const_str_plain_rule ); Py_INCREF( const_str_plain_rule );
    const_str_plain_REQUEST_NAME_REPLY_EXISTS = UNSTREAM_STRING_ASCII( &constant_bin[ 11839 ], 25, 1 );
    const_str_digest_878d12eae2adc7d1b8ad875fe14751d8 = UNSTREAM_STRING_ASCII( &constant_bin[ 11864 ], 575, 0 );
    const_str_digest_1a273ce6f2332072cda60b52c6cda859 = UNSTREAM_STRING_ASCII( &constant_bin[ 12439 ], 26, 0 );
    const_tuple_3c7d613615d11612752937ce855180ed_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_3c7d613615d11612752937ce855180ed_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_3c7d613615d11612752937ce855180ed_tuple, 1, const_str_plain_bus_name ); Py_INCREF( const_str_plain_bus_name );
    PyTuple_SET_ITEM( const_tuple_3c7d613615d11612752937ce855180ed_tuple, 2, const_str_plain_object_path ); Py_INCREF( const_str_plain_object_path );
    PyTuple_SET_ITEM( const_tuple_3c7d613615d11612752937ce855180ed_tuple, 3, const_str_plain_introspect ); Py_INCREF( const_str_plain_introspect );
    PyTuple_SET_ITEM( const_tuple_3c7d613615d11612752937ce855180ed_tuple, 4, const_str_plain_follow_name_owner_changes ); Py_INCREF( const_str_plain_follow_name_owner_changes );
    PyTuple_SET_ITEM( const_tuple_3c7d613615d11612752937ce855180ed_tuple, 5, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_3c7d613615d11612752937ce855180ed_tuple, 6, const_str_plain_named_service ); Py_INCREF( const_str_plain_named_service );
    PyTuple_SET_ITEM( const_tuple_3c7d613615d11612752937ce855180ed_tuple, 7, const_str_plain_warn ); Py_INCREF( const_str_plain_warn );
    const_tuple_int_0_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_0_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    const_str_plain__pending_call = UNSTREAM_STRING_ASCII( &constant_bin[ 12465 ], 13, 1 );
    const_str_digest_497b0669b52c268bfacbc0d71adeb06c = UNSTREAM_STRING_ASCII( &constant_bin[ 12478 ], 26, 0 );
    const_slice_none_int_pos_1_none = PySlice_New( Py_None, const_int_pos_1, Py_None );
    const_str_plain_add_match_string = UNSTREAM_STRING_ASCII( &constant_bin[ 8950 ], 16, 1 );
    const_str_plain__signal_sender_matches = UNSTREAM_STRING_ASCII( &constant_bin[ 12504 ], 22, 1 );
    const_str_digest_81ce7bd71aaa481ef7a5b1ef2e87724c = UNSTREAM_STRING_ASCII( &constant_bin[ 12526 ], 143, 0 );
    const_str_digest_37e935178460a5e492d12b33e7136d5c = UNSTREAM_STRING_ASCII( &constant_bin[ 12669 ], 644, 0 );
    const_tuple_str_plain_self_str_plain_bus_name_str_plain_callback_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bus_name_str_plain_callback_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bus_name_str_plain_callback_tuple, 1, const_str_plain_bus_name ); Py_INCREF( const_str_plain_bus_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bus_name_str_plain_callback_tuple, 2, const_str_plain_callback ); Py_INCREF( const_str_plain_callback );
    const_str_plain_GetConnectionUnixUser = UNSTREAM_STRING_ASCII( &constant_bin[ 13313 ], 21, 1 );
    const_tuple_str_plain__match_str_plain__pending_call_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain__match_str_plain__pending_call_tuple, 0, const_str_plain__match ); Py_INCREF( const_str_plain__match );
    PyTuple_SET_ITEM( const_tuple_str_plain__match_str_plain__pending_call_tuple, 1, const_str_plain__pending_call ); Py_INCREF( const_str_plain__pending_call );
    const_str_plain_START_REPLY_SUCCESS = UNSTREAM_STRING_ASCII( &constant_bin[ 12273 ], 19, 1 );
    const_str_plain_start_service_by_name = UNSTREAM_STRING_ASCII( &constant_bin[ 13334 ], 21, 1 );
    const_str_plain_add_match_string_non_blocking = UNSTREAM_STRING_ASCII( &constant_bin[ 8950 ], 29, 1 );
    const_tuple_52244f24c0cfbfed77be38f5672185bb_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 13355 ], 558 );
    const_str_plain_arg0 = UNSTREAM_STRING_ASCII( &constant_bin[ 8765 ], 4, 1 );
    const_str_digest_94a578c10cf536dd19c9a166e05e48a8 = UNSTREAM_STRING_ASCII( &constant_bin[ 13913 ], 42, 0 );
    const_str_digest_03a93cd0120bbecca0e37c304976f032 = UNSTREAM_STRING_ASCII( &constant_bin[ 13955 ], 137, 0 );
    const_str_plain_RemoveMatch = UNSTREAM_STRING_ASCII( &constant_bin[ 14092 ], 11, 1 );
    const_str_plain__NAME_OWNER_CHANGE_MATCH = UNSTREAM_STRING_ASCII( &constant_bin[ 14103 ], 24, 1 );
    const_str_plain_owned = UNSTREAM_STRING_ASCII( &constant_bin[ 13986 ], 5, 1 );
    const_tuple_15d5b61b69a0ae68c48b70f67510692d_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_15d5b61b69a0ae68c48b70f67510692d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_15d5b61b69a0ae68c48b70f67510692d_tuple, 1, const_str_plain_handler_function ); Py_INCREF( const_str_plain_handler_function );
    PyTuple_SET_ITEM( const_tuple_15d5b61b69a0ae68c48b70f67510692d_tuple, 2, const_str_plain_signal_name ); Py_INCREF( const_str_plain_signal_name );
    PyTuple_SET_ITEM( const_tuple_15d5b61b69a0ae68c48b70f67510692d_tuple, 3, const_str_plain_dbus_interface ); Py_INCREF( const_str_plain_dbus_interface );
    PyTuple_SET_ITEM( const_tuple_15d5b61b69a0ae68c48b70f67510692d_tuple, 4, const_str_plain_bus_name ); Py_INCREF( const_str_plain_bus_name );
    PyTuple_SET_ITEM( const_tuple_15d5b61b69a0ae68c48b70f67510692d_tuple, 5, const_str_plain_path ); Py_INCREF( const_str_plain_path );
    PyTuple_SET_ITEM( const_tuple_15d5b61b69a0ae68c48b70f67510692d_tuple, 6, const_str_plain_keywords ); Py_INCREF( const_str_plain_keywords );
    PyTuple_SET_ITEM( const_tuple_15d5b61b69a0ae68c48b70f67510692d_tuple, 7, const_str_plain_named_service ); Py_INCREF( const_str_plain_named_service );
    PyTuple_SET_ITEM( const_tuple_15d5b61b69a0ae68c48b70f67510692d_tuple, 8, const_str_plain_warn ); Py_INCREF( const_str_plain_warn );
    PyTuple_SET_ITEM( const_tuple_15d5b61b69a0ae68c48b70f67510692d_tuple, 9, const_str_plain_match ); Py_INCREF( const_str_plain_match );
    PyTuple_SET_ITEM( const_tuple_15d5b61b69a0ae68c48b70f67510692d_tuple, 10, const_str_plain_callback ); Py_INCREF( const_str_plain_callback );
    PyTuple_SET_ITEM( const_tuple_15d5b61b69a0ae68c48b70f67510692d_tuple, 11, const_str_plain_watch ); Py_INCREF( const_str_plain_watch );
    PyTuple_SET_ITEM( const_tuple_15d5b61b69a0ae68c48b70f67510692d_tuple, 12, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_tuple_str_plain_self_str_plain_match_str_plain_watch_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_match_str_plain_watch_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_match_str_plain_watch_tuple, 1, const_str_plain_match ); Py_INCREF( const_str_plain_match );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_match_str_plain_watch_tuple, 2, const_str_plain_watch ); Py_INCREF( const_str_plain_watch );
    const_str_digest_1bb8ed157f9c5ff263399971e52e65b7 = UNSTREAM_STRING_ASCII( &constant_bin[ 14127 ], 33, 0 );
    const_str_plain_REQUEST_NAME_REPLY_PRIMARY_OWNER = UNSTREAM_STRING_ASCII( &constant_bin[ 13033 ], 32, 1 );
    const_str_plain_remove_match_string_non_blocking = UNSTREAM_STRING_ASCII( &constant_bin[ 9193 ], 32, 1 );
    const_tuple_str_plain_self_str_plain_bus_name_str_plain_e_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bus_name_str_plain_e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bus_name_str_plain_e_tuple, 1, const_str_plain_bus_name ); Py_INCREF( const_str_plain_bus_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bus_name_str_plain_e_tuple, 2, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_plain_su = UNSTREAM_STRING_ASCII( &constant_bin[ 1256 ], 2, 1 );
    const_str_plain_remove_match_string = UNSTREAM_STRING_ASCII( &constant_bin[ 9160 ], 19, 1 );
    const_str_digest_baf79512df0a4f45e4c0ecaa946dcd8c = UNSTREAM_STRING_ASCII( &constant_bin[ 14160 ], 28, 0 );
    const_str_plain_request_name = UNSTREAM_STRING_ASCII( &constant_bin[ 12492 ], 12, 1 );
    const_str_plain_list_activatable_names = UNSTREAM_STRING_ASCII( &constant_bin[ 14188 ], 22, 1 );
    const_str_plain_release_name = UNSTREAM_STRING_ASCII( &constant_bin[ 12453 ], 12, 1 );
    const_str_plain_RELEASE_NAME_REPLY_NON_EXISTENT = UNSTREAM_STRING_ASCII( &constant_bin[ 13590 ], 31, 1 );
    const_str_plain_WeakValueDictionary = UNSTREAM_STRING_ASCII( &constant_bin[ 14210 ], 19, 1 );
    const_str_plain_name_has_owner = UNSTREAM_STRING_ASCII( &constant_bin[ 14174 ], 14, 1 );
    const_tuple_str_digest_79ed2cac4e638f0656fd263c1190bdb0_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_79ed2cac4e638f0656fd263c1190bdb0_tuple, 0, const_str_digest_79ed2cac4e638f0656fd263c1190bdb0 ); Py_INCREF( const_str_digest_79ed2cac4e638f0656fd263c1190bdb0 );
    const_str_digest_48651289a8a1cb058368125371b6f3c9 = UNSTREAM_STRING_ASCII( &constant_bin[ 14229 ], 28, 0 );
    const_str_plain_ReleaseName = UNSTREAM_STRING_ASCII( &constant_bin[ 14257 ], 11, 1 );
    const_str_plain_StartServiceByName = UNSTREAM_STRING_ASCII( &constant_bin[ 12108 ], 18, 1 );
    const_str_plain_NameHasOwner = UNSTREAM_STRING_ASCII( &constant_bin[ 14268 ], 12, 1 );
    const_str_digest_780e3566fc9eeb41930016f5614c1fd9 = UNSTREAM_STRING_ASCII( &constant_bin[ 8936 ], 30, 0 );
    const_tuple_e0146dd84aef78fd5f4c2a905faf983b_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e0146dd84aef78fd5f4c2a905faf983b_tuple, 0, const_str_plain_owned ); Py_INCREF( const_str_plain_owned );
    PyTuple_SET_ITEM( const_tuple_e0146dd84aef78fd5f4c2a905faf983b_tuple, 1, const_str_plain_old_owner ); Py_INCREF( const_str_plain_old_owner );
    PyTuple_SET_ITEM( const_tuple_e0146dd84aef78fd5f4c2a905faf983b_tuple, 2, const_str_plain_new_owner ); Py_INCREF( const_str_plain_new_owner );
    PyTuple_SET_ITEM( const_tuple_e0146dd84aef78fd5f4c2a905faf983b_tuple, 3, const_str_plain_callback ); Py_INCREF( const_str_plain_callback );
    const_str_plain__bus_names = UNSTREAM_STRING_ASCII( &constant_bin[ 14280 ], 10, 1 );
    const_str_digest_918dc2823287202d43165e99837cc45c = UNSTREAM_STRING_ASCII( &constant_bin[ 14290 ], 24, 0 );
    const_str_digest_3d8978bab1bfc1fa9158c27db7d0ede5 = UNSTREAM_STRING_ASCII( &constant_bin[ 14314 ], 234, 0 );
    const_str_digest_ff934d6d17a1458a2c47bd54c4a331d9 = UNSTREAM_STRING_ASCII( &constant_bin[ 14548 ], 280, 0 );
    const_tuple_str_plain_self_str_plain_bus_name_str_plain_keywords_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bus_name_str_plain_keywords_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bus_name_str_plain_keywords_tuple, 1, const_str_plain_bus_name ); Py_INCREF( const_str_plain_bus_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_bus_name_str_plain_keywords_tuple, 2, const_str_plain_keywords ); Py_INCREF( const_str_plain_keywords );
    const_str_plain__NAME_HAS_NO_OWNER = UNSTREAM_STRING_ASCII( &constant_bin[ 14828 ], 18, 1 );
    const_str_plain_RELEASE_NAME_REPLY_RELEASED = UNSTREAM_STRING_ASCII( &constant_bin[ 13653 ], 27, 1 );
    const_str_digest_d14a152df40e393cb38e12487c18148e = UNSTREAM_STRING_ASCII( &constant_bin[ 14846 ], 30, 0 );
    const_str_plain_NAME_FLAG_REPLACE_EXISTING = UNSTREAM_STRING_ASCII( &constant_bin[ 12941 ], 26, 1 );
    const_str_digest_dcb472437b7fdb4349503cabaef5bc39 = UNSTREAM_STRING_ASCII( &constant_bin[ 14876 ], 36, 0 );
    const_str_digest_304405f1d5fc1e5b407095c25ba1cbd1 = UNSTREAM_STRING_ASCII( &constant_bin[ 14912 ], 35, 0 );
    const_str_digest_e649d21656ccc0c36f795c37dcc87c21 = UNSTREAM_STRING_ASCII( &constant_bin[ 14947 ], 371, 0 );
    const_str_digest_db1c4b2d543c9c89b083d98e49ee4837 = UNSTREAM_STRING_ASCII( &constant_bin[ 15318 ], 178, 0 );
    const_str_digest_7ca7e21cc68bc06fb612408144c66f65 = UNSTREAM_STRING_ASCII( &constant_bin[ 15496 ], 24, 0 );
    const_tuple_85b12d98302c21d3a945bbab56d6093c_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_85b12d98302c21d3a945bbab56d6093c_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_85b12d98302c21d3a945bbab56d6093c_tuple, 1, const_str_plain_address_or_type ); Py_INCREF( const_str_plain_address_or_type );
    PyTuple_SET_ITEM( const_tuple_85b12d98302c21d3a945bbab56d6093c_tuple, 2, const_str_plain_mainloop ); Py_INCREF( const_str_plain_mainloop );
    PyTuple_SET_ITEM( const_tuple_85b12d98302c21d3a945bbab56d6093c_tuple, 3, const_str_plain_bus ); Py_INCREF( const_str_plain_bus );
    const_str_plain_NAME_FLAG_ALLOW_REPLACEMENT = UNSTREAM_STRING_ASCII( &constant_bin[ 12894 ], 27, 1 );
    const_str_digest_53c44955e793b025a6ddc912080679e1 = UNSTREAM_STRING_ASCII( &constant_bin[ 15520 ], 27, 0 );
    const_str_plain_START_REPLY_ALREADY_RUNNING = UNSTREAM_STRING_ASCII( &constant_bin[ 12308 ], 27, 1 );
    const_tuple_str_plain_self_str_plain_keywords_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_keywords_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_keywords_tuple, 1, const_str_plain_keywords ); Py_INCREF( const_str_plain_keywords );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dbus$bus( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_69b5a50f520416628dce5a6f84ea9846;
static PyCodeObject *codeobj_4fcd2203ff4a8da4680ca1730792a884;
static PyCodeObject *codeobj_7b4f0ede8d98f135be577c5cb6a3e9f2;
static PyCodeObject *codeobj_a15e59a9dbfba61cf03e05dea6dfdadf;
static PyCodeObject *codeobj_95a2ed71307d8478b6d11516b26739c8;
static PyCodeObject *codeobj_3f23d48793f9052c0e034aa3c4469109;
static PyCodeObject *codeobj_123baf20dd9b1a57a74d3642b895c082;
static PyCodeObject *codeobj_6ec5925a5dfdbb8b609df569f6b4c746;
static PyCodeObject *codeobj_ad997692e8a47854ec03e9537bc0b2c1;
static PyCodeObject *codeobj_7a7c477cffd49376c23e5a20f9f66f45;
static PyCodeObject *codeobj_ecc08a96c54c0f363e093c7bd79e276e;
static PyCodeObject *codeobj_10b952dac4e59646b1edcc694b7d7e17;
static PyCodeObject *codeobj_c91bd68a96e571796ac031197e3cf9f9;
static PyCodeObject *codeobj_8e4c8f82a29ed3508f6f44f4cc6705db;
static PyCodeObject *codeobj_07c88823759acfe82dd0cfd5a1a17ae8;
static PyCodeObject *codeobj_76d71404a975d8acb0e2b2c5cbf01eef;
static PyCodeObject *codeobj_d15a977d5f7dbcd9269d9234a639a93d;
static PyCodeObject *codeobj_34a1ab8806cabccb6766c7c0894b95cc;
static PyCodeObject *codeobj_f1acc37c6d2d546c4b1e931dbe1657d5;
static PyCodeObject *codeobj_5249b655d89ca6a682ac7fa083cbcfa2;
static PyCodeObject *codeobj_a984b830cce6b59fb0ef27c24e3e8591;
static PyCodeObject *codeobj_a97813edf5a13ff8b3e17c3d325d8e14;
static PyCodeObject *codeobj_153904ecf683b950a051a6a63978eade;
static PyCodeObject *codeobj_571399dfac1e2ade99f320c0011eaf0c;
static PyCodeObject *codeobj_61baa2d37f54d4ddb34ac6d4baf7bfc0;
static PyCodeObject *codeobj_291e7d800913fa9945390f7ae7e5da4f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_379b72cd01241fbb5f2e34320f26808d );
    codeobj_69b5a50f520416628dce5a6f84ea9846 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_766e9906aa11daf8e69dc57aa61c42f9, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_4fcd2203ff4a8da4680ca1730792a884 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_BusConnection, 101, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_7b4f0ede8d98f135be577c5cb6a3e9f2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_NameOwnerWatch, 58, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_a15e59a9dbfba61cf03e05dea6dfdadf = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 61, const_tuple_01e454ea8b7a9e3db8de381b27d64849_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_95a2ed71307d8478b6d11516b26739c8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___new__, 121, const_tuple_85b12d98302c21d3a945bbab56d6093c_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3f23d48793f9052c0e034aa3c4469109 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__clean_up_signal_match, 164, const_tuple_str_plain_self_str_plain_match_str_plain_watch_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_123baf20dd9b1a57a74d3642b895c082 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_activate_name_owner, 171, const_tuple_str_plain_self_str_plain_bus_name_str_plain_e_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6ec5925a5dfdbb8b609df569f6b4c746 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_match_string, 387, const_tuple_str_plain_self_str_plain_rule_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ad997692e8a47854ec03e9537bc0b2c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_match_string_non_blocking, 402, const_tuple_str_plain_self_str_plain_rule_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7a7c477cffd49376c23e5a20f9f66f45 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_signal_receiver, 132, const_tuple_15d5b61b69a0ae68c48b70f67510692d_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS );
    codeobj_ecc08a96c54c0f363e093c7bd79e276e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_callback, 152, const_tuple_str_plain_new_owner_str_plain_match_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_10b952dac4e59646b1edcc694b7d7e17 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cancel, 92, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c91bd68a96e571796ac031197e3cf9f9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_error_cb, 67, const_tuple_str_plain_e_str_plain_callback_str_plain_bus_name_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_8e4c8f82a29ed3508f6f44f4cc6705db = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_name_owner, 348, const_tuple_str_plain_self_str_plain_bus_name_str_plain_keywords_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_07c88823759acfe82dd0cfd5a1a17ae8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_object, 186, const_tuple_3c7d613615d11612752937ce855180ed_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_76d71404a975d8acb0e2b2c5cbf01eef = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_unix_user, 243, const_tuple_str_plain_self_str_plain_bus_name_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d15a977d5f7dbcd9269d9234a639a93d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_list_activatable_names, 335, const_tuple_str_plain_self_str_plain_keywords_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_34a1ab8806cabccb6766c7c0894b95cc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_list_names, 322, const_tuple_str_plain_self_str_plain_keywords_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f1acc37c6d2d546c4b1e931dbe1657d5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_name_has_owner, 375, const_tuple_str_plain_self_str_plain_bus_name_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5249b655d89ca6a682ac7fa083cbcfa2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_release_name, 305, const_tuple_str_plain_self_str_plain_name_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a984b830cce6b59fb0ef27c24e3e8591 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_remove_match_string, 418, const_tuple_str_plain_self_str_plain_rule_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a97813edf5a13ff8b3e17c3d325d8e14 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_remove_match_string_non_blocking, 431, const_tuple_str_plain_self_str_plain_rule_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_153904ecf683b950a051a6a63978eade = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request_name, 282, const_tuple_str_plain_self_str_plain_name_str_plain_flags_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_571399dfac1e2ade99f320c0011eaf0c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_signal_cb, 64, const_tuple_e0146dd84aef78fd5f4c2a905faf983b_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_61baa2d37f54d4ddb34ac6d4baf7bfc0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_start_service_by_name, 257, const_tuple_str_plain_self_str_plain_bus_name_str_plain_flags_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_291e7d800913fa9945390f7ae7e5da4f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_watch_name_owner, 363, const_tuple_str_plain_self_str_plain_bus_name_str_plain_callback_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_2__mro_entries_conversion( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_10_request_name( PyObject *defaults );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_11_release_name(  );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_12_list_names(  );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_13_list_activatable_names(  );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_14_get_name_owner(  );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_15_watch_name_owner(  );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_16_name_has_owner(  );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_17_add_match_string(  );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_18_add_match_string_non_blocking(  );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_19_remove_match_string(  );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_1___init__$$$function_1_signal_cb(  );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_1___init__$$$function_2_error_cb(  );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_20_remove_match_string_non_blocking(  );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_2_cancel(  );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_3___new__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_4_add_signal_receiver( PyObject *defaults );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_4_add_signal_receiver$$$function_1_callback(  );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_5__clean_up_signal_match(  );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_6_activate_name_owner(  );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_7_get_object( PyObject *defaults );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_8_get_unix_user(  );


static PyObject *MAKE_FUNCTION_dbus$bus$$$function_9_start_service_by_name( PyObject *defaults );


// The module function definitions.
static PyObject *impl_dbus$bus$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_bus_conn = python_pars[ 1 ];
    struct Nuitka_CellObject *par_bus_name = PyCell_NEW1( python_pars[ 2 ] );
    struct Nuitka_CellObject *par_callback = PyCell_NEW1( python_pars[ 3 ] );
    PyObject *var_signal_cb = NULL;
    PyObject *var_error_cb = NULL;
    PyObject *var_keywords = NULL;
    struct Nuitka_FrameObject *frame_a15e59a9dbfba61cf03e05dea6dfdadf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    static struct Nuitka_FrameObject *cache_frame_a15e59a9dbfba61cf03e05dea6dfdadf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a15e59a9dbfba61cf03e05dea6dfdadf, codeobj_a15e59a9dbfba61cf03e05dea6dfdadf, module_dbus$bus, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a15e59a9dbfba61cf03e05dea6dfdadf = cache_frame_a15e59a9dbfba61cf03e05dea6dfdadf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a15e59a9dbfba61cf03e05dea6dfdadf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a15e59a9dbfba61cf03e05dea6dfdadf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_validate_bus_name );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_validate_bus_name );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "validate_bus_name" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 62;
            type_description_1 = "ooccooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( PyCell_GET( par_bus_name ) );
        tmp_args_element_name_1 = PyCell_GET( par_bus_name );
        frame_a15e59a9dbfba61cf03e05dea6dfdadf->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooccooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_FUNCTION_dbus$bus$$$function_1___init__$$$function_1_signal_cb(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_callback;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] );


        assert( var_signal_cb == NULL );
        var_signal_cb = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_FUNCTION_dbus$bus$$$function_1___init__$$$function_2_error_cb(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] = par_bus_name;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[1] = par_callback;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_2)->m_closure[1] );


        assert( var_error_cb == NULL );
        var_error_cb = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_bus_conn );
        tmp_source_name_1 = par_bus_conn;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_signal_receiver );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "ooccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_signal_cb );
        tmp_tuple_element_1 = var_signal_cb;
        tmp_args_name_1 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_str_plain_NameOwnerChanged;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_IFACE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 77;
            type_description_1 = "ooccooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_NAME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 78;
            type_description_1 = "ooccooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 3, tmp_tuple_element_1 );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_PATH" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 79;
            type_description_1 = "ooccooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_4;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 4, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_arg0;
        CHECK_OBJECT( PyCell_GET( par_bus_name ) );
        tmp_dict_value_1 = PyCell_GET( par_bus_name );
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_a15e59a9dbfba61cf03e05dea6dfdadf->m_frame.f_lineno = 75;
        tmp_assattr_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "ooccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__match, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 75;
            type_description_1 = "ooccooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = PyDict_New();
        assert( var_keywords == NULL );
        var_keywords = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_5;
        int tmp_truth_name_1;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_is_py2 );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py2 );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_py2" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;
            type_description_1 = "ooccooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_mvar_value_5 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 82;
            type_description_1 = "ooccooo";
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
        tmp_dictset_value = Py_True;
        CHECK_OBJECT( var_keywords );
        tmp_dictset_dict = var_keywords;
        tmp_dictset_key = const_str_plain_utf8_strings;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_mvar_value_7;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_bus_conn );
        tmp_source_name_2 = par_bus_conn;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_call_async );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "ooccooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );
        }

        if ( tmp_mvar_value_6 == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_NAME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 84;
            type_description_1 = "ooccooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_6;
        tmp_dircall_arg2_1 = PyTuple_New( 8 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );
        }

        if ( tmp_mvar_value_7 == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_PATH" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 85;
            type_description_1 = "ooccooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_7;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_2 );
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );
        }

        if ( tmp_mvar_value_8 == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_IFACE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;
            type_description_1 = "ooccooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_8;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_str_plain_GetNameOwner;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 3, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_str_plain_s;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 4, tmp_tuple_element_2 );
        CHECK_OBJECT( PyCell_GET( par_bus_name ) );
        tmp_tuple_element_3 = PyCell_GET( par_bus_name );
        tmp_tuple_element_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 5, tmp_tuple_element_2 );
        CHECK_OBJECT( PyCell_GET( par_callback ) );
        tmp_tuple_element_2 = PyCell_GET( par_callback );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 6, tmp_tuple_element_2 );
        CHECK_OBJECT( var_error_cb );
        tmp_tuple_element_2 = var_error_cb;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 7, tmp_tuple_element_2 );
        CHECK_OBJECT( var_keywords );
        tmp_dircall_arg3_1 = var_keywords;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assattr_name_2 = impl___internal__$$$function_8_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "ooccooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__pending_call, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "ooccooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a15e59a9dbfba61cf03e05dea6dfdadf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a15e59a9dbfba61cf03e05dea6dfdadf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a15e59a9dbfba61cf03e05dea6dfdadf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a15e59a9dbfba61cf03e05dea6dfdadf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a15e59a9dbfba61cf03e05dea6dfdadf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a15e59a9dbfba61cf03e05dea6dfdadf,
        type_description_1,
        par_self,
        par_bus_conn,
        par_bus_name,
        par_callback,
        var_signal_cb,
        var_error_cb,
        var_keywords
    );


    // Release cached frame.
    if ( frame_a15e59a9dbfba61cf03e05dea6dfdadf == cache_frame_a15e59a9dbfba61cf03e05dea6dfdadf )
    {
        Py_DECREF( frame_a15e59a9dbfba61cf03e05dea6dfdadf );
    }
    cache_frame_a15e59a9dbfba61cf03e05dea6dfdadf = NULL;

    assertFrameObject( frame_a15e59a9dbfba61cf03e05dea6dfdadf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bus_conn );
    Py_DECREF( par_bus_conn );
    par_bus_conn = NULL;

    CHECK_OBJECT( (PyObject *)par_bus_name );
    Py_DECREF( par_bus_name );
    par_bus_name = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    CHECK_OBJECT( (PyObject *)var_signal_cb );
    Py_DECREF( var_signal_cb );
    var_signal_cb = NULL;

    CHECK_OBJECT( (PyObject *)var_error_cb );
    Py_DECREF( var_error_cb );
    var_error_cb = NULL;

    CHECK_OBJECT( (PyObject *)var_keywords );
    Py_DECREF( var_keywords );
    var_keywords = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bus_conn );
    Py_DECREF( par_bus_conn );
    par_bus_conn = NULL;

    CHECK_OBJECT( (PyObject *)par_bus_name );
    Py_DECREF( par_bus_name );
    par_bus_name = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    Py_XDECREF( var_signal_cb );
    var_signal_cb = NULL;

    Py_XDECREF( var_error_cb );
    var_error_cb = NULL;

    Py_XDECREF( var_keywords );
    var_keywords = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_1___init__ );
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


static PyObject *impl_dbus$bus$$$function_1___init__$$$function_1_signal_cb( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_owned = python_pars[ 0 ];
    PyObject *par_old_owner = python_pars[ 1 ];
    PyObject *par_new_owner = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_571399dfac1e2ade99f320c0011eaf0c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_571399dfac1e2ade99f320c0011eaf0c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_571399dfac1e2ade99f320c0011eaf0c, codeobj_571399dfac1e2ade99f320c0011eaf0c, module_dbus$bus, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_571399dfac1e2ade99f320c0011eaf0c = cache_frame_571399dfac1e2ade99f320c0011eaf0c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_571399dfac1e2ade99f320c0011eaf0c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_571399dfac1e2ade99f320c0011eaf0c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "callback" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 65;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_new_owner );
        tmp_args_element_name_1 = par_new_owner;
        frame_571399dfac1e2ade99f320c0011eaf0c->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_571399dfac1e2ade99f320c0011eaf0c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_571399dfac1e2ade99f320c0011eaf0c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_571399dfac1e2ade99f320c0011eaf0c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_571399dfac1e2ade99f320c0011eaf0c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_571399dfac1e2ade99f320c0011eaf0c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_571399dfac1e2ade99f320c0011eaf0c,
        type_description_1,
        par_owned,
        par_old_owner,
        par_new_owner,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_571399dfac1e2ade99f320c0011eaf0c == cache_frame_571399dfac1e2ade99f320c0011eaf0c )
    {
        Py_DECREF( frame_571399dfac1e2ade99f320c0011eaf0c );
    }
    cache_frame_571399dfac1e2ade99f320c0011eaf0c = NULL;

    assertFrameObject( frame_571399dfac1e2ade99f320c0011eaf0c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_1___init__$$$function_1_signal_cb );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_owned );
    Py_DECREF( par_owned );
    par_owned = NULL;

    CHECK_OBJECT( (PyObject *)par_old_owner );
    Py_DECREF( par_old_owner );
    par_old_owner = NULL;

    CHECK_OBJECT( (PyObject *)par_new_owner );
    Py_DECREF( par_new_owner );
    par_new_owner = NULL;

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

    CHECK_OBJECT( (PyObject *)par_owned );
    Py_DECREF( par_owned );
    par_owned = NULL;

    CHECK_OBJECT( (PyObject *)par_old_owner );
    Py_DECREF( par_old_owner );
    par_old_owner = NULL;

    CHECK_OBJECT( (PyObject *)par_new_owner );
    Py_DECREF( par_new_owner );
    par_new_owner = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_1___init__$$$function_1_signal_cb );
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


static PyObject *impl_dbus$bus$$$function_1___init__$$$function_2_error_cb( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_e = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_c91bd68a96e571796ac031197e3cf9f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c91bd68a96e571796ac031197e3cf9f9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c91bd68a96e571796ac031197e3cf9f9, codeobj_c91bd68a96e571796ac031197e3cf9f9, module_dbus$bus, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c91bd68a96e571796ac031197e3cf9f9 = cache_frame_c91bd68a96e571796ac031197e3cf9f9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c91bd68a96e571796ac031197e3cf9f9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c91bd68a96e571796ac031197e3cf9f9 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_e );
        tmp_called_instance_1 = par_e;
        frame_c91bd68a96e571796ac031197e3cf9f9->m_frame.f_lineno = 68;
        tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_dbus_name );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain__NAME_HAS_NO_OWNER );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__NAME_HAS_NO_OWNER );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_NAME_HAS_NO_OWNER" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 68;
            type_description_1 = "occ";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;
            type_description_1 = "occ";
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_call_result_1;
            if ( PyCell_GET( self->m_closure[1] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "callback" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 69;
                type_description_1 = "occ";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = PyCell_GET( self->m_closure[1] );
            frame_c91bd68a96e571796ac031197e3cf9f9->m_frame.f_lineno = 69;
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_empty_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 69;
                type_description_1 = "occ";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_logging );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 71;
                type_description_1 = "occ";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            frame_c91bd68a96e571796ac031197e3cf9f9->m_frame.f_lineno = 71;
            tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_basicConfig );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 71;
                type_description_1 = "occ";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_source_name_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain__logger );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__logger );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_logger" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 72;
                type_description_1 = "occ";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_3;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_debug );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;
                type_description_1 = "occ";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_1 = const_str_digest_918dc2823287202d43165e99837cc45c;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "bus_name" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 72;
                type_description_1 = "occ";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_1 = PyCell_GET( self->m_closure[0] );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_dict_key_1 = const_str_plain_exc_info;
            CHECK_OBJECT( par_e );
            tmp_source_name_2 = par_e;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_name_1 );

                exception_lineno = 73;
                type_description_1 = "occ";
                goto frame_exception_exit_1;
            }
            tmp_dict_value_1 = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_dict_value_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_e );
            tmp_tuple_element_2 = par_e;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dict_value_1, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = Py_None;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dict_value_1, 2, tmp_tuple_element_2 );
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_c91bd68a96e571796ac031197e3cf9f9->m_frame.f_lineno = 72;
            tmp_call_result_3 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 72;
                type_description_1 = "occ";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c91bd68a96e571796ac031197e3cf9f9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c91bd68a96e571796ac031197e3cf9f9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c91bd68a96e571796ac031197e3cf9f9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c91bd68a96e571796ac031197e3cf9f9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c91bd68a96e571796ac031197e3cf9f9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c91bd68a96e571796ac031197e3cf9f9,
        type_description_1,
        par_e,
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_c91bd68a96e571796ac031197e3cf9f9 == cache_frame_c91bd68a96e571796ac031197e3cf9f9 )
    {
        Py_DECREF( frame_c91bd68a96e571796ac031197e3cf9f9 );
    }
    cache_frame_c91bd68a96e571796ac031197e3cf9f9 = NULL;

    assertFrameObject( frame_c91bd68a96e571796ac031197e3cf9f9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_1___init__$$$function_2_error_cb );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_e );
    Py_DECREF( par_e );
    par_e = NULL;

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

    CHECK_OBJECT( (PyObject *)par_e );
    Py_DECREF( par_e );
    par_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_1___init__$$$function_2_error_cb );
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


static PyObject *impl_dbus$bus$$$function_2_cancel( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_10b952dac4e59646b1edcc694b7d7e17;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_10b952dac4e59646b1edcc694b7d7e17 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_10b952dac4e59646b1edcc694b7d7e17, codeobj_10b952dac4e59646b1edcc694b7d7e17, module_dbus$bus, sizeof(void *) );
    frame_10b952dac4e59646b1edcc694b7d7e17 = cache_frame_10b952dac4e59646b1edcc694b7d7e17;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_10b952dac4e59646b1edcc694b7d7e17 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_10b952dac4e59646b1edcc694b7d7e17 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__match );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__match );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_10b952dac4e59646b1edcc694b7d7e17->m_frame.f_lineno = 94;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_remove );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__pending_call );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 95;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_2 );
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__pending_call );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            frame_10b952dac4e59646b1edcc694b7d7e17->m_frame.f_lineno = 96;
            tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_cancel );
            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 96;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__match, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 97;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_None;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__pending_call, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 98;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10b952dac4e59646b1edcc694b7d7e17 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10b952dac4e59646b1edcc694b7d7e17 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_10b952dac4e59646b1edcc694b7d7e17, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_10b952dac4e59646b1edcc694b7d7e17->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_10b952dac4e59646b1edcc694b7d7e17, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_10b952dac4e59646b1edcc694b7d7e17,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_10b952dac4e59646b1edcc694b7d7e17 == cache_frame_10b952dac4e59646b1edcc694b7d7e17 )
    {
        Py_DECREF( frame_10b952dac4e59646b1edcc694b7d7e17 );
    }
    cache_frame_10b952dac4e59646b1edcc694b7d7e17 = NULL;

    assertFrameObject( frame_10b952dac4e59646b1edcc694b7d7e17 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_2_cancel );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_2_cancel );
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


static PyObject *impl_dbus$bus$$$function_3___new__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_address_or_type = python_pars[ 1 ];
    PyObject *par_mainloop = python_pars[ 2 ];
    PyObject *var_bus = NULL;
    struct Nuitka_FrameObject *frame_95a2ed71307d8478b6d11516b26739c8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_95a2ed71307d8478b6d11516b26739c8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_95a2ed71307d8478b6d11516b26739c8, codeobj_95a2ed71307d8478b6d11516b26739c8, module_dbus$bus, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_95a2ed71307d8478b6d11516b26739c8 = cache_frame_95a2ed71307d8478b6d11516b26739c8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_95a2ed71307d8478b6d11516b26739c8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_95a2ed71307d8478b6d11516b26739c8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT( par_cls );
        tmp_source_name_1 = par_cls;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__new_for_bus );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_address_or_type );
        tmp_tuple_element_1 = par_address_or_type;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_mainloop;
        CHECK_OBJECT( par_mainloop );
        tmp_dict_value_1 = par_mainloop;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_95a2ed71307d8478b6d11516b26739c8->m_frame.f_lineno = 122;
        tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_bus == NULL );
        var_bus = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_weakref );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_weakref );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "weakref" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 125;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_95a2ed71307d8478b6d11516b26739c8->m_frame.f_lineno = 125;
        tmp_assattr_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_WeakValueDictionary );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_bus );
        tmp_assattr_target_1 = var_bus;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__bus_names, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = PyDict_New();
        CHECK_OBJECT( var_bus );
        tmp_assattr_target_2 = var_bus;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__signal_sender_matches, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_95a2ed71307d8478b6d11516b26739c8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_95a2ed71307d8478b6d11516b26739c8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_95a2ed71307d8478b6d11516b26739c8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_95a2ed71307d8478b6d11516b26739c8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_95a2ed71307d8478b6d11516b26739c8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_95a2ed71307d8478b6d11516b26739c8,
        type_description_1,
        par_cls,
        par_address_or_type,
        par_mainloop,
        var_bus
    );


    // Release cached frame.
    if ( frame_95a2ed71307d8478b6d11516b26739c8 == cache_frame_95a2ed71307d8478b6d11516b26739c8 )
    {
        Py_DECREF( frame_95a2ed71307d8478b6d11516b26739c8 );
    }
    cache_frame_95a2ed71307d8478b6d11516b26739c8 = NULL;

    assertFrameObject( frame_95a2ed71307d8478b6d11516b26739c8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_bus );
    tmp_return_value = var_bus;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_3___new__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_address_or_type );
    Py_DECREF( par_address_or_type );
    par_address_or_type = NULL;

    CHECK_OBJECT( (PyObject *)par_mainloop );
    Py_DECREF( par_mainloop );
    par_mainloop = NULL;

    CHECK_OBJECT( (PyObject *)var_bus );
    Py_DECREF( var_bus );
    var_bus = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_address_or_type );
    Py_DECREF( par_address_or_type );
    par_address_or_type = NULL;

    CHECK_OBJECT( (PyObject *)par_mainloop );
    Py_DECREF( par_mainloop );
    par_mainloop = NULL;

    Py_XDECREF( var_bus );
    var_bus = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_3___new__ );
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


static PyObject *impl_dbus$bus$$$function_4_add_signal_receiver( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_handler_function = python_pars[ 1 ];
    PyObject *par_signal_name = python_pars[ 2 ];
    PyObject *par_dbus_interface = python_pars[ 3 ];
    PyObject *par_bus_name = python_pars[ 4 ];
    PyObject *par_path = python_pars[ 5 ];
    PyObject *par_keywords = python_pars[ 6 ];
    PyObject *var_named_service = NULL;
    PyObject *var_warn = NULL;
    struct Nuitka_CellObject *var_match = PyCell_EMPTY();
    PyObject *var_callback = NULL;
    PyObject *var_watch = NULL;
    struct Nuitka_FrameObject *frame_7a7c477cffd49376c23e5a20f9f66f45;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7a7c477cffd49376c23e5a20f9f66f45 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7a7c477cffd49376c23e5a20f9f66f45, codeobj_7a7c477cffd49376c23e5a20f9f66f45, module_dbus$bus, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7a7c477cffd49376c23e5a20f9f66f45 = cache_frame_7a7c477cffd49376c23e5a20f9f66f45;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7a7c477cffd49376c23e5a20f9f66f45 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7a7c477cffd49376c23e5a20f9f66f45 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_keywords );
        tmp_called_instance_1 = par_keywords;
        frame_7a7c477cffd49376c23e5a20f9f66f45->m_frame.f_lineno = 135;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_named_service_none_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "ooooooooocooN";
            goto frame_exception_exit_1;
        }
        assert( var_named_service == NULL );
        var_named_service = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_named_service );
        tmp_compexpr_left_1 = var_named_service;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_bus_name );
            tmp_compexpr_left_2 = par_bus_name;
            tmp_compexpr_right_2 = Py_None;
            tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                tmp_make_exception_arg_1 = const_str_digest_6090a95f7b926ecd6061b143b7cad52f;
                frame_7a7c477cffd49376c23e5a20f9f66f45->m_frame.f_lineno = 138;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 138;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooocooN";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_2;
            CHECK_OBJECT( var_named_service );
            tmp_assign_source_2 = var_named_service;
            {
                PyObject *old = par_bus_name;
                assert( old != NULL );
                par_bus_name = tmp_assign_source_2;
                Py_INCREF( par_bus_name );
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_import_name_from_1;
            PyObject *tmp_name_name_1;
            PyObject *tmp_globals_name_1;
            PyObject *tmp_locals_name_1;
            PyObject *tmp_fromlist_name_1;
            PyObject *tmp_level_name_1;
            tmp_name_name_1 = const_str_plain_warnings;
            tmp_globals_name_1 = (PyObject *)moduledict_dbus$bus;
            tmp_locals_name_1 = Py_None;
            tmp_fromlist_name_1 = const_tuple_str_plain_warn_tuple;
            tmp_level_name_1 = const_int_0;
            frame_7a7c477cffd49376c23e5a20f9f66f45->m_frame.f_lineno = 141;
            tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
            if ( tmp_import_name_from_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 141;
                type_description_1 = "ooooooooocooN";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_warn );
            Py_DECREF( tmp_import_name_from_1 );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 141;
                type_description_1 = "ooooooooocooN";
                goto frame_exception_exit_1;
            }
            assert( var_warn == NULL );
            var_warn = tmp_assign_source_3;
        }
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( var_warn );
            tmp_called_name_1 = var_warn;
            tmp_tuple_element_1 = const_str_digest_18c67c412066bef703396d613a159b4d;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
            }

            if ( tmp_mvar_value_1 == NULL )
            {
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 144;
                type_description_1 = "ooooooooocooN";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_1 = tmp_mvar_value_1;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
            frame_7a7c477cffd49376c23e5a20f9f66f45->m_frame.f_lineno = 142;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 142;
                type_description_1 = "ooooooooocooN";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_object_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BusConnection );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BusConnection );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BusConnection" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 146;
            type_description_1 = "ooooooooocooN";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_source_name_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "ooooooooocooN";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_add_signal_receiver );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "ooooooooocooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_handler_function );
        tmp_tuple_element_2 = par_handler_function;
        tmp_dircall_arg2_1 = PyTuple_New( 5 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_signal_name );
        tmp_tuple_element_2 = par_signal_name;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( par_dbus_interface );
        tmp_tuple_element_2 = par_dbus_interface;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_2 );
        CHECK_OBJECT( par_bus_name );
        tmp_tuple_element_2 = par_bus_name;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 3, tmp_tuple_element_2 );
        CHECK_OBJECT( par_path );
        tmp_tuple_element_2 = par_path;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 4, tmp_tuple_element_2 );
        CHECK_OBJECT( par_keywords );
        tmp_dircall_arg3_1 = par_keywords;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_4 = impl___internal__$$$function_8_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "ooooooooocooN";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_match ) == NULL );
        PyCell_SET( var_match, tmp_assign_source_4 );

    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( par_bus_name );
        tmp_compexpr_left_3 = par_bus_name;
        tmp_compexpr_right_3 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_bus_name );
        tmp_compexpr_left_4 = par_bus_name;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_NAME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 150;
            type_description_1 = "ooooooooocooN";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_4 = tmp_mvar_value_3;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "ooooooooocooN";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_3 = tmp_and_left_value_1;
        and_end_1:;
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
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_bus_name );
            tmp_subscribed_name_1 = par_bus_name;
            tmp_subscript_name_1 = const_slice_none_int_pos_1_none;
            tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_compexpr_left_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 151;
                type_description_1 = "ooooooooocooN";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_5 = const_str_chr_58;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_left_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 151;
                type_description_1 = "ooooooooocooN";
                goto frame_exception_exit_1;
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
                PyObject *tmp_assign_source_5;
                tmp_assign_source_5 = MAKE_FUNCTION_dbus$bus$$$function_4_add_signal_receiver$$$function_1_callback(  );

                ((struct Nuitka_FunctionObject *)tmp_assign_source_5)->m_closure[0] = var_match;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_5)->m_closure[0] );


                assert( var_callback == NULL );
                var_callback = tmp_assign_source_5;
            }
            goto branch_end_4;
            branch_no_4:;
            {
                PyObject *tmp_assign_source_6;
                PyObject *tmp_source_name_2;
                CHECK_OBJECT( PyCell_GET( var_match ) );
                tmp_source_name_2 = PyCell_GET( var_match );
                tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_set_sender_name_owner );
                if ( tmp_assign_source_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 156;
                    type_description_1 = "ooooooooocooN";
                    goto frame_exception_exit_1;
                }
                assert( var_callback == NULL );
                var_callback = tmp_assign_source_6;
            }
            branch_end_4:;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_self );
            tmp_called_instance_2 = par_self;
            CHECK_OBJECT( par_bus_name );
            tmp_args_element_name_1 = par_bus_name;
            CHECK_OBJECT( var_callback );
            tmp_args_element_name_2 = var_callback;
            frame_7a7c477cffd49376c23e5a20f9f66f45->m_frame.f_lineno = 157;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_watch_name_owner, call_args );
            }

            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 157;
                type_description_1 = "ooooooooocooN";
                goto frame_exception_exit_1;
            }
            assert( var_watch == NULL );
            var_watch = tmp_assign_source_7;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT( var_watch );
            tmp_ass_subvalue_1 = var_watch;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__signal_sender_matches );
            if ( tmp_ass_subscribed_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "ooooooooocooN";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( PyCell_GET( var_match ) );
            tmp_ass_subscript_1 = PyCell_GET( var_match );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscribed_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 158;
                type_description_1 = "ooooooooocooN";
                goto frame_exception_exit_1;
            }
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_add_match_string );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "ooooooooocooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( PyCell_GET( var_match ) );
        tmp_unicode_arg_1 = PyCell_GET( var_match );
        tmp_args_element_name_3 = PyObject_Unicode( tmp_unicode_arg_1 );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 160;
            type_description_1 = "ooooooooocooN";
            goto frame_exception_exit_1;
        }
        frame_7a7c477cffd49376c23e5a20f9f66f45->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "ooooooooocooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7a7c477cffd49376c23e5a20f9f66f45 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7a7c477cffd49376c23e5a20f9f66f45 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7a7c477cffd49376c23e5a20f9f66f45, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7a7c477cffd49376c23e5a20f9f66f45->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7a7c477cffd49376c23e5a20f9f66f45, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7a7c477cffd49376c23e5a20f9f66f45,
        type_description_1,
        par_self,
        par_handler_function,
        par_signal_name,
        par_dbus_interface,
        par_bus_name,
        par_path,
        par_keywords,
        var_named_service,
        var_warn,
        var_match,
        var_callback,
        var_watch,
        NULL
    );


    // Release cached frame.
    if ( frame_7a7c477cffd49376c23e5a20f9f66f45 == cache_frame_7a7c477cffd49376c23e5a20f9f66f45 )
    {
        Py_DECREF( frame_7a7c477cffd49376c23e5a20f9f66f45 );
    }
    cache_frame_7a7c477cffd49376c23e5a20f9f66f45 = NULL;

    assertFrameObject( frame_7a7c477cffd49376c23e5a20f9f66f45 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( PyCell_GET( var_match ) );
    tmp_return_value = PyCell_GET( var_match );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_4_add_signal_receiver );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_handler_function );
    Py_DECREF( par_handler_function );
    par_handler_function = NULL;

    CHECK_OBJECT( (PyObject *)par_signal_name );
    Py_DECREF( par_signal_name );
    par_signal_name = NULL;

    CHECK_OBJECT( (PyObject *)par_dbus_interface );
    Py_DECREF( par_dbus_interface );
    par_dbus_interface = NULL;

    CHECK_OBJECT( (PyObject *)par_bus_name );
    Py_DECREF( par_bus_name );
    par_bus_name = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)par_keywords );
    Py_DECREF( par_keywords );
    par_keywords = NULL;

    CHECK_OBJECT( (PyObject *)var_named_service );
    Py_DECREF( var_named_service );
    var_named_service = NULL;

    Py_XDECREF( var_warn );
    var_warn = NULL;

    CHECK_OBJECT( (PyObject *)var_match );
    Py_DECREF( var_match );
    var_match = NULL;

    Py_XDECREF( var_callback );
    var_callback = NULL;

    Py_XDECREF( var_watch );
    var_watch = NULL;

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

    CHECK_OBJECT( (PyObject *)par_handler_function );
    Py_DECREF( par_handler_function );
    par_handler_function = NULL;

    CHECK_OBJECT( (PyObject *)par_signal_name );
    Py_DECREF( par_signal_name );
    par_signal_name = NULL;

    CHECK_OBJECT( (PyObject *)par_dbus_interface );
    Py_DECREF( par_dbus_interface );
    par_dbus_interface = NULL;

    Py_XDECREF( par_bus_name );
    par_bus_name = NULL;

    CHECK_OBJECT( (PyObject *)par_path );
    Py_DECREF( par_path );
    par_path = NULL;

    CHECK_OBJECT( (PyObject *)par_keywords );
    Py_DECREF( par_keywords );
    par_keywords = NULL;

    Py_XDECREF( var_named_service );
    var_named_service = NULL;

    Py_XDECREF( var_warn );
    var_warn = NULL;

    CHECK_OBJECT( (PyObject *)var_match );
    Py_DECREF( var_match );
    var_match = NULL;

    Py_XDECREF( var_callback );
    var_callback = NULL;

    Py_XDECREF( var_watch );
    var_watch = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_4_add_signal_receiver );
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


static PyObject *impl_dbus$bus$$$function_4_add_signal_receiver$$$function_1_callback( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_new_owner = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_ecc08a96c54c0f363e093c7bd79e276e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ecc08a96c54c0f363e093c7bd79e276e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ecc08a96c54c0f363e093c7bd79e276e, codeobj_ecc08a96c54c0f363e093c7bd79e276e, module_dbus$bus, sizeof(void *)+sizeof(void *) );
    frame_ecc08a96c54c0f363e093c7bd79e276e = cache_frame_ecc08a96c54c0f363e093c7bd79e276e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ecc08a96c54c0f363e093c7bd79e276e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ecc08a96c54c0f363e093c7bd79e276e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_new_owner );
        tmp_compexpr_left_1 = par_new_owner;
        tmp_compexpr_right_1 = const_str_empty;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 153;
            type_description_1 = "oc";
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "match" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 154;
                type_description_1 = "oc";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
            frame_ecc08a96c54c0f363e093c7bd79e276e->m_frame.f_lineno = 154;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_remove );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 154;
                type_description_1 = "oc";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ecc08a96c54c0f363e093c7bd79e276e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ecc08a96c54c0f363e093c7bd79e276e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ecc08a96c54c0f363e093c7bd79e276e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ecc08a96c54c0f363e093c7bd79e276e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ecc08a96c54c0f363e093c7bd79e276e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ecc08a96c54c0f363e093c7bd79e276e,
        type_description_1,
        par_new_owner,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_ecc08a96c54c0f363e093c7bd79e276e == cache_frame_ecc08a96c54c0f363e093c7bd79e276e )
    {
        Py_DECREF( frame_ecc08a96c54c0f363e093c7bd79e276e );
    }
    cache_frame_ecc08a96c54c0f363e093c7bd79e276e = NULL;

    assertFrameObject( frame_ecc08a96c54c0f363e093c7bd79e276e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_4_add_signal_receiver$$$function_1_callback );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_new_owner );
    Py_DECREF( par_new_owner );
    par_new_owner = NULL;

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

    CHECK_OBJECT( (PyObject *)par_new_owner );
    Py_DECREF( par_new_owner );
    par_new_owner = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_4_add_signal_receiver$$$function_1_callback );
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


static PyObject *impl_dbus$bus$$$function_5__clean_up_signal_match( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_match = python_pars[ 1 ];
    PyObject *var_watch = NULL;
    struct Nuitka_FrameObject *frame_3f23d48793f9052c0e034aa3c4469109;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3f23d48793f9052c0e034aa3c4469109 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3f23d48793f9052c0e034aa3c4469109, codeobj_3f23d48793f9052c0e034aa3c4469109, module_dbus$bus, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3f23d48793f9052c0e034aa3c4469109 = cache_frame_3f23d48793f9052c0e034aa3c4469109;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3f23d48793f9052c0e034aa3c4469109 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3f23d48793f9052c0e034aa3c4469109 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_remove_match_string_non_blocking );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_match );
        tmp_unicode_arg_1 = par_match;
        tmp_args_element_name_1 = PyObject_Unicode( tmp_unicode_arg_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 166;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_3f23d48793f9052c0e034aa3c4469109->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__signal_sender_matches );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_match );
        tmp_args_element_name_2 = par_match;
        tmp_args_element_name_3 = Py_None;
        frame_3f23d48793f9052c0e034aa3c4469109->m_frame.f_lineno = 167;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pop, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 167;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_watch == NULL );
        var_watch = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_watch );
        tmp_compexpr_left_1 = var_watch;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( var_watch );
            tmp_called_instance_2 = var_watch;
            frame_3f23d48793f9052c0e034aa3c4469109->m_frame.f_lineno = 169;
            tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_cancel );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 169;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f23d48793f9052c0e034aa3c4469109 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f23d48793f9052c0e034aa3c4469109 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3f23d48793f9052c0e034aa3c4469109, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3f23d48793f9052c0e034aa3c4469109->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3f23d48793f9052c0e034aa3c4469109, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3f23d48793f9052c0e034aa3c4469109,
        type_description_1,
        par_self,
        par_match,
        var_watch
    );


    // Release cached frame.
    if ( frame_3f23d48793f9052c0e034aa3c4469109 == cache_frame_3f23d48793f9052c0e034aa3c4469109 )
    {
        Py_DECREF( frame_3f23d48793f9052c0e034aa3c4469109 );
    }
    cache_frame_3f23d48793f9052c0e034aa3c4469109 = NULL;

    assertFrameObject( frame_3f23d48793f9052c0e034aa3c4469109 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_5__clean_up_signal_match );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_match );
    Py_DECREF( par_match );
    par_match = NULL;

    CHECK_OBJECT( (PyObject *)var_watch );
    Py_DECREF( var_watch );
    var_watch = NULL;

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

    CHECK_OBJECT( (PyObject *)par_match );
    Py_DECREF( par_match );
    par_match = NULL;

    Py_XDECREF( var_watch );
    var_watch = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_5__clean_up_signal_match );
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


static PyObject *impl_dbus$bus$$$function_6_activate_name_owner( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_bus_name = python_pars[ 1 ];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_123baf20dd9b1a57a74d3642b895c082;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_123baf20dd9b1a57a74d3642b895c082 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_123baf20dd9b1a57a74d3642b895c082, codeobj_123baf20dd9b1a57a74d3642b895c082, module_dbus$bus, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_123baf20dd9b1a57a74d3642b895c082 = cache_frame_123baf20dd9b1a57a74d3642b895c082;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_123baf20dd9b1a57a74d3642b895c082 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_123baf20dd9b1a57a74d3642b895c082 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_bus_name );
        tmp_compexpr_left_1 = par_bus_name;
        tmp_compexpr_right_1 = Py_None;
        tmp_and_left_value_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_bus_name );
        tmp_subscribed_name_1 = par_bus_name;
        tmp_subscript_name_1 = const_slice_none_int_pos_1_none;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = const_str_chr_58;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 172;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT( par_bus_name );
        tmp_compexpr_left_3 = par_bus_name;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_NAME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 173;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_3 = tmp_mvar_value_1;
        tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        // Tried code:
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            CHECK_OBJECT( par_bus_name );
            tmp_args_element_name_1 = par_bus_name;
            frame_123baf20dd9b1a57a74d3642b895c082->m_frame.f_lineno = 175;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get_name_owner, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 175;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            goto frame_return_exit_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_6_activate_name_owner );
        return NULL;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
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

        if ( exception_keeper_tb_1 == NULL )
        {
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_123baf20dd9b1a57a74d3642b895c082, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_123baf20dd9b1a57a74d3642b895c082, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        // Tried code:
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_mvar_value_2;
            tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_DBusException );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DBusException );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DBusException" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 176;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }

            tmp_compexpr_right_4 = tmp_mvar_value_2;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "ooo";
                goto try_except_handler_3;
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
            {
                PyObject *tmp_assign_source_1;
                tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
                assert( var_e == NULL );
                Py_INCREF( tmp_assign_source_1 );
                var_e = tmp_assign_source_1;
            }
            // Tried code:
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_mvar_value_3;
                CHECK_OBJECT( var_e );
                tmp_called_instance_2 = var_e;
                frame_123baf20dd9b1a57a74d3642b895c082->m_frame.f_lineno = 177;
                tmp_compexpr_left_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_dbus_name );
                if ( tmp_compexpr_left_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 177;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain__NAME_HAS_NO_OWNER );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__NAME_HAS_NO_OWNER );
                }

                if ( tmp_mvar_value_3 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_5 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_NAME_HAS_NO_OWNER" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 177;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }

                tmp_compexpr_right_5 = tmp_mvar_value_3;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_left_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 177;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
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
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 178;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_123baf20dd9b1a57a74d3642b895c082->m_frame) frame_123baf20dd9b1a57a74d3642b895c082->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooo";
                goto try_except_handler_4;
                branch_no_3:;
            }
            {
                PyObject *tmp_called_instance_3;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_2;
                CHECK_OBJECT( par_self );
                tmp_called_instance_3 = par_self;
                CHECK_OBJECT( par_bus_name );
                tmp_args_element_name_2 = par_bus_name;
                frame_123baf20dd9b1a57a74d3642b895c082->m_frame.f_lineno = 180;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_start_service_by_name, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 180;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            {
                PyObject *tmp_called_instance_4;
                PyObject *tmp_args_element_name_3;
                CHECK_OBJECT( par_self );
                tmp_called_instance_4 = par_self;
                CHECK_OBJECT( par_bus_name );
                tmp_args_element_name_3 = par_bus_name;
                frame_123baf20dd9b1a57a74d3642b895c082->m_frame.f_lineno = 181;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_get_name_owner, call_args );
                }

                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 181;
                    type_description_1 = "ooo";
                    goto try_except_handler_4;
                }
                goto try_return_handler_4;
            }
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_6_activate_name_owner );
            return NULL;
            // Return handler code:
            try_return_handler_4:;
            Py_XDECREF( var_e );
            var_e = NULL;

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

            Py_XDECREF( var_e );
            var_e = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto try_except_handler_3;
            // End of try:
            goto branch_end_2;
            branch_no_2:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 174;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_123baf20dd9b1a57a74d3642b895c082->m_frame) frame_123baf20dd9b1a57a74d3642b895c082->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooo";
            goto try_except_handler_3;
            branch_end_2:;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_6_activate_name_owner );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        goto frame_return_exit_1;
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

        // Restore previous exception.
        SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        // End of try:
        goto branch_end_1;
        branch_no_1:;
        CHECK_OBJECT( par_bus_name );
        tmp_return_value = par_bus_name;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_123baf20dd9b1a57a74d3642b895c082 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_123baf20dd9b1a57a74d3642b895c082 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_123baf20dd9b1a57a74d3642b895c082 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_123baf20dd9b1a57a74d3642b895c082, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_123baf20dd9b1a57a74d3642b895c082->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_123baf20dd9b1a57a74d3642b895c082, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_123baf20dd9b1a57a74d3642b895c082,
        type_description_1,
        par_self,
        par_bus_name,
        var_e
    );


    // Release cached frame.
    if ( frame_123baf20dd9b1a57a74d3642b895c082 == cache_frame_123baf20dd9b1a57a74d3642b895c082 )
    {
        Py_DECREF( frame_123baf20dd9b1a57a74d3642b895c082 );
    }
    cache_frame_123baf20dd9b1a57a74d3642b895c082 = NULL;

    assertFrameObject( frame_123baf20dd9b1a57a74d3642b895c082 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_6_activate_name_owner );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bus_name );
    Py_DECREF( par_bus_name );
    par_bus_name = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bus_name );
    Py_DECREF( par_bus_name );
    par_bus_name = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_6_activate_name_owner );
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


static PyObject *impl_dbus$bus$$$function_7_get_object( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_bus_name = python_pars[ 1 ];
    PyObject *par_object_path = python_pars[ 2 ];
    PyObject *par_introspect = python_pars[ 3 ];
    PyObject *par_follow_name_owner_changes = python_pars[ 4 ];
    PyObject *par_kwargs = python_pars[ 5 ];
    PyObject *var_named_service = NULL;
    PyObject *var_warn = NULL;
    struct Nuitka_FrameObject *frame_07c88823759acfe82dd0cfd5a1a17ae8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_07c88823759acfe82dd0cfd5a1a17ae8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_07c88823759acfe82dd0cfd5a1a17ae8, codeobj_07c88823759acfe82dd0cfd5a1a17ae8, module_dbus$bus, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_07c88823759acfe82dd0cfd5a1a17ae8 = cache_frame_07c88823759acfe82dd0cfd5a1a17ae8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_07c88823759acfe82dd0cfd5a1a17ae8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_07c88823759acfe82dd0cfd5a1a17ae8 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_follow_name_owner_changes );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_follow_name_owner_changes );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 222;
            type_description_1 = "oooooooo";
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
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            frame_07c88823759acfe82dd0cfd5a1a17ae8->m_frame.f_lineno = 223;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__require_main_loop );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT( par_kwargs );
        tmp_called_instance_2 = par_kwargs;
        frame_07c88823759acfe82dd0cfd5a1a17ae8->m_frame.f_lineno = 225;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_named_service_none_tuple, 0 ) );

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_named_service == NULL );
        var_named_service = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_named_service );
        tmp_compexpr_left_1 = var_named_service;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( par_bus_name );
            tmp_compexpr_left_2 = par_bus_name;
            tmp_compexpr_right_2 = Py_None;
            tmp_condition_result_3 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_6090a95f7b926ecd6061b143b7cad52f;
                frame_07c88823759acfe82dd0cfd5a1a17ae8->m_frame.f_lineno = 228;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 228;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_3:;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_import_name_from_1;
            PyObject *tmp_name_name_1;
            PyObject *tmp_globals_name_1;
            PyObject *tmp_locals_name_1;
            PyObject *tmp_fromlist_name_1;
            PyObject *tmp_level_name_1;
            tmp_name_name_1 = const_str_plain_warnings;
            tmp_globals_name_1 = (PyObject *)moduledict_dbus$bus;
            tmp_locals_name_1 = Py_None;
            tmp_fromlist_name_1 = const_tuple_str_plain_warn_tuple;
            tmp_level_name_1 = const_int_0;
            frame_07c88823759acfe82dd0cfd5a1a17ae8->m_frame.f_lineno = 230;
            tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
            if ( tmp_import_name_from_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 230;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_warn );
            Py_DECREF( tmp_import_name_from_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 230;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_warn == NULL );
            var_warn = tmp_assign_source_2;
        }
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( var_warn );
            tmp_called_name_1 = var_warn;
            tmp_tuple_element_1 = const_str_digest_4289e46f026bf0dd92edd4764f9ca580;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
            }

            if ( tmp_mvar_value_1 == NULL )
            {
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DeprecationWarning" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 233;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_1 = tmp_mvar_value_1;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
            tmp_kw_name_1 = PyDict_Copy( const_dict_f154c9a58c9419d7e391901d7b7fe49e );
            frame_07c88823759acfe82dd0cfd5a1a17ae8->m_frame.f_lineno = 231;
            tmp_call_result_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 231;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT( var_named_service );
            tmp_assign_source_3 = var_named_service;
            {
                PyObject *old = par_bus_name;
                assert( old != NULL );
                par_bus_name = tmp_assign_source_3;
                Py_INCREF( par_bus_name );
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_kwargs );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_kwargs );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_3;
            tmp_left_name_1 = const_str_digest_3cc8fcb05b60f7b9437930cdc441ce30;
            tmp_source_name_1 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
            assert( !(tmp_called_name_2 == NULL) );
            CHECK_OBJECT( par_kwargs );
            tmp_called_instance_3 = par_kwargs;
            frame_07c88823759acfe82dd0cfd5a1a17ae8->m_frame.f_lineno = 237;
            tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_keys );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 237;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_07c88823759acfe82dd0cfd5a1a17ae8->m_frame.f_lineno = 237;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_make_exception_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 236;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_07c88823759acfe82dd0cfd5a1a17ae8->m_frame.f_lineno = 236;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_2 );
            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 236;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ProxyObjectClass );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_tuple_element_2 = par_self;
        tmp_args_name_2 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_bus_name );
        tmp_tuple_element_2 = par_bus_name;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
        CHECK_OBJECT( par_object_path );
        tmp_tuple_element_2 = par_object_path;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
        tmp_dict_key_1 = const_str_plain_introspect;
        CHECK_OBJECT( par_introspect );
        tmp_dict_value_1 = par_introspect;
        tmp_kw_name_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_dict_key_2 = const_str_plain_follow_name_owner_changes;
        CHECK_OBJECT( par_follow_name_owner_changes );
        tmp_dict_value_2 = par_follow_name_owner_changes;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_07c88823759acfe82dd0cfd5a1a17ae8->m_frame.f_lineno = 239;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_07c88823759acfe82dd0cfd5a1a17ae8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_07c88823759acfe82dd0cfd5a1a17ae8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_07c88823759acfe82dd0cfd5a1a17ae8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_07c88823759acfe82dd0cfd5a1a17ae8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_07c88823759acfe82dd0cfd5a1a17ae8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_07c88823759acfe82dd0cfd5a1a17ae8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_07c88823759acfe82dd0cfd5a1a17ae8,
        type_description_1,
        par_self,
        par_bus_name,
        par_object_path,
        par_introspect,
        par_follow_name_owner_changes,
        par_kwargs,
        var_named_service,
        var_warn
    );


    // Release cached frame.
    if ( frame_07c88823759acfe82dd0cfd5a1a17ae8 == cache_frame_07c88823759acfe82dd0cfd5a1a17ae8 )
    {
        Py_DECREF( frame_07c88823759acfe82dd0cfd5a1a17ae8 );
    }
    cache_frame_07c88823759acfe82dd0cfd5a1a17ae8 = NULL;

    assertFrameObject( frame_07c88823759acfe82dd0cfd5a1a17ae8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_7_get_object );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bus_name );
    Py_DECREF( par_bus_name );
    par_bus_name = NULL;

    CHECK_OBJECT( (PyObject *)par_object_path );
    Py_DECREF( par_object_path );
    par_object_path = NULL;

    CHECK_OBJECT( (PyObject *)par_introspect );
    Py_DECREF( par_introspect );
    par_introspect = NULL;

    CHECK_OBJECT( (PyObject *)par_follow_name_owner_changes );
    Py_DECREF( par_follow_name_owner_changes );
    par_follow_name_owner_changes = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)var_named_service );
    Py_DECREF( var_named_service );
    var_named_service = NULL;

    Py_XDECREF( var_warn );
    var_warn = NULL;

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

    Py_XDECREF( par_bus_name );
    par_bus_name = NULL;

    CHECK_OBJECT( (PyObject *)par_object_path );
    Py_DECREF( par_object_path );
    par_object_path = NULL;

    CHECK_OBJECT( (PyObject *)par_introspect );
    Py_DECREF( par_introspect );
    par_introspect = NULL;

    CHECK_OBJECT( (PyObject *)par_follow_name_owner_changes );
    Py_DECREF( par_follow_name_owner_changes );
    par_follow_name_owner_changes = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_named_service );
    var_named_service = NULL;

    Py_XDECREF( var_warn );
    var_warn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_7_get_object );
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


static PyObject *impl_dbus$bus$$$function_8_get_unix_user( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_bus_name = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_76d71404a975d8acb0e2b2c5cbf01eef;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_76d71404a975d8acb0e2b2c5cbf01eef = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_76d71404a975d8acb0e2b2c5cbf01eef, codeobj_76d71404a975d8acb0e2b2c5cbf01eef, module_dbus$bus, sizeof(void *)+sizeof(void *) );
    frame_76d71404a975d8acb0e2b2c5cbf01eef = cache_frame_76d71404a975d8acb0e2b2c5cbf01eef;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_76d71404a975d8acb0e2b2c5cbf01eef );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_76d71404a975d8acb0e2b2c5cbf01eef ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_validate_bus_name );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_validate_bus_name );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "validate_bus_name" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 252;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_bus_name );
        tmp_args_element_name_1 = par_bus_name;
        frame_76d71404a975d8acb0e2b2c5cbf01eef->m_frame.f_lineno = 252;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 252;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_call_blocking );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_NAME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 253;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_PATH" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 253;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_IFACE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 254;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_4;
        tmp_args_element_name_5 = const_str_plain_GetConnectionUnixUser;
        tmp_args_element_name_6 = const_str_plain_s;
        CHECK_OBJECT( par_bus_name );
        tmp_tuple_element_1 = par_bus_name;
        tmp_args_element_name_7 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_7, 0, tmp_tuple_element_1 );
        frame_76d71404a975d8acb0e2b2c5cbf01eef->m_frame.f_lineno = 253;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76d71404a975d8acb0e2b2c5cbf01eef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_76d71404a975d8acb0e2b2c5cbf01eef );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76d71404a975d8acb0e2b2c5cbf01eef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_76d71404a975d8acb0e2b2c5cbf01eef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_76d71404a975d8acb0e2b2c5cbf01eef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_76d71404a975d8acb0e2b2c5cbf01eef, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_76d71404a975d8acb0e2b2c5cbf01eef,
        type_description_1,
        par_self,
        par_bus_name
    );


    // Release cached frame.
    if ( frame_76d71404a975d8acb0e2b2c5cbf01eef == cache_frame_76d71404a975d8acb0e2b2c5cbf01eef )
    {
        Py_DECREF( frame_76d71404a975d8acb0e2b2c5cbf01eef );
    }
    cache_frame_76d71404a975d8acb0e2b2c5cbf01eef = NULL;

    assertFrameObject( frame_76d71404a975d8acb0e2b2c5cbf01eef );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_8_get_unix_user );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bus_name );
    Py_DECREF( par_bus_name );
    par_bus_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bus_name );
    Py_DECREF( par_bus_name );
    par_bus_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_8_get_unix_user );
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


static PyObject *impl_dbus$bus$$$function_9_start_service_by_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_bus_name = python_pars[ 1 ];
    PyObject *par_flags = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_61baa2d37f54d4ddb34ac6d4baf7bfc0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_61baa2d37f54d4ddb34ac6d4baf7bfc0 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_61baa2d37f54d4ddb34ac6d4baf7bfc0, codeobj_61baa2d37f54d4ddb34ac6d4baf7bfc0, module_dbus$bus, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_61baa2d37f54d4ddb34ac6d4baf7bfc0 = cache_frame_61baa2d37f54d4ddb34ac6d4baf7bfc0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_61baa2d37f54d4ddb34ac6d4baf7bfc0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_61baa2d37f54d4ddb34ac6d4baf7bfc0 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_validate_bus_name );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_validate_bus_name );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "validate_bus_name" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 274;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_bus_name );
        tmp_args_element_name_1 = par_bus_name;
        frame_61baa2d37f54d4ddb34ac6d4baf7bfc0->m_frame.f_lineno = 274;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_1 = Py_True;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_call_blocking );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 275;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_return_value );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_NAME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 275;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_return_value );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_PATH" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 275;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_return_value );
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_IFACE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 276;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_4 = tmp_mvar_value_4;
        tmp_args_element_name_5 = const_str_plain_StartServiceByName;
        tmp_args_element_name_6 = const_str_plain_su;
        CHECK_OBJECT( par_bus_name );
        tmp_tuple_element_2 = par_bus_name;
        tmp_args_element_name_7 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_7, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_flags );
        tmp_tuple_element_2 = par_flags;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_7, 1, tmp_tuple_element_2 );
        frame_61baa2d37f54d4ddb34ac6d4baf7bfc0->m_frame.f_lineno = 275;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 275;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_61baa2d37f54d4ddb34ac6d4baf7bfc0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_61baa2d37f54d4ddb34ac6d4baf7bfc0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_61baa2d37f54d4ddb34ac6d4baf7bfc0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_61baa2d37f54d4ddb34ac6d4baf7bfc0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_61baa2d37f54d4ddb34ac6d4baf7bfc0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_61baa2d37f54d4ddb34ac6d4baf7bfc0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_61baa2d37f54d4ddb34ac6d4baf7bfc0,
        type_description_1,
        par_self,
        par_bus_name,
        par_flags
    );


    // Release cached frame.
    if ( frame_61baa2d37f54d4ddb34ac6d4baf7bfc0 == cache_frame_61baa2d37f54d4ddb34ac6d4baf7bfc0 )
    {
        Py_DECREF( frame_61baa2d37f54d4ddb34ac6d4baf7bfc0 );
    }
    cache_frame_61baa2d37f54d4ddb34ac6d4baf7bfc0 = NULL;

    assertFrameObject( frame_61baa2d37f54d4ddb34ac6d4baf7bfc0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_9_start_service_by_name );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bus_name );
    Py_DECREF( par_bus_name );
    par_bus_name = NULL;

    CHECK_OBJECT( (PyObject *)par_flags );
    Py_DECREF( par_flags );
    par_flags = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bus_name );
    Py_DECREF( par_bus_name );
    par_bus_name = NULL;

    CHECK_OBJECT( (PyObject *)par_flags );
    Py_DECREF( par_flags );
    par_flags = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_9_start_service_by_name );
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


static PyObject *impl_dbus$bus$$$function_10_request_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *par_flags = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_153904ecf683b950a051a6a63978eade;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_153904ecf683b950a051a6a63978eade = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_153904ecf683b950a051a6a63978eade, codeobj_153904ecf683b950a051a6a63978eade, module_dbus$bus, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_153904ecf683b950a051a6a63978eade = cache_frame_153904ecf683b950a051a6a63978eade;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_153904ecf683b950a051a6a63978eade );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_153904ecf683b950a051a6a63978eade ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_validate_bus_name );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_validate_bus_name );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "validate_bus_name" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 300;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_name );
        tmp_tuple_element_1 = par_name;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_bc61ffba91e0a66db960a393668d500e );
        frame_153904ecf683b950a051a6a63978eade->m_frame.f_lineno = 300;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_call_blocking );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 301;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_NAME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 301;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_PATH" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 301;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_IFACE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 302;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_4;
        tmp_args_element_name_4 = const_str_plain_RequestName;
        tmp_args_element_name_5 = const_str_plain_su;
        CHECK_OBJECT( par_name );
        tmp_tuple_element_2 = par_name;
        tmp_args_element_name_6 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_flags );
        tmp_tuple_element_2 = par_flags;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 1, tmp_tuple_element_2 );
        frame_153904ecf683b950a051a6a63978eade->m_frame.f_lineno = 301;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 301;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_153904ecf683b950a051a6a63978eade );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_153904ecf683b950a051a6a63978eade );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_153904ecf683b950a051a6a63978eade );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_153904ecf683b950a051a6a63978eade, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_153904ecf683b950a051a6a63978eade->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_153904ecf683b950a051a6a63978eade, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_153904ecf683b950a051a6a63978eade,
        type_description_1,
        par_self,
        par_name,
        par_flags
    );


    // Release cached frame.
    if ( frame_153904ecf683b950a051a6a63978eade == cache_frame_153904ecf683b950a051a6a63978eade )
    {
        Py_DECREF( frame_153904ecf683b950a051a6a63978eade );
    }
    cache_frame_153904ecf683b950a051a6a63978eade = NULL;

    assertFrameObject( frame_153904ecf683b950a051a6a63978eade );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_10_request_name );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_flags );
    Py_DECREF( par_flags );
    par_flags = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_flags );
    Py_DECREF( par_flags );
    par_flags = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_10_request_name );
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


static PyObject *impl_dbus$bus$$$function_11_release_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_5249b655d89ca6a682ac7fa083cbcfa2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5249b655d89ca6a682ac7fa083cbcfa2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5249b655d89ca6a682ac7fa083cbcfa2, codeobj_5249b655d89ca6a682ac7fa083cbcfa2, module_dbus$bus, sizeof(void *)+sizeof(void *) );
    frame_5249b655d89ca6a682ac7fa083cbcfa2 = cache_frame_5249b655d89ca6a682ac7fa083cbcfa2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5249b655d89ca6a682ac7fa083cbcfa2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5249b655d89ca6a682ac7fa083cbcfa2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_validate_bus_name );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_validate_bus_name );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "validate_bus_name" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 317;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_name );
        tmp_tuple_element_1 = par_name;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_bc61ffba91e0a66db960a393668d500e );
        frame_5249b655d89ca6a682ac7fa083cbcfa2->m_frame.f_lineno = 317;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_call_blocking );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 318;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_NAME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 318;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_PATH" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 318;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_IFACE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 319;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_4;
        tmp_args_element_name_4 = const_str_plain_ReleaseName;
        tmp_args_element_name_5 = const_str_plain_s;
        CHECK_OBJECT( par_name );
        tmp_tuple_element_2 = par_name;
        tmp_args_element_name_6 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 0, tmp_tuple_element_2 );
        frame_5249b655d89ca6a682ac7fa083cbcfa2->m_frame.f_lineno = 318;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 318;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5249b655d89ca6a682ac7fa083cbcfa2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5249b655d89ca6a682ac7fa083cbcfa2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5249b655d89ca6a682ac7fa083cbcfa2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5249b655d89ca6a682ac7fa083cbcfa2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5249b655d89ca6a682ac7fa083cbcfa2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5249b655d89ca6a682ac7fa083cbcfa2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5249b655d89ca6a682ac7fa083cbcfa2,
        type_description_1,
        par_self,
        par_name
    );


    // Release cached frame.
    if ( frame_5249b655d89ca6a682ac7fa083cbcfa2 == cache_frame_5249b655d89ca6a682ac7fa083cbcfa2 )
    {
        Py_DECREF( frame_5249b655d89ca6a682ac7fa083cbcfa2 );
    }
    cache_frame_5249b655d89ca6a682ac7fa083cbcfa2 = NULL;

    assertFrameObject( frame_5249b655d89ca6a682ac7fa083cbcfa2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_11_release_name );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_11_release_name );
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


static PyObject *impl_dbus$bus$$$function_12_list_names( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_keywords = NULL;
    struct Nuitka_FrameObject *frame_34a1ab8806cabccb6766c7c0894b95cc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_34a1ab8806cabccb6766c7c0894b95cc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert( var_keywords == NULL );
        var_keywords = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_34a1ab8806cabccb6766c7c0894b95cc, codeobj_34a1ab8806cabccb6766c7c0894b95cc, module_dbus$bus, sizeof(void *)+sizeof(void *) );
    frame_34a1ab8806cabccb6766c7c0894b95cc = cache_frame_34a1ab8806cabccb6766c7c0894b95cc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_34a1ab8806cabccb6766c7c0894b95cc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_34a1ab8806cabccb6766c7c0894b95cc ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_is_py2 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py2 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_py2" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 329;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_mvar_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "oo";
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
        tmp_dictset_value = Py_True;
        CHECK_OBJECT( var_keywords );
        tmp_dictset_dict = var_keywords;
        tmp_dictset_key = const_str_plain_utf8_strings;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_1:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_call_blocking );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_NAME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 331;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        tmp_dircall_arg2_1 = PyTuple_New( 6 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_PATH" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 331;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_IFACE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 332;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_4;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_str_plain_ListNames;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 3, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_str_empty;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 4, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_tuple_empty;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 5, tmp_tuple_element_1 );
        CHECK_OBJECT( var_keywords );
        tmp_dircall_arg3_1 = var_keywords;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_34a1ab8806cabccb6766c7c0894b95cc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_34a1ab8806cabccb6766c7c0894b95cc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_34a1ab8806cabccb6766c7c0894b95cc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_34a1ab8806cabccb6766c7c0894b95cc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_34a1ab8806cabccb6766c7c0894b95cc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_34a1ab8806cabccb6766c7c0894b95cc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_34a1ab8806cabccb6766c7c0894b95cc,
        type_description_1,
        par_self,
        var_keywords
    );


    // Release cached frame.
    if ( frame_34a1ab8806cabccb6766c7c0894b95cc == cache_frame_34a1ab8806cabccb6766c7c0894b95cc )
    {
        Py_DECREF( frame_34a1ab8806cabccb6766c7c0894b95cc );
    }
    cache_frame_34a1ab8806cabccb6766c7c0894b95cc = NULL;

    assertFrameObject( frame_34a1ab8806cabccb6766c7c0894b95cc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_12_list_names );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_keywords );
    Py_DECREF( var_keywords );
    var_keywords = NULL;

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

    CHECK_OBJECT( (PyObject *)var_keywords );
    Py_DECREF( var_keywords );
    var_keywords = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_12_list_names );
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


static PyObject *impl_dbus$bus$$$function_13_list_activatable_names( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_keywords = NULL;
    struct Nuitka_FrameObject *frame_d15a977d5f7dbcd9269d9234a639a93d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d15a977d5f7dbcd9269d9234a639a93d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert( var_keywords == NULL );
        var_keywords = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d15a977d5f7dbcd9269d9234a639a93d, codeobj_d15a977d5f7dbcd9269d9234a639a93d, module_dbus$bus, sizeof(void *)+sizeof(void *) );
    frame_d15a977d5f7dbcd9269d9234a639a93d = cache_frame_d15a977d5f7dbcd9269d9234a639a93d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d15a977d5f7dbcd9269d9234a639a93d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d15a977d5f7dbcd9269d9234a639a93d ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_is_py2 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py2 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_py2" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 342;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_mvar_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "oo";
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
        tmp_dictset_value = Py_True;
        CHECK_OBJECT( var_keywords );
        tmp_dictset_dict = var_keywords;
        tmp_dictset_key = const_str_plain_utf8_strings;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_1:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_call_blocking );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_NAME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 344;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_2;
        tmp_dircall_arg2_1 = PyTuple_New( 6 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_PATH" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 344;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_IFACE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 345;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_4;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_str_plain_ListActivatableNames;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 3, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_str_empty;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 4, tmp_tuple_element_1 );
        tmp_tuple_element_1 = const_tuple_empty;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 5, tmp_tuple_element_1 );
        CHECK_OBJECT( var_keywords );
        tmp_dircall_arg3_1 = var_keywords;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d15a977d5f7dbcd9269d9234a639a93d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d15a977d5f7dbcd9269d9234a639a93d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d15a977d5f7dbcd9269d9234a639a93d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d15a977d5f7dbcd9269d9234a639a93d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d15a977d5f7dbcd9269d9234a639a93d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d15a977d5f7dbcd9269d9234a639a93d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d15a977d5f7dbcd9269d9234a639a93d,
        type_description_1,
        par_self,
        var_keywords
    );


    // Release cached frame.
    if ( frame_d15a977d5f7dbcd9269d9234a639a93d == cache_frame_d15a977d5f7dbcd9269d9234a639a93d )
    {
        Py_DECREF( frame_d15a977d5f7dbcd9269d9234a639a93d );
    }
    cache_frame_d15a977d5f7dbcd9269d9234a639a93d = NULL;

    assertFrameObject( frame_d15a977d5f7dbcd9269d9234a639a93d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_13_list_activatable_names );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_keywords );
    Py_DECREF( var_keywords );
    var_keywords = NULL;

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

    CHECK_OBJECT( (PyObject *)var_keywords );
    Py_DECREF( var_keywords );
    var_keywords = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_13_list_activatable_names );
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


static PyObject *impl_dbus$bus$$$function_14_get_name_owner( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_bus_name = python_pars[ 1 ];
    PyObject *var_keywords = NULL;
    struct Nuitka_FrameObject *frame_8e4c8f82a29ed3508f6f44f4cc6705db;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8e4c8f82a29ed3508f6f44f4cc6705db = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert( var_keywords == NULL );
        var_keywords = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8e4c8f82a29ed3508f6f44f4cc6705db, codeobj_8e4c8f82a29ed3508f6f44f4cc6705db, module_dbus$bus, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8e4c8f82a29ed3508f6f44f4cc6705db = cache_frame_8e4c8f82a29ed3508f6f44f4cc6705db;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8e4c8f82a29ed3508f6f44f4cc6705db );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8e4c8f82a29ed3508f6f44f4cc6705db ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_is_py2 );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_py2 );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_py2" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 356;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_mvar_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 356;
            type_description_1 = "ooo";
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
        tmp_dictset_value = Py_True;
        CHECK_OBJECT( var_keywords );
        tmp_dictset_dict = var_keywords;
        tmp_dictset_key = const_str_plain_utf8_strings;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_validate_bus_name );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_validate_bus_name );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "validate_bus_name" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 358;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        CHECK_OBJECT( par_bus_name );
        tmp_tuple_element_1 = par_bus_name;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_bc61ffba91e0a66db960a393668d500e );
        frame_8e4c8f82a29ed3508f6f44f4cc6705db->m_frame.f_lineno = 358;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_call_blocking );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_NAME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 359;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_3;
        tmp_dircall_arg2_1 = PyTuple_New( 6 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_PATH" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 359;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_4;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_2 );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_IFACE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 360;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = tmp_mvar_value_5;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_str_plain_GetNameOwner;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 3, tmp_tuple_element_2 );
        tmp_tuple_element_2 = const_str_plain_s;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 4, tmp_tuple_element_2 );
        CHECK_OBJECT( par_bus_name );
        tmp_tuple_element_3 = par_bus_name;
        tmp_tuple_element_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 5, tmp_tuple_element_2 );
        CHECK_OBJECT( var_keywords );
        tmp_dircall_arg3_1 = var_keywords;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_8_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 359;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e4c8f82a29ed3508f6f44f4cc6705db );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e4c8f82a29ed3508f6f44f4cc6705db );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e4c8f82a29ed3508f6f44f4cc6705db );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8e4c8f82a29ed3508f6f44f4cc6705db, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8e4c8f82a29ed3508f6f44f4cc6705db->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8e4c8f82a29ed3508f6f44f4cc6705db, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8e4c8f82a29ed3508f6f44f4cc6705db,
        type_description_1,
        par_self,
        par_bus_name,
        var_keywords
    );


    // Release cached frame.
    if ( frame_8e4c8f82a29ed3508f6f44f4cc6705db == cache_frame_8e4c8f82a29ed3508f6f44f4cc6705db )
    {
        Py_DECREF( frame_8e4c8f82a29ed3508f6f44f4cc6705db );
    }
    cache_frame_8e4c8f82a29ed3508f6f44f4cc6705db = NULL;

    assertFrameObject( frame_8e4c8f82a29ed3508f6f44f4cc6705db );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_14_get_name_owner );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bus_name );
    Py_DECREF( par_bus_name );
    par_bus_name = NULL;

    CHECK_OBJECT( (PyObject *)var_keywords );
    Py_DECREF( var_keywords );
    var_keywords = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bus_name );
    Py_DECREF( par_bus_name );
    par_bus_name = NULL;

    CHECK_OBJECT( (PyObject *)var_keywords );
    Py_DECREF( var_keywords );
    var_keywords = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_14_get_name_owner );
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


static PyObject *impl_dbus$bus$$$function_15_watch_name_owner( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_bus_name = python_pars[ 1 ];
    PyObject *par_callback = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_291e7d800913fa9945390f7ae7e5da4f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_291e7d800913fa9945390f7ae7e5da4f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_291e7d800913fa9945390f7ae7e5da4f, codeobj_291e7d800913fa9945390f7ae7e5da4f, module_dbus$bus, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_291e7d800913fa9945390f7ae7e5da4f = cache_frame_291e7d800913fa9945390f7ae7e5da4f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_291e7d800913fa9945390f7ae7e5da4f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_291e7d800913fa9945390f7ae7e5da4f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_NameOwnerWatch );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOwnerWatch );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOwnerWatch" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 373;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_args_element_name_1 = par_self;
        CHECK_OBJECT( par_bus_name );
        tmp_args_element_name_2 = par_bus_name;
        CHECK_OBJECT( par_callback );
        tmp_args_element_name_3 = par_callback;
        frame_291e7d800913fa9945390f7ae7e5da4f->m_frame.f_lineno = 373;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_291e7d800913fa9945390f7ae7e5da4f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_291e7d800913fa9945390f7ae7e5da4f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_291e7d800913fa9945390f7ae7e5da4f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_291e7d800913fa9945390f7ae7e5da4f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_291e7d800913fa9945390f7ae7e5da4f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_291e7d800913fa9945390f7ae7e5da4f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_291e7d800913fa9945390f7ae7e5da4f,
        type_description_1,
        par_self,
        par_bus_name,
        par_callback
    );


    // Release cached frame.
    if ( frame_291e7d800913fa9945390f7ae7e5da4f == cache_frame_291e7d800913fa9945390f7ae7e5da4f )
    {
        Py_DECREF( frame_291e7d800913fa9945390f7ae7e5da4f );
    }
    cache_frame_291e7d800913fa9945390f7ae7e5da4f = NULL;

    assertFrameObject( frame_291e7d800913fa9945390f7ae7e5da4f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_15_watch_name_owner );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bus_name );
    Py_DECREF( par_bus_name );
    par_bus_name = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bus_name );
    Py_DECREF( par_bus_name );
    par_bus_name = NULL;

    CHECK_OBJECT( (PyObject *)par_callback );
    Py_DECREF( par_callback );
    par_callback = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_15_watch_name_owner );
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


static PyObject *impl_dbus$bus$$$function_16_name_has_owner( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_bus_name = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_f1acc37c6d2d546c4b1e931dbe1657d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_f1acc37c6d2d546c4b1e931dbe1657d5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f1acc37c6d2d546c4b1e931dbe1657d5, codeobj_f1acc37c6d2d546c4b1e931dbe1657d5, module_dbus$bus, sizeof(void *)+sizeof(void *) );
    frame_f1acc37c6d2d546c4b1e931dbe1657d5 = cache_frame_f1acc37c6d2d546c4b1e931dbe1657d5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f1acc37c6d2d546c4b1e931dbe1657d5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f1acc37c6d2d546c4b1e931dbe1657d5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_value_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_call_blocking );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_NAME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 383;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_PATH" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 383;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_IFACE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 384;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_3;
        tmp_args_element_name_4 = const_str_plain_NameHasOwner;
        tmp_args_element_name_5 = const_str_plain_s;
        CHECK_OBJECT( par_bus_name );
        tmp_tuple_element_1 = par_bus_name;
        tmp_args_element_name_6 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 0, tmp_tuple_element_1 );
        frame_f1acc37c6d2d546c4b1e931dbe1657d5->m_frame.f_lineno = 383;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_value_name_1 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_value_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_value_name_1 );
        Py_DECREF( tmp_value_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res != 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1acc37c6d2d546c4b1e931dbe1657d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1acc37c6d2d546c4b1e931dbe1657d5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f1acc37c6d2d546c4b1e931dbe1657d5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f1acc37c6d2d546c4b1e931dbe1657d5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f1acc37c6d2d546c4b1e931dbe1657d5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f1acc37c6d2d546c4b1e931dbe1657d5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f1acc37c6d2d546c4b1e931dbe1657d5,
        type_description_1,
        par_self,
        par_bus_name
    );


    // Release cached frame.
    if ( frame_f1acc37c6d2d546c4b1e931dbe1657d5 == cache_frame_f1acc37c6d2d546c4b1e931dbe1657d5 )
    {
        Py_DECREF( frame_f1acc37c6d2d546c4b1e931dbe1657d5 );
    }
    cache_frame_f1acc37c6d2d546c4b1e931dbe1657d5 = NULL;

    assertFrameObject( frame_f1acc37c6d2d546c4b1e931dbe1657d5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_16_name_has_owner );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bus_name );
    Py_DECREF( par_bus_name );
    par_bus_name = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bus_name );
    Py_DECREF( par_bus_name );
    par_bus_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_16_name_has_owner );
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


static PyObject *impl_dbus$bus$$$function_17_add_match_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_rule = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_6ec5925a5dfdbb8b609df569f6b4c746;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6ec5925a5dfdbb8b609df569f6b4c746 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6ec5925a5dfdbb8b609df569f6b4c746, codeobj_6ec5925a5dfdbb8b609df569f6b4c746, module_dbus$bus, sizeof(void *)+sizeof(void *) );
    frame_6ec5925a5dfdbb8b609df569f6b4c746 = cache_frame_6ec5925a5dfdbb8b609df569f6b4c746;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6ec5925a5dfdbb8b609df569f6b4c746 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6ec5925a5dfdbb8b609df569f6b4c746 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_call_blocking );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_NAME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 397;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_PATH" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 397;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_IFACE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 398;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_3;
        tmp_args_element_name_4 = const_str_plain_AddMatch;
        tmp_args_element_name_5 = const_str_plain_s;
        CHECK_OBJECT( par_rule );
        tmp_tuple_element_1 = par_rule;
        tmp_args_element_name_6 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 0, tmp_tuple_element_1 );
        frame_6ec5925a5dfdbb8b609df569f6b4c746->m_frame.f_lineno = 397;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ec5925a5dfdbb8b609df569f6b4c746 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6ec5925a5dfdbb8b609df569f6b4c746 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6ec5925a5dfdbb8b609df569f6b4c746, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6ec5925a5dfdbb8b609df569f6b4c746->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6ec5925a5dfdbb8b609df569f6b4c746, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6ec5925a5dfdbb8b609df569f6b4c746,
        type_description_1,
        par_self,
        par_rule
    );


    // Release cached frame.
    if ( frame_6ec5925a5dfdbb8b609df569f6b4c746 == cache_frame_6ec5925a5dfdbb8b609df569f6b4c746 )
    {
        Py_DECREF( frame_6ec5925a5dfdbb8b609df569f6b4c746 );
    }
    cache_frame_6ec5925a5dfdbb8b609df569f6b4c746 = NULL;

    assertFrameObject( frame_6ec5925a5dfdbb8b609df569f6b4c746 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_17_add_match_string );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_rule );
    Py_DECREF( par_rule );
    par_rule = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rule );
    Py_DECREF( par_rule );
    par_rule = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_17_add_match_string );
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


static PyObject *impl_dbus$bus$$$function_18_add_match_string_non_blocking( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_rule = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_ad997692e8a47854ec03e9537bc0b2c1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ad997692e8a47854ec03e9537bc0b2c1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ad997692e8a47854ec03e9537bc0b2c1, codeobj_ad997692e8a47854ec03e9537bc0b2c1, module_dbus$bus, sizeof(void *)+sizeof(void *) );
    frame_ad997692e8a47854ec03e9537bc0b2c1 = cache_frame_ad997692e8a47854ec03e9537bc0b2c1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ad997692e8a47854ec03e9537bc0b2c1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ad997692e8a47854ec03e9537bc0b2c1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_call_async );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 414;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_NAME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 414;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_PATH" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 414;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_IFACE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 415;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_3;
        tmp_args_element_name_4 = const_str_plain_AddMatch;
        tmp_args_element_name_5 = const_str_plain_s;
        CHECK_OBJECT( par_rule );
        tmp_tuple_element_1 = par_rule;
        tmp_args_element_name_6 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 0, tmp_tuple_element_1 );
        tmp_args_element_name_7 = Py_None;
        tmp_args_element_name_8 = Py_None;
        frame_ad997692e8a47854ec03e9537bc0b2c1->m_frame.f_lineno = 414;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS8( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 414;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad997692e8a47854ec03e9537bc0b2c1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ad997692e8a47854ec03e9537bc0b2c1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ad997692e8a47854ec03e9537bc0b2c1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ad997692e8a47854ec03e9537bc0b2c1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ad997692e8a47854ec03e9537bc0b2c1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ad997692e8a47854ec03e9537bc0b2c1,
        type_description_1,
        par_self,
        par_rule
    );


    // Release cached frame.
    if ( frame_ad997692e8a47854ec03e9537bc0b2c1 == cache_frame_ad997692e8a47854ec03e9537bc0b2c1 )
    {
        Py_DECREF( frame_ad997692e8a47854ec03e9537bc0b2c1 );
    }
    cache_frame_ad997692e8a47854ec03e9537bc0b2c1 = NULL;

    assertFrameObject( frame_ad997692e8a47854ec03e9537bc0b2c1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_18_add_match_string_non_blocking );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_rule );
    Py_DECREF( par_rule );
    par_rule = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rule );
    Py_DECREF( par_rule );
    par_rule = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_18_add_match_string_non_blocking );
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


static PyObject *impl_dbus$bus$$$function_19_remove_match_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_rule = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_a984b830cce6b59fb0ef27c24e3e8591;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a984b830cce6b59fb0ef27c24e3e8591 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a984b830cce6b59fb0ef27c24e3e8591, codeobj_a984b830cce6b59fb0ef27c24e3e8591, module_dbus$bus, sizeof(void *)+sizeof(void *) );
    frame_a984b830cce6b59fb0ef27c24e3e8591 = cache_frame_a984b830cce6b59fb0ef27c24e3e8591;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a984b830cce6b59fb0ef27c24e3e8591 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a984b830cce6b59fb0ef27c24e3e8591 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_call_blocking );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_NAME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 428;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_PATH" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 428;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_IFACE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 429;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_3;
        tmp_args_element_name_4 = const_str_plain_RemoveMatch;
        tmp_args_element_name_5 = const_str_plain_s;
        CHECK_OBJECT( par_rule );
        tmp_tuple_element_1 = par_rule;
        tmp_args_element_name_6 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 0, tmp_tuple_element_1 );
        frame_a984b830cce6b59fb0ef27c24e3e8591->m_frame.f_lineno = 428;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a984b830cce6b59fb0ef27c24e3e8591 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a984b830cce6b59fb0ef27c24e3e8591 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a984b830cce6b59fb0ef27c24e3e8591, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a984b830cce6b59fb0ef27c24e3e8591->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a984b830cce6b59fb0ef27c24e3e8591, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a984b830cce6b59fb0ef27c24e3e8591,
        type_description_1,
        par_self,
        par_rule
    );


    // Release cached frame.
    if ( frame_a984b830cce6b59fb0ef27c24e3e8591 == cache_frame_a984b830cce6b59fb0ef27c24e3e8591 )
    {
        Py_DECREF( frame_a984b830cce6b59fb0ef27c24e3e8591 );
    }
    cache_frame_a984b830cce6b59fb0ef27c24e3e8591 = NULL;

    assertFrameObject( frame_a984b830cce6b59fb0ef27c24e3e8591 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_19_remove_match_string );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_rule );
    Py_DECREF( par_rule );
    par_rule = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rule );
    Py_DECREF( par_rule );
    par_rule = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_19_remove_match_string );
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


static PyObject *impl_dbus$bus$$$function_20_remove_match_string_non_blocking( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_rule = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_a97813edf5a13ff8b3e17c3d325d8e14;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a97813edf5a13ff8b3e17c3d325d8e14 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a97813edf5a13ff8b3e17c3d325d8e14, codeobj_a97813edf5a13ff8b3e17c3d325d8e14, module_dbus$bus, sizeof(void *)+sizeof(void *) );
    frame_a97813edf5a13ff8b3e17c3d325d8e14 = cache_frame_a97813edf5a13ff8b3e17c3d325d8e14;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a97813edf5a13ff8b3e17c3d325d8e14 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a97813edf5a13ff8b3e17c3d325d8e14 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_call_async );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_NAME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 443;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_PATH" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 443;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_IFACE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 444;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = tmp_mvar_value_3;
        tmp_args_element_name_4 = const_str_plain_RemoveMatch;
        tmp_args_element_name_5 = const_str_plain_s;
        CHECK_OBJECT( par_rule );
        tmp_tuple_element_1 = par_rule;
        tmp_args_element_name_6 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_element_name_6, 0, tmp_tuple_element_1 );
        tmp_args_element_name_7 = Py_None;
        tmp_args_element_name_8 = Py_None;
        frame_a97813edf5a13ff8b3e17c3d325d8e14->m_frame.f_lineno = 443;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS8( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a97813edf5a13ff8b3e17c3d325d8e14 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a97813edf5a13ff8b3e17c3d325d8e14 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a97813edf5a13ff8b3e17c3d325d8e14, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a97813edf5a13ff8b3e17c3d325d8e14->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a97813edf5a13ff8b3e17c3d325d8e14, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a97813edf5a13ff8b3e17c3d325d8e14,
        type_description_1,
        par_self,
        par_rule
    );


    // Release cached frame.
    if ( frame_a97813edf5a13ff8b3e17c3d325d8e14 == cache_frame_a97813edf5a13ff8b3e17c3d325d8e14 )
    {
        Py_DECREF( frame_a97813edf5a13ff8b3e17c3d325d8e14 );
    }
    cache_frame_a97813edf5a13ff8b3e17c3d325d8e14 = NULL;

    assertFrameObject( frame_a97813edf5a13ff8b3e17c3d325d8e14 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_20_remove_match_string_non_blocking );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_rule );
    Py_DECREF( par_rule );
    par_rule = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rule );
    Py_DECREF( par_rule );
    par_rule = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dbus$bus$$$function_20_remove_match_string_non_blocking );
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



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_10_request_name( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_10_request_name,
        const_str_plain_request_name,
#if PYTHON_VERSION >= 300
        const_str_digest_497b0669b52c268bfacbc0d71adeb06c,
#endif
        codeobj_153904ecf683b950a051a6a63978eade,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        const_str_digest_37e935178460a5e492d12b33e7136d5c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_11_release_name(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_11_release_name,
        const_str_plain_release_name,
#if PYTHON_VERSION >= 300
        const_str_digest_1a273ce6f2332072cda60b52c6cda859,
#endif
        codeobj_5249b655d89ca6a682ac7fa083cbcfa2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        const_str_digest_e649d21656ccc0c36f795c37dcc87c21,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_12_list_names(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_12_list_names,
        const_str_plain_list_names,
#if PYTHON_VERSION >= 300
        const_str_digest_e999851d35cc852aaa40f88c2070809a,
#endif
        codeobj_34a1ab8806cabccb6766c7c0894b95cc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        const_str_digest_03a93cd0120bbecca0e37c304976f032,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_13_list_activatable_names(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_13_list_activatable_names,
        const_str_plain_list_activatable_names,
#if PYTHON_VERSION >= 300
        const_str_digest_dcb472437b7fdb4349503cabaef5bc39,
#endif
        codeobj_d15a977d5f7dbcd9269d9234a639a93d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        const_str_digest_81ce7bd71aaa481ef7a5b1ef2e87724c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_14_get_name_owner(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_14_get_name_owner,
        const_str_plain_get_name_owner,
#if PYTHON_VERSION >= 300
        const_str_digest_48651289a8a1cb058368125371b6f3c9,
#endif
        codeobj_8e4c8f82a29ed3508f6f44f4cc6705db,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        const_str_digest_db1c4b2d543c9c89b083d98e49ee4837,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_15_watch_name_owner(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_15_watch_name_owner,
        const_str_plain_watch_name_owner,
#if PYTHON_VERSION >= 300
        const_str_digest_d14a152df40e393cb38e12487c18148e,
#endif
        codeobj_291e7d800913fa9945390f7ae7e5da4f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        const_str_digest_ff934d6d17a1458a2c47bd54c4a331d9,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_16_name_has_owner(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_16_name_has_owner,
        const_str_plain_name_has_owner,
#if PYTHON_VERSION >= 300
        const_str_digest_baf79512df0a4f45e4c0ecaa946dcd8c,
#endif
        codeobj_f1acc37c6d2d546c4b1e931dbe1657d5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        const_str_digest_fb8bcfef324d7bb0dee4208007d02015,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_17_add_match_string(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_17_add_match_string,
        const_str_plain_add_match_string,
#if PYTHON_VERSION >= 300
        const_str_digest_780e3566fc9eeb41930016f5614c1fd9,
#endif
        codeobj_6ec5925a5dfdbb8b609df569f6b4c746,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        const_str_digest_19e4c08de4bba352d9181703cc6bbf99,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_18_add_match_string_non_blocking(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_18_add_match_string_non_blocking,
        const_str_plain_add_match_string_non_blocking,
#if PYTHON_VERSION >= 300
        const_str_digest_bc0c927eb8dfbd0065f1174fe2b7799c,
#endif
        codeobj_ad997692e8a47854ec03e9537bc0b2c1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        const_str_digest_b110aadd8d653e612d60e60b9f6ba37e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_19_remove_match_string(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_19_remove_match_string,
        const_str_plain_remove_match_string,
#if PYTHON_VERSION >= 300
        const_str_digest_3c8e9228e029a9d89bfd118d74660baa,
#endif
        codeobj_a984b830cce6b59fb0ef27c24e3e8591,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        const_str_digest_19e4c08de4bba352d9181703cc6bbf99,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_7fbbf9f76309eaea1ecaedf77c879df4,
#endif
        codeobj_a15e59a9dbfba61cf03e05dea6dfdadf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_1___init__$$$function_1_signal_cb(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_1___init__$$$function_1_signal_cb,
        const_str_plain_signal_cb,
#if PYTHON_VERSION >= 300
        const_str_digest_94a578c10cf536dd19c9a166e05e48a8,
#endif
        codeobj_571399dfac1e2ade99f320c0011eaf0c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_1___init__$$$function_2_error_cb(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_1___init__$$$function_2_error_cb,
        const_str_plain_error_cb,
#if PYTHON_VERSION >= 300
        const_str_digest_a27605767b7bcad573481468e1f88d55,
#endif
        codeobj_c91bd68a96e571796ac031197e3cf9f9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_20_remove_match_string_non_blocking(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_20_remove_match_string_non_blocking,
        const_str_plain_remove_match_string_non_blocking,
#if PYTHON_VERSION >= 300
        const_str_digest_8774b80b529ff7aff9b515b594832858,
#endif
        codeobj_a97813edf5a13ff8b3e17c3d325d8e14,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        const_str_digest_b110aadd8d653e612d60e60b9f6ba37e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_2_cancel(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_2_cancel,
        const_str_plain_cancel,
#if PYTHON_VERSION >= 300
        const_str_digest_6e5c793252676f18d73a202e7fb1ffc3,
#endif
        codeobj_10b952dac4e59646b1edcc694b7d7e17,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_3___new__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_3___new__,
        const_str_plain___new__,
#if PYTHON_VERSION >= 300
        const_str_digest_2340eabd138a29ae4b04fdf9cd8a7c98,
#endif
        codeobj_95a2ed71307d8478b6d11516b26739c8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_4_add_signal_receiver( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_4_add_signal_receiver,
        const_str_plain_add_signal_receiver,
#if PYTHON_VERSION >= 300
        const_str_digest_08d3bb4b963a6d930eb55b93e6d96bbd,
#endif
        codeobj_7a7c477cffd49376c23e5a20f9f66f45,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_4_add_signal_receiver$$$function_1_callback(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_4_add_signal_receiver$$$function_1_callback,
        const_str_plain_callback,
#if PYTHON_VERSION >= 300
        const_str_digest_fae6dafc089f11b5ccd025fb93f8a431,
#endif
        codeobj_ecc08a96c54c0f363e093c7bd79e276e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_5__clean_up_signal_match(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_5__clean_up_signal_match,
        const_str_plain__clean_up_signal_match,
#if PYTHON_VERSION >= 300
        const_str_digest_c19e8fc5a41c3051661c1a271a295eee,
#endif
        codeobj_3f23d48793f9052c0e034aa3c4469109,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_6_activate_name_owner(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_6_activate_name_owner,
        const_str_plain_activate_name_owner,
#if PYTHON_VERSION >= 300
        const_str_digest_1bb8ed157f9c5ff263399971e52e65b7,
#endif
        codeobj_123baf20dd9b1a57a74d3642b895c082,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_7_get_object( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_7_get_object,
        const_str_plain_get_object,
#if PYTHON_VERSION >= 300
        const_str_digest_7ca7e21cc68bc06fb612408144c66f65,
#endif
        codeobj_07c88823759acfe82dd0cfd5a1a17ae8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        const_str_digest_c92029ffd5594ecfcddf686fb99db9b3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_8_get_unix_user(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_8_get_unix_user,
        const_str_plain_get_unix_user,
#if PYTHON_VERSION >= 300
        const_str_digest_53c44955e793b025a6ddc912080679e1,
#endif
        codeobj_76d71404a975d8acb0e2b2c5cbf01eef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        const_str_digest_3d8978bab1bfc1fa9158c27db7d0ede5,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dbus$bus$$$function_9_start_service_by_name( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dbus$bus$$$function_9_start_service_by_name,
        const_str_plain_start_service_by_name,
#if PYTHON_VERSION >= 300
        const_str_digest_304405f1d5fc1e5b407095c25ba1cbd1,
#endif
        codeobj_61baa2d37f54d4ddb34ac6d4baf7bfc0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dbus$bus,
        const_str_digest_878d12eae2adc7d1b8ad875fe14751d8,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_dbus$bus =
{
    PyModuleDef_HEAD_INIT,
    "dbus.bus",
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

MOD_INIT_DECL( dbus$bus )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_dbus$bus );
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
    puts("dbus.bus: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dbus.bus: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dbus.bus: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdbus$bus" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_dbus$bus = Py_InitModule4(
        "dbus.bus",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_dbus$bus = PyModule_Create( &mdef_dbus$bus );
#endif

    moduledict_dbus$bus = MODULE_DICT( module_dbus$bus );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_dbus$bus,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_dbus$bus,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_dbus$bus,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_dbus$bus,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_dbus$bus );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_79ed2cac4e638f0656fd263c1190bdb0, module_dbus$bus );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_69b5a50f520416628dce5a6f84ea9846;
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
    PyObject *locals_dbus$bus_58 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_7b4f0ede8d98f135be577c5cb6a3e9f2_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_7b4f0ede8d98f135be577c5cb6a3e9f2_2 = NULL;
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
    PyObject *locals_dbus$bus_101 = NULL;
    struct Nuitka_FrameObject *frame_4fcd2203ff4a8da4680ca1730792a884_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_4fcd2203ff4a8da4680ca1730792a884_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_69b5a50f520416628dce5a6f84ea9846 = MAKE_MODULE_FRAME( codeobj_69b5a50f520416628dce5a6f84ea9846, module_dbus$bus );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_69b5a50f520416628dce5a6f84ea9846 );
    assert( Py_REFCNT( frame_69b5a50f520416628dce5a6f84ea9846 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_tuple_str_plain_BusConnection_tuple;
        UPDATE_STRING_DICT0( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_str_plain_reStructuredText;
        UPDATE_STRING_DICT0( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain___docformat__, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_logging;
        tmp_globals_name_1 = (PyObject *)moduledict_dbus$bus;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_69b5a50f520416628dce5a6f84ea9846->m_frame.f_lineno = 26;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_weakref;
        tmp_globals_name_2 = (PyObject *)moduledict_dbus$bus;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_69b5a50f520416628dce5a6f84ea9846->m_frame.f_lineno = 27;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_weakref, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain__dbus_bindings;
        tmp_globals_name_3 = (PyObject *)moduledict_dbus$bus;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_52244f24c0cfbfed77be38f5672185bb_tuple;
        tmp_level_name_3 = const_int_0;
        frame_69b5a50f520416628dce5a6f84ea9846->m_frame.f_lineno = 29;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_BUS_DAEMON_IFACE );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_BUS_DAEMON_NAME );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_BUS_DAEMON_PATH );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_BUS_SESSION );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_SESSION, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_5 = tmp_import_from_1__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_BUS_STARTER );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_STARTER, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_6 = tmp_import_from_1__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_BUS_SYSTEM );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_SYSTEM, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_7 = tmp_import_from_1__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_DBUS_START_REPLY_ALREADY_RUNNING );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_DBUS_START_REPLY_ALREADY_RUNNING, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_8 = tmp_import_from_1__module;
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_DBUS_START_REPLY_SUCCESS );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_DBUS_START_REPLY_SUCCESS, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_9 = tmp_import_from_1__module;
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_NAME_FLAG_ALLOW_REPLACEMENT );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_NAME_FLAG_ALLOW_REPLACEMENT, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_10 = tmp_import_from_1__module;
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_NAME_FLAG_DO_NOT_QUEUE );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_NAME_FLAG_DO_NOT_QUEUE, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_11 = tmp_import_from_1__module;
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_NAME_FLAG_REPLACE_EXISTING );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_NAME_FLAG_REPLACE_EXISTING, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_12 = tmp_import_from_1__module;
        tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_RELEASE_NAME_REPLY_NON_EXISTENT );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_RELEASE_NAME_REPLY_NON_EXISTENT, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_13 = tmp_import_from_1__module;
        tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_RELEASE_NAME_REPLY_NOT_OWNER );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_RELEASE_NAME_REPLY_NOT_OWNER, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_14 = tmp_import_from_1__module;
        tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_RELEASE_NAME_REPLY_RELEASED );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_RELEASE_NAME_REPLY_RELEASED, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_15 = tmp_import_from_1__module;
        tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_REQUEST_NAME_REPLY_ALREADY_OWNER );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_REQUEST_NAME_REPLY_ALREADY_OWNER, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_16 = tmp_import_from_1__module;
        tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_REQUEST_NAME_REPLY_EXISTS );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_REQUEST_NAME_REPLY_EXISTS, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_17 = tmp_import_from_1__module;
        tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_REQUEST_NAME_REPLY_IN_QUEUE );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_REQUEST_NAME_REPLY_IN_QUEUE, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_18 = tmp_import_from_1__module;
        tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_REQUEST_NAME_REPLY_PRIMARY_OWNER );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_REQUEST_NAME_REPLY_PRIMARY_OWNER, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_19 = tmp_import_from_1__module;
        tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_validate_bus_name );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_validate_bus_name, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_20 = tmp_import_from_1__module;
        tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_validate_error_name );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_validate_error_name, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_21 = tmp_import_from_1__module;
        tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_validate_interface_name );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_validate_interface_name, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_22 = tmp_import_from_1__module;
        tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_validate_member_name );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_validate_member_name, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_23 = tmp_import_from_1__module;
        tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_validate_object_path );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_validate_object_path, tmp_assign_source_31 );
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
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_0b385b2a67f6700b8faf677cdd479207;
        tmp_globals_name_4 = (PyObject *)moduledict_dbus$bus;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_Connection_tuple;
        tmp_level_name_4 = const_int_0;
        frame_69b5a50f520416628dce5a6f84ea9846->m_frame.f_lineno = 39;
        tmp_import_name_from_24 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_Connection );
        Py_DECREF( tmp_import_name_from_24 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_Connection, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_e48610c30fffad33f2054d9dca0792b3;
        tmp_globals_name_5 = (PyObject *)moduledict_dbus$bus;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_DBusException_tuple;
        tmp_level_name_5 = const_int_0;
        frame_69b5a50f520416628dce5a6f84ea9846->m_frame.f_lineno = 40;
        tmp_import_name_from_25 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_DBusException );
        Py_DECREF( tmp_import_name_from_25 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_DBusException, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_26;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_digest_b45a3c6f685a3991de51197626bab5ca;
        tmp_globals_name_6 = (PyObject *)moduledict_dbus$bus;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_HANDLER_RESULT_NOT_YET_HANDLED_tuple;
        tmp_level_name_6 = const_int_0;
        frame_69b5a50f520416628dce5a6f84ea9846->m_frame.f_lineno = 41;
        tmp_import_name_from_26 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_import_name_from_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED );
        Py_DECREF( tmp_import_name_from_26 );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_27;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_digest_3aa5bee4de9b0149ae46ffed8a38c6b4;
        tmp_globals_name_7 = (PyObject *)moduledict_dbus$bus;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_is_py2_tuple;
        tmp_level_name_7 = const_int_0;
        frame_69b5a50f520416628dce5a6f84ea9846->m_frame.f_lineno = 42;
        tmp_import_name_from_27 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_is_py2 );
        Py_DECREF( tmp_import_name_from_27 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_is_py2, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_mvar_value_5;
        tmp_left_name_1 = const_str_digest_8cfd57f5bdb2902606031c03398cad27;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_NAME );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_NAME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_3;
        tmp_right_name_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_IFACE );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_right_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_IFACE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_4;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_DAEMON_PATH );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_right_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_DAEMON_PATH" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 49;

            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = tmp_mvar_value_5;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
        tmp_assign_source_36 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain__NAME_OWNER_CHANGE_MATCH, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = const_str_digest_a93bae242fb22951c05525cc85ed89f6;
        UPDATE_STRING_DICT0( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain__NAME_HAS_NO_OWNER, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 55;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_6;
        frame_69b5a50f520416628dce5a6f84ea9846->m_frame.f_lineno = 55;
        tmp_assign_source_38 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_digest_79ed2cac4e638f0656fd263c1190bdb0_tuple, 0 ) );

        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain__logger, tmp_assign_source_38 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = const_tuple_type_object_tuple;
        Py_INCREF( tmp_dircall_arg1_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_39 = impl___internal__$$$function_2__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__bases == NULL );
        tmp_class_creation_1__bases = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = PyDict_New();
        assert( tmp_class_creation_1__class_decl_dict == NULL );
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
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


            exception_lineno = 58;

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


            exception_lineno = 58;

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


            exception_lineno = 58;

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


            exception_lineno = 58;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
        Py_DECREF( tmp_type_arg_1 );
        if ( tmp_metaclass_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

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
        tmp_assign_source_41 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
        Py_DECREF( tmp_metaclass_name_1 );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_41;
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


            exception_lineno = 58;

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


            exception_lineno = 58;

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
            PyObject *tmp_assign_source_42;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_1;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_source_name_2 = tmp_class_creation_1__metaclass;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto try_except_handler_2;
            }
            tmp_tuple_element_2 = const_str_plain_NameOwnerWatch;
            tmp_args_name_1 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_2 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_69b5a50f520416628dce5a6f84ea9846->m_frame.f_lineno = 58;
            tmp_assign_source_42 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            if ( tmp_assign_source_42 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_42;
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


                exception_lineno = 58;

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
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_getattr_target_1;
                PyObject *tmp_getattr_attr_1;
                PyObject *tmp_getattr_default_1;
                PyObject *tmp_source_name_4;
                PyObject *tmp_type_arg_2;
                tmp_raise_type_1 = PyExc_TypeError;
                tmp_left_name_2 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_1__metaclass );
                tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
                tmp_getattr_attr_1 = const_str_plain___name__;
                tmp_getattr_default_1 = const_str_angle_metaclass;
                tmp_tuple_element_3 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 58;

                    goto try_except_handler_2;
                }
                tmp_right_name_2 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_3 );
                CHECK_OBJECT( tmp_class_creation_1__prepared );
                tmp_type_arg_2 = tmp_class_creation_1__prepared;
                tmp_source_name_4 = BUILTIN_TYPE1( tmp_type_arg_2 );
                assert( !(tmp_source_name_4 == NULL) );
                tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_4 );
                if ( tmp_tuple_element_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_2 );

                    exception_lineno = 58;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_3 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 58;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 58;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_43;
            tmp_assign_source_43 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_43;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_44;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_dbus$bus_58 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_79ed2cac4e638f0656fd263c1190bdb0;
        tmp_res = PyObject_SetItem( locals_dbus$bus_58, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_NameOwnerWatch;
        tmp_res = PyObject_SetItem( locals_dbus$bus_58, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_7b4f0ede8d98f135be577c5cb6a3e9f2_2, codeobj_7b4f0ede8d98f135be577c5cb6a3e9f2, module_dbus$bus, sizeof(void *) );
        frame_7b4f0ede8d98f135be577c5cb6a3e9f2_2 = cache_frame_7b4f0ede8d98f135be577c5cb6a3e9f2_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_7b4f0ede8d98f135be577c5cb6a3e9f2_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_7b4f0ede8d98f135be577c5cb6a3e9f2_2 ) == 2 ); // Frame stack

        // Framed code:
        tmp_dictset_value = const_tuple_str_plain__match_str_plain__pending_call_tuple;
        tmp_res = PyObject_SetItem( locals_dbus$bus_58, const_str_plain___slots__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_1___init__(  );



        tmp_res = PyObject_SetItem( locals_dbus$bus_58, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_2_cancel(  );



        tmp_res = PyObject_SetItem( locals_dbus$bus_58, const_str_plain_cancel, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_7b4f0ede8d98f135be577c5cb6a3e9f2_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_7b4f0ede8d98f135be577c5cb6a3e9f2_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_7b4f0ede8d98f135be577c5cb6a3e9f2_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_7b4f0ede8d98f135be577c5cb6a3e9f2_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_7b4f0ede8d98f135be577c5cb6a3e9f2_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_7b4f0ede8d98f135be577c5cb6a3e9f2_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_7b4f0ede8d98f135be577c5cb6a3e9f2_2 == cache_frame_7b4f0ede8d98f135be577c5cb6a3e9f2_2 )
        {
            Py_DECREF( frame_7b4f0ede8d98f135be577c5cb6a3e9f2_2 );
        }
        cache_frame_7b4f0ede8d98f135be577c5cb6a3e9f2_2 = NULL;

        assertFrameObject( frame_7b4f0ede8d98f135be577c5cb6a3e9f2_2 );

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


                exception_lineno = 58;

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
            tmp_res = PyObject_SetItem( locals_dbus$bus_58, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto try_except_handler_4;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = const_str_plain_NameOwnerWatch;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__bases );
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = locals_dbus$bus_58;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_69b5a50f520416628dce5a6f84ea9846->m_frame.f_lineno = 58;
            tmp_assign_source_45 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_45 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 58;

                goto try_except_handler_4;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_45;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_44 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_44 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( dbus$bus );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_dbus$bus_58 );
        locals_dbus$bus_58 = NULL;
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

        Py_DECREF( locals_dbus$bus_58 );
        locals_dbus$bus_58 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( dbus$bus );
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
        NUITKA_CANNOT_GET_HERE( dbus$bus );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 58;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_NameOwnerWatch, tmp_assign_source_44 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_Connection );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Connection );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Connection" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 101;

            goto try_except_handler_5;
        }

        tmp_tuple_element_5 = tmp_mvar_value_7;
        tmp_assign_source_46 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_assign_source_46, 0, tmp_tuple_element_5 );
        assert( tmp_class_creation_2__bases_orig == NULL );
        tmp_class_creation_2__bases_orig = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT( tmp_class_creation_2__bases_orig );
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF( tmp_dircall_arg1_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_47 = impl___internal__$$$function_2__mro_entries_conversion( dir_call_args );
        }
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto try_except_handler_5;
        }
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = PyDict_New();
        assert( tmp_class_creation_2__class_decl_dict == NULL );
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto try_except_handler_5;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_3;
        }
        else
        {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = const_str_plain_metaclass;
        tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto try_except_handler_5;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_class_creation_2__bases );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto try_except_handler_5;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_4;
        }
        else
        {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_subscribed_name_2 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = const_int_0;
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
        if ( tmp_type_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto try_except_handler_5;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_3 );
        Py_DECREF( tmp_type_arg_3 );
        if ( tmp_metaclass_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto try_except_handler_5;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_metaclass_name_2 );
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_49 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
        Py_DECREF( tmp_metaclass_name_2 );
        if ( tmp_assign_source_49 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto try_except_handler_5;
        }
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_49;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_name_6;
        tmp_key_name_6 = const_str_plain_metaclass;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto try_except_handler_5;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
        tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
        tmp_dictdel_key = const_str_plain_metaclass;
        tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto try_except_handler_5;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_source_name_5 = tmp_class_creation_2__metaclass;
        tmp_res = PyObject_HasAttr( tmp_source_name_5, const_str_plain___prepare__ );
        tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_50;
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_6;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_3;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_source_name_6 = tmp_class_creation_2__metaclass;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___prepare__ );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;

                goto try_except_handler_5;
            }
            tmp_tuple_element_6 = const_str_plain_BusConnection;
            tmp_args_name_3 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_6 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;
            frame_69b5a50f520416628dce5a6f84ea9846->m_frame.f_lineno = 101;
            tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_3 );
            if ( tmp_assign_source_50 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;

                goto try_except_handler_5;
            }
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_50;
        }
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_source_name_7 = tmp_class_creation_2__prepared;
            tmp_res = PyObject_HasAttr( tmp_source_name_7, const_str_plain___getitem__ );
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;

                goto try_except_handler_5;
            }
            tmp_condition_result_11 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_7;
            }
            else
            {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_raise_value_2;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_tuple_element_7;
                PyObject *tmp_getattr_target_2;
                PyObject *tmp_getattr_attr_2;
                PyObject *tmp_getattr_default_2;
                PyObject *tmp_source_name_8;
                PyObject *tmp_type_arg_4;
                tmp_raise_type_2 = PyExc_TypeError;
                tmp_left_name_3 = const_str_digest_75fd71b1edada749c2ef7ac810062295;
                CHECK_OBJECT( tmp_class_creation_2__metaclass );
                tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
                tmp_getattr_attr_2 = const_str_plain___name__;
                tmp_getattr_default_2 = const_str_angle_metaclass;
                tmp_tuple_element_7 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 101;

                    goto try_except_handler_5;
                }
                tmp_right_name_3 = PyTuple_New( 2 );
                PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_7 );
                CHECK_OBJECT( tmp_class_creation_2__prepared );
                tmp_type_arg_4 = tmp_class_creation_2__prepared;
                tmp_source_name_8 = BUILTIN_TYPE1( tmp_type_arg_4 );
                assert( !(tmp_source_name_8 == NULL) );
                tmp_tuple_element_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___name__ );
                Py_DECREF( tmp_source_name_8 );
                if ( tmp_tuple_element_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_right_name_3 );

                    exception_lineno = 101;

                    goto try_except_handler_5;
                }
                PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_7 );
                tmp_raise_value_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
                Py_DECREF( tmp_right_name_3 );
                if ( tmp_raise_value_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 101;

                    goto try_except_handler_5;
                }
                exception_type = tmp_raise_type_2;
                Py_INCREF( tmp_raise_type_2 );
                exception_value = tmp_raise_value_2;
                exception_lineno = 101;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_5;
            }
            branch_no_7:;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_51;
            tmp_assign_source_51 = PyDict_New();
            assert( tmp_class_creation_2__prepared == NULL );
            tmp_class_creation_2__prepared = tmp_assign_source_51;
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assign_source_52;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT( tmp_class_creation_2__prepared );
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_dbus$bus_101 = tmp_set_locals_2;
            Py_INCREF( tmp_set_locals_2 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_79ed2cac4e638f0656fd263c1190bdb0;
        tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_digest_8c832cf4966598ec0b379aa737beb80d;
        tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain___doc__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto try_except_handler_7;
        }
        tmp_dictset_value = const_str_plain_BusConnection;
        tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto try_except_handler_7;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_4fcd2203ff4a8da4680ca1730792a884_3, codeobj_4fcd2203ff4a8da4680ca1730792a884, module_dbus$bus, sizeof(void *) );
        frame_4fcd2203ff4a8da4680ca1730792a884_3 = cache_frame_4fcd2203ff4a8da4680ca1730792a884_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_4fcd2203ff4a8da4680ca1730792a884_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_4fcd2203ff4a8da4680ca1730792a884_3 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_mvar_value_8;
            tmp_dictset_value = PyObject_GetItem( locals_dbus$bus_101, const_str_plain_BUS_SESSION );

            if ( tmp_dictset_value == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_SESSION );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_SESSION );
                }

                if ( tmp_mvar_value_8 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_SESSION" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 108;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_dictset_value = tmp_mvar_value_8;
                Py_INCREF( tmp_dictset_value );
                }
            }

            tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_TYPE_SESSION, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_mvar_value_9;
            tmp_dictset_value = PyObject_GetItem( locals_dbus$bus_101, const_str_plain_BUS_SYSTEM );

            if ( tmp_dictset_value == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_SYSTEM );

                if (unlikely( tmp_mvar_value_9 == NULL ))
                {
                    tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_SYSTEM );
                }

                if ( tmp_mvar_value_9 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_SYSTEM" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 111;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_dictset_value = tmp_mvar_value_9;
                Py_INCREF( tmp_dictset_value );
                }
            }

            tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_TYPE_SYSTEM, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 111;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_mvar_value_10;
            tmp_dictset_value = PyObject_GetItem( locals_dbus$bus_101, const_str_plain_BUS_STARTER );

            if ( tmp_dictset_value == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BUS_STARTER );

                if (unlikely( tmp_mvar_value_10 == NULL ))
                {
                    tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BUS_STARTER );
                }

                if ( tmp_mvar_value_10 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BUS_STARTER" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 114;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_dictset_value = tmp_mvar_value_10;
                Py_INCREF( tmp_dictset_value );
                }
            }

            tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_TYPE_STARTER, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 114;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_mvar_value_11;
            tmp_dictset_value = PyObject_GetItem( locals_dbus$bus_101, const_str_plain_DBUS_START_REPLY_SUCCESS );

            if ( tmp_dictset_value == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_DBUS_START_REPLY_SUCCESS );

                if (unlikely( tmp_mvar_value_11 == NULL ))
                {
                    tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DBUS_START_REPLY_SUCCESS );
                }

                if ( tmp_mvar_value_11 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DBUS_START_REPLY_SUCCESS" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 118;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_dictset_value = tmp_mvar_value_11;
                Py_INCREF( tmp_dictset_value );
                }
            }

            tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_START_REPLY_SUCCESS, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 118;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_mvar_value_12;
            tmp_dictset_value = PyObject_GetItem( locals_dbus$bus_101, const_str_plain_DBUS_START_REPLY_ALREADY_RUNNING );

            if ( tmp_dictset_value == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_DBUS_START_REPLY_ALREADY_RUNNING );

                if (unlikely( tmp_mvar_value_12 == NULL ))
                {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DBUS_START_REPLY_ALREADY_RUNNING );
                }

                if ( tmp_mvar_value_12 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DBUS_START_REPLY_ALREADY_RUNNING" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 119;
                    type_description_2 = "o";
                    goto frame_exception_exit_3;
                }

                tmp_dictset_value = tmp_mvar_value_12;
                Py_INCREF( tmp_dictset_value );
                }
            }

            tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_START_REPLY_ALREADY_RUNNING, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_8;
            tmp_tuple_element_8 = PyObject_GetItem( locals_dbus$bus_101, const_str_plain_TYPE_SESSION );

            if ( tmp_tuple_element_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TYPE_SESSION" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }

            if ( tmp_tuple_element_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_defaults_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_8 );
            tmp_tuple_element_8 = Py_None;
            Py_INCREF( tmp_tuple_element_8 );
            PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_8 );
            tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_3___new__( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain___new__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_none_none_none_none_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_4_add_signal_receiver( tmp_defaults_2 );



            tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_add_signal_receiver, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 132;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_5__clean_up_signal_match(  );



        tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain__clean_up_signal_match, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_6_activate_name_owner(  );



        tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_activate_name_owner, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 171;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_true_false_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_7_get_object( tmp_defaults_3 );



            tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_get_object, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 186;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_8_get_unix_user(  );



        tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_get_unix_user, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 243;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_int_0_tuple;
            Py_INCREF( tmp_defaults_4 );
            tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_9_start_service_by_name( tmp_defaults_4 );



            tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_start_service_by_name, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_int_0_tuple;
            Py_INCREF( tmp_defaults_5 );
            tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_10_request_name( tmp_defaults_5 );



            tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_request_name, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 282;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_11_release_name(  );



        tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_release_name, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 305;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_12_list_names(  );



        tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_list_names, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 322;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_13_list_activatable_names(  );



        tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_list_activatable_names, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 335;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_14_get_name_owner(  );



        tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_get_name_owner, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 348;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_15_watch_name_owner(  );



        tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_watch_name_owner, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 363;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_16_name_has_owner(  );



        tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_name_has_owner, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 375;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_17_add_match_string(  );



        tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_add_match_string, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 387;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_18_add_match_string_non_blocking(  );



        tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_add_match_string_non_blocking, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 402;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_19_remove_match_string(  );



        tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_remove_match_string, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        tmp_dictset_value = MAKE_FUNCTION_dbus$bus$$$function_20_remove_match_string_non_blocking(  );



        tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain_remove_match_string_non_blocking, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 431;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4fcd2203ff4a8da4680ca1730792a884_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_4fcd2203ff4a8da4680ca1730792a884_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_4fcd2203ff4a8da4680ca1730792a884_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_4fcd2203ff4a8da4680ca1730792a884_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_4fcd2203ff4a8da4680ca1730792a884_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_4fcd2203ff4a8da4680ca1730792a884_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame.
        if ( frame_4fcd2203ff4a8da4680ca1730792a884_3 == cache_frame_4fcd2203ff4a8da4680ca1730792a884_3 )
        {
            Py_DECREF( frame_4fcd2203ff4a8da4680ca1730792a884_3 );
        }
        cache_frame_4fcd2203ff4a8da4680ca1730792a884_3 = NULL;

        assertFrameObject( frame_4fcd2203ff4a8da4680ca1730792a884_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT( tmp_class_creation_2__bases_orig );
            tmp_compexpr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;

                goto try_except_handler_7;
            }
            tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_8;
            }
            else
            {
                goto branch_no_8;
            }
            branch_yes_8:;
            CHECK_OBJECT( tmp_class_creation_2__bases_orig );
            tmp_dictset_value = tmp_class_creation_2__bases_orig;
            tmp_res = PyObject_SetItem( locals_dbus$bus_101, const_str_plain___orig_bases__, tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;

                goto try_except_handler_7;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kw_name_4;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_9 = const_str_plain_BusConnection;
            tmp_args_name_4 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_tuple_element_9 = tmp_class_creation_2__bases;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_9 );
            tmp_tuple_element_9 = locals_dbus$bus_101;
            Py_INCREF( tmp_tuple_element_9 );
            PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_9 );
            CHECK_OBJECT( tmp_class_creation_2__class_decl_dict );
            tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_69b5a50f520416628dce5a6f84ea9846->m_frame.f_lineno = 101;
            tmp_assign_source_53 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_4, tmp_kw_name_4 );
            Py_DECREF( tmp_args_name_4 );
            if ( tmp_assign_source_53 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 101;

                goto try_except_handler_7;
            }
            assert( outline_1_var___class__ == NULL );
            outline_1_var___class__ = tmp_assign_source_53;
        }
        CHECK_OBJECT( outline_1_var___class__ );
        tmp_assign_source_52 = outline_1_var___class__;
        Py_INCREF( tmp_assign_source_52 );
        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( dbus$bus );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF( locals_dbus$bus_101 );
        locals_dbus$bus_101 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_dbus$bus_101 );
        locals_dbus$bus_101 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( dbus$bus );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
        Py_DECREF( outline_1_var___class__ );
        outline_1_var___class__ = NULL;

        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( dbus$bus );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 101;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain_BusConnection, tmp_assign_source_52 );
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases_orig );
    tmp_class_creation_2__bases_orig = NULL;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_69b5a50f520416628dce5a6f84ea9846 );
#endif
    popFrameStack();

    assertFrameObject( frame_69b5a50f520416628dce5a6f84ea9846 );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_69b5a50f520416628dce5a6f84ea9846 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_69b5a50f520416628dce5a6f84ea9846, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_69b5a50f520416628dce5a6f84ea9846->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_69b5a50f520416628dce5a6f84ea9846, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases_orig );
    Py_DECREF( tmp_class_creation_2__bases_orig );
    tmp_class_creation_2__bases_orig = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_dbus$bus, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_dbus$bus );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
