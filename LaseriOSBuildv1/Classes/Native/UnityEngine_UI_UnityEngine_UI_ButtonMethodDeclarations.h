#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Button
struct Button_t100;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t98;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t77;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t37;
// System.Collections.IEnumerator
struct IEnumerator_t25;

// System.Void UnityEngine.UI.Button::.ctor()
extern "C" void Button__ctor_m412 (Button_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
extern "C" ButtonClickedEvent_t98 * Button_get_onClick_m413 (Button_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::set_onClick(UnityEngine.UI.Button/ButtonClickedEvent)
extern "C" void Button_set_onClick_m414 (Button_t100 * __this, ButtonClickedEvent_t98 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::Press()
extern "C" void Button_Press_m415 (Button_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
extern "C" void Button_OnPointerClick_m416 (Button_t100 * __this, PointerEventData_t77 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Button::OnSubmit(UnityEngine.EventSystems.BaseEventData)
extern "C" void Button_OnSubmit_m417 (Button_t100 * __this, BaseEventData_t37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Button::OnFinishSubmit()
extern "C" Object_t * Button_OnFinishSubmit_m418 (Button_t100 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
