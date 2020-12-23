#pragma once

// generated using https://evanw.github.io/font-texture-generator/
// then heavily modified to accomodate my renderer

#define FONT_FILE_SIZE 44175
#define FONT_FILE_WIDTH 512
#define FONT_FILE_HEIGHT 256
#define FONT_CHAR_COUNT 95

extern "C" {
    typedef struct Character {
        int codePoint, x, y, width, height, topAdjust;
    } Character;


    static Character fontAtlas[] = {
      {' ', 339, 141, 19, 3, 0},
      {'!', 118, 108, 15, 33, 0},
      {'"', 183, 141, 19, 19, 0},
      {'#', 434, 0, 28, 35, 0},
      {'$', 133, 0, 26, 40, 0},
      {'%', 243, 0, 36, 35, 0},
      {'&', 375, 0, 30, 35, 0},
      {'\'', 217, 141, 14, 19, 0},
      {'(', 81, 0, 19, 41, 0},
      {')', 100, 0, 19, 41, 0},
      {'*', 162, 141, 21, 21, 0},
      {'+', 85, 141, 26, 26, 0},
      {',', 202, 141, 15, 19, 20},
      {'-', 275, 141, 19, 14, 6},
      {'.', 294, 141, 15, 14, 20},
      {'/', 462, 0, 19, 35, 0},
      {'0', 29, 41, 26, 34, 0},
      {'1', 99, 108, 19, 33, 0},
      {'2', 474, 75, 26, 33, 0},
      {'3', 55, 41, 26, 34, 0},
      {'4', 420, 75, 27, 33, 0},
      {'5', 81, 41, 26, 34, 0},
      {'6', 107, 41, 26, 34, 0},
      {'7', 0, 108, 26, 33, 0},
      {'8', 133, 41, 26, 34, 0},
      {'9', 159, 41, 26, 34, 0},
      {':', 70, 141, 15, 27, 0},
      {';', 174, 108, 15, 32, 0},
      {'<', 406, 108, 26, 27, 0},
      {'=', 136, 141, 26, 21, 0},
      {'>', 432, 108, 26, 27, 0},
      {'?', 185, 41, 26, 34, 0},
      {'@', 0, 0, 41, 41, 0},
      {'A', 465, 41, 33, 33, 0},
      {'B', 336, 75, 28, 33, 0},
      {'C', 344, 0, 31, 35, 0},
      {'D', 160, 75, 30, 33, 0},
      {'E', 364, 75, 28, 33, 0},
      {'F', 447, 75, 27, 33, 0},
      {'G', 312, 0, 32, 35, 0},
      {'H', 220, 75, 29, 33, 0},
      {'I', 133, 108, 15, 33, 0},
      {'J', 362, 41, 24, 34, 0},
      {'K', 190, 75, 30, 33, 0},
      {'L', 26, 108, 25, 33, 0},
      {'M', 0, 75, 33, 33, 0},
      {'N', 249, 75, 29, 33, 0},
      {'O', 279, 0, 33, 35, 0},
      {'P', 392, 75, 28, 33, 0},
      {'Q', 210, 0, 33, 36, 0},
      {'R', 129, 75, 31, 33, 0},
      {'S', 405, 0, 29, 35, 0},
      {'T', 278, 75, 29, 33, 0},
      {'U', 0, 41, 29, 34, 0},
      {'V', 33, 75, 32, 33, 0},
      {'W', 425, 41, 40, 33, 0},
      {'X', 65, 75, 32, 33, 0},
      {'Y', 97, 75, 32, 33, 0},
      {'Z', 307, 75, 29, 33, 0},
      {'[', 159, 0, 17, 40, 0},
      {'\\', 481, 0, 19, 35, 0},
      {']', 176, 0, 17, 40, 0},
      {'^', 111, 141, 25, 24, 0},
      {'_', 309, 141, 30, 13, 0},
      {'`', 258, 141, 17, 16, 0}, // ---
      {'a', 189, 108, 26, 28, 6},
      {'b', 237, 41, 25, 34, 0},
      {'c', 267, 108, 25, 28, 6},
      {'d', 262, 41, 25, 34, 0},
      {'e', 215, 108, 26, 28, 6},
      {'f', 386, 41, 20, 34, 0},
      {'g', 287, 41, 25, 34, 6},
      {'h', 51, 108, 24, 33, 0},
      {'i', 148, 108, 13, 33, 0},
      {'j', 193, 0, 17, 40, 0},
      {'k', 75, 108, 24, 33, 0},
      {'l', 161, 108, 13, 33, 0},
      {'m', 340, 108, 33, 27, 6},
      {'n', 26, 141, 24, 27, 6},
      {'o', 241, 108, 26, 28, 6},
      {'p', 312, 41, 25, 34, 6},
      {'q', 337, 41, 25, 34, 6},
      {'r', 50, 141, 20, 27, 6},
      {'s', 292, 108, 24, 28, 6},
      {'t', 406, 41, 19, 34, 0},
      {'u', 316, 108, 24, 28, 6},
      {'v', 458, 108, 26, 27, 6},
      {'w', 373, 108, 33, 27, 6},
      {'x', 484, 108, 26, 27, 6},
      {'y', 211, 41, 26, 34, 6},
      {'z', 0, 141, 26, 27, 6},
    };
}