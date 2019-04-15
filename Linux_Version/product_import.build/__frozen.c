// This provides the frozen (compiled bytecode) files that are included if
// any.
#include <Python.h>

#include "nuitka/constants_blob.h"

// Blob from which modules are unstreamed.
#define stream_data constant_bin

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    ssize_t start;
    int size;
};

void copyFrozenModulesTo( struct _frozen *destination )
{
    struct frozen_desc frozen_modules[] = {
        { "_collections_abc", 6557093, 28910 },
        { "_compression", 6586003, 4092 },
        { "_weakrefset", 6590095, 7430 },
        { "abc", 6597525, 6419 },
        { "base64", 6603944, 16956 },
        { "bz2", 6620900, 11149 },
        { "codecs", 6632049, 33866 },
        { "collections", 146432, -46578 },
        { "collections.abc", 6557093, 28910 },
        { "copyreg", 6665915, 4212 },
        { "dis", 6670127, 15173 },
        { "encodings", 6685300, -3915 },
        { "encodings.aliases", 6689215, 6264 },
        { "encodings.ascii", 6695479, 1852 },
        { "encodings.base64_codec", 6697331, 2391 },
        { "encodings.big5", 6699722, 1412 },
        { "encodings.big5hkscs", 6701134, 1422 },
        { "encodings.bz2_codec", 6702556, 3253 },
        { "encodings.charmap", 6705809, 2905 },
        { "encodings.cp037", 6708714, 2397 },
        { "encodings.cp1006", 6711111, 2473 },
        { "encodings.cp1026", 6713584, 2401 },
        { "encodings.cp1125", 6715985, 8094 },
        { "encodings.cp1140", 6724079, 2387 },
        { "encodings.cp1250", 6726466, 2424 },
        { "encodings.cp1251", 6728890, 2421 },
        { "encodings.cp1252", 6731311, 2424 },
        { "encodings.cp1253", 6733735, 2437 },
        { "encodings.cp1254", 6736172, 2426 },
        { "encodings.cp1255", 6738598, 2445 },
        { "encodings.cp1256", 6741043, 2423 },
        { "encodings.cp1257", 6743466, 2431 },
        { "encodings.cp1258", 6745897, 2429 },
        { "encodings.cp273", 6748326, 2383 },
        { "encodings.cp424", 6750709, 2427 },
        { "encodings.cp437", 6753136, 7811 },
        { "encodings.cp500", 6760947, 2397 },
        { "encodings.cp720", 6763344, 2494 },
        { "encodings.cp737", 6765838, 8133 },
        { "encodings.cp775", 6773971, 7841 },
        { "encodings.cp850", 6781812, 7472 },
        { "encodings.cp852", 6789284, 7849 },
        { "encodings.cp855", 6797133, 8102 },
        { "encodings.cp856", 6805235, 2459 },
        { "encodings.cp857", 6807694, 7454 },
        { "encodings.cp858", 6815148, 7442 },
        { "encodings.cp860", 6822590, 7790 },
        { "encodings.cp861", 6830380, 7805 },
        { "encodings.cp862", 6838185, 7994 },
        { "encodings.cp863", 6846179, 7805 },
        { "encodings.cp864", 6853984, 7951 },
        { "encodings.cp865", 6861935, 7805 },
        { "encodings.cp866", 6869740, 8138 },
        { "encodings.cp869", 6877878, 7831 },
        { "encodings.cp874", 6885709, 2525 },
        { "encodings.cp875", 6888234, 2394 },
        { "encodings.cp932", 6890628, 1414 },
        { "encodings.cp949", 6892042, 1414 },
        { "encodings.cp950", 6893456, 1414 },
        { "encodings.euc_jis_2004", 6894870, 1428 },
        { "encodings.euc_jisx0213", 6896298, 1428 },
        { "encodings.euc_jp", 6897726, 1416 },
        { "encodings.euc_kr", 6899142, 1416 },
        { "encodings.gb18030", 6900558, 1418 },
        { "encodings.gb2312", 6901976, 1416 },
        { "encodings.gbk", 6903392, 1410 },
        { "encodings.hex_codec", 6904802, 2378 },
        { "encodings.hp_roman8", 6907180, 2598 },
        { "encodings.hz", 6909778, 1408 },
        { "encodings.idna", 6911186, 5692 },
        { "encodings.iso2022_jp", 6916878, 1429 },
        { "encodings.iso2022_jp_1", 6918307, 1433 },
        { "encodings.iso2022_jp_2", 6919740, 1433 },
        { "encodings.iso2022_jp_2004", 6921173, 1439 },
        { "encodings.iso2022_jp_3", 6922612, 1433 },
        { "encodings.iso2022_jp_ext", 6924045, 1437 },
        { "encodings.iso2022_kr", 6925482, 1429 },
        { "encodings.iso8859_1", 6926911, 2396 },
        { "encodings.iso8859_10", 6929307, 2401 },
        { "encodings.iso8859_11", 6931708, 2495 },
        { "encodings.iso8859_13", 6934203, 2404 },
        { "encodings.iso8859_14", 6936607, 2422 },
        { "encodings.iso8859_15", 6939029, 2401 },
        { "encodings.iso8859_16", 6941430, 2403 },
        { "encodings.iso8859_2", 6943833, 2396 },
        { "encodings.iso8859_3", 6946229, 2403 },
        { "encodings.iso8859_4", 6948632, 2396 },
        { "encodings.iso8859_5", 6951028, 2397 },
        { "encodings.iso8859_6", 6953425, 2441 },
        { "encodings.iso8859_7", 6955866, 2404 },
        { "encodings.iso8859_8", 6958270, 2435 },
        { "encodings.iso8859_9", 6960705, 2396 },
        { "encodings.johab", 6963101, 1414 },
        { "encodings.koi8_r", 6964515, 2448 },
        { "encodings.koi8_t", 6966963, 2359 },
        { "encodings.koi8_u", 6969322, 2434 },
        { "encodings.kz1048", 6971756, 2411 },
        { "encodings.latin_1", 6974167, 1864 },
        { "encodings.mac_arabic", 6976031, 7705 },
        { "encodings.mac_centeuro", 6983736, 2435 },
        { "encodings.mac_croatian", 6986171, 2443 },
        { "encodings.mac_cyrillic", 6988614, 2433 },
        { "encodings.mac_farsi", 6991047, 2377 },
        { "encodings.mac_greek", 6993424, 2417 },
        { "encodings.mac_iceland", 6995841, 2436 },
        { "encodings.mac_latin2", 6998277, 2577 },
        { "encodings.mac_roman", 7000854, 2434 },
        { "encodings.mac_romanian", 7003288, 2444 },
        { "encodings.mac_turkish", 7005732, 2437 },
        { "encodings.palmos", 7008169, 2424 },
        { "encodings.ptcp154", 7010593, 2518 },
        { "encodings.punycode", 7013111, 6385 },
        { "encodings.quopri_codec", 7019496, 2411 },
        { "encodings.raw_unicode_escape", 7021907, 1737 },
        { "encodings.rot_13", 7023644, 2997 },
        { "encodings.shift_jis", 7026641, 1422 },
        { "encodings.shift_jis_2004", 7028063, 1432 },
        { "encodings.shift_jisx0213", 7029495, 1432 },
        { "encodings.tis_620", 7030927, 2486 },
        { "encodings.undefined", 7033413, 2131 },
        { "encodings.unicode_escape", 7035544, 1717 },
        { "encodings.unicode_internal", 7037261, 1727 },
        { "encodings.utf_16", 7038988, 4801 },
        { "encodings.utf_16_be", 7043789, 1602 },
        { "encodings.utf_16_le", 7045391, 1602 },
        { "encodings.utf_32", 7046993, 4694 },
        { "encodings.utf_32_be", 7051687, 1495 },
        { "encodings.utf_32_le", 7053182, 1495 },
        { "encodings.utf_7", 7054677, 1523 },
        { "encodings.utf_8", 7056200, 1582 },
        { "encodings.utf_8_sig", 7057782, 4484 },
        { "encodings.uu_codec", 7062266, 3193 },
        { "encodings.zlib_codec", 7065459, 3091 },
        { "enum", 7068550, 24230 },
        { "functools", 328835, 23917 },
        { "genericpath", 7092780, 3716 },
        { "heapq", 7096496, 14330 },
        { "importlib", 373447, -3700 },
        { "importlib._bootstrap", 7110826, 29146 },
        { "importlib._bootstrap_external", 7139972, 41786 },
        { "importlib.machinery", 7181758, 940 },
        { "inspect", 377147, 80000 },
        { "io", 457147, 3377 },
        { "keyword", 7182698, 1777 },
        { "linecache", 7184475, 3757 },
        { "locale", 7188232, 34523 },
        { "opcode", 7222755, 5346 },
        { "operator", 523050, 13868 },
        { "os", 536918, 29661 },
        { "posixpath", 582907, 10398 },
        { "quopri", 7228101, 5739 },
        { "re", 593305, 13772 },
        { "reprlib", 7233840, 5318 },
        { "sre_compile", 7239158, 15171 },
        { "sre_constants", 7254329, 6259 },
        { "sre_parse", 7260588, 21325 },
        { "stat", 7281913, 3841 },
        { "stringprep", 7285754, 10000 },
        { "struct", 7295754, 302 },
        { "threading", 656052, 37303 },
        { "token", 7296056, 3567 },
        { "tokenize", 7299623, 17799 },
        { "traceback", 884736, 19591 },
        { "types", 904327, 8942 },
        { "warnings", 936436, 13917 },
        { NULL, 0, 0 }
    };

    struct frozen_desc *current = frozen_modules;

    for(;;)
    {
        destination->name = (char *)current->name;
        destination->code = (unsigned char *)&constant_bin[ current->start ];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}
