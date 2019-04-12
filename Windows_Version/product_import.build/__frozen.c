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
        { "_collections_abc", 6556736, 28910 },
        { "_compression", 6585646, 4092 },
        { "_weakrefset", 6589738, 7430 },
        { "abc", 6597168, 6419 },
        { "base64", 6603587, 16956 },
        { "bz2", 6620543, 11149 },
        { "codecs", 6631692, 33866 },
        { "collections", 146075, -46578 },
        { "collections.abc", 6556736, 28910 },
        { "copyreg", 6665558, 4212 },
        { "dis", 6669770, 15173 },
        { "encodings", 6684943, -3915 },
        { "encodings.aliases", 6688858, 6264 },
        { "encodings.ascii", 6695122, 1852 },
        { "encodings.base64_codec", 6696974, 2391 },
        { "encodings.big5", 6699365, 1412 },
        { "encodings.big5hkscs", 6700777, 1422 },
        { "encodings.bz2_codec", 6702199, 3253 },
        { "encodings.charmap", 6705452, 2905 },
        { "encodings.cp037", 6708357, 2397 },
        { "encodings.cp1006", 6710754, 2473 },
        { "encodings.cp1026", 6713227, 2401 },
        { "encodings.cp1125", 6715628, 8094 },
        { "encodings.cp1140", 6723722, 2387 },
        { "encodings.cp1250", 6726109, 2424 },
        { "encodings.cp1251", 6728533, 2421 },
        { "encodings.cp1252", 6730954, 2424 },
        { "encodings.cp1253", 6733378, 2437 },
        { "encodings.cp1254", 6735815, 2426 },
        { "encodings.cp1255", 6738241, 2445 },
        { "encodings.cp1256", 6740686, 2423 },
        { "encodings.cp1257", 6743109, 2431 },
        { "encodings.cp1258", 6745540, 2429 },
        { "encodings.cp273", 6747969, 2383 },
        { "encodings.cp424", 6750352, 2427 },
        { "encodings.cp437", 6752779, 7811 },
        { "encodings.cp500", 6760590, 2397 },
        { "encodings.cp720", 6762987, 2494 },
        { "encodings.cp737", 6765481, 8133 },
        { "encodings.cp775", 6773614, 7841 },
        { "encodings.cp850", 6781455, 7472 },
        { "encodings.cp852", 6788927, 7849 },
        { "encodings.cp855", 6796776, 8102 },
        { "encodings.cp856", 6804878, 2459 },
        { "encodings.cp857", 6807337, 7454 },
        { "encodings.cp858", 6814791, 7442 },
        { "encodings.cp860", 6822233, 7790 },
        { "encodings.cp861", 6830023, 7805 },
        { "encodings.cp862", 6837828, 7994 },
        { "encodings.cp863", 6845822, 7805 },
        { "encodings.cp864", 6853627, 7951 },
        { "encodings.cp865", 6861578, 7805 },
        { "encodings.cp866", 6869383, 8138 },
        { "encodings.cp869", 6877521, 7831 },
        { "encodings.cp874", 6885352, 2525 },
        { "encodings.cp875", 6887877, 2394 },
        { "encodings.cp932", 6890271, 1414 },
        { "encodings.cp949", 6891685, 1414 },
        { "encodings.cp950", 6893099, 1414 },
        { "encodings.euc_jis_2004", 6894513, 1428 },
        { "encodings.euc_jisx0213", 6895941, 1428 },
        { "encodings.euc_jp", 6897369, 1416 },
        { "encodings.euc_kr", 6898785, 1416 },
        { "encodings.gb18030", 6900201, 1418 },
        { "encodings.gb2312", 6901619, 1416 },
        { "encodings.gbk", 6903035, 1410 },
        { "encodings.hex_codec", 6904445, 2378 },
        { "encodings.hp_roman8", 6906823, 2598 },
        { "encodings.hz", 6909421, 1408 },
        { "encodings.idna", 6910829, 5692 },
        { "encodings.iso2022_jp", 6916521, 1429 },
        { "encodings.iso2022_jp_1", 6917950, 1433 },
        { "encodings.iso2022_jp_2", 6919383, 1433 },
        { "encodings.iso2022_jp_2004", 6920816, 1439 },
        { "encodings.iso2022_jp_3", 6922255, 1433 },
        { "encodings.iso2022_jp_ext", 6923688, 1437 },
        { "encodings.iso2022_kr", 6925125, 1429 },
        { "encodings.iso8859_1", 6926554, 2396 },
        { "encodings.iso8859_10", 6928950, 2401 },
        { "encodings.iso8859_11", 6931351, 2495 },
        { "encodings.iso8859_13", 6933846, 2404 },
        { "encodings.iso8859_14", 6936250, 2422 },
        { "encodings.iso8859_15", 6938672, 2401 },
        { "encodings.iso8859_16", 6941073, 2403 },
        { "encodings.iso8859_2", 6943476, 2396 },
        { "encodings.iso8859_3", 6945872, 2403 },
        { "encodings.iso8859_4", 6948275, 2396 },
        { "encodings.iso8859_5", 6950671, 2397 },
        { "encodings.iso8859_6", 6953068, 2441 },
        { "encodings.iso8859_7", 6955509, 2404 },
        { "encodings.iso8859_8", 6957913, 2435 },
        { "encodings.iso8859_9", 6960348, 2396 },
        { "encodings.johab", 6962744, 1414 },
        { "encodings.koi8_r", 6964158, 2448 },
        { "encodings.koi8_t", 6966606, 2359 },
        { "encodings.koi8_u", 6968965, 2434 },
        { "encodings.kz1048", 6971399, 2411 },
        { "encodings.latin_1", 6973810, 1864 },
        { "encodings.mac_arabic", 6975674, 7705 },
        { "encodings.mac_centeuro", 6983379, 2435 },
        { "encodings.mac_croatian", 6985814, 2443 },
        { "encodings.mac_cyrillic", 6988257, 2433 },
        { "encodings.mac_farsi", 6990690, 2377 },
        { "encodings.mac_greek", 6993067, 2417 },
        { "encodings.mac_iceland", 6995484, 2436 },
        { "encodings.mac_latin2", 6997920, 2577 },
        { "encodings.mac_roman", 7000497, 2434 },
        { "encodings.mac_romanian", 7002931, 2444 },
        { "encodings.mac_turkish", 7005375, 2437 },
        { "encodings.palmos", 7007812, 2424 },
        { "encodings.ptcp154", 7010236, 2518 },
        { "encodings.punycode", 7012754, 6385 },
        { "encodings.quopri_codec", 7019139, 2411 },
        { "encodings.raw_unicode_escape", 7021550, 1737 },
        { "encodings.rot_13", 7023287, 2997 },
        { "encodings.shift_jis", 7026284, 1422 },
        { "encodings.shift_jis_2004", 7027706, 1432 },
        { "encodings.shift_jisx0213", 7029138, 1432 },
        { "encodings.tis_620", 7030570, 2486 },
        { "encodings.undefined", 7033056, 2131 },
        { "encodings.unicode_escape", 7035187, 1717 },
        { "encodings.unicode_internal", 7036904, 1727 },
        { "encodings.utf_16", 7038631, 4801 },
        { "encodings.utf_16_be", 7043432, 1602 },
        { "encodings.utf_16_le", 7045034, 1602 },
        { "encodings.utf_32", 7046636, 4694 },
        { "encodings.utf_32_be", 7051330, 1495 },
        { "encodings.utf_32_le", 7052825, 1495 },
        { "encodings.utf_7", 7054320, 1523 },
        { "encodings.utf_8", 7055843, 1582 },
        { "encodings.utf_8_sig", 7057425, 4484 },
        { "encodings.uu_codec", 7061909, 3193 },
        { "encodings.zlib_codec", 7065102, 3091 },
        { "enum", 7068193, 24230 },
        { "functools", 328478, 23917 },
        { "genericpath", 7092423, 3716 },
        { "heapq", 7096139, 14330 },
        { "importlib", 373090, -3700 },
        { "importlib._bootstrap", 7110469, 29146 },
        { "importlib._bootstrap_external", 7139615, 41786 },
        { "importlib.machinery", 7181401, 940 },
        { "inspect", 376790, 80000 },
        { "io", 456790, 3377 },
        { "keyword", 7182341, 1777 },
        { "linecache", 7184118, 3757 },
        { "locale", 7187875, 34523 },
        { "opcode", 7222398, 5346 },
        { "operator", 522693, 13868 },
        { "os", 536561, 29661 },
        { "posixpath", 582550, 10398 },
        { "quopri", 7227744, 5739 },
        { "re", 592948, 13772 },
        { "reprlib", 7233483, 5318 },
        { "sre_compile", 7238801, 15171 },
        { "sre_constants", 7253972, 6259 },
        { "sre_parse", 7260231, 21325 },
        { "stat", 7281556, 3841 },
        { "stringprep", 7285397, 10000 },
        { "struct", 7295397, 302 },
        { "threading", 655695, 37303 },
        { "token", 7295699, 3567 },
        { "tokenize", 7299266, 17799 },
        { "traceback", 884379, 19591 },
        { "types", 903970, 8942 },
        { "warnings", 936079, 13917 },
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
