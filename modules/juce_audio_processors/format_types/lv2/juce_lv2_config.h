#pragma once

#define LILV_DYN_MANIFEST
#define LILV_STATIC
#define LV2_STATIC
#define SERD_STATIC
#define SORD_STATIC
#define SRATOM_STATIC
#define ZIX_STATIC

#define LILV_VERSION "0.24.12"
#define SERD_VERSION "0.30.10"
#define SORD_VERSION "0.16.9"

#define LILV_CXX 1

#if JUCE_WINDOWS
 #define LILV_DIR_SEP "\\"
 #define LILV_PATH_SEP ";"
#else
 #define LILV_DIR_SEP "/"
 #define LILV_PATH_SEP ":"
#endif

#ifndef LILV_DEFAULT_LV2_PATH
 #if JUCE_MAC || JUCE_IOS
  #define LILV_DEFAULT_LV2_PATH \
    "~/Library/Audio/Plug-Ins/LV2"  LILV_PATH_SEP \
    "~/.lv2"                        LILV_PATH_SEP \
    "/usr/local/lib/lv2"            LILV_PATH_SEP \
    "/usr/lib/lv2"                  LILV_PATH_SEP \
    "/Library/Audio/Plug-Ins/LV2"
 #elif JUCE_WINDOWS
  #define LILV_DEFAULT_LV2_PATH \
    "%APPDATA%\\LV2"                LILV_PATH_SEP \
    "%COMMONPROGRAMFILES%\\LV2"
 #elif JUCE_LINUX || JUCE_ANDROID
  #define LILV_DEFAULT_LV2_PATH \
    "~/.lv2"                        LILV_PATH_SEP \
    "/usr/lib/lv2"                  LILV_PATH_SEP \
    "/usr/local/lib/lv2"
 #else
  #error "Unsupported platform"
 #endif
#endif
