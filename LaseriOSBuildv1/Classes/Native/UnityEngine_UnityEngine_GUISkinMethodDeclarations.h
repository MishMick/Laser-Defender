﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUISkin
struct GUISkin_t372;
// UnityEngine.Font
struct Font_t109;
// UnityEngine.GUIStyle
struct GUIStyle_t380;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t391;
// UnityEngine.GUISettings
struct GUISettings_t389;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t25;

// System.Void UnityEngine.GUISkin::.ctor()
extern "C" void GUISkin__ctor_m2032 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::OnEnable()
extern "C" void GUISkin_OnEnable_m2033 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.GUISkin::get_font()
extern "C" Font_t109 * GUISkin_get_font_m2034 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_font(UnityEngine.Font)
extern "C" void GUISkin_set_font_m2035 (GUISkin_t372 * __this, Font_t109 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_box()
extern "C" GUIStyle_t380 * GUISkin_get_box_m2036 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_box(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_box_m2037 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_label()
extern "C" GUIStyle_t380 * GUISkin_get_label_m2038 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_label(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_label_m2039 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textField()
extern "C" GUIStyle_t380 * GUISkin_get_textField_m2040 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textField(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_textField_m2041 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_textArea()
extern "C" GUIStyle_t380 * GUISkin_get_textArea_m2042 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_textArea(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_textArea_m2043 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_button()
extern "C" GUIStyle_t380 * GUISkin_get_button_m2044 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_button(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_button_m2045 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_toggle()
extern "C" GUIStyle_t380 * GUISkin_get_toggle_m2046 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_toggle(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_toggle_m2047 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_window()
extern "C" GUIStyle_t380 * GUISkin_get_window_m2048 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_window(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_window_m2049 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSlider()
extern "C" GUIStyle_t380 * GUISkin_get_horizontalSlider_m2050 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSlider(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalSlider_m2051 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalSliderThumb()
extern "C" GUIStyle_t380 * GUISkin_get_horizontalSliderThumb_m2052 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalSliderThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalSliderThumb_m2053 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSlider()
extern "C" GUIStyle_t380 * GUISkin_get_verticalSlider_m2054 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSlider(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalSlider_m2055 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalSliderThumb()
extern "C" GUIStyle_t380 * GUISkin_get_verticalSliderThumb_m2056 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalSliderThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalSliderThumb_m2057 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbar()
extern "C" GUIStyle_t380 * GUISkin_get_horizontalScrollbar_m2058 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbar(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbar_m2059 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarThumb()
extern "C" GUIStyle_t380 * GUISkin_get_horizontalScrollbarThumb_m2060 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarThumb_m2061 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarLeftButton()
extern "C" GUIStyle_t380 * GUISkin_get_horizontalScrollbarLeftButton_m2062 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarLeftButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarLeftButton_m2063 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_horizontalScrollbarRightButton()
extern "C" GUIStyle_t380 * GUISkin_get_horizontalScrollbarRightButton_m2064 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_horizontalScrollbarRightButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_horizontalScrollbarRightButton_m2065 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbar()
extern "C" GUIStyle_t380 * GUISkin_get_verticalScrollbar_m2066 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbar(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbar_m2067 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarThumb()
extern "C" GUIStyle_t380 * GUISkin_get_verticalScrollbarThumb_m2068 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarThumb(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarThumb_m2069 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarUpButton()
extern "C" GUIStyle_t380 * GUISkin_get_verticalScrollbarUpButton_m2070 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarUpButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarUpButton_m2071 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_verticalScrollbarDownButton()
extern "C" GUIStyle_t380 * GUISkin_get_verticalScrollbarDownButton_m2072 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_verticalScrollbarDownButton(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_verticalScrollbarDownButton_m2073 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_scrollView()
extern "C" GUIStyle_t380 * GUISkin_get_scrollView_m2074 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_scrollView(UnityEngine.GUIStyle)
extern "C" void GUISkin_set_scrollView_m2075 (GUISkin_t372 * __this, GUIStyle_t380 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle[] UnityEngine.GUISkin::get_customStyles()
extern "C" GUIStyleU5BU5D_t391* GUISkin_get_customStyles_m2076 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::set_customStyles(UnityEngine.GUIStyle[])
extern "C" void GUISkin_set_customStyles_m2077 (GUISkin_t372 * __this, GUIStyleU5BU5D_t391* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISettings UnityEngine.GUISkin::get_settings()
extern "C" GUISettings_t389 * GUISkin_get_settings_m2078 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::get_error()
extern "C" GUIStyle_t380 * GUISkin_get_error_m2079 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::Apply()
extern "C" void GUISkin_Apply_m2080 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::BuildStyleCache()
extern "C" void GUISkin_BuildStyleCache_m2081 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::GetStyle(System.String)
extern "C" GUIStyle_t380 * GUISkin_GetStyle_m2082 (GUISkin_t372 * __this, String_t* ___styleName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle UnityEngine.GUISkin::FindStyle(System.String)
extern "C" GUIStyle_t380 * GUISkin_FindStyle_m2083 (GUISkin_t372 * __this, String_t* ___styleName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUISkin::MakeCurrent()
extern "C" void GUISkin_MakeCurrent_m2084 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.GUISkin::GetEnumerator()
extern "C" Object_t * GUISkin_GetEnumerator_m2085 (GUISkin_t372 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
