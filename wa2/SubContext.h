#pragma once

#include <map>
#include <string>
#include <vector>

#include "TextRenderer.h"
#include "SubParser.h"

#define GET_SCRIPT_LINE(n) (n >> 16)
#define GET_SCRIPT_FILE(n) (n & 0xFFFF)
#define TRIGGER_FORM(n1, n2) ((n1 << 16) | n2)

/*
    Context object for the subtitling system.
    This is intended to be used as a singleton, initialized
    as soon as the D3D9 hooks are in place in dllmain.cpp.
*/

struct SubContext {
    TextRenderer renderer;
    LPDIRECT3DDEVICE9 device;

    ULONGLONG startTick;
    ULONGLONG waitTicks;

    ID3DXFont* font;
    DWORD fontColor;

    unsigned int subTrackIndex;
    unsigned int subIndex;

    // mappings of line:trackList[i]
    std::vector<subtitle_t> tracks;

    bool playing;

    SubContext();
    SubContext(LPDIRECT3DDEVICE9 device);
    void checkForTrigger();
    void displayCurrentSubtitle();
    void update(); // called every frame by d3d9 hook
    void updateSubs();

    void drawText(int x, int y, char* text);
    void drawDebugMenu();
};