/* Generated code for Python module 'packages.stock_upload'
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

/* The "_module_packages$stock_upload" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_packages$stock_upload;
PyDictObject *moduledict_packages$stock_upload;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_LocationName;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_dict_a2fe7522a8a3fde103f0109fa97f1383;
extern PyObject *const_str_plain_stocklist;
extern PyObject *const_str_plain_output_path;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_e399ba4554180f37de594a6743234f17;
extern PyObject *const_str_plain___exit__;
extern PyObject *const_str_plain_Barcode;
extern PyObject *const_str_digest_b75e9ef8a0531a535d7e58a0cba37323;
extern PyObject *const_str_plain_reader;
extern PyObject *const_str_plain_None;
static PyObject *const_tuple_281678e1a38fba50540a45c8a1909128_tuple;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_plain_isfile;
extern PyObject *const_str_plain_MASTER;
extern PyObject *const_str_plain_standard_price;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain_VariationNumber;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_packages;
extern PyObject *const_str_plain_VariationID;
extern PyObject *const_str_plain_104;
extern PyObject *const_str_plain_item;
static PyObject *const_str_digest_4f738837f62fbf131d454c42078b4e6a;
extern PyObject *const_str_plain_priceUpload;
extern PyObject *const_str_plain_export;
extern PyObject *const_tuple_str_plain_SortedDict_tuple;
static PyObject *const_str_digest_e7d0d0a43944faa19c16ecbda118b81e;
extern PyObject *const_str_plain_sortedcontainers;
extern PyObject *const_tuple_empty;
static PyObject *const_list_str_plain_1_str_plain_4_list;
extern PyObject *const_str_plain_DictReader;
extern PyObject *const_str_plain_stock;
extern PyObject *const_str_plain_r;
static PyObject *const_str_plain_ReservedStock;
static PyObject *const_str_plain_price_id;
static PyObject *const_str_plain_Reordered;
extern PyObject *const_str_plain_writeCSV;
extern PyObject *const_str_plain_flatfile;
static PyObject *const_str_plain_StandarWarenlager;
extern PyObject *const_str_plain_SortedDict;
extern PyObject *const_int_0;
static PyObject *const_str_plain_WarehouseID;
extern PyObject *const_tuple_str_plain_isfile_tuple;
static PyObject *const_str_plain_IsNet;
extern PyObject *const_str_plain_row;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_SalesPriceID;
static PyObject *const_list_d036b0b5c432f458da900bfbd67b2aa6_list;
extern PyObject *const_str_plain_column_names;
static PyObject *const_str_plain_price;
static PyObject *const_str_plain_Stock;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_variation_upload;
static PyObject *const_str_plain_VariationPrice;
extern PyObject *const_str_plain_values;
extern PyObject *const_str_plain_external_product_id;
extern PyObject *const_tuple_str_digest_b75e9ef8a0531a535d7e58a0cba37323_tuple;
static PyObject *const_str_plain_ident;
extern PyObject *const_str_plain_1;
static PyObject *const_str_plain_4;
static PyObject *const_str_plain_LocationID;
extern PyObject *const_str_plain_print;
extern PyObject *const_tuple_str_plain_variation_upload_tuple;
extern PyObject *const_str_plain_delimiter;
extern PyObject *const_str_plain_Data;
static PyObject *const_str_digest_0530b57cf37cdf3792c280658efab8bb;
extern PyObject *const_str_plain_item_sku;
extern PyObject *const_str_plain_csv;
extern PyObject *const_str_chr_59;
extern PyObject *const_str_plain_DictWriter;
static PyObject *const_tuple_str_plain_DictReader_str_plain_DictWriter_tuple;
extern PyObject *const_str_plain_has_location;
static PyObject *const_tuple_6b081351b7a22103dcade949bf164630_tuple;
extern PyObject *const_str_empty;
static PyObject *const_list_e2dab30b05551787bda4ea12c3788ed8_list;
extern PyObject *const_str_plain_stockUpload;
extern PyObject *const_str_digest_ebef4616ee13a2b67e2f69bc28f5ad1c;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_LocationName = UNSTREAM_STRING_ASCII( &constant_bin[ 56311 ], 12, 1 );
    const_tuple_281678e1a38fba50540a45c8a1909128_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_281678e1a38fba50540a45c8a1909128_tuple, 0, const_str_plain_flatfile ); Py_INCREF( const_str_plain_flatfile );
    PyTuple_SET_ITEM( const_tuple_281678e1a38fba50540a45c8a1909128_tuple, 1, const_str_plain_stocklist ); Py_INCREF( const_str_plain_stocklist );
    PyTuple_SET_ITEM( const_tuple_281678e1a38fba50540a45c8a1909128_tuple, 2, const_str_plain_column_names ); Py_INCREF( const_str_plain_column_names );
    PyTuple_SET_ITEM( const_tuple_281678e1a38fba50540a45c8a1909128_tuple, 3, const_str_plain_Data ); Py_INCREF( const_str_plain_Data );
    PyTuple_SET_ITEM( const_tuple_281678e1a38fba50540a45c8a1909128_tuple, 4, const_str_plain_item ); Py_INCREF( const_str_plain_item );
    PyTuple_SET_ITEM( const_tuple_281678e1a38fba50540a45c8a1909128_tuple, 5, const_str_plain_reader ); Py_INCREF( const_str_plain_reader );
    PyTuple_SET_ITEM( const_tuple_281678e1a38fba50540a45c8a1909128_tuple, 6, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    PyTuple_SET_ITEM( const_tuple_281678e1a38fba50540a45c8a1909128_tuple, 7, const_str_plain_values ); Py_INCREF( const_str_plain_values );
    PyTuple_SET_ITEM( const_tuple_281678e1a38fba50540a45c8a1909128_tuple, 8, const_str_plain_output_path ); Py_INCREF( const_str_plain_output_path );
    const_str_digest_4f738837f62fbf131d454c42078b4e6a = UNSTREAM_STRING_ASCII( &constant_bin[ 56323 ], 30, 0 );
    const_str_digest_e7d0d0a43944faa19c16ecbda118b81e = UNSTREAM_STRING_ASCII( &constant_bin[ 56353 ], 24, 0 );
    const_list_str_plain_1_str_plain_4_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_1_str_plain_4_list, 0, const_str_plain_1 ); Py_INCREF( const_str_plain_1 );
    const_str_plain_4 = UNSTREAM_STRING_ASCII( &constant_bin[ 3411 ], 1, 0 );
    PyList_SET_ITEM( const_list_str_plain_1_str_plain_4_list, 1, const_str_plain_4 ); Py_INCREF( const_str_plain_4 );
    const_str_plain_ReservedStock = UNSTREAM_STRING_ASCII( &constant_bin[ 56377 ], 13, 1 );
    const_str_plain_price_id = UNSTREAM_STRING_ASCII( &constant_bin[ 56390 ], 8, 1 );
    const_str_plain_Reordered = UNSTREAM_STRING_ASCII( &constant_bin[ 56398 ], 9, 1 );
    const_str_plain_StandarWarenlager = UNSTREAM_STRING_ASCII( &constant_bin[ 56407 ], 17, 1 );
    const_str_plain_WarehouseID = UNSTREAM_STRING_ASCII( &constant_bin[ 56424 ], 11, 1 );
    const_str_plain_IsNet = UNSTREAM_STRING_ASCII( &constant_bin[ 56435 ], 5, 1 );
    const_str_plain_SalesPriceID = UNSTREAM_STRING_ASCII( &constant_bin[ 56440 ], 12, 1 );
    const_list_d036b0b5c432f458da900bfbd67b2aa6_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_d036b0b5c432f458da900bfbd67b2aa6_list, 0, const_str_plain_VariationID ); Py_INCREF( const_str_plain_VariationID );
    PyList_SET_ITEM( const_list_d036b0b5c432f458da900bfbd67b2aa6_list, 1, const_str_plain_IsNet ); Py_INCREF( const_str_plain_IsNet );
    const_str_plain_VariationPrice = UNSTREAM_STRING_ASCII( &constant_bin[ 56452 ], 14, 1 );
    PyList_SET_ITEM( const_list_d036b0b5c432f458da900bfbd67b2aa6_list, 2, const_str_plain_VariationPrice ); Py_INCREF( const_str_plain_VariationPrice );
    PyList_SET_ITEM( const_list_d036b0b5c432f458da900bfbd67b2aa6_list, 3, const_str_plain_SalesPriceID ); Py_INCREF( const_str_plain_SalesPriceID );
    const_str_plain_price = UNSTREAM_STRING_ASCII( &constant_bin[ 781 ], 5, 1 );
    const_str_plain_Stock = UNSTREAM_STRING_ASCII( &constant_bin[ 56082 ], 5, 1 );
    const_str_plain_ident = UNSTREAM_STRING_ASCII( &constant_bin[ 20918 ], 5, 1 );
    const_str_plain_LocationID = UNSTREAM_STRING_ASCII( &constant_bin[ 56466 ], 10, 1 );
    const_str_digest_0530b57cf37cdf3792c280658efab8bb = UNSTREAM_STRING_ASCII( &constant_bin[ 56476 ], 14, 0 );
    const_tuple_str_plain_DictReader_str_plain_DictWriter_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_DictReader_str_plain_DictWriter_tuple, 0, const_str_plain_DictReader ); Py_INCREF( const_str_plain_DictReader );
    PyTuple_SET_ITEM( const_tuple_str_plain_DictReader_str_plain_DictWriter_tuple, 1, const_str_plain_DictWriter ); Py_INCREF( const_str_plain_DictWriter );
    const_tuple_6b081351b7a22103dcade949bf164630_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_6b081351b7a22103dcade949bf164630_tuple, 0, const_str_plain_flatfile ); Py_INCREF( const_str_plain_flatfile );
    PyTuple_SET_ITEM( const_tuple_6b081351b7a22103dcade949bf164630_tuple, 1, const_str_plain_export ); Py_INCREF( const_str_plain_export );
    PyTuple_SET_ITEM( const_tuple_6b081351b7a22103dcade949bf164630_tuple, 2, const_str_plain_column_names ); Py_INCREF( const_str_plain_column_names );
    PyTuple_SET_ITEM( const_tuple_6b081351b7a22103dcade949bf164630_tuple, 3, const_str_plain_price_id ); Py_INCREF( const_str_plain_price_id );
    PyTuple_SET_ITEM( const_tuple_6b081351b7a22103dcade949bf164630_tuple, 4, const_str_plain_Data ); Py_INCREF( const_str_plain_Data );
    PyTuple_SET_ITEM( const_tuple_6b081351b7a22103dcade949bf164630_tuple, 5, const_str_plain_item ); Py_INCREF( const_str_plain_item );
    PyTuple_SET_ITEM( const_tuple_6b081351b7a22103dcade949bf164630_tuple, 6, const_str_plain_reader ); Py_INCREF( const_str_plain_reader );
    PyTuple_SET_ITEM( const_tuple_6b081351b7a22103dcade949bf164630_tuple, 7, const_str_plain_row ); Py_INCREF( const_str_plain_row );
    PyTuple_SET_ITEM( const_tuple_6b081351b7a22103dcade949bf164630_tuple, 8, const_str_plain_ident ); Py_INCREF( const_str_plain_ident );
    PyTuple_SET_ITEM( const_tuple_6b081351b7a22103dcade949bf164630_tuple, 9, const_str_plain_values ); Py_INCREF( const_str_plain_values );
    PyTuple_SET_ITEM( const_tuple_6b081351b7a22103dcade949bf164630_tuple, 10, const_str_plain_output_path ); Py_INCREF( const_str_plain_output_path );
    const_list_e2dab30b05551787bda4ea12c3788ed8_list = PyList_New( 7 );
    PyList_SET_ITEM( const_list_e2dab30b05551787bda4ea12c3788ed8_list, 0, const_str_plain_Barcode ); Py_INCREF( const_str_plain_Barcode );
    PyList_SET_ITEM( const_list_e2dab30b05551787bda4ea12c3788ed8_list, 1, const_str_plain_LocationID ); Py_INCREF( const_str_plain_LocationID );
    PyList_SET_ITEM( const_list_e2dab30b05551787bda4ea12c3788ed8_list, 2, const_str_plain_LocationName ); Py_INCREF( const_str_plain_LocationName );
    PyList_SET_ITEM( const_list_e2dab30b05551787bda4ea12c3788ed8_list, 3, const_str_plain_Reordered ); Py_INCREF( const_str_plain_Reordered );
    PyList_SET_ITEM( const_list_e2dab30b05551787bda4ea12c3788ed8_list, 4, const_str_plain_ReservedStock ); Py_INCREF( const_str_plain_ReservedStock );
    PyList_SET_ITEM( const_list_e2dab30b05551787bda4ea12c3788ed8_list, 5, const_str_plain_Stock ); Py_INCREF( const_str_plain_Stock );
    PyList_SET_ITEM( const_list_e2dab30b05551787bda4ea12c3788ed8_list, 6, const_str_plain_WarehouseID ); Py_INCREF( const_str_plain_WarehouseID );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_packages$stock_upload( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f2def95859e7051e1a0c092afdfb8428;
static PyCodeObject *codeobj_3c71f389074bb5e992bdee59232e9892;
static PyCodeObject *codeobj_220c4111ef7b8b1f35de00f8eef07407;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_e7d0d0a43944faa19c16ecbda118b81e );
    codeobj_f2def95859e7051e1a0c092afdfb8428 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_4f738837f62fbf131d454c42078b4e6a, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_3c71f389074bb5e992bdee59232e9892 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_priceUpload, 40, const_tuple_6b081351b7a22103dcade949bf164630_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_220c4111ef7b8b1f35de00f8eef07407 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_stockUpload, 13, const_tuple_281678e1a38fba50540a45c8a1909128_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1__unpack_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_packages$stock_upload$$$function_1_stockUpload(  );


static PyObject *MAKE_FUNCTION_packages$stock_upload$$$function_2_priceUpload(  );


// The module function definitions.
static PyObject *impl_packages$stock_upload$$$function_1_stockUpload( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_flatfile = python_pars[ 0 ];
    PyObject *par_stocklist = python_pars[ 1 ];
    PyObject *var_column_names = NULL;
    PyObject *var_Data = NULL;
    PyObject *var_item = NULL;
    PyObject *var_reader = NULL;
    PyObject *var_row = NULL;
    PyObject *var_values = NULL;
    PyObject *var_output_path = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    struct Nuitka_FrameObject *frame_220c4111ef7b8b1f35de00f8eef07407;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_220c4111ef7b8b1f35de00f8eef07407 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = LIST_COPY( const_list_e2dab30b05551787bda4ea12c3788ed8_list );
        assert( var_column_names == NULL );
        var_column_names = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_220c4111ef7b8b1f35de00f8eef07407, codeobj_220c4111ef7b8b1f35de00f8eef07407, module_packages$stock_upload, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_220c4111ef7b8b1f35de00f8eef07407 = cache_frame_220c4111ef7b8b1f35de00f8eef07407;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_220c4111ef7b8b1f35de00f8eef07407 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_220c4111ef7b8b1f35de00f8eef07407 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain_SortedDict );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SortedDict );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SortedDict" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 21;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_220c4111ef7b8b1f35de00f8eef07407->m_frame.f_lineno = 21;
        tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Data == NULL );
        var_Data = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT( par_flatfile );
        tmp_open_filename_1 = par_flatfile;
        tmp_open_mode_1 = const_str_plain_r;
        tmp_assign_source_3 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_1 = tmp_with_1__source;
        tmp_called_name_2 = LOOKUP_SPECIAL( tmp_source_name_1, const_str_plain___enter__ );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_220c4111ef7b8b1f35de00f8eef07407->m_frame.f_lineno = 23;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_2 = tmp_with_1__source;
        tmp_assign_source_5 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___exit__ );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_assign_source_6;
        tmp_assign_source_6 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_with_1__enter );
        tmp_assign_source_7 = tmp_with_1__enter;
        assert( var_item == NULL );
        Py_INCREF( tmp_assign_source_7 );
        var_item = tmp_assign_source_7;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain_DictReader );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DictReader );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DictReader" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 24;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_3 = tmp_mvar_value_2;
        CHECK_OBJECT( var_item );
        tmp_tuple_element_1 = var_item;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_a2fe7522a8a3fde103f0109fa97f1383 );
        frame_220c4111ef7b8b1f35de00f8eef07407->m_frame.f_lineno = 24;
        tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        assert( var_reader == NULL );
        var_reader = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_reader );
        tmp_iter_arg_1 = var_reader;
        tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_9;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooo";
                exception_lineno = 25;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_10;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_11 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_row;
            var_row = tmp_assign_source_11;
            Py_INCREF( var_row );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_row );
        tmp_subscribed_name_1 = var_row;
        tmp_subscript_name_1 = const_str_plain_external_product_id;
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_subscript_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_subscript_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscript_result_1 );

            exception_lineno = 26;
            type_description_1 = "ooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_subscript_result_1 );
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
            PyObject *tmp_assign_source_12;
            PyObject *tmp_list_element_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( var_row );
            tmp_subscribed_name_2 = var_row;
            tmp_subscript_name_2 = const_str_plain_external_product_id;
            tmp_list_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_list_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 27;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_12 = PyList_New( 7 );
            PyList_SET_ITEM( tmp_assign_source_12, 0, tmp_list_element_1 );
            tmp_list_element_1 = const_int_0;
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assign_source_12, 1, tmp_list_element_1 );
            tmp_list_element_1 = const_str_plain_StandarWarenlager;
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assign_source_12, 2, tmp_list_element_1 );
            tmp_list_element_1 = const_str_empty;
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assign_source_12, 3, tmp_list_element_1 );
            tmp_list_element_1 = const_str_empty;
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assign_source_12, 4, tmp_list_element_1 );
            tmp_list_element_1 = const_str_empty;
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assign_source_12, 5, tmp_list_element_1 );
            tmp_list_element_1 = const_str_plain_104;
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assign_source_12, 6, tmp_list_element_1 );
            {
                PyObject *old = var_values;
                var_values = tmp_assign_source_12;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain_SortedDict );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SortedDict );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SortedDict" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 29;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }

            tmp_called_name_4 = tmp_mvar_value_3;
            tmp_called_name_5 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT( var_column_names );
            tmp_args_element_name_2 = var_column_names;
            CHECK_OBJECT( var_values );
            tmp_args_element_name_3 = var_values;
            frame_220c4111ef7b8b1f35de00f8eef07407->m_frame.f_lineno = 29;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            frame_220c4111ef7b8b1f35de00f8eef07407->m_frame.f_lineno = 29;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( var_Data );
            tmp_ass_subscribed_1 = var_Data;
            CHECK_OBJECT( var_row );
            tmp_subscribed_name_3 = var_row;
            tmp_subscript_name_3 = const_str_plain_item_sku;
            tmp_ass_subscript_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );

                exception_lineno = 29;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 29;
                type_description_1 = "ooooooooo";
                goto try_except_handler_5;
            }
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "ooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
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
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto try_end_2;
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_220c4111ef7b8b1f35de00f8eef07407, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_220c4111ef7b8b1f35de00f8eef07407, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
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
            nuitka_bool tmp_assign_source_13;
            tmp_assign_source_13 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_13;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_6 = tmp_with_1__exit;
            tmp_args_element_name_4 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_5 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_6 = EXC_TRACEBACK(PyThreadState_GET());
            frame_220c4111ef7b8b1f35de00f8eef07407->m_frame.f_lineno = 23;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;
                type_description_1 = "ooooooooo";
                goto try_except_handler_6;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;
                type_description_1 = "ooooooooo";
                goto try_except_handler_6;
            }
            tmp_condition_result_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                exception_lineno = 23;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_220c4111ef7b8b1f35de00f8eef07407->m_frame) frame_220c4111ef7b8b1f35de00f8eef07407->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooooo";
            goto try_except_handler_6;
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 23;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_220c4111ef7b8b1f35de00f8eef07407->m_frame) frame_220c4111ef7b8b1f35de00f8eef07407->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooo";
        goto try_except_handler_6;
        branch_end_2:;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( packages$stock_upload$$$function_1_stockUpload );
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_7;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_7 = tmp_with_1__exit;
            frame_220c4111ef7b8b1f35de00f8eef07407->m_frame.f_lineno = 23;
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_4 );
                Py_XDECREF( exception_keeper_value_4 );
                Py_XDECREF( exception_keeper_tb_4 );

                exception_lineno = 23;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_4:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    {
        nuitka_bool tmp_condition_result_5;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_called_name_8;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_8 = tmp_with_1__exit;
            frame_220c4111ef7b8b1f35de00f8eef07407->m_frame.f_lineno = 23;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 23;
                type_description_1 = "ooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_5:;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_open_filename_2;
        PyObject *tmp_open_mode_2;
        CHECK_OBJECT( par_stocklist );
        tmp_open_filename_2 = par_stocklist;
        tmp_open_mode_2 = const_str_plain_r;
        tmp_assign_source_14 = BUILTIN_OPEN( tmp_open_filename_2, tmp_open_mode_2, NULL, NULL, NULL, NULL, NULL, NULL );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }
        assert( tmp_with_2__source == NULL );
        tmp_with_2__source = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( tmp_with_2__source );
        tmp_source_name_3 = tmp_with_2__source;
        tmp_called_name_9 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___enter__ );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }
        frame_220c4111ef7b8b1f35de00f8eef07407->m_frame.f_lineno = 31;
        tmp_assign_source_15 = CALL_FUNCTION_NO_ARGS( tmp_called_name_9 );
        Py_DECREF( tmp_called_name_9 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }
        assert( tmp_with_2__enter == NULL );
        tmp_with_2__enter = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( tmp_with_2__source );
        tmp_source_name_4 = tmp_with_2__source;
        tmp_assign_source_16 = LOOKUP_SPECIAL( tmp_source_name_4, const_str_plain___exit__ );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooooooooo";
            goto try_except_handler_7;
        }
        assert( tmp_with_2__exit == NULL );
        tmp_with_2__exit = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_assign_source_17;
        tmp_assign_source_17 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT( tmp_with_2__enter );
        tmp_assign_source_18 = tmp_with_2__enter;
        {
            PyObject *old = var_item;
            assert( old != NULL );
            var_item = tmp_assign_source_18;
            Py_INCREF( var_item );
            Py_DECREF( old );
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain_DictReader );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DictReader );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DictReader" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 32;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }

        tmp_called_name_10 = tmp_mvar_value_4;
        CHECK_OBJECT( var_item );
        tmp_tuple_element_2 = var_item;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_a2fe7522a8a3fde103f0109fa97f1383 );
        frame_220c4111ef7b8b1f35de00f8eef07407->m_frame.f_lineno = 32;
        tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = var_reader;
            var_reader = tmp_assign_source_19;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( var_reader );
        tmp_iter_arg_2 = var_reader;
        tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;
            type_description_1 = "ooooooooo";
            goto try_except_handler_9;
        }
        assert( tmp_for_loop_2__for_iterator == NULL );
        tmp_for_loop_2__for_iterator = tmp_assign_source_20;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_for_loop_2__for_iterator );
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_21 = ITERATOR_NEXT( tmp_next_source_2 );
        if ( tmp_assign_source_21 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_2;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooo";
                exception_lineno = 33;
                goto try_except_handler_10;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_21;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( tmp_for_loop_2__iter_value );
        tmp_assign_source_22 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_row;
            var_row = tmp_assign_source_22;
            Py_INCREF( var_row );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_subscript_result_2;
        int tmp_truth_name_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( var_row );
        tmp_subscribed_name_4 = var_row;
        tmp_subscript_name_4 = const_str_plain_MASTER;
        tmp_subscript_result_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_subscript_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_subscript_result_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscript_result_2 );

            exception_lineno = 34;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }
        tmp_and_left_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_subscript_result_2 );
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
        CHECK_OBJECT( var_row );
        tmp_subscribed_name_5 = var_row;
        tmp_subscript_name_5 = const_str_plain_MASTER;
        tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT( var_Data );
        tmp_tuple_element_3 = var_Data;
        tmp_dircall_arg1_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dircall_arg1_1, 0, tmp_tuple_element_3 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_compexpr_right_4 = impl___internal__$$$function_1__unpack_list( dir_call_args );
        }
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 34;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_4, tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "ooooooooo";
            goto try_except_handler_10;
        }
        tmp_and_right_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_6 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_6 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_subscript_name_7;
            PyObject *tmp_subscribed_name_8;
            PyObject *tmp_subscript_name_8;
            PyObject *tmp_ass_subscript_2;
            CHECK_OBJECT( var_row );
            tmp_subscribed_name_6 = var_row;
            tmp_subscript_name_6 = const_str_digest_0530b57cf37cdf3792c280658efab8bb;
            tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                type_description_1 = "ooooooooo";
                goto try_except_handler_10;
            }
            CHECK_OBJECT( var_Data );
            tmp_subscribed_name_7 = var_Data;
            CHECK_OBJECT( var_row );
            tmp_subscribed_name_8 = var_row;
            tmp_subscript_name_8 = const_str_plain_MASTER;
            tmp_subscript_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
            if ( tmp_subscript_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_2 );

                exception_lineno = 35;
                type_description_1 = "ooooooooo";
                goto try_except_handler_10;
            }
            tmp_ass_subscribed_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
            Py_DECREF( tmp_subscript_name_7 );
            if ( tmp_ass_subscribed_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_2 );

                exception_lineno = 35;
                type_description_1 = "ooooooooo";
                goto try_except_handler_10;
            }
            tmp_ass_subscript_2 = const_str_plain_Stock;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscribed_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 35;
                type_description_1 = "ooooooooo";
                goto try_except_handler_10;
            }
        }
        branch_no_6:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "ooooooooo";
        goto try_except_handler_10;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_9;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
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
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_220c4111ef7b8b1f35de00f8eef07407, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_220c4111ef7b8b1f35de00f8eef07407, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PyException_SetTraceback( exception_keeper_value_7, (PyObject *)exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_5 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooooooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_assign_source_23;
            tmp_assign_source_23 = NUITKA_BOOL_FALSE;
            tmp_with_2__indicator = tmp_assign_source_23;
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_name_11;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            CHECK_OBJECT( tmp_with_2__exit );
            tmp_called_name_11 = tmp_with_2__exit;
            tmp_args_element_name_7 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_8 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_9 = EXC_TRACEBACK(PyThreadState_GET());
            frame_220c4111ef7b8b1f35de00f8eef07407->m_frame.f_lineno = 31;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, call_args );
            }

            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 31;
                type_description_1 = "ooooooooo";
                goto try_except_handler_11;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 31;
                type_description_1 = "ooooooooo";
                goto try_except_handler_11;
            }
            tmp_condition_result_8 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_8;
            }
            else
            {
                goto branch_no_8;
            }
            branch_yes_8:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 31;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_220c4111ef7b8b1f35de00f8eef07407->m_frame) frame_220c4111ef7b8b1f35de00f8eef07407->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooooo";
            goto try_except_handler_11;
            branch_no_8:;
        }
        goto branch_end_7;
        branch_no_7:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 31;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_220c4111ef7b8b1f35de00f8eef07407->m_frame) frame_220c4111ef7b8b1f35de00f8eef07407->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooo";
        goto try_except_handler_11;
        branch_end_7:;
    }
    goto try_end_8;
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

    goto try_except_handler_8;
    // End of try:
    try_end_8:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_7;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( packages$stock_upload$$$function_1_stockUpload );
    return NULL;
    // End of try:
    try_end_7:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_9;
        nuitka_bool tmp_compexpr_left_6;
        nuitka_bool tmp_compexpr_right_6;
        assert( tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_6 = tmp_with_2__indicator;
        tmp_compexpr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_9 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            PyObject *tmp_called_name_12;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( tmp_with_2__exit );
            tmp_called_name_12 = tmp_with_2__exit;
            frame_220c4111ef7b8b1f35de00f8eef07407->m_frame.f_lineno = 31;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_12, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_9 );
                Py_XDECREF( exception_keeper_value_9 );
                Py_XDECREF( exception_keeper_tb_9 );

                exception_lineno = 31;
                type_description_1 = "ooooooooo";
                goto try_except_handler_7;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_9:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_7;
    // End of try:
    try_end_9:;
    {
        nuitka_bool tmp_condition_result_10;
        nuitka_bool tmp_compexpr_left_7;
        nuitka_bool tmp_compexpr_right_7;
        assert( tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_7 = tmp_with_2__indicator;
        tmp_compexpr_right_7 = NUITKA_BOOL_TRUE;
        tmp_condition_result_10 = ( tmp_compexpr_left_7 == tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            PyObject *tmp_called_name_13;
            PyObject *tmp_call_result_4;
            CHECK_OBJECT( tmp_with_2__exit );
            tmp_called_name_13 = tmp_with_2__exit;
            frame_220c4111ef7b8b1f35de00f8eef07407->m_frame.f_lineno = 31;
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_13, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 31;
                type_description_1 = "ooooooooo";
                goto try_except_handler_7;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_10:;
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_with_2__source );
    tmp_with_2__source = NULL;

    Py_XDECREF( tmp_with_2__enter );
    tmp_with_2__enter = NULL;

    Py_XDECREF( tmp_with_2__exit );
    tmp_with_2__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_with_2__source );
    Py_DECREF( tmp_with_2__source );
    tmp_with_2__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_2__enter );
    Py_DECREF( tmp_with_2__enter );
    tmp_with_2__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_2__exit );
    Py_DECREF( tmp_with_2__exit );
    tmp_with_2__exit = NULL;

    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain_variation_upload );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_variation_upload );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "variation_upload" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 37;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_5;
        CHECK_OBJECT( var_Data );
        tmp_args_element_name_10 = var_Data;
        tmp_args_element_name_11 = const_str_plain_stock;
        CHECK_OBJECT( var_column_names );
        tmp_args_element_name_12 = var_column_names;
        frame_220c4111ef7b8b1f35de00f8eef07407->m_frame.f_lineno = 37;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_24 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_writeCSV, call_args );
        }

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_output_path == NULL );
        var_output_path = tmp_assign_source_24;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_220c4111ef7b8b1f35de00f8eef07407 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_220c4111ef7b8b1f35de00f8eef07407 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_220c4111ef7b8b1f35de00f8eef07407, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_220c4111ef7b8b1f35de00f8eef07407->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_220c4111ef7b8b1f35de00f8eef07407, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_220c4111ef7b8b1f35de00f8eef07407,
        type_description_1,
        par_flatfile,
        par_stocklist,
        var_column_names,
        var_Data,
        var_item,
        var_reader,
        var_row,
        var_values,
        var_output_path
    );


    // Release cached frame.
    if ( frame_220c4111ef7b8b1f35de00f8eef07407 == cache_frame_220c4111ef7b8b1f35de00f8eef07407 )
    {
        Py_DECREF( frame_220c4111ef7b8b1f35de00f8eef07407 );
    }
    cache_frame_220c4111ef7b8b1f35de00f8eef07407 = NULL;

    assertFrameObject( frame_220c4111ef7b8b1f35de00f8eef07407 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( packages$stock_upload$$$function_1_stockUpload );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_flatfile );
    Py_DECREF( par_flatfile );
    par_flatfile = NULL;

    CHECK_OBJECT( (PyObject *)par_stocklist );
    Py_DECREF( par_stocklist );
    par_stocklist = NULL;

    CHECK_OBJECT( (PyObject *)var_column_names );
    Py_DECREF( var_column_names );
    var_column_names = NULL;

    CHECK_OBJECT( (PyObject *)var_Data );
    Py_DECREF( var_Data );
    var_Data = NULL;

    CHECK_OBJECT( (PyObject *)var_item );
    Py_DECREF( var_item );
    var_item = NULL;

    Py_XDECREF( var_reader );
    var_reader = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    Py_XDECREF( var_values );
    var_values = NULL;

    CHECK_OBJECT( (PyObject *)var_output_path );
    Py_DECREF( var_output_path );
    var_output_path = NULL;

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

    CHECK_OBJECT( (PyObject *)par_flatfile );
    Py_DECREF( par_flatfile );
    par_flatfile = NULL;

    CHECK_OBJECT( (PyObject *)par_stocklist );
    Py_DECREF( par_stocklist );
    par_stocklist = NULL;

    CHECK_OBJECT( (PyObject *)var_column_names );
    Py_DECREF( var_column_names );
    var_column_names = NULL;

    Py_XDECREF( var_Data );
    var_Data = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    Py_XDECREF( var_reader );
    var_reader = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    Py_XDECREF( var_values );
    var_values = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( packages$stock_upload$$$function_1_stockUpload );
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


static PyObject *impl_packages$stock_upload$$$function_2_priceUpload( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_flatfile = python_pars[ 0 ];
    PyObject *par_export = python_pars[ 1 ];
    PyObject *var_column_names = NULL;
    PyObject *var_price_id = NULL;
    PyObject *var_Data = NULL;
    PyObject *var_item = NULL;
    PyObject *var_reader = NULL;
    PyObject *var_row = NULL;
    PyObject *var_ident = NULL;
    PyObject *var_values = NULL;
    PyObject *var_output_path = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    struct Nuitka_FrameObject *frame_3c71f389074bb5e992bdee59232e9892;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
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
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    static struct Nuitka_FrameObject *cache_frame_3c71f389074bb5e992bdee59232e9892 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = LIST_COPY( const_list_d036b0b5c432f458da900bfbd67b2aa6_list );
        assert( var_column_names == NULL );
        var_column_names = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = LIST_COPY( const_list_str_plain_1_str_plain_4_list );
        assert( var_price_id == NULL );
        var_price_id = tmp_assign_source_2;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3c71f389074bb5e992bdee59232e9892, codeobj_3c71f389074bb5e992bdee59232e9892, module_packages$stock_upload, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3c71f389074bb5e992bdee59232e9892 = cache_frame_3c71f389074bb5e992bdee59232e9892;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3c71f389074bb5e992bdee59232e9892 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3c71f389074bb5e992bdee59232e9892 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain_SortedDict );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SortedDict );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SortedDict" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 47;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_3c71f389074bb5e992bdee59232e9892->m_frame.f_lineno = 47;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_Data == NULL );
        var_Data = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT( par_flatfile );
        tmp_open_filename_1 = par_flatfile;
        tmp_open_mode_1 = const_str_plain_r;
        tmp_assign_source_4 = BUILTIN_OPEN( tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__source == NULL );
        tmp_with_1__source = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_1 = tmp_with_1__source;
        tmp_called_name_2 = LOOKUP_SPECIAL( tmp_source_name_1, const_str_plain___enter__ );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        frame_3c71f389074bb5e992bdee59232e9892->m_frame.f_lineno = 49;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_2 = tmp_with_1__source;
        tmp_assign_source_6 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___exit__ );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_assign_source_7;
        tmp_assign_source_7 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT( tmp_with_1__enter );
        tmp_assign_source_8 = tmp_with_1__enter;
        assert( var_item == NULL );
        Py_INCREF( tmp_assign_source_8 );
        var_item = tmp_assign_source_8;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain_DictReader );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DictReader );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DictReader" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_name_3 = tmp_mvar_value_2;
        CHECK_OBJECT( var_item );
        tmp_tuple_element_1 = var_item;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_a2fe7522a8a3fde103f0109fa97f1383 );
        frame_3c71f389074bb5e992bdee59232e9892->m_frame.f_lineno = 50;
        tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 50;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        assert( var_reader == NULL );
        var_reader = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( var_reader );
        tmp_iter_arg_1 = var_reader;
        tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_10;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooo";
                exception_lineno = 51;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_11;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_12 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_row;
            var_row = tmp_assign_source_12;
            Py_INCREF( var_row );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_subscript_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_row );
        tmp_subscribed_name_1 = var_row;
        tmp_subscript_name_1 = const_str_plain_external_product_id;
        tmp_subscript_result_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_subscript_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 52;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_5;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_subscript_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_subscript_result_1 );

            exception_lineno = 52;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_subscript_result_1 );
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
            PyObject *tmp_assign_source_13;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( var_price_id );
            tmp_iter_arg_2 = var_price_id;
            tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 53;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_for_loop_2__for_iterator;
                tmp_for_loop_2__for_iterator = tmp_assign_source_13;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( tmp_for_loop_2__for_iterator );
            tmp_next_source_2 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_14 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooooooo";
                    exception_lineno = 53;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_14;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( tmp_for_loop_2__iter_value );
            tmp_assign_source_15 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_ident;
                var_ident = tmp_assign_source_15;
                Py_INCREF( var_ident );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_list_element_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            tmp_list_element_1 = const_str_empty;
            tmp_assign_source_16 = PyList_New( 4 );
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assign_source_16, 0, tmp_list_element_1 );
            tmp_list_element_1 = const_int_0;
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assign_source_16, 1, tmp_list_element_1 );
            CHECK_OBJECT( var_row );
            tmp_subscribed_name_2 = var_row;
            tmp_subscript_name_2 = const_str_plain_standard_price;
            tmp_list_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_list_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assign_source_16 );

                exception_lineno = 54;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_6;
            }
            PyList_SET_ITEM( tmp_assign_source_16, 2, tmp_list_element_1 );
            CHECK_OBJECT( var_ident );
            tmp_list_element_1 = var_ident;
            Py_INCREF( tmp_list_element_1 );
            PyList_SET_ITEM( tmp_assign_source_16, 3, tmp_list_element_1 );
            {
                PyObject *old = var_values;
                var_values = tmp_assign_source_16;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain_SortedDict );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SortedDict );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SortedDict" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 55;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_6;
            }

            tmp_called_name_4 = tmp_mvar_value_3;
            tmp_called_name_5 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT( var_column_names );
            tmp_args_element_name_2 = var_column_names;
            CHECK_OBJECT( var_values );
            tmp_args_element_name_3 = var_values;
            frame_3c71f389074bb5e992bdee59232e9892->m_frame.f_lineno = 55;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
            }

            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_6;
            }
            frame_3c71f389074bb5e992bdee59232e9892->m_frame.f_lineno = 55;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( var_Data );
            tmp_ass_subscribed_1 = var_Data;
            CHECK_OBJECT( var_row );
            tmp_subscribed_name_3 = var_row;
            tmp_subscript_name_3 = const_str_plain_item_sku;
            tmp_ass_subscript_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );

                exception_lineno = 55;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_6;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_6;
            }
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 53;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_6;
        }
        goto loop_start_2;
        loop_end_2:;
        goto try_end_1;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_5;
        // End of try:
        try_end_1:;
        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
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
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
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
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_3c71f389074bb5e992bdee59232e9892, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_3c71f389074bb5e992bdee59232e9892, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_7;
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
            nuitka_bool tmp_assign_source_17;
            tmp_assign_source_17 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_17;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_6 = tmp_with_1__exit;
            tmp_args_element_name_4 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_5 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_6 = EXC_TRACEBACK(PyThreadState_GET());
            frame_3c71f389074bb5e992bdee59232e9892->m_frame.f_lineno = 49;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_7;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_7;
            }
            tmp_condition_result_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                exception_lineno = 49;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_3c71f389074bb5e992bdee59232e9892->m_frame) frame_3c71f389074bb5e992bdee59232e9892->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_7;
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 49;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_3c71f389074bb5e992bdee59232e9892->m_frame) frame_3c71f389074bb5e992bdee59232e9892->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_7;
        branch_end_2:;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_3;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( packages$stock_upload$$$function_2_priceUpload );
    return NULL;
    // End of try:
    try_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_7;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_7 = tmp_with_1__exit;
            frame_3c71f389074bb5e992bdee59232e9892->m_frame.f_lineno = 49;
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_5 );
                Py_XDECREF( exception_keeper_value_5 );
                Py_XDECREF( exception_keeper_tb_5 );

                exception_lineno = 49;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_4:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_5:;
    {
        nuitka_bool tmp_condition_result_5;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_called_name_8;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_8 = tmp_with_1__exit;
            frame_3c71f389074bb5e992bdee59232e9892->m_frame.f_lineno = 49;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_5:;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_open_filename_2;
        PyObject *tmp_open_mode_2;
        CHECK_OBJECT( par_export );
        tmp_open_filename_2 = par_export;
        tmp_open_mode_2 = const_str_plain_r;
        tmp_assign_source_18 = BUILTIN_OPEN( tmp_open_filename_2, tmp_open_mode_2, NULL, NULL, NULL, NULL, NULL, NULL );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_8;
        }
        assert( tmp_with_2__source == NULL );
        tmp_with_2__source = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_9;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( tmp_with_2__source );
        tmp_source_name_3 = tmp_with_2__source;
        tmp_called_name_9 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___enter__ );
        if ( tmp_called_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_8;
        }
        frame_3c71f389074bb5e992bdee59232e9892->m_frame.f_lineno = 57;
        tmp_assign_source_19 = CALL_FUNCTION_NO_ARGS( tmp_called_name_9 );
        Py_DECREF( tmp_called_name_9 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_8;
        }
        assert( tmp_with_2__enter == NULL );
        tmp_with_2__enter = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( tmp_with_2__source );
        tmp_source_name_4 = tmp_with_2__source;
        tmp_assign_source_20 = LOOKUP_SPECIAL( tmp_source_name_4, const_str_plain___exit__ );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_8;
        }
        assert( tmp_with_2__exit == NULL );
        tmp_with_2__exit = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_assign_source_21;
        tmp_assign_source_21 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( tmp_with_2__enter );
        tmp_assign_source_22 = tmp_with_2__enter;
        {
            PyObject *old = var_item;
            assert( old != NULL );
            var_item = tmp_assign_source_22;
            Py_INCREF( var_item );
            Py_DECREF( old );
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_10;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain_DictReader );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DictReader );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DictReader" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 58;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }

        tmp_called_name_10 = tmp_mvar_value_4;
        CHECK_OBJECT( var_item );
        tmp_tuple_element_2 = var_item;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        tmp_kw_name_2 = PyDict_Copy( const_dict_a2fe7522a8a3fde103f0109fa97f1383 );
        frame_3c71f389074bb5e992bdee59232e9892->m_frame.f_lineno = 58;
        tmp_assign_source_23 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = var_reader;
            var_reader = tmp_assign_source_23;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT( var_reader );
        tmp_iter_arg_3 = var_reader;
        tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_3 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_10;
        }
        assert( tmp_for_loop_3__for_iterator == NULL );
        tmp_for_loop_3__for_iterator = tmp_assign_source_24;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT( tmp_for_loop_3__for_iterator );
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_25 = ITERATOR_NEXT( tmp_next_source_3 );
        if ( tmp_assign_source_25 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_3;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooooo";
                exception_lineno = 59;
                goto try_except_handler_11;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_25;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT( tmp_for_loop_3__iter_value );
        tmp_assign_source_26 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_row;
            var_row = tmp_assign_source_26;
            Py_INCREF( var_row );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_subscribed_name_4;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT( var_row );
        tmp_subscribed_name_4 = var_row;
        tmp_subscript_name_4 = const_str_plain_VariationNumber;
        tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT( var_Data );
        tmp_tuple_element_3 = var_Data;
        tmp_dircall_arg1_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_dircall_arg1_1, 0, tmp_tuple_element_3 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_compexpr_right_4 = impl___internal__$$$function_1__unpack_list( dir_call_args );
        }
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_4 );

            exception_lineno = 60;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_11;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_4, tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 60;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_6 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_subscript_name_7;
            PyObject *tmp_ass_subscript_2;
            CHECK_OBJECT( var_row );
            tmp_subscribed_name_5 = var_row;
            tmp_subscript_name_5 = const_str_plain_VariationID;
            tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_11;
            }
            CHECK_OBJECT( var_Data );
            tmp_subscribed_name_6 = var_Data;
            CHECK_OBJECT( var_row );
            tmp_subscribed_name_7 = var_row;
            tmp_subscript_name_7 = const_str_plain_VariationNumber;
            tmp_subscript_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
            if ( tmp_subscript_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_2 );

                exception_lineno = 61;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_11;
            }
            tmp_ass_subscribed_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            Py_DECREF( tmp_subscript_name_6 );
            if ( tmp_ass_subscribed_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_2 );

                exception_lineno = 61;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_11;
            }
            tmp_ass_subscript_2 = const_str_plain_VariationID;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscribed_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 61;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_11;
            }
        }
        branch_no_6:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_11;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_10;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    goto try_end_8;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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

    if ( exception_keeper_tb_8 == NULL )
    {
        exception_keeper_tb_8 = MAKE_TRACEBACK( frame_3c71f389074bb5e992bdee59232e9892, exception_keeper_lineno_8 );
    }
    else if ( exception_keeper_lineno_8 != 0 )
    {
        exception_keeper_tb_8 = ADD_TRACEBACK( exception_keeper_tb_8, frame_3c71f389074bb5e992bdee59232e9892, exception_keeper_lineno_8 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
    PyException_SetTraceback( exception_keeper_value_8, (PyObject *)exception_keeper_tb_8 );
    PUBLISH_EXCEPTION( &exception_keeper_type_8, &exception_keeper_value_8, &exception_keeper_tb_8 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_5 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_12;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            nuitka_bool tmp_assign_source_27;
            tmp_assign_source_27 = NUITKA_BOOL_FALSE;
            tmp_with_2__indicator = tmp_assign_source_27;
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_name_11;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            CHECK_OBJECT( tmp_with_2__exit );
            tmp_called_name_11 = tmp_with_2__exit;
            tmp_args_element_name_7 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_8 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_9 = EXC_TRACEBACK(PyThreadState_GET());
            frame_3c71f389074bb5e992bdee59232e9892->m_frame.f_lineno = 57;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, call_args );
            }

            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_12;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_12;
            }
            tmp_condition_result_8 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_8;
            }
            else
            {
                goto branch_no_8;
            }
            branch_yes_8:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 57;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_3c71f389074bb5e992bdee59232e9892->m_frame) frame_3c71f389074bb5e992bdee59232e9892->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_12;
            branch_no_8:;
        }
        goto branch_end_7;
        branch_no_7:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 57;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_3c71f389074bb5e992bdee59232e9892->m_frame) frame_3c71f389074bb5e992bdee59232e9892->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_12;
        branch_end_7:;
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_9;
    // End of try:
    try_end_9:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto try_end_8;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( packages$stock_upload$$$function_2_priceUpload );
    return NULL;
    // End of try:
    try_end_8:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_9;
        nuitka_bool tmp_compexpr_left_6;
        nuitka_bool tmp_compexpr_right_6;
        assert( tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_6 = tmp_with_2__indicator;
        tmp_compexpr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_9 = ( tmp_compexpr_left_6 == tmp_compexpr_right_6 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            PyObject *tmp_called_name_12;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( tmp_with_2__exit );
            tmp_called_name_12 = tmp_with_2__exit;
            frame_3c71f389074bb5e992bdee59232e9892->m_frame.f_lineno = 57;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_12, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_10 );
                Py_XDECREF( exception_keeper_value_10 );
                Py_XDECREF( exception_keeper_tb_10 );

                exception_lineno = 57;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_8;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_9:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_8;
    // End of try:
    try_end_10:;
    {
        nuitka_bool tmp_condition_result_10;
        nuitka_bool tmp_compexpr_left_7;
        nuitka_bool tmp_compexpr_right_7;
        assert( tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_7 = tmp_with_2__indicator;
        tmp_compexpr_right_7 = NUITKA_BOOL_TRUE;
        tmp_condition_result_10 = ( tmp_compexpr_left_7 == tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            PyObject *tmp_called_name_13;
            PyObject *tmp_call_result_4;
            CHECK_OBJECT( tmp_with_2__exit );
            tmp_called_name_13 = tmp_with_2__exit;
            frame_3c71f389074bb5e992bdee59232e9892->m_frame.f_lineno = 57;
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_13, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 57;
                type_description_1 = "ooooooooooo";
                goto try_except_handler_8;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_10:;
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_with_2__source );
    tmp_with_2__source = NULL;

    Py_XDECREF( tmp_with_2__enter );
    tmp_with_2__enter = NULL;

    Py_XDECREF( tmp_with_2__exit );
    tmp_with_2__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_with_2__source );
    Py_DECREF( tmp_with_2__source );
    tmp_with_2__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_2__enter );
    Py_DECREF( tmp_with_2__enter );
    tmp_with_2__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_2__exit );
    Py_DECREF( tmp_with_2__exit );
    tmp_with_2__exit = NULL;

    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain_variation_upload );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_variation_upload );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "variation_upload" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 63;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_5;
        CHECK_OBJECT( var_Data );
        tmp_args_element_name_10 = var_Data;
        tmp_args_element_name_11 = const_str_plain_price;
        CHECK_OBJECT( var_column_names );
        tmp_args_element_name_12 = var_column_names;
        frame_3c71f389074bb5e992bdee59232e9892->m_frame.f_lineno = 63;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_28 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_writeCSV, call_args );
        }

        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 63;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_output_path == NULL );
        var_output_path = tmp_assign_source_28;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3c71f389074bb5e992bdee59232e9892 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3c71f389074bb5e992bdee59232e9892 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3c71f389074bb5e992bdee59232e9892, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3c71f389074bb5e992bdee59232e9892->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3c71f389074bb5e992bdee59232e9892, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3c71f389074bb5e992bdee59232e9892,
        type_description_1,
        par_flatfile,
        par_export,
        var_column_names,
        var_price_id,
        var_Data,
        var_item,
        var_reader,
        var_row,
        var_ident,
        var_values,
        var_output_path
    );


    // Release cached frame.
    if ( frame_3c71f389074bb5e992bdee59232e9892 == cache_frame_3c71f389074bb5e992bdee59232e9892 )
    {
        Py_DECREF( frame_3c71f389074bb5e992bdee59232e9892 );
    }
    cache_frame_3c71f389074bb5e992bdee59232e9892 = NULL;

    assertFrameObject( frame_3c71f389074bb5e992bdee59232e9892 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( packages$stock_upload$$$function_2_priceUpload );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_flatfile );
    Py_DECREF( par_flatfile );
    par_flatfile = NULL;

    CHECK_OBJECT( (PyObject *)par_export );
    Py_DECREF( par_export );
    par_export = NULL;

    CHECK_OBJECT( (PyObject *)var_column_names );
    Py_DECREF( var_column_names );
    var_column_names = NULL;

    CHECK_OBJECT( (PyObject *)var_price_id );
    Py_DECREF( var_price_id );
    var_price_id = NULL;

    CHECK_OBJECT( (PyObject *)var_Data );
    Py_DECREF( var_Data );
    var_Data = NULL;

    CHECK_OBJECT( (PyObject *)var_item );
    Py_DECREF( var_item );
    var_item = NULL;

    Py_XDECREF( var_reader );
    var_reader = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    Py_XDECREF( var_ident );
    var_ident = NULL;

    Py_XDECREF( var_values );
    var_values = NULL;

    CHECK_OBJECT( (PyObject *)var_output_path );
    Py_DECREF( var_output_path );
    var_output_path = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)par_flatfile );
    Py_DECREF( par_flatfile );
    par_flatfile = NULL;

    CHECK_OBJECT( (PyObject *)par_export );
    Py_DECREF( par_export );
    par_export = NULL;

    CHECK_OBJECT( (PyObject *)var_column_names );
    Py_DECREF( var_column_names );
    var_column_names = NULL;

    CHECK_OBJECT( (PyObject *)var_price_id );
    Py_DECREF( var_price_id );
    var_price_id = NULL;

    Py_XDECREF( var_Data );
    var_Data = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    Py_XDECREF( var_reader );
    var_reader = NULL;

    Py_XDECREF( var_row );
    var_row = NULL;

    Py_XDECREF( var_ident );
    var_ident = NULL;

    Py_XDECREF( var_values );
    var_values = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( packages$stock_upload$$$function_2_priceUpload );
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



static PyObject *MAKE_FUNCTION_packages$stock_upload$$$function_1_stockUpload(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_packages$stock_upload$$$function_1_stockUpload,
        const_str_plain_stockUpload,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_220c4111ef7b8b1f35de00f8eef07407,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_packages$stock_upload,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_packages$stock_upload$$$function_2_priceUpload(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_packages$stock_upload$$$function_2_priceUpload,
        const_str_plain_priceUpload,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3c71f389074bb5e992bdee59232e9892,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_packages$stock_upload,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_packages$stock_upload =
{
    PyModuleDef_HEAD_INIT,
    "packages.stock_upload",
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

MOD_INIT_DECL( packages$stock_upload )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_packages$stock_upload );
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
    puts("packages.stock_upload: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("packages.stock_upload: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("packages.stock_upload: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initpackages$stock_upload" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_packages$stock_upload = Py_InitModule4(
        "packages.stock_upload",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_packages$stock_upload = PyModule_Create( &mdef_packages$stock_upload );
#endif

    moduledict_packages$stock_upload = MODULE_DICT( module_packages$stock_upload );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_packages$stock_upload,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_packages$stock_upload,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_packages$stock_upload,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_packages$stock_upload,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_packages$stock_upload );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_ebef4616ee13a2b67e2f69bc28f5ad1c, module_packages$stock_upload );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_f2def95859e7051e1a0c092afdfb8428;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_f2def95859e7051e1a0c092afdfb8428 = MAKE_MODULE_FRAME( codeobj_f2def95859e7051e1a0c092afdfb8428, module_packages$stock_upload );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_f2def95859e7051e1a0c092afdfb8428 );
    assert( Py_REFCNT( frame_f2def95859e7051e1a0c092afdfb8428 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_csv;
        tmp_globals_name_1 = (PyObject *)moduledict_packages$stock_upload;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_DictReader_str_plain_DictWriter_tuple;
        tmp_level_name_1 = const_int_0;
        frame_f2def95859e7051e1a0c092afdfb8428->m_frame.f_lineno = 3;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_DictReader );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain_DictReader, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_DictWriter );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain_DictWriter, tmp_assign_source_6 );
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_e399ba4554180f37de594a6743234f17;
        tmp_globals_name_2 = (PyObject *)moduledict_packages$stock_upload;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_isfile_tuple;
        tmp_level_name_2 = const_int_0;
        frame_f2def95859e7051e1a0c092afdfb8428->m_frame.f_lineno = 4;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_isfile );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain_isfile, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_packages;
        tmp_globals_name_3 = (PyObject *)moduledict_packages$stock_upload;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_variation_upload_tuple;
        tmp_level_name_3 = const_int_0;
        frame_f2def95859e7051e1a0c092afdfb8428->m_frame.f_lineno = 5;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_variation_upload );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain_variation_upload, tmp_assign_source_8 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_sortedcontainers;
        tmp_globals_name_4 = (PyObject *)moduledict_packages$stock_upload;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_SortedDict_tuple;
        tmp_level_name_4 = const_int_0;
        frame_f2def95859e7051e1a0c092afdfb8428->m_frame.f_lineno = 7;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_SortedDict );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain_SortedDict, tmp_assign_source_9 );
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_f2def95859e7051e1a0c092afdfb8428, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_f2def95859e7051e1a0c092afdfb8428, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    // Tried code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto try_except_handler_3;
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
            tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_print );
            assert( tmp_called_name_1 != NULL );
            frame_f2def95859e7051e1a0c092afdfb8428->m_frame.f_lineno = 9;
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_b75e9ef8a0531a535d7e58a0cba37323_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 9;

                goto try_except_handler_3;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_raise_type_1;
            tmp_raise_type_1 = PyExc_ImportError;
            exception_type = tmp_raise_type_1;
            Py_INCREF( tmp_raise_type_1 );
            exception_lineno = 10;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );

            goto try_except_handler_3;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 6;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_f2def95859e7051e1a0c092afdfb8428->m_frame) frame_f2def95859e7051e1a0c092afdfb8428->m_frame.f_lineno = exception_tb->tb_lineno;

        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( packages$stock_upload );
    return MOD_RETURN_VALUE( NULL );
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
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2def95859e7051e1a0c092afdfb8428 );
#endif
    popFrameStack();

    assertFrameObject( frame_f2def95859e7051e1a0c092afdfb8428 );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f2def95859e7051e1a0c092afdfb8428 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f2def95859e7051e1a0c092afdfb8428, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f2def95859e7051e1a0c092afdfb8428->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f2def95859e7051e1a0c092afdfb8428, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_FUNCTION_packages$stock_upload$$$function_1_stockUpload(  );



        UPDATE_STRING_DICT1( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain_stockUpload, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = MAKE_FUNCTION_packages$stock_upload$$$function_2_priceUpload(  );



        UPDATE_STRING_DICT1( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain_priceUpload, tmp_assign_source_11 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_packages$stock_upload, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_packages$stock_upload );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
