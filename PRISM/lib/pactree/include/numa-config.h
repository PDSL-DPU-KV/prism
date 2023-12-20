enum {
    NUM_SOCKET = 2,
    NUM_PHYSICAL_CPU_PER_SOCKET = 20,
    SMT_LEVEL = 2,
};

const int OS_CPU_ID[NUM_SOCKET][NUM_PHYSICAL_CPU_PER_SOCKET][SMT_LEVEL] = {
    { /* socket id: 0 */
        { /* physical cpu id: 0 */
          0, 40,     },
        { /* physical cpu id: 1 */
          1, 41,     },
        { /* physical cpu id: 2 */
          2, 42,     },
        { /* physical cpu id: 3 */
          3, 43,     },
        { /* physical cpu id: 4 */
          4, 44,     },
        { /* physical cpu id: 8 */
          5, 45,     },
        { /* physical cpu id: 9 */
          6, 46,     },
        { /* physical cpu id: 10 */
          7, 47,     },
        { /* physical cpu id: 11 */
          8, 48,     },
        { /* physical cpu id: 12 */
          9, 49,     },
        { /* physical cpu id: 16 */
          10, 50,     },
        { /* physical cpu id: 17 */
          11, 51,     },
        { /* physical cpu id: 18 */
          12, 52,     },
        { /* physical cpu id: 19 */
          13, 53,     },
        { /* physical cpu id: 20 */
          14, 54,     },
        { /* physical cpu id: 24 */
          15, 55,     },
        { /* physical cpu id: 25 */
          16, 56,     },
        { /* physical cpu id: 26 */
          17, 57,     },
        { /* physical cpu id: 27 */
          18, 58,     },
        { /* physical cpu id: 28 */
          19, 59,     },
    },
    { /* socket id: 1 */
        { /* physical cpu id: 0 */
          20, 60,     },
        { /* physical cpu id: 1 */
          21, 61,     },
        { /* physical cpu id: 2 */
          22, 62,     },
        { /* physical cpu id: 3 */
          23, 63,     },
        { /* physical cpu id: 4 */
          24, 64,     },
        { /* physical cpu id: 8 */
          25, 65,     },
        { /* physical cpu id: 9 */
          26, 66,     },
        { /* physical cpu id: 10 */
          27, 67,     },
        { /* physical cpu id: 11 */
          28, 68,     },
        { /* physical cpu id: 12 */
          29, 69,     },
        { /* physical cpu id: 16 */
          30, 70,     },
        { /* physical cpu id: 17 */
          31, 71,     },
        { /* physical cpu id: 18 */
          32, 72,     },
        { /* physical cpu id: 19 */
          33, 73,     },
        { /* physical cpu id: 20 */
          34, 74,     },
        { /* physical cpu id: 24 */
          35, 75,     },
        { /* physical cpu id: 25 */
          36, 76,     },
        { /* physical cpu id: 26 */
          37, 77,     },
        { /* physical cpu id: 27 */
          38, 78,     },
        { /* physical cpu id: 28 */
          39, 79,     },
    },
};
