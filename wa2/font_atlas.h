#pragma once

// generated using https://evanw.github.io/font-texture-generator/
// then heavily modified to accomodate my renderer

#define FONT_FILE_SIZE 42099
#define FONT_FILE_WIDTH 458
#define FONT_FILE_HEIGHT 159
#define FONT_CHAR_COUNT 95

extern "C" {
    typedef struct Character {
        int codePoint, x, y, width, height, topAdjust;
    } Character;

    // contiguous ascii table (offset by 0x20)
    static Character fontAtlas[] = {
      {' ',17,150,19,3, 0},
      {'!',19,68,15,30, 0},
      {'"',355,127,17,15, 0},
      {'#',252,98,23,26, 0},
      {'$',209,0,24,35, 0},
      {'%',75,38,32,30, 0},
      {'&',138,38,30,30, 0},
      {'\'',372,127,11,15, 0},
      {'(',169,0,20,36, 0},
      {')',189,0,20,36, 0},
      {'*',278,127,19,18, 0},
      {'+',48,127,23,23, 0},
      {',',319,127,13,16, 20},
      {'-',0,150,17,9, 12},
      {'.',419,127,11,11, 20},
      {'/',28,0,25,37, 0},
      {'0',275,98,24,25, 0},
      {'1',364,98,18,24, 6},
      {'2',299,98,23,24, 0},
      {'3',336,38,24,30, 0},
      {'4',360,38,24,30, 0},
      {'5',80,98,25,29, 0},
      {'6',408,38,23,30, 0},
      {'7',105,98,25,29, 0},
      {'8',384,38,24,30, 0},
      {'9',431,38,23,30, 0},
      {':',222,127,14,23, 6},
      {';',220,98,15,28, 6},
      {'<',322,98,21,24, 0},
      {'=',332,127,23,15, 0},
      {'>',343,98,21,24, 0},
      {'?',0,68,19,30, 0},
      {'@',276,0,31,33, 0},
      {'A',206,68,30,29, 0},
      {'B',353,68,28,29, 0},
      {'C',256,38,28,30, 0},
      {'D',175,68,31,29, 0},
      {'E',266,68,29,29, 0},
      {'F',295,68,29,29, 0},
      {'G',198,38,29,30, 0},
      {'H',74,68,35,29, 0},
      {'I',176,98,22,29, 2},
      {'J',284,38,26,30, 0},
      {'K',143,68,32,29, 0},
      {'L',54,98,26,29, 0},
      {'M',34,68,40,29, 0},
      {'N',39,38,36,30, 0},
      {'O',227,38,29,30, 0},
      {'P',381,68,28,29, 0},
      {'Q',96,0,29,36, 0},
      {'R',324,68,29,29, 0},
      {'S',310,38,26,30, 0},
      {'T',0,98,27,29, 0},
      {'U',107,38,31,30, 0},
      {'V',168,38,30,30, 0},
      {'W',0,38,39,30, 0},
      {'X',109,68,34,29, 0},
      {'Y',409,68,28,29, 0},
      {'Z',236,68,30,29, 0},
      {'[',233,0,22,35, 0}, // this is a double entries (see below) for padding
      {'\\',75,0,12,37, 0},
      {']',255,0,21,35, 0}, // this is a double entries (see below) for padding
      {'^',297,127,22,17, 0},
      {'_',430,127,28,9, 0},
      {'`',383,127,13,14, 0},
      {'a',71,127,23,23, 8},
      {'b',378,0,22,32, 0},
      {'c',162,127,20,23, 8},
      {'d',307,0,24,32, -1},
      {'e',182,127,20,23, 8},
      {'f',0,0,28,38, 0},
      {'g',130,98,23,29, 8},
      {'h',331,0,24,32, -2},
      {'i',415,0,15,31, 0},
      {'j',53,0,22,37, 0},
      {'k',355,0,23,32, 0},
      {'l',400,0,15,32, -1},
      {'m',382,98,33,23, 8},
      {'n',94,127,23,23, 8},
      {'o',140,127,22,23, 8},
      {'p',27,98,27,29, 8},
      {'q',198,98,22,29, 8},
      {'r',258,127,20,22, 8},
      {'s',202,127,20,23, 8},
      {'t',235,98,17,27, 3},
      {'u',0,127,24,23, 8},
      {'v',117,127,23,23, 8},
      {'w',415,98,32,23, 8},
      {'x',24,127,24,23, 8},
      {'y',153,98,23,29, 8},
      {'z',236,127,22,22, 8},
      {'[',125,0,22,36, 0},
      {'|',87,0,9,37, 0},
      {']',147,0,22,36, 0},
      {'~',396,127,23,12, 0}
    };
}