
#include "nuitka/prelude.h"
#include "structseq.h"

// Sentinel PyObject to be used for all our call iterator endings. It will
// become a PyCObject pointing to NULL. It's address is unique, and that's
// enough for us to use it as sentinel value.
PyObject *_sentinel_value = NULL;

PyObject *Nuitka_dunder_compiled_value = NULL;

PyObject *const_int_0;
PyObject *const_str_dot;
PyObject *const_int_neg_1;
PyObject *const_int_pos_1;
PyObject *const_int_pos_2;
PyObject *const_int_pos_3;
PyObject *const_int_pos_4;
PyObject *const_int_pos_5;
PyObject *const_int_pos_8;
PyObject *const_str_empty;
PyObject *const_dict_empty;
PyObject *const_int_pos_10;
PyObject *const_int_pos_13;
PyObject *const_int_pos_15;
PyObject *const_str_chr_59;
PyObject *const_str_chr_60;
PyObject *const_str_chr_62;
PyObject *const_bytes_empty;
PyObject *const_str_plain_0;
PyObject *const_str_plain_1;
PyObject *const_str_plain_Y;
PyObject *const_str_plain_a;
PyObject *const_str_plain_r;
PyObject *const_tuple_empty;
PyObject *const_str_plain_eq;
PyObject *const_str_plain_ge;
PyObject *const_str_plain_gt;
PyObject *const_str_plain_le;
PyObject *const_str_plain_lt;
PyObject *const_str_plain_ne;
PyObject *const_str_plain_os;
PyObject *const_str_plain_rb;
PyObject *const_str_plain_re;
PyObject *const_str_plain_104;
PyObject *const_str_plain_add;
PyObject *const_str_plain_all;
PyObject *const_str_plain_cls;
PyObject *const_str_plain_csv;
PyObject *const_str_plain_doc;
PyObject *const_str_plain_end;
PyObject *const_str_plain_err;
PyObject *const_str_plain_get;
PyObject *const_str_plain_int;
PyObject *const_str_plain_key;
PyObject *const_str_plain_len;
PyObject *const_str_plain_pop;
PyObject *const_str_plain_row;
PyObject *const_str_plain_sum;
PyObject *const_str_plain_sys;
PyObject *const_str_plain_zip;
PyObject *const_str_plain_Data;
PyObject *const_str_plain_None;
PyObject *const_str_plain__add;
PyObject *const_str_plain__key;
PyObject *const_str_plain_copy;
PyObject *const_str_plain_dict;
PyObject *const_str_plain_ebay;
PyObject *const_str_plain_exit;
PyObject *const_str_plain_file;
PyObject *const_str_plain_item;
PyObject *const_str_plain_iter;
PyObject *const_str_plain_join;
PyObject *const_str_plain_keys;
PyObject *const_str_plain_name;
PyObject *const_str_plain_open;
PyObject *const_str_plain_path;
PyObject *const_str_plain_read;
PyObject *const_str_plain_repr;
PyObject *const_str_plain_self;
PyObject *const_str_plain_send;
PyObject *const_str_plain_site;
PyObject *const_str_plain_type;
PyObject *const_str_plain_False;
PyObject *const_str_plain__list;
PyObject *const_str_plain_bytes;
PyObject *const_str_plain_chain;
PyObject *const_str_plain_child;
PyObject *const_str_plain_clear;
PyObject *const_str_plain_close;
PyObject *const_str_plain_count;
PyObject *const_str_plain_index;
PyObject *const_str_plain_level;
PyObject *const_str_plain_other;
PyObject *const_str_plain_print;
PyObject *const_str_plain_range;
PyObject *const_str_plain_slice;
PyObject *const_str_plain_stock;
PyObject *const_str_plain_throw;
PyObject *const_str_plain_tuple;
PyObject *const_str_plain_types;
PyObject *const_str_plain_upper;
PyObject *const_str_plain_value;
PyObject *const_int_pos_50331648;
PyObject *const_str_plain_ItemID;
PyObject *const_str_plain_MASTER;
PyObject *const_str_plain___eq__;
PyObject *const_str_plain___ge__;
PyObject *const_str_plain___gt__;
PyObject *const_str_plain___le__;
PyObject *const_str_plain___lt__;
PyObject *const_str_plain___ne__;
PyObject *const_str_plain__check;
PyObject *const_str_plain__reset;
PyObject *const_str_plain_amazon;
PyObject *const_str_plain_bisect;
PyObject *const_str_plain_dedent;
PyObject *const_str_plain_export;
PyObject *const_str_plain_format;
PyObject *const_str_plain_irange;
PyObject *const_str_plain_isfile;
PyObject *const_str_plain_islice;
PyObject *const_str_plain_locals;
PyObject *const_str_plain_object;
PyObject *const_str_plain_origin;
PyObject *const_str_plain_parent;
PyObject *const_str_plain_reader;
PyObject *const_str_plain_remove;
PyObject *const_str_plain_symbol;
PyObject *const_str_plain_update;
PyObject *const_str_plain_values;
PyObject *const_tuple_none_tuple;
PyObject *const_str_angle_genexpr;
PyObject *const_str_plain_Barcode;
PyObject *const_str_plain___all__;
PyObject *const_str_plain___cmp__;
PyObject *const_str_plain___doc__;
PyObject *const_str_plain___len__;
PyObject *const_str_plain___new__;
PyObject *const_str_plain__update;
PyObject *const_str_plain_columns;
PyObject *const_str_plain_compile;
PyObject *const_str_plain_discard;
PyObject *const_str_plain_doc_str;
PyObject *const_str_plain_environ;
PyObject *const_str_plain_globals;
PyObject *const_str_plain_inspect;
PyObject *const_str_plain_message;
PyObject *const_str_plain_Position;
PyObject *const_str_plain_Sequence;
PyObject *const_str_plain___copy__;
PyObject *const_str_plain___dict__;
PyObject *const_str_plain___exit__;
PyObject *const_str_plain___file__;
PyObject *const_str_plain___init__;
PyObject *const_str_plain___iter__;
PyObject *const_str_plain___main__;
PyObject *const_str_plain___name__;
PyObject *const_str_plain___path__;
PyObject *const_str_plain___repr__;
PyObject *const_str_plain___spec__;
PyObject *const_str_plain_comparer;
PyObject *const_str_plain_flatfile;
PyObject *const_str_plain_fromlist;
PyObject *const_str_plain_item_sku;
PyObject *const_str_plain_iterable;
PyObject *const_str_plain_operator;
PyObject *const_str_plain_packages;
PyObject *const_str_plain_property;
PyObject *const_str_plain_reversed;
PyObject *const_str_plain_textwrap;
PyObject *const_str_plain_writeCSV;
PyObject *const_str_plain_writerow;
PyObject *const_str_angle_metaclass;
PyObject *const_str_plain_EANUpload;
PyObject *const_str_plain_SortedSet;
PyObject *const_str_plain___class__;
PyObject *const_str_plain___debug__;
PyObject *const_str_plain___enter__;
PyObject *const_str_plain_bytearray;
PyObject *const_str_plain_delimiter;
PyObject *const_str_plain_item_name;
PyObject *const_str_plain_itertools;
PyObject *const_str_plain_metaclass;
PyObject *const_str_plain_setActive;
PyObject *const_str_plain_sortedset;
PyObject *const_str_plain_stocklist;
PyObject *const_str_plain_type_name;
PyObject *const_str_plain_DictReader;
PyObject *const_str_plain_DictWriter;
PyObject *const_str_plain_SortedDict;
PyObject *const_str_plain_SortedList;
PyObject *const_str_plain___cached__;
PyObject *const_str_plain___import__;
PyObject *const_str_plain___loader__;
PyObject *const_str_plain___make_cmp;
PyObject *const_str_plain___module__;
PyObject *const_str_plain___reduce__;
PyObject *const_str_plain_amazon_sku;
PyObject *const_str_plain_article_id;
PyObject *const_str_plain_asinUpload;
PyObject *const_str_plain_bisect_key;
PyObject *const_str_plain_dataobject;
PyObject *const_str_plain_fieldnames;
PyObject *const_str_plain_hexversion;
PyObject *const_str_plain_irange_key;
PyObject *const_str_plain_itemUpload;
PyObject *const_str_plain_parent_sku;
PyObject *const_str_plain_sortedlist;
PyObject *const_str_plain_VariationID;
PyObject *const_str_plain___delitem__;
PyObject *const_str_plain___getitem__;
PyObject *const_str_plain___package__;
PyObject *const_str_plain___prepare__;
PyObject *const_str_plain___setitem__;
PyObject *const_str_plain_bisect_left;
PyObject *const_str_plain_classmethod;
PyObject *const_str_plain_collections;
PyObject *const_str_plain_full_number;
PyObject *const_str_plain_imageUpload;
PyObject *const_str_plain_output_path;
PyObject *const_str_plain_priceUpload;
PyObject *const_str_plain_stockUpload;
PyObject *const_str_plain_writeheader;
PyObject *const_tuple_int_neg_1_tuple;
PyObject *const_tuple_none_none_tuple;
PyObject *const_str_plain___builtins__;
PyObject *const_str_plain___compiled__;
PyObject *const_str_plain___contains__;
PyObject *const_str_plain___internal__;
PyObject *const_str_plain___qualname__;
PyObject *const_str_plain___reversed__;
PyObject *const_str_plain_bisect_right;
PyObject *const_str_plain_column_names;
PyObject *const_str_plain_has_location;
PyObject *const_str_plain_parent_child;
PyObject *const_str_plain_staticmethod;
PyObject *const_str_plain_SortedKeyList;
PyObject *const_str_plain_VariationName;
PyObject *const_str_plain___metaclass__;
PyObject *const_str_plain__initializing;
PyObject *const_str_plain_featureUpload;
PyObject *const_str_plain_intern_number;
PyObject *const_str_plain_package_width;
PyObject *const_tuple_int_0_int_0_tuple;
PyObject *const_str_plain_SortedKeysView;
PyObject *const_str_plain___orig_bases__;
PyObject *const_str_plain_package_height;
PyObject *const_str_plain_package_length;
PyObject *const_str_plain_package_weight;
PyObject *const_str_plain_recursive_repr;
PyObject *const_str_plain_standard_price;
PyObject *const_str_plain_SortedItemsView;
PyObject *const_str_plain_VariationNumber;
PyObject *const_str_plain___mro_entries__;
PyObject *const_str_plain_amazonSkuUpload;
PyObject *const_str_plain_bisect_key_left;
PyObject *const_str_plain_variationUpload;
PyObject *const_str_plain_SortedValuesView;
PyObject *const_str_plain_amazonDataUpload;
PyObject *const_str_plain_bisect_key_right;
PyObject *const_str_plain_marketConnection;
PyObject *const_str_plain_sortedcontainers;
PyObject *const_str_plain_variation_upload;
PyObject *const_tuple_none_none_none_tuple;
PyObject *const_tuple_str_plain_self_tuple;
PyObject *const_str_plain_SortedListWithKey;
PyObject *const_str_plain___class_getitem__;
PyObject *const_str_plain_feed_product_type;
PyObject *const_str_plain_itemPropertyUpload;
PyObject *const_tuple_str_plain_dedent_tuple;
PyObject *const_tuple_str_plain_isfile_tuple;
PyObject *const_str_plain_external_product_id;
PyObject *const_tuple_str_plain_SortedSet_tuple;
PyObject *const_tuple_str_plain___class___tuple;
PyObject *const_tuple_str_plain_SortedDict_tuple;
PyObject *const_str_plain_submodule_search_locations;
PyObject *const_dict_a2fe7522a8a3fde103f0109fa97f1383;
PyObject *const_str_plain_PrimaryVariationCustomNumber;
PyObject *const_tuple_str_plain_variation_upload_tuple;
PyObject *const_tuple_str_plain_self_str_plain_index_tuple;
PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
PyObject *const_str_digest_13243295198ba360687160a687a3cc51;
PyObject *const_str_digest_18a3532f52925fd1b5d632bf0b4bcfbf;
PyObject *const_str_digest_242ebfe0b9ab609a54fd7e9d73fc6c76;
PyObject *const_str_digest_25731c733fd74e8333aa29126ce85686;
PyObject *const_str_digest_36647fed1a03b6b4a78d8e0637b737f2;
PyObject *const_str_digest_405fd99612e07e9d42898d2f948c10bc;
PyObject *const_str_digest_45e4dde2057b0bf276d6a84f4c917d27;
PyObject *const_str_digest_4e1f5b4777935416d21eea85875c6e94;
PyObject *const_str_digest_5867f4ae0675e64a2f6e43ec6afccbee;
PyObject *const_str_digest_5f408ea264aad5c192d303d32799c57f;
PyObject *const_str_digest_663362c475a0edc4d75b5c39d6e7c54d;
PyObject *const_str_digest_6e95ed820530cf590fdbebb75f05c4c7;
PyObject *const_str_digest_6efa74f45155a2226fbf28b23ffee920;
PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
PyObject *const_str_digest_9816e8d1552296af90d250823c964059;
PyObject *const_str_digest_a53e6044afa65158b90d5bc4937bebce;
PyObject *const_str_digest_abb5a9c7b48b379d6a8b8e9bb64c9eac;
PyObject *const_str_digest_adc474dd61fbd736d69c1bac5d9712e0;
PyObject *const_str_digest_b75e9ef8a0531a535d7e58a0cba37323;
PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
PyObject *const_str_digest_c566e8f3fba64199b66b7b7424440c9c;
PyObject *const_str_digest_daaa94ec39bdc51a92e87ff9abd20aad;
PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
PyObject *const_str_digest_dc6974bae1533a27ce9599cdf14ca60e;
PyObject *const_str_digest_e399ba4554180f37de594a6743234f17;
PyObject *const_str_digest_ebef4616ee13a2b67e2f69bc28f5ad1c;
PyObject *const_tuple_str_digest_b75e9ef8a0531a535d7e58a0cba37323_tuple;
PyObject *const_tuple_anon_function_anon_builtin_function_or_method_tuple;
PyObject *const_tuple_str_plain_SortedList_str_plain_recursive_repr_tuple;
PyObject *const_tuple_str_plain_self_str_plain_index_str_plain_value_tuple;

static void _createGlobalConstants( void )
{
    NUITKA_MAY_BE_UNUSED PyObject *exception_type, *exception_value;
    NUITKA_MAY_BE_UNUSED PyTracebackObject *exception_tb;

#ifdef _MSC_VER
    // Prevent unused warnings in case of simple programs, the attribute
    // NUITKA_MAY_BE_UNUSED doesn't work for MSVC.
    (void *)exception_type; (void *)exception_value; (void *)exception_tb;
#endif

    const_int_0 = PyLong_FromUnsignedLong( 0ul );
    const_str_dot = UNSTREAM_STRING_ASCII( &constant_bin[ 112 ], 1, 0 );
    const_int_neg_1 = PyLong_FromLong( -1l );
    const_int_pos_1 = PyLong_FromUnsignedLong( 1ul );
    const_int_pos_2 = PyLong_FromUnsignedLong( 2ul );
    const_int_pos_3 = PyLong_FromUnsignedLong( 3ul );
    const_int_pos_4 = PyLong_FromUnsignedLong( 4ul );
    const_int_pos_5 = PyLong_FromUnsignedLong( 5ul );
    const_int_pos_8 = PyLong_FromUnsignedLong( 8ul );
    const_str_empty = UNSTREAM_STRING_ASCII( &constant_bin[ 0 ], 0, 0 );
    const_dict_empty = _PyDict_NewPresized( 0 );
    assert( PyDict_Size( const_dict_empty ) == 0 );
    const_int_pos_10 = PyLong_FromUnsignedLong( 10ul );
    const_int_pos_13 = PyLong_FromUnsignedLong( 13ul );
    const_int_pos_15 = PyLong_FromUnsignedLong( 15ul );
    const_str_chr_59 = UNSTREAM_STRING_ASCII( &constant_bin[ 4817 ], 1, 0 );
    const_str_chr_60 = UNSTREAM_STRING_ASCII( &constant_bin[ 1528 ], 1, 0 );
    const_str_chr_62 = UNSTREAM_STRING_ASCII( &constant_bin[ 1535 ], 1, 0 );
    const_bytes_empty = UNSTREAM_BYTES( &constant_bin[ 0 ], 0 );
    const_str_plain_0 = UNSTREAM_STRING_ASCII( &constant_bin[ 2149 ], 1, 0 );
    const_str_plain_1 = UNSTREAM_STRING_ASCII( &constant_bin[ 2166 ], 1, 0 );
    const_str_plain_Y = UNSTREAM_STRING_ASCII( &constant_bin[ 68418 ], 1, 1 );
    const_str_plain_a = UNSTREAM_STRING_ASCII( &constant_bin[ 7 ], 1, 1 );
    const_str_plain_r = UNSTREAM_STRING_ASCII( &constant_bin[ 2 ], 1, 1 );
    const_tuple_empty = PyTuple_New( 0 );
    const_str_plain_eq = UNSTREAM_STRING_ASCII( &constant_bin[ 3394 ], 2, 1 );
    const_str_plain_ge = UNSTREAM_STRING_ASCII( &constant_bin[ 136 ], 2, 1 );
    const_str_plain_gt = UNSTREAM_STRING_ASCII( &constant_bin[ 3005 ], 2, 1 );
    const_str_plain_le = UNSTREAM_STRING_ASCII( &constant_bin[ 37 ], 2, 1 );
    const_str_plain_lt = UNSTREAM_STRING_ASCII( &constant_bin[ 6840 ], 2, 1 );
    const_str_plain_ne = UNSTREAM_STRING_ASCII( &constant_bin[ 219 ], 2, 1 );
    const_str_plain_os = UNSTREAM_STRING_ASCII( &constant_bin[ 3210 ], 2, 1 );
    const_str_plain_rb = UNSTREAM_STRING_ASCII( &constant_bin[ 1765 ], 2, 1 );
    const_str_plain_re = UNSTREAM_STRING_ASCII( &constant_bin[ 2 ], 2, 1 );
    const_str_plain_104 = UNSTREAM_STRING_ASCII( &constant_bin[ 68470 ], 3, 0 );
    const_str_plain_add = UNSTREAM_STRING_ASCII( &constant_bin[ 832 ], 3, 1 );
    const_str_plain_all = UNSTREAM_STRING_ASCII( &constant_bin[ 730 ], 3, 1 );
    const_str_plain_cls = UNSTREAM_STRING_ASCII( &constant_bin[ 68473 ], 3, 1 );
    const_str_plain_csv = UNSTREAM_STRING_ASCII( &constant_bin[ 628 ], 3, 1 );
    const_str_plain_doc = UNSTREAM_STRING_ASCII( &constant_bin[ 5491 ], 3, 1 );
    const_str_plain_end = UNSTREAM_STRING_ASCII( &constant_bin[ 2139 ], 3, 1 );
    const_str_plain_err = UNSTREAM_STRING_ASCII( &constant_bin[ 663 ], 3, 1 );
    const_str_plain_get = UNSTREAM_STRING_ASCII( &constant_bin[ 2724 ], 3, 1 );
    const_str_plain_int = UNSTREAM_STRING_ASCII( &constant_bin[ 369 ], 3, 1 );
    const_str_plain_key = UNSTREAM_STRING_ASCII( &constant_bin[ 2938 ], 3, 1 );
    const_str_plain_len = UNSTREAM_STRING_ASCII( &constant_bin[ 37 ], 3, 1 );
    const_str_plain_pop = UNSTREAM_STRING_ASCII( &constant_bin[ 5996 ], 3, 1 );
    const_str_plain_row = UNSTREAM_STRING_ASCII( &constant_bin[ 2257 ], 3, 1 );
    const_str_plain_sum = UNSTREAM_STRING_ASCII( &constant_bin[ 22719 ], 3, 1 );
    const_str_plain_sys = UNSTREAM_STRING_ASCII( &constant_bin[ 68476 ], 3, 1 );
    const_str_plain_zip = UNSTREAM_STRING_ASCII( &constant_bin[ 36942 ], 3, 1 );
    const_str_plain_Data = UNSTREAM_STRING_ASCII( &constant_bin[ 326 ], 4, 1 );
    const_str_plain_None = UNSTREAM_STRING_ASCII( &constant_bin[ 17049 ], 4, 1 );
    const_str_plain__add = UNSTREAM_STRING_ASCII( &constant_bin[ 15471 ], 4, 1 );
    const_str_plain__key = UNSTREAM_STRING_ASCII( &constant_bin[ 3451 ], 4, 1 );
    const_str_plain_copy = UNSTREAM_STRING_ASCII( &constant_bin[ 2974 ], 4, 1 );
    const_str_plain_dict = UNSTREAM_STRING_ASCII( &constant_bin[ 4957 ], 4, 1 );
    const_str_plain_ebay = UNSTREAM_STRING_ASCII( &constant_bin[ 68479 ], 4, 1 );
    const_str_plain_exit = UNSTREAM_STRING_ASCII( &constant_bin[ 7118 ], 4, 1 );
    const_str_plain_file = UNSTREAM_STRING_ASCII( &constant_bin[ 35 ], 4, 1 );
    const_str_plain_item = UNSTREAM_STRING_ASCII( &constant_bin[ 668 ], 4, 1 );
    const_str_plain_iter = UNSTREAM_STRING_ASCII( &constant_bin[ 2457 ], 4, 1 );
    const_str_plain_join = UNSTREAM_STRING_ASCII( &constant_bin[ 59060 ], 4, 1 );
    const_str_plain_keys = UNSTREAM_STRING_ASCII( &constant_bin[ 7595 ], 4, 1 );
    const_str_plain_name = UNSTREAM_STRING_ASCII( &constant_bin[ 39 ], 4, 1 );
    const_str_plain_open = UNSTREAM_STRING_ASCII( &constant_bin[ 31 ], 4, 1 );
    const_str_plain_path = UNSTREAM_STRING_ASCII( &constant_bin[ 2449 ], 4, 1 );
    const_str_plain_read = UNSTREAM_STRING_ASCII( &constant_bin[ 618 ], 4, 1 );
    const_str_plain_repr = UNSTREAM_STRING_ASCII( &constant_bin[ 14854 ], 4, 1 );
    const_str_plain_self = UNSTREAM_STRING_ASCII( &constant_bin[ 48082 ], 4, 1 );
    const_str_plain_send = UNSTREAM_STRING_ASCII( &constant_bin[ 68483 ], 4, 1 );
    const_str_plain_site = UNSTREAM_STRING_ASCII( &constant_bin[ 1044 ], 4, 1 );
    const_str_plain_type = UNSTREAM_STRING_ASCII( &constant_bin[ 1778 ], 4, 1 );
    const_str_plain_False = UNSTREAM_STRING_ASCII( &constant_bin[ 24796 ], 5, 1 );
    const_str_plain__list = UNSTREAM_STRING_ASCII( &constant_bin[ 6735 ], 5, 1 );
    const_str_plain_bytes = UNSTREAM_STRING_ASCII( &constant_bin[ 68487 ], 5, 1 );
    const_str_plain_chain = UNSTREAM_STRING_ASCII( &constant_bin[ 68492 ], 5, 1 );
    const_str_plain_child = UNSTREAM_STRING_ASCII( &constant_bin[ 3313 ], 5, 1 );
    const_str_plain_clear = UNSTREAM_STRING_ASCII( &constant_bin[ 10038 ], 5, 1 );
    const_str_plain_close = UNSTREAM_STRING_ASCII( &constant_bin[ 68497 ], 5, 1 );
    const_str_plain_count = UNSTREAM_STRING_ASCII( &constant_bin[ 1715 ], 5, 1 );
    const_str_plain_index = UNSTREAM_STRING_ASCII( &constant_bin[ 6004 ], 5, 1 );
    const_str_plain_level = UNSTREAM_STRING_ASCII( &constant_bin[ 9050 ], 5, 1 );
    const_str_plain_other = UNSTREAM_STRING_ASCII( &constant_bin[ 2188 ], 5, 1 );
    const_str_plain_print = UNSTREAM_STRING_ASCII( &constant_bin[ 36945 ], 5, 1 );
    const_str_plain_range = UNSTREAM_STRING_ASCII( &constant_bin[ 7063 ], 5, 1 );
    const_str_plain_slice = UNSTREAM_STRING_ASCII( &constant_bin[ 8679 ], 5, 1 );
    const_str_plain_stock = UNSTREAM_STRING_ASCII( &constant_bin[ 441 ], 5, 1 );
    const_str_plain_throw = UNSTREAM_STRING_ASCII( &constant_bin[ 68502 ], 5, 1 );
    const_str_plain_tuple = UNSTREAM_STRING_ASCII( &constant_bin[ 68507 ], 5, 1 );
    const_str_plain_types = UNSTREAM_STRING_ASCII( &constant_bin[ 3425 ], 5, 1 );
    const_str_plain_upper = UNSTREAM_STRING_ASCII( &constant_bin[ 68512 ], 5, 1 );
    const_str_plain_value = UNSTREAM_STRING_ASCII( &constant_bin[ 2012 ], 5, 1 );
    const_int_pos_50331648 = PyLong_FromUnsignedLong( 50331648ul );
    const_str_plain_ItemID = UNSTREAM_STRING_ASCII( &constant_bin[ 2760 ], 6, 1 );
    const_str_plain_MASTER = UNSTREAM_STRING_ASCII( &constant_bin[ 68517 ], 6, 1 );
    const_str_plain___eq__ = UNSTREAM_STRING_ASCII( &constant_bin[ 19759 ], 6, 1 );
    const_str_plain___ge__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68523 ], 6, 1 );
    const_str_plain___gt__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68529 ], 6, 1 );
    const_str_plain___le__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68535 ], 6, 1 );
    const_str_plain___lt__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68541 ], 6, 1 );
    const_str_plain___ne__ = UNSTREAM_STRING_ASCII( &constant_bin[ 19813 ], 6, 1 );
    const_str_plain__check = UNSTREAM_STRING_ASCII( &constant_bin[ 18442 ], 6, 1 );
    const_str_plain__reset = UNSTREAM_STRING_ASCII( &constant_bin[ 20189 ], 6, 1 );
    const_str_plain_amazon = UNSTREAM_STRING_ASCII( &constant_bin[ 939 ], 6, 1 );
    const_str_plain_bisect = UNSTREAM_STRING_ASCII( &constant_bin[ 6175 ], 6, 1 );
    const_str_plain_dedent = UNSTREAM_STRING_ASCII( &constant_bin[ 68547 ], 6, 1 );
    const_str_plain_export = UNSTREAM_STRING_ASCII( &constant_bin[ 390 ], 6, 1 );
    const_str_plain_format = UNSTREAM_STRING_ASCII( &constant_bin[ 576 ], 6, 1 );
    const_str_plain_irange = UNSTREAM_STRING_ASCII( &constant_bin[ 20125 ], 6, 1 );
    const_str_plain_isfile = UNSTREAM_STRING_ASCII( &constant_bin[ 68553 ], 6, 1 );
    const_str_plain_islice = UNSTREAM_STRING_ASCII( &constant_bin[ 20157 ], 6, 1 );
    const_str_plain_locals = UNSTREAM_STRING_ASCII( &constant_bin[ 12470 ], 6, 1 );
    const_str_plain_object = UNSTREAM_STRING_ASCII( &constant_bin[ 68559 ], 6, 1 );
    const_str_plain_origin = UNSTREAM_STRING_ASCII( &constant_bin[ 18355 ], 6, 1 );
    const_str_plain_parent = UNSTREAM_STRING_ASCII( &constant_bin[ 2672 ], 6, 1 );
    const_str_plain_reader = UNSTREAM_STRING_ASCII( &constant_bin[ 2242 ], 6, 1 );
    const_str_plain_remove = UNSTREAM_STRING_ASCII( &constant_bin[ 18337 ], 6, 1 );
    const_str_plain_symbol = UNSTREAM_STRING_ASCII( &constant_bin[ 68565 ], 6, 1 );
    const_str_plain_update = UNSTREAM_STRING_ASCII( &constant_bin[ 7884 ], 6, 1 );
    const_str_plain_values = UNSTREAM_STRING_ASCII( &constant_bin[ 2400 ], 6, 1 );
    const_tuple_none_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    const_str_angle_genexpr = UNSTREAM_STRING_ASCII( &constant_bin[ 12478 ], 9, 0 );
    const_str_plain_Barcode = UNSTREAM_STRING_ASCII( &constant_bin[ 4512 ], 7, 1 );
    const_str_plain___all__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68571 ], 7, 1 );
    const_str_plain___cmp__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68578 ], 7, 1 );
    const_str_plain___doc__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68585 ], 7, 1 );
    const_str_plain___len__ = UNSTREAM_STRING_ASCII( &constant_bin[ 19046 ], 7, 1 );
    const_str_plain___new__ = UNSTREAM_STRING_ASCII( &constant_bin[ 22622 ], 7, 1 );
    const_str_plain__update = UNSTREAM_STRING_ASCII( &constant_bin[ 15508 ], 7, 1 );
    const_str_plain_columns = UNSTREAM_STRING_ASCII( &constant_bin[ 68592 ], 7, 1 );
    const_str_plain_compile = UNSTREAM_STRING_ASCII( &constant_bin[ 6346 ], 7, 1 );
    const_str_plain_discard = UNSTREAM_STRING_ASCII( &constant_bin[ 23409 ], 7, 1 );
    const_str_plain_doc_str = UNSTREAM_STRING_ASCII( &constant_bin[ 68599 ], 7, 1 );
    const_str_plain_environ = UNSTREAM_STRING_ASCII( &constant_bin[ 68606 ], 7, 1 );
    const_str_plain_globals = UNSTREAM_STRING_ASCII( &constant_bin[ 68613 ], 7, 1 );
    const_str_plain_inspect = UNSTREAM_STRING_ASCII( &constant_bin[ 68620 ], 7, 1 );
    const_str_plain_message = UNSTREAM_STRING_ASCII( &constant_bin[ 68627 ], 7, 1 );
    const_str_plain_Position = UNSTREAM_STRING_ASCII( &constant_bin[ 68634 ], 8, 1 );
    const_str_plain_Sequence = UNSTREAM_STRING_ASCII( &constant_bin[ 22022 ], 8, 1 );
    const_str_plain___copy__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68642 ], 8, 1 );
    const_str_plain___dict__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68650 ], 8, 1 );
    const_str_plain___exit__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68658 ], 8, 1 );
    const_str_plain___file__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68666 ], 8, 1 );
    const_str_plain___init__ = UNSTREAM_STRING_ASCII( &constant_bin[ 5008 ], 8, 1 );
    const_str_plain___iter__ = UNSTREAM_STRING_ASCII( &constant_bin[ 15526 ], 8, 1 );
    const_str_plain___main__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68674 ], 8, 1 );
    const_str_plain___name__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68682 ], 8, 1 );
    const_str_plain___path__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68690 ], 8, 1 );
    const_str_plain___repr__ = UNSTREAM_STRING_ASCII( &constant_bin[ 14852 ], 8, 1 );
    const_str_plain___spec__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68698 ], 8, 1 );
    const_str_plain_comparer = UNSTREAM_STRING_ASCII( &constant_bin[ 47252 ], 8, 1 );
    const_str_plain_flatfile = UNSTREAM_STRING_ASCII( &constant_bin[ 153 ], 8, 1 );
    const_str_plain_fromlist = UNSTREAM_STRING_ASCII( &constant_bin[ 68706 ], 8, 1 );
    const_str_plain_item_sku = UNSTREAM_STRING_ASCII( &constant_bin[ 68714 ], 8, 1 );
    const_str_plain_iterable = UNSTREAM_STRING_ASCII( &constant_bin[ 8839 ], 8, 1 );
    const_str_plain_operator = UNSTREAM_STRING_ASCII( &constant_bin[ 22350 ], 8, 1 );
    const_str_plain_packages = UNSTREAM_STRING_ASCII( &constant_bin[ 1659 ], 8, 1 );
    const_str_plain_property = UNSTREAM_STRING_ASCII( &constant_bin[ 3109 ], 8, 1 );
    const_str_plain_reversed = UNSTREAM_STRING_ASCII( &constant_bin[ 7636 ], 8, 1 );
    const_str_plain_textwrap = UNSTREAM_STRING_ASCII( &constant_bin[ 68722 ], 8, 1 );
    const_str_plain_writeCSV = UNSTREAM_STRING_ASCII( &constant_bin[ 68730 ], 8, 1 );
    const_str_plain_writerow = UNSTREAM_STRING_ASCII( &constant_bin[ 68738 ], 8, 1 );
    const_str_angle_metaclass = UNSTREAM_STRING_ASCII( &constant_bin[ 68746 ], 11, 0 );
    const_str_plain_EANUpload = UNSTREAM_STRING_ASCII( &constant_bin[ 68757 ], 9, 1 );
    const_str_plain_SortedSet = UNSTREAM_STRING_ASCII( &constant_bin[ 6064 ], 9, 1 );
    const_str_plain___class__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68766 ], 9, 1 );
    const_str_plain___debug__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68775 ], 9, 1 );
    const_str_plain___enter__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68784 ], 9, 1 );
    const_str_plain_bytearray = UNSTREAM_STRING_ASCII( &constant_bin[ 68793 ], 9, 1 );
    const_str_plain_delimiter = UNSTREAM_STRING_ASCII( &constant_bin[ 68802 ], 9, 1 );
    const_str_plain_item_name = UNSTREAM_STRING_ASCII( &constant_bin[ 68811 ], 9, 1 );
    const_str_plain_itertools = UNSTREAM_STRING_ASCII( &constant_bin[ 68820 ], 9, 1 );
    const_str_plain_metaclass = UNSTREAM_STRING_ASCII( &constant_bin[ 68747 ], 9, 1 );
    const_str_plain_setActive = UNSTREAM_STRING_ASCII( &constant_bin[ 68829 ], 9, 1 );
    const_str_plain_sortedset = UNSTREAM_STRING_ASCII( &constant_bin[ 55750 ], 9, 1 );
    const_str_plain_stocklist = UNSTREAM_STRING_ASCII( &constant_bin[ 68838 ], 9, 1 );
    const_str_plain_type_name = UNSTREAM_STRING_ASCII( &constant_bin[ 68847 ], 9, 1 );
    const_str_plain_DictReader = UNSTREAM_STRING_ASCII( &constant_bin[ 68856 ], 10, 1 );
    const_str_plain_DictWriter = UNSTREAM_STRING_ASCII( &constant_bin[ 68866 ], 10, 1 );
    const_str_plain_SortedDict = UNSTREAM_STRING_ASCII( &constant_bin[ 5872 ], 10, 1 );
    const_str_plain_SortedList = UNSTREAM_STRING_ASCII( &constant_bin[ 5628 ], 10, 1 );
    const_str_plain___cached__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68876 ], 10, 1 );
    const_str_plain___import__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68886 ], 10, 1 );
    const_str_plain___loader__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68896 ], 10, 1 );
    const_str_plain___make_cmp = UNSTREAM_STRING_ASCII( &constant_bin[ 23877 ], 10, 1 );
    const_str_plain___module__ = UNSTREAM_STRING_ASCII( &constant_bin[ 68906 ], 10, 1 );
    const_str_plain___reduce__ = UNSTREAM_STRING_ASCII( &constant_bin[ 14899 ], 10, 1 );
    const_str_plain_amazon_sku = UNSTREAM_STRING_ASCII( &constant_bin[ 68916 ], 10, 1 );
    const_str_plain_article_id = UNSTREAM_STRING_ASCII( &constant_bin[ 68926 ], 10, 1 );
    const_str_plain_asinUpload = UNSTREAM_STRING_ASCII( &constant_bin[ 68936 ], 10, 1 );
    const_str_plain_bisect_key = UNSTREAM_STRING_ASCII( &constant_bin[ 20294 ], 10, 1 );
    const_str_plain_dataobject = UNSTREAM_STRING_ASCII( &constant_bin[ 68946 ], 10, 1 );
    const_str_plain_fieldnames = UNSTREAM_STRING_ASCII( &constant_bin[ 68956 ], 10, 1 );
    const_str_plain_hexversion = UNSTREAM_STRING_ASCII( &constant_bin[ 68966 ], 10, 1 );
    const_str_plain_irange_key = UNSTREAM_STRING_ASCII( &constant_bin[ 20383 ], 10, 1 );
    const_str_plain_itemUpload = UNSTREAM_STRING_ASCII( &constant_bin[ 68976 ], 10, 1 );
    const_str_plain_parent_sku = UNSTREAM_STRING_ASCII( &constant_bin[ 68986 ], 10, 1 );
    const_str_plain_sortedlist = UNSTREAM_STRING_ASCII( &constant_bin[ 31757 ], 10, 1 );
    const_str_plain_VariationID = UNSTREAM_STRING_ASCII( &constant_bin[ 68996 ], 11, 1 );
    const_str_plain___delitem__ = UNSTREAM_STRING_ASCII( &constant_bin[ 11789 ], 11, 1 );
    const_str_plain___getitem__ = UNSTREAM_STRING_ASCII( &constant_bin[ 8183 ], 11, 1 );
    const_str_plain___package__ = UNSTREAM_STRING_ASCII( &constant_bin[ 69007 ], 11, 1 );
    const_str_plain___prepare__ = UNSTREAM_STRING_ASCII( &constant_bin[ 69018 ], 11, 1 );
    const_str_plain___setitem__ = UNSTREAM_STRING_ASCII( &constant_bin[ 8112 ], 11, 1 );
    const_str_plain_bisect_left = UNSTREAM_STRING_ASCII( &constant_bin[ 6175 ], 11, 1 );
    const_str_plain_classmethod = UNSTREAM_STRING_ASCII( &constant_bin[ 69029 ], 11, 1 );
    const_str_plain_collections = UNSTREAM_STRING_ASCII( &constant_bin[ 5260 ], 11, 1 );
    const_str_plain_full_number = UNSTREAM_STRING_ASCII( &constant_bin[ 69040 ], 11, 1 );
    const_str_plain_imageUpload = UNSTREAM_STRING_ASCII( &constant_bin[ 69051 ], 11, 1 );
    const_str_plain_output_path = UNSTREAM_STRING_ASCII( &constant_bin[ 4788 ], 11, 1 );
    const_str_plain_priceUpload = UNSTREAM_STRING_ASCII( &constant_bin[ 69062 ], 11, 1 );
    const_str_plain_stockUpload = UNSTREAM_STRING_ASCII( &constant_bin[ 69073 ], 11, 1 );
    const_str_plain_writeheader = UNSTREAM_STRING_ASCII( &constant_bin[ 69084 ], 11, 1 );
    const_tuple_int_neg_1_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_neg_1_tuple, 0, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    const_tuple_none_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_none_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_plain___builtins__ = UNSTREAM_STRING_ASCII( &constant_bin[ 69095 ], 12, 1 );
    const_str_plain___compiled__ = UNSTREAM_STRING_ASCII( &constant_bin[ 69107 ], 12, 1 );
    const_str_plain___contains__ = UNSTREAM_STRING_ASCII( &constant_bin[ 19364 ], 12, 1 );
    const_str_plain___internal__ = UNSTREAM_STRING_ASCII( &constant_bin[ 69119 ], 12, 1 );
    const_str_plain___qualname__ = UNSTREAM_STRING_ASCII( &constant_bin[ 69131 ], 12, 1 );
    const_str_plain___reversed__ = UNSTREAM_STRING_ASCII( &constant_bin[ 7634 ], 12, 1 );
    const_str_plain_bisect_right = UNSTREAM_STRING_ASCII( &constant_bin[ 20025 ], 12, 1 );
    const_str_plain_column_names = UNSTREAM_STRING_ASCII( &constant_bin[ 69143 ], 12, 1 );
    const_str_plain_has_location = UNSTREAM_STRING_ASCII( &constant_bin[ 69155 ], 12, 1 );
    const_str_plain_parent_child = UNSTREAM_STRING_ASCII( &constant_bin[ 69167 ], 12, 1 );
    const_str_plain_staticmethod = UNSTREAM_STRING_ASCII( &constant_bin[ 69179 ], 12, 1 );
    const_str_plain_SortedKeyList = UNSTREAM_STRING_ASCII( &constant_bin[ 20280 ], 13, 1 );
    const_str_plain_VariationName = UNSTREAM_STRING_ASCII( &constant_bin[ 3672 ], 13, 1 );
    const_str_plain___metaclass__ = UNSTREAM_STRING_ASCII( &constant_bin[ 69191 ], 13, 1 );
    const_str_plain__initializing = UNSTREAM_STRING_ASCII( &constant_bin[ 69204 ], 13, 1 );
    const_str_plain_featureUpload = UNSTREAM_STRING_ASCII( &constant_bin[ 69217 ], 13, 1 );
    const_str_plain_intern_number = UNSTREAM_STRING_ASCII( &constant_bin[ 69230 ], 13, 1 );
    const_str_plain_package_width = UNSTREAM_STRING_ASCII( &constant_bin[ 69243 ], 13, 1 );
    const_tuple_int_0_int_0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_0_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    const_str_plain_SortedKeysView = UNSTREAM_STRING_ASCII( &constant_bin[ 9129 ], 14, 1 );
    const_str_plain___orig_bases__ = UNSTREAM_STRING_ASCII( &constant_bin[ 69256 ], 14, 1 );
    const_str_plain_package_height = UNSTREAM_STRING_ASCII( &constant_bin[ 69270 ], 14, 1 );
    const_str_plain_package_length = UNSTREAM_STRING_ASCII( &constant_bin[ 69284 ], 14, 1 );
    const_str_plain_package_weight = UNSTREAM_STRING_ASCII( &constant_bin[ 69298 ], 14, 1 );
    const_str_plain_recursive_repr = UNSTREAM_STRING_ASCII( &constant_bin[ 22653 ], 14, 1 );
    const_str_plain_standard_price = UNSTREAM_STRING_ASCII( &constant_bin[ 69312 ], 14, 1 );
    const_str_plain_SortedItemsView = UNSTREAM_STRING_ASCII( &constant_bin[ 7981 ], 15, 1 );
    const_str_plain_VariationNumber = UNSTREAM_STRING_ASCII( &constant_bin[ 69326 ], 15, 1 );
    const_str_plain___mro_entries__ = UNSTREAM_STRING_ASCII( &constant_bin[ 69341 ], 15, 1 );
    const_str_plain_amazonSkuUpload = UNSTREAM_STRING_ASCII( &constant_bin[ 69356 ], 15, 1 );
    const_str_plain_bisect_key_left = UNSTREAM_STRING_ASCII( &constant_bin[ 20294 ], 15, 1 );
    const_str_plain_variationUpload = UNSTREAM_STRING_ASCII( &constant_bin[ 69371 ], 15, 1 );
    const_str_plain_SortedValuesView = UNSTREAM_STRING_ASCII( &constant_bin[ 12306 ], 16, 1 );
    const_str_plain_amazonDataUpload = UNSTREAM_STRING_ASCII( &constant_bin[ 69386 ], 16, 1 );
    const_str_plain_bisect_key_right = UNSTREAM_STRING_ASCII( &constant_bin[ 20338 ], 16, 1 );
    const_str_plain_marketConnection = UNSTREAM_STRING_ASCII( &constant_bin[ 69402 ], 16, 1 );
    const_str_plain_sortedcontainers = UNSTREAM_STRING_ASCII( &constant_bin[ 4991 ], 16, 1 );
    const_str_plain_variation_upload = UNSTREAM_STRING_ASCII( &constant_bin[ 4631 ], 16, 1 );
    const_tuple_none_none_none_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_none_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_none_tuple, 2, Py_None ); Py_INCREF( Py_None );
    const_tuple_str_plain_self_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_SortedListWithKey = UNSTREAM_STRING_ASCII( &constant_bin[ 69418 ], 17, 1 );
    const_str_plain___class_getitem__ = UNSTREAM_STRING_ASCII( &constant_bin[ 69435 ], 17, 1 );
    const_str_plain_feed_product_type = UNSTREAM_STRING_ASCII( &constant_bin[ 69452 ], 17, 1 );
    const_str_plain_itemPropertyUpload = UNSTREAM_STRING_ASCII( &constant_bin[ 69469 ], 18, 1 );
    const_tuple_str_plain_dedent_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_dedent_tuple, 0, const_str_plain_dedent ); Py_INCREF( const_str_plain_dedent );
    const_tuple_str_plain_isfile_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_isfile_tuple, 0, const_str_plain_isfile ); Py_INCREF( const_str_plain_isfile );
    const_str_plain_external_product_id = UNSTREAM_STRING_ASCII( &constant_bin[ 69487 ], 19, 1 );
    const_tuple_str_plain_SortedSet_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SortedSet_tuple, 0, const_str_plain_SortedSet ); Py_INCREF( const_str_plain_SortedSet );
    const_tuple_str_plain___class___tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain___class___tuple, 0, const_str_plain___class__ ); Py_INCREF( const_str_plain___class__ );
    const_tuple_str_plain_SortedDict_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SortedDict_tuple, 0, const_str_plain_SortedDict ); Py_INCREF( const_str_plain_SortedDict );
    const_str_plain_submodule_search_locations = UNSTREAM_STRING_ASCII( &constant_bin[ 69506 ], 26, 1 );
    const_dict_a2fe7522a8a3fde103f0109fa97f1383 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_a2fe7522a8a3fde103f0109fa97f1383, const_str_plain_delimiter, const_str_chr_59 );
    assert( PyDict_Size( const_dict_a2fe7522a8a3fde103f0109fa97f1383 ) == 1 );
    const_str_plain_PrimaryVariationCustomNumber = UNSTREAM_STRING_ASCII( &constant_bin[ 3533 ], 28, 1 );
    const_tuple_str_plain_variation_upload_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_variation_upload_tuple, 0, const_str_plain_variation_upload ); Py_INCREF( const_str_plain_variation_upload );
    const_tuple_str_plain_self_str_plain_index_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_index_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_index_tuple, 1, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    const_tuple_str_plain_self_str_plain_value_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_value_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_value_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_digest_13243295198ba360687160a687a3cc51 = UNSTREAM_STRING_ASCII( &constant_bin[ 7652 ], 2, 0 );
    const_str_digest_18a3532f52925fd1b5d632bf0b4bcfbf = UNSTREAM_STRING_ASCII( &constant_bin[ 69532 ], 12, 0 );
    const_str_digest_242ebfe0b9ab609a54fd7e9d73fc6c76 = UNSTREAM_STRING_ASCII( &constant_bin[ 3497 ], 20, 0 );
    const_str_digest_25731c733fd74e8333aa29126ce85686 = UNSTREAM_STRING_ASCII( &constant_bin[ 7215 ], 2, 0 );
    const_str_digest_36647fed1a03b6b4a78d8e0637b737f2 = UNSTREAM_STRING_ASCII( &constant_bin[ 69544 ], 67, 0 );
    const_str_digest_405fd99612e07e9d42898d2f948c10bc = UNSTREAM_STRING_ASCII( &constant_bin[ 2530 ], 21, 0 );
    const_str_digest_45e4dde2057b0bf276d6a84f4c917d27 = UNSTREAM_STRING_ASCII( &constant_bin[ 69611 ], 7, 0 );
    const_str_digest_4e1f5b4777935416d21eea85875c6e94 = UNSTREAM_STRING_ASCII( &constant_bin[ 69544 ], 56, 0 );
    const_str_digest_5867f4ae0675e64a2f6e43ec6afccbee = UNSTREAM_STRING_ASCII( &constant_bin[ 69618 ], 23, 0 );
    const_str_digest_5f408ea264aad5c192d303d32799c57f = UNSTREAM_STRING_ASCII( &constant_bin[ 69641 ], 2, 0 );
    const_str_digest_663362c475a0edc4d75b5c39d6e7c54d = UNSTREAM_STRING_ASCII( &constant_bin[ 8933 ], 8, 0 );
    const_str_digest_6e95ed820530cf590fdbebb75f05c4c7 = UNSTREAM_STRING_ASCII( &constant_bin[ 2044 ], 27, 0 );
    const_str_digest_6efa74f45155a2226fbf28b23ffee920 = UNSTREAM_STRING_ASCII( &constant_bin[ 69643 ], 7, 0 );
    const_str_digest_75fd71b1edada749c2ef7ac810062295 = UNSTREAM_STRING_ASCII( &constant_bin[ 69650 ], 46, 0 );
    const_str_digest_9816e8d1552296af90d250823c964059 = UNSTREAM_STRING_ASCII( &constant_bin[ 69696 ], 46, 0 );
    const_str_digest_a53e6044afa65158b90d5bc4937bebce = UNSTREAM_STRING_ASCII( &constant_bin[ 69742 ], 2, 0 );
    const_str_digest_abb5a9c7b48b379d6a8b8e9bb64c9eac = UNSTREAM_STRING_ASCII( &constant_bin[ 4756 ], 25, 0 );
    const_str_digest_adc474dd61fbd736d69c1bac5d9712e0 = UNSTREAM_STRING_ASCII( &constant_bin[ 69744 ], 47, 0 );
    const_str_digest_b75e9ef8a0531a535d7e58a0cba37323 = UNSTREAM_STRING_ASCII( &constant_bin[ 69791 ], 60, 0 );
    const_str_digest_b9c4baf879ebd882d40843df3a4dead7 = UNSTREAM_STRING_ASCII( &constant_bin[ 4980 ], 2, 1 );
    const_str_digest_c566e8f3fba64199b66b7b7424440c9c = UNSTREAM_STRING_ASCII( &constant_bin[ 7651 ], 2, 0 );
    const_str_digest_daaa94ec39bdc51a92e87ff9abd20aad = UNSTREAM_STRING_ASCII( &constant_bin[ 69851 ], 4, 0 );
    const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77 = UNSTREAM_STRING_ASCII( &constant_bin[ 161 ], 2, 0 );
    const_str_digest_dc6974bae1533a27ce9599cdf14ca60e = UNSTREAM_STRING_ASCII( &constant_bin[ 69855 ], 15, 0 );
    const_str_digest_e399ba4554180f37de594a6743234f17 = UNSTREAM_STRING_ASCII( &constant_bin[ 69870 ], 7, 0 );
    const_str_digest_ebef4616ee13a2b67e2f69bc28f5ad1c = UNSTREAM_STRING_ASCII( &constant_bin[ 4226 ], 21, 0 );
    const_tuple_str_digest_b75e9ef8a0531a535d7e58a0cba37323_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b75e9ef8a0531a535d7e58a0cba37323_tuple, 0, const_str_digest_b75e9ef8a0531a535d7e58a0cba37323 ); Py_INCREF( const_str_digest_b75e9ef8a0531a535d7e58a0cba37323 );
    const_tuple_anon_function_anon_builtin_function_or_method_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_anon_function_anon_builtin_function_or_method_tuple, 0, (PyObject *)&PyFunction_Type ); Py_INCREF( (PyObject *)&PyFunction_Type );
    PyTuple_SET_ITEM( const_tuple_anon_function_anon_builtin_function_or_method_tuple, 1, (PyObject *)&PyCFunction_Type ); Py_INCREF( (PyObject *)&PyCFunction_Type );
    const_tuple_str_plain_SortedList_str_plain_recursive_repr_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SortedList_str_plain_recursive_repr_tuple, 0, const_str_plain_SortedList ); Py_INCREF( const_str_plain_SortedList );
    PyTuple_SET_ITEM( const_tuple_str_plain_SortedList_str_plain_recursive_repr_tuple, 1, const_str_plain_recursive_repr ); Py_INCREF( const_str_plain_recursive_repr );
    const_tuple_str_plain_self_str_plain_index_str_plain_value_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_index_str_plain_value_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_index_str_plain_value_tuple, 1, const_str_plain_index ); Py_INCREF( const_str_plain_index );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_index_str_plain_value_tuple, 2, const_str_plain_value ); Py_INCREF( const_str_plain_value );

#if _NUITKA_EXE
    /* Set the "sys.executable" path to the original CPython executable. */
    PySys_SetObject(
        (char *)"executable",
        const_str_digest_36647fed1a03b6b4a78d8e0637b737f2
    );

#ifndef _NUITKA_STANDALONE
    /* Set the "sys.prefix" path to the original one. */
    PySys_SetObject(
        (char *)"prefix",
        const_str_digest_4e1f5b4777935416d21eea85875c6e94
    );

    /* Set the "sys.prefix" path to the original one. */
    PySys_SetObject(
        (char *)"exec_prefix",
        const_str_digest_4e1f5b4777935416d21eea85875c6e94
    );


#if PYTHON_VERSION >= 300
    /* Set the "sys.base_prefix" path to the original one. */
    PySys_SetObject(
        (char *)"base_prefix",
        const_str_digest_4e1f5b4777935416d21eea85875c6e94
    );

    /* Set the "sys.exec_base_prefix" path to the original one. */
    PySys_SetObject(
        (char *)"base_exec_prefix",
        const_str_digest_4e1f5b4777935416d21eea85875c6e94
    );

#endif
#endif
#endif

    static PyTypeObject Nuitka_VersionInfoType;

    // Same fields as "sys.version_info" except no serial number.
    static PyStructSequence_Field Nuitka_VersionInfoFields[] = {
        {(char *)"major", (char *)"Major release number"},
        {(char *)"minor", (char *)"Minor release number"},
        {(char *)"micro", (char *)"Micro release number"},
        {(char *)"releaselevel", (char *)"'alpha', 'beta', 'candidate', or 'release'"},
        {0}
    };

    static PyStructSequence_Desc Nuitka_VersionInfoDesc = {
        (char *)"__nuitka_version__",                                    /* name */
        (char *)"__compiled__\n\nVersion information as a named tuple.", /* doc */
        Nuitka_VersionInfoFields,                                        /* fields */
        4
    };

    PyStructSequence_InitType(&Nuitka_VersionInfoType, &Nuitka_VersionInfoDesc);

    Nuitka_dunder_compiled_value = PyStructSequence_New(&Nuitka_VersionInfoType);
    assert(Nuitka_dunder_compiled_value != NULL);

    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 0, PyInt_FromLong(0));
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 1, PyInt_FromLong(6));
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 2, PyInt_FromLong(3));

#if PYTHON_VERSION < 300
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 3, PyString_FromString("release"));
#else
    PyStructSequence_SET_ITEM(Nuitka_dunder_compiled_value, 3, PyUnicode_FromString("release"));
#endif
    // Prevent users from creating the Nuitka version type object.
    Nuitka_VersionInfoType.tp_init = NULL;
    Nuitka_VersionInfoType.tp_new = NULL;


}

// In debug mode we can check that the constants were not tampered with in any
// given moment. We typically do it at program exit, but we can add extra calls
// for sanity.
#ifndef __NUITKA_NO_ASSERT__
void checkGlobalConstants( void )
{

}
#endif

void createGlobalConstants( void )
{
    if ( _sentinel_value == NULL )
    {
#if PYTHON_VERSION < 300
        _sentinel_value = PyCObject_FromVoidPtr( NULL, NULL );
#else
        // The NULL value is not allowed for a capsule, so use something else.
        _sentinel_value = PyCapsule_New( (void *)27, "sentinel", NULL );
#endif
        assert( _sentinel_value );

        _createGlobalConstants();
    }
}
