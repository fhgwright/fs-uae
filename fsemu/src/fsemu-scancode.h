#ifndef FSEMU_SCANCODE_H_
#define FSEMU_SCANCODE_H_

#ifdef __cplusplus
extern "C" {
#endif

// FIXME: Not needed? See fsemu-keyboard.h

// These correspond 1:1 to SDL scan codes, so for the SDL2 input driver, we
// can simply assign the scancode directly without lookup table.
typedef enum {
    FSEMU_SCANCODE_UNKNOWN = 0,

    FSEMU_SCANCODE_A = 4,
    FSEMU_SCANCODE_B = 5,
    FSEMU_SCANCODE_C = 6,
    FSEMU_SCANCODE_D = 7,
    FSEMU_SCANCODE_E = 8,
    FSEMU_SCANCODE_F = 9,
    FSEMU_SCANCODE_G = 10,
    FSEMU_SCANCODE_H = 11,
    FSEMU_SCANCODE_I = 12,
    FSEMU_SCANCODE_J = 13,
    FSEMU_SCANCODE_K = 14,
    FSEMU_SCANCODE_L = 15,
    FSEMU_SCANCODE_M = 16,
    FSEMU_SCANCODE_N = 17,
    FSEMU_SCANCODE_O = 18,
    FSEMU_SCANCODE_P = 19,
    FSEMU_SCANCODE_Q = 20,
    FSEMU_SCANCODE_R = 21,
    FSEMU_SCANCODE_S = 22,
    FSEMU_SCANCODE_T = 23,
    FSEMU_SCANCODE_U = 24,
    FSEMU_SCANCODE_V = 25,
    FSEMU_SCANCODE_W = 26,
    FSEMU_SCANCODE_X = 27,
    FSEMU_SCANCODE_Y = 28,
    FSEMU_SCANCODE_Z = 29,
    FSEMU_SCANCODE_1 = 30,
    FSEMU_SCANCODE_2 = 31,
    FSEMU_SCANCODE_3 = 32,
    FSEMU_SCANCODE_4 = 33,
    FSEMU_SCANCODE_5 = 34,
    FSEMU_SCANCODE_6 = 35,
    FSEMU_SCANCODE_7 = 36,
    FSEMU_SCANCODE_8 = 37,
    FSEMU_SCANCODE_9 = 38,
    FSEMU_SCANCODE_0 = 39,
    FSEMU_SCANCODE_RETURN = 40,
    FSEMU_SCANCODE_ESCAPE = 41,
    FSEMU_SCANCODE_BACKSPACE = 42,
    FSEMU_SCANCODE_TAB = 43,
    FSEMU_SCANCODE_SPACE = 44,
    FSEMU_SCANCODE_MINUS = 45,
    FSEMU_SCANCODE_EQUALS = 46,
    FSEMU_SCANCODE_LEFTBRACKET = 47,
    FSEMU_SCANCODE_RIGHTBRACKET = 48,
    FSEMU_SCANCODE_BACKSLASH = 49,
    FSEMU_SCANCODE_NONUSHASH = 50,
    FSEMU_SCANCODE_SEMICOLON = 51,
    FSEMU_SCANCODE_APOSTROPHE = 52,
    FSEMU_SCANCODE_GRAVE = 53,
    FSEMU_SCANCODE_COMMA = 54,
    FSEMU_SCANCODE_PERIOD = 55,
    FSEMU_SCANCODE_SLASH = 56,
    FSEMU_SCANCODE_CAPSLOCK = 57,
    FSEMU_SCANCODE_F1 = 58,
    FSEMU_SCANCODE_F2 = 59,
    FSEMU_SCANCODE_F3 = 60,
    FSEMU_SCANCODE_F4 = 61,
    FSEMU_SCANCODE_F5 = 62,
    FSEMU_SCANCODE_F6 = 63,
    FSEMU_SCANCODE_F7 = 64,
    FSEMU_SCANCODE_F8 = 65,
    FSEMU_SCANCODE_F9 = 66,
    FSEMU_SCANCODE_F10 = 67,
    FSEMU_SCANCODE_F11 = 68,
    FSEMU_SCANCODE_F12 = 69,
    FSEMU_SCANCODE_PRINTSCREEN = 70,
    FSEMU_SCANCODE_SCROLLLOCK = 71,
    FSEMU_SCANCODE_PAUSE = 72,
    FSEMU_SCANCODE_INSERT = 73,
    FSEMU_SCANCODE_HOME = 74,
    FSEMU_SCANCODE_PAGEUP = 75,
    FSEMU_SCANCODE_DELETE = 76,
    FSEMU_SCANCODE_END = 77,
    FSEMU_SCANCODE_PAGEDOWN = 78,
    FSEMU_SCANCODE_RIGHT = 79,
    FSEMU_SCANCODE_LEFT = 80,
    FSEMU_SCANCODE_DOWN = 81,
    FSEMU_SCANCODE_UP = 82,
    FSEMU_SCANCODE_NUMLOCKCLEAR = 83,
    FSEMU_SCANCODE_KP_DIVIDE = 84,
    FSEMU_SCANCODE_KP_MULTIPLY = 85,
    FSEMU_SCANCODE_KP_MINUS = 86,
    FSEMU_SCANCODE_KP_PLUS = 87,
    FSEMU_SCANCODE_KP_ENTER = 88,
    FSEMU_SCANCODE_KP_1 = 89,
    FSEMU_SCANCODE_KP_2 = 90,
    FSEMU_SCANCODE_KP_3 = 91,
    FSEMU_SCANCODE_KP_4 = 92,
    FSEMU_SCANCODE_KP_5 = 93,
    FSEMU_SCANCODE_KP_6 = 94,
    FSEMU_SCANCODE_KP_7 = 95,
    FSEMU_SCANCODE_KP_8 = 96,
    FSEMU_SCANCODE_KP_9 = 97,
    FSEMU_SCANCODE_KP_0 = 98,
    FSEMU_SCANCODE_KP_PERIOD = 99,
    FSEMU_SCANCODE_NONUSBACKSLASH = 100,
    FSEMU_SCANCODE_APPLICATION = 101,
    FSEMU_SCANCODE_POWER = 102,
    FSEMU_SCANCODE_KP_EQUALS = 103,
    FSEMU_SCANCODE_F13 = 104,
    FSEMU_SCANCODE_F14 = 105,
    FSEMU_SCANCODE_F15 = 106,
    FSEMU_SCANCODE_F16 = 107,
    FSEMU_SCANCODE_F17 = 108,
    FSEMU_SCANCODE_F18 = 109,
    FSEMU_SCANCODE_F19 = 110,
    FSEMU_SCANCODE_F20 = 111,
    FSEMU_SCANCODE_F21 = 112,
    FSEMU_SCANCODE_F22 = 113,
    FSEMU_SCANCODE_F23 = 114,
    FSEMU_SCANCODE_F24 = 115,
    FSEMU_SCANCODE_EXECUTE = 116,
    FSEMU_SCANCODE_HELP = 117,
    FSEMU_SCANCODE_MENU = 118,
    FSEMU_SCANCODE_SELECT = 119,
    FSEMU_SCANCODE_STOP = 120,
    FSEMU_SCANCODE_AGAIN = 121,
    FSEMU_SCANCODE_UNDO = 122,
    FSEMU_SCANCODE_CUT = 123,
    FSEMU_SCANCODE_COPY = 124,
    FSEMU_SCANCODE_PASTE = 125,
    FSEMU_SCANCODE_FIND = 126,
    FSEMU_SCANCODE_MUTE = 127,
    FSEMU_SCANCODE_VOLUMEUP = 128,
    FSEMU_SCANCODE_VOLUMEDOWN = 129,

    FSEMU_SCANCODE_KP_COMMA = 133,
    FSEMU_SCANCODE_KP_EQUALSAS400 = 134,
    FSEMU_SCANCODE_INTERNATIONAL1 = 135,
    FSEMU_SCANCODE_INTERNATIONAL2 = 136,
    FSEMU_SCANCODE_INTERNATIONAL3 = 137,
    FSEMU_SCANCODE_INTERNATIONAL4 = 138,
    FSEMU_SCANCODE_INTERNATIONAL5 = 139,
    FSEMU_SCANCODE_INTERNATIONAL6 = 140,
    FSEMU_SCANCODE_INTERNATIONAL7 = 141,
    FSEMU_SCANCODE_INTERNATIONAL8 = 142,
    FSEMU_SCANCODE_INTERNATIONAL9 = 143,
    FSEMU_SCANCODE_LANG1 = 144,
    FSEMU_SCANCODE_LANG2 = 145,
    FSEMU_SCANCODE_LANG3 = 146,
    FSEMU_SCANCODE_LANG4 = 147,
    FSEMU_SCANCODE_LANG5 = 148,
    FSEMU_SCANCODE_LANG6 = 149,
    FSEMU_SCANCODE_LANG7 = 150,
    FSEMU_SCANCODE_LANG8 = 151,
    FSEMU_SCANCODE_LANG9 = 152,
    FSEMU_SCANCODE_ALTERASE = 153,
    FSEMU_SCANCODE_SYSREQ = 154,
    FSEMU_SCANCODE_CANCEL = 155,
    FSEMU_SCANCODE_CLEAR = 156,
    FSEMU_SCANCODE_PRIOR = 157,
    FSEMU_SCANCODE_RETURN2 = 158,
    FSEMU_SCANCODE_SEPARATOR = 159,
    FSEMU_SCANCODE_OUT = 160,
    FSEMU_SCANCODE_OPER = 161,
    FSEMU_SCANCODE_CLEARAGAIN = 162,
    FSEMU_SCANCODE_CRSEL = 163,
    FSEMU_SCANCODE_EXSEL = 164,

    FSEMU_SCANCODE_KP_00 = 176,
    FSEMU_SCANCODE_KP_000 = 177,
    FSEMU_SCANCODE_THOUSANDSSEPARATOR = 178,
    FSEMU_SCANCODE_DECIMALSEPARATOR = 179,
    FSEMU_SCANCODE_CURRENCYUNIT = 180,
    FSEMU_SCANCODE_CURRENCYSUBUNIT = 181,
    FSEMU_SCANCODE_KP_LEFTPAREN = 182,
    FSEMU_SCANCODE_KP_RIGHTPAREN = 183,
    FSEMU_SCANCODE_KP_LEFTBRACE = 184,
    FSEMU_SCANCODE_KP_RIGHTBRACE = 185,
    FSEMU_SCANCODE_KP_TAB = 186,
    FSEMU_SCANCODE_KP_BACKSPACE = 187,
    FSEMU_SCANCODE_KP_A = 188,
    FSEMU_SCANCODE_KP_B = 189,
    FSEMU_SCANCODE_KP_C = 190,
    FSEMU_SCANCODE_KP_D = 191,
    FSEMU_SCANCODE_KP_E = 192,
    FSEMU_SCANCODE_KP_F = 193,
    FSEMU_SCANCODE_KP_XOR = 194,
    FSEMU_SCANCODE_KP_POWER = 195,
    FSEMU_SCANCODE_KP_PERCENT = 196,
    FSEMU_SCANCODE_KP_LESS = 197,
    FSEMU_SCANCODE_KP_GREATER = 198,
    FSEMU_SCANCODE_KP_AMPERSAND = 199,
    FSEMU_SCANCODE_KP_DBLAMPERSAND = 200,
    FSEMU_SCANCODE_KP_VERTICALBAR = 201,
    FSEMU_SCANCODE_KP_DBLVERTICALBAR = 202,
    FSEMU_SCANCODE_KP_COLON = 203,
    FSEMU_SCANCODE_KP_HASH = 204,
    FSEMU_SCANCODE_KP_SPACE = 205,
    FSEMU_SCANCODE_KP_AT = 206,
    FSEMU_SCANCODE_KP_EXCLAM = 207,
    FSEMU_SCANCODE_KP_MEMSTORE = 208,
    FSEMU_SCANCODE_KP_MEMRECALL = 209,
    FSEMU_SCANCODE_KP_MEMCLEAR = 210,
    FSEMU_SCANCODE_KP_MEMADD = 211,
    FSEMU_SCANCODE_KP_MEMSUBTRACT = 212,
    FSEMU_SCANCODE_KP_MEMMULTIPLY = 213,
    FSEMU_SCANCODE_KP_MEMDIVIDE = 214,
    FSEMU_SCANCODE_KP_PLUSMINUS = 215,
    FSEMU_SCANCODE_KP_CLEAR = 216,
    FSEMU_SCANCODE_KP_CLEARENTRY = 217,
    FSEMU_SCANCODE_KP_BINARY = 218,
    FSEMU_SCANCODE_KP_OCTAL = 219,
    FSEMU_SCANCODE_KP_DECIMAL = 220,
    FSEMU_SCANCODE_KP_HEXADECIMAL = 221,

    FSEMU_SCANCODE_LCTRL = 224,
    FSEMU_SCANCODE_LSHIFT = 225,
    FSEMU_SCANCODE_LALT = 226,
    FSEMU_SCANCODE_LGUI = 227,
    FSEMU_SCANCODE_RCTRL = 228,
    FSEMU_SCANCODE_RSHIFT = 229,
    FSEMU_SCANCODE_RALT = 230,
    FSEMU_SCANCODE_RGUI = 231,

    FSEMU_SCANCODE_MODE = 257,
    FSEMU_SCANCODE_AUDIONEXT = 258,
    FSEMU_SCANCODE_AUDIOPREV = 259,
    FSEMU_SCANCODE_AUDIOSTOP = 260,
    FSEMU_SCANCODE_AUDIOPLAY = 261,
    FSEMU_SCANCODE_AUDIOMUTE = 262,
    FSEMU_SCANCODE_MEDIASELECT = 263,
    FSEMU_SCANCODE_WWW = 264,
    FSEMU_SCANCODE_MAIL = 265,
    FSEMU_SCANCODE_CALCULATOR = 266,
    FSEMU_SCANCODE_COMPUTER = 267,
    FSEMU_SCANCODE_AC_SEARCH = 268,
    FSEMU_SCANCODE_AC_HOME = 269,
    FSEMU_SCANCODE_AC_BACK = 270,
    FSEMU_SCANCODE_AC_FORWARD = 271,
    FSEMU_SCANCODE_AC_STOP = 272,
    FSEMU_SCANCODE_AC_REFRESH = 273,
    FSEMU_SCANCODE_AC_BOOKMARKS = 274,
    FSEMU_SCANCODE_BRIGHTNESSDOWN = 275,
    FSEMU_SCANCODE_BRIGHTNESSUP = 276,
    FSEMU_SCANCODE_DISPLAYSWITCH = 277,
    FSEMU_SCANCODE_KBDILLUMTOGGLE = 278,
    FSEMU_SCANCODE_KBDILLUMDOWN = 279,
    FSEMU_SCANCODE_KBDILLUMUP = 280,
    FSEMU_SCANCODE_EJECT = 281,
    FSEMU_SCANCODE_SLEEP = 282,
    FSEMU_SCANCODE_APP1 = 283,
    FSEMU_SCANCODE_APP2 = 284,
    FSEMU_SCANCODE_AUDIOREWIND = 285,
    FSEMU_SCANCODE_AUDIOFASTFORWARD = 286,

    // SDL_NUM_SCANCODES is 512 at the time of writing, but we don't need to
    // waste space for unsupported keys, so FSEMU_NUM_SCANCODES is set as low
    // as possible. Just remember to check that SDL scancode is less than
    // FSEMU_NUM_SCANCODES before passing on.
    FSEMU_NUM_SCANCODES
} fsemu_scancode_t;

#ifdef __cplusplus
}
#endif

#endif  // FSEMU_SCANCODE_H_
