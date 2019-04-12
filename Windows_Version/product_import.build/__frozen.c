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
        { "_collections_abc", 6425097, 28950 },
        { "_compression", 6454047, 4132 },
        { "_weakrefset", 6458179, 7470 },
        { "abc", 6465649, 6459 },
        { "base64", 6472108, 16996 },
        { "bz2", 6489104, 11189 },
        { "codecs", 6500293, 33906 },
        { "collections", 72583, -46618 },
        { "collections.abc", 6425097, 28950 },
        { "copyreg", 6534199, 4252 },
        { "dis", 6538451, 15213 },
        { "encodings", 6553664, -3955 },
        { "encodings.aliases", 6557619, 6304 },
        { "encodings.ascii", 6563923, 1892 },
        { "encodings.base64_codec", 6565815, 2431 },
        { "encodings.big5", 6568246, 1452 },
        { "encodings.big5hkscs", 6569698, 1462 },
        { "encodings.bz2_codec", 6571160, 3293 },
        { "encodings.charmap", 6574453, 2945 },
        { "encodings.cp037", 6577398, 2437 },
        { "encodings.cp1006", 6579835, 2513 },
        { "encodings.cp1026", 6582348, 2441 },
        { "encodings.cp1125", 6584789, 8134 },
        { "encodings.cp1140", 6592923, 2427 },
        { "encodings.cp1250", 6595350, 2464 },
        { "encodings.cp1251", 6597814, 2461 },
        { "encodings.cp1252", 6600275, 2464 },
        { "encodings.cp1253", 6602739, 2477 },
        { "encodings.cp1254", 6605216, 2466 },
        { "encodings.cp1255", 6607682, 2485 },
        { "encodings.cp1256", 6610167, 2463 },
        { "encodings.cp1257", 6612630, 2471 },
        { "encodings.cp1258", 6615101, 2469 },
        { "encodings.cp273", 6617570, 2423 },
        { "encodings.cp424", 6619993, 2467 },
        { "encodings.cp437", 6622460, 7851 },
        { "encodings.cp500", 6630311, 2437 },
        { "encodings.cp65001", 6632748, 1691 },
        { "encodings.cp720", 6634439, 2534 },
        { "encodings.cp737", 6636973, 8173 },
        { "encodings.cp775", 6645146, 7881 },
        { "encodings.cp850", 6653027, 7512 },
        { "encodings.cp852", 6660539, 7889 },
        { "encodings.cp855", 6668428, 8142 },
        { "encodings.cp856", 6676570, 2499 },
        { "encodings.cp857", 6679069, 7494 },
        { "encodings.cp858", 6686563, 7482 },
        { "encodings.cp860", 6694045, 7830 },
        { "encodings.cp861", 6701875, 7845 },
        { "encodings.cp862", 6709720, 8034 },
        { "encodings.cp863", 6717754, 7845 },
        { "encodings.cp864", 6725599, 7991 },
        { "encodings.cp865", 6733590, 7845 },
        { "encodings.cp866", 6741435, 8178 },
        { "encodings.cp869", 6749613, 7871 },
        { "encodings.cp874", 6757484, 2565 },
        { "encodings.cp875", 6760049, 2434 },
        { "encodings.cp932", 6762483, 1454 },
        { "encodings.cp949", 6763937, 1454 },
        { "encodings.cp950", 6765391, 1454 },
        { "encodings.euc_jis_2004", 6766845, 1468 },
        { "encodings.euc_jisx0213", 6768313, 1468 },
        { "encodings.euc_jp", 6769781, 1456 },
        { "encodings.euc_kr", 6771237, 1456 },
        { "encodings.gb18030", 6772693, 1458 },
        { "encodings.gb2312", 6774151, 1456 },
        { "encodings.gbk", 6775607, 1450 },
        { "encodings.hex_codec", 6777057, 2418 },
        { "encodings.hp_roman8", 6779475, 2638 },
        { "encodings.hz", 6782113, 1448 },
        { "encodings.idna", 6783561, 5732 },
        { "encodings.iso2022_jp", 6789293, 1469 },
        { "encodings.iso2022_jp_1", 6790762, 1473 },
        { "encodings.iso2022_jp_2", 6792235, 1473 },
        { "encodings.iso2022_jp_2004", 6793708, 1479 },
        { "encodings.iso2022_jp_3", 6795187, 1473 },
        { "encodings.iso2022_jp_ext", 6796660, 1477 },
        { "encodings.iso2022_kr", 6798137, 1469 },
        { "encodings.iso8859_1", 6799606, 2436 },
        { "encodings.iso8859_10", 6802042, 2441 },
        { "encodings.iso8859_11", 6804483, 2535 },
        { "encodings.iso8859_13", 6807018, 2444 },
        { "encodings.iso8859_14", 6809462, 2462 },
        { "encodings.iso8859_15", 6811924, 2441 },
        { "encodings.iso8859_16", 6814365, 2443 },
        { "encodings.iso8859_2", 6816808, 2436 },
        { "encodings.iso8859_3", 6819244, 2443 },
        { "encodings.iso8859_4", 6821687, 2436 },
        { "encodings.iso8859_5", 6824123, 2437 },
        { "encodings.iso8859_6", 6826560, 2481 },
        { "encodings.iso8859_7", 6829041, 2444 },
        { "encodings.iso8859_8", 6831485, 2475 },
        { "encodings.iso8859_9", 6833960, 2436 },
        { "encodings.johab", 6836396, 1454 },
        { "encodings.koi8_r", 6837850, 2488 },
        { "encodings.koi8_t", 6840338, 2399 },
        { "encodings.koi8_u", 6842737, 2474 },
        { "encodings.kz1048", 6845211, 2451 },
        { "encodings.latin_1", 6847662, 1904 },
        { "encodings.mac_arabic", 6849566, 7745 },
        { "encodings.mac_centeuro", 6857311, 2475 },
        { "encodings.mac_croatian", 6859786, 2483 },
        { "encodings.mac_cyrillic", 6862269, 2473 },
        { "encodings.mac_farsi", 6864742, 2417 },
        { "encodings.mac_greek", 6867159, 2457 },
        { "encodings.mac_iceland", 6869616, 2476 },
        { "encodings.mac_latin2", 6872092, 2617 },
        { "encodings.mac_roman", 6874709, 2474 },
        { "encodings.mac_romanian", 6877183, 2484 },
        { "encodings.mac_turkish", 6879667, 2477 },
        { "encodings.mbcs", 6882144, 1703 },
        { "encodings.oem", 6883847, 1516 },
        { "encodings.palmos", 6885363, 2464 },
        { "encodings.ptcp154", 6887827, 2558 },
        { "encodings.punycode", 6890385, 6425 },
        { "encodings.quopri_codec", 6896810, 2451 },
        { "encodings.raw_unicode_escape", 6899261, 1777 },
        { "encodings.rot_13", 6901038, 3037 },
        { "encodings.shift_jis", 6904075, 1462 },
        { "encodings.shift_jis_2004", 6905537, 1472 },
        { "encodings.shift_jisx0213", 6907009, 1472 },
        { "encodings.tis_620", 6908481, 2526 },
        { "encodings.undefined", 6911007, 2171 },
        { "encodings.unicode_escape", 6913178, 1757 },
        { "encodings.unicode_internal", 6914935, 1767 },
        { "encodings.utf_16", 6916702, 4841 },
        { "encodings.utf_16_be", 6921543, 1642 },
        { "encodings.utf_16_le", 6923185, 1642 },
        { "encodings.utf_32", 6924827, 4734 },
        { "encodings.utf_32_be", 6929561, 1535 },
        { "encodings.utf_32_le", 6931096, 1535 },
        { "encodings.utf_7", 6932631, 1563 },
        { "encodings.utf_8", 6934194, 1622 },
        { "encodings.utf_8_sig", 6935816, 4524 },
        { "encodings.uu_codec", 6940340, 3233 },
        { "encodings.zlib_codec", 6943573, 3131 },
        { "enum", 6946704, 24270 },
        { "functools", 131041, 23957 },
        { "genericpath", 6970974, 3756 },
        { "heapq", 6974730, 14370 },
        { "importlib", 6989100, -3740 },
        { "importlib._bootstrap", 6992840, 29186 },
        { "importlib._bootstrap_external", 7022026, 41826 },
        { "importlib.machinery", 7063852, 980 },
        { "inspect", 7064832, 80040 },
        { "io", 7144872, 3417 },
        { "keyword", 7148289, 1817 },
        { "linecache", 7150106, 3797 },
        { "locale", 7153903, 34563 },
        { "ntpath", 154998, 13012 },
        { "opcode", 7188466, 5386 },
        { "operator", 168010, 13908 },
        { "os", 181918, 29701 },
        { "quopri", 7193852, 5779 },
        { "re", 211619, 13812 },
        { "reprlib", 7199631, 5358 },
        { "sre_compile", 7204989, 15211 },
        { "sre_constants", 7220200, 6299 },
        { "sre_parse", 7226499, 21365 },
        { "stat", 7247864, 3881 },
        { "stringprep", 7251745, 10040 },
        { "struct", 7261785, 342 },
        { "threading", 7262127, 37343 },
        { "token", 7299470, 3607 },
        { "tokenize", 7303077, 17839 },
        { "traceback", 443646, 19631 },
        { "types", 7320916, 8982 },
        { "warnings", 463277, 13957 },
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
