#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents
struct ExecuteEvents_t67;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler>
struct EventFunction_1_t47;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler>
struct EventFunction_1_t48;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler>
struct EventFunction_1_t49;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler>
struct EventFunction_1_t50;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t51;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler>
struct EventFunction_1_t52;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler>
struct EventFunction_1_t53;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler>
struct EventFunction_1_t54;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler>
struct EventFunction_1_t55;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler>
struct EventFunction_1_t56;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler>
struct EventFunction_1_t57;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler>
struct EventFunction_1_t58;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler>
struct EventFunction_1_t59;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler>
struct EventFunction_1_t60;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler>
struct EventFunction_1_t61;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler>
struct EventFunction_1_t62;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler>
struct EventFunction_1_t63;
// UnityEngine.EventSystems.IPointerEnterHandler
struct IPointerEnterHandler_t238;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t37;
// UnityEngine.EventSystems.IPointerExitHandler
struct IPointerExitHandler_t239;
// UnityEngine.EventSystems.IPointerDownHandler
struct IPointerDownHandler_t240;
// UnityEngine.EventSystems.IPointerUpHandler
struct IPointerUpHandler_t241;
// UnityEngine.EventSystems.IPointerClickHandler
struct IPointerClickHandler_t242;
// UnityEngine.EventSystems.IInitializePotentialDragHandler
struct IInitializePotentialDragHandler_t243;
// UnityEngine.EventSystems.IBeginDragHandler
struct IBeginDragHandler_t244;
// UnityEngine.EventSystems.IDragHandler
struct IDragHandler_t245;
// UnityEngine.EventSystems.IEndDragHandler
struct IEndDragHandler_t246;
// UnityEngine.EventSystems.IDropHandler
struct IDropHandler_t247;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t248;
// UnityEngine.EventSystems.IUpdateSelectedHandler
struct IUpdateSelectedHandler_t249;
// UnityEngine.EventSystems.ISelectHandler
struct ISelectHandler_t250;
// UnityEngine.EventSystems.IDeselectHandler
struct IDeselectHandler_t251;
// UnityEngine.EventSystems.IMoveHandler
struct IMoveHandler_t252;
// UnityEngine.EventSystems.ISubmitHandler
struct ISubmitHandler_t253;
// UnityEngine.EventSystems.ICancelHandler
struct ICancelHandler_t254;
// UnityEngine.GameObject
struct GameObject_t1;
// System.Collections.Generic.IList`1<UnityEngine.Transform>
struct IList_1_t255;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t256;

// System.Void UnityEngine.EventSystems.ExecuteEvents::.cctor()
extern "C" void ExecuteEvents__cctor_m160 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IPointerEnterHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m161 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IPointerExitHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m162 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IPointerDownHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m163 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IPointerUpHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m164 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IPointerClickHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m165 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IInitializePotentialDragHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m166 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IBeginDragHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m167 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IDragHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m168 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IEndDragHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m169 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IDropHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m170 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IScrollHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m171 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IUpdateSelectedHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m172 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.ISelectHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m173 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IDeselectHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m174 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.IMoveHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m175 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.ISubmitHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m176 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::Execute(UnityEngine.EventSystems.ICancelHandler,UnityEngine.EventSystems.BaseEventData)
extern "C" void ExecuteEvents_Execute_m177 (Object_t * __this /* static, unused */, Object_t * ___handler, BaseEventData_t37 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerEnterHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerEnterHandler()
extern "C" EventFunction_1_t47 * ExecuteEvents_get_pointerEnterHandler_m178 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerExitHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerExitHandler()
extern "C" EventFunction_1_t48 * ExecuteEvents_get_pointerExitHandler_m179 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerDownHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerDownHandler()
extern "C" EventFunction_1_t49 * ExecuteEvents_get_pointerDownHandler_m180 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerUpHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerUpHandler()
extern "C" EventFunction_1_t50 * ExecuteEvents_get_pointerUpHandler_m181 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler> UnityEngine.EventSystems.ExecuteEvents::get_pointerClickHandler()
extern "C" EventFunction_1_t51 * ExecuteEvents_get_pointerClickHandler_m182 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IInitializePotentialDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_initializePotentialDrag()
extern "C" EventFunction_1_t52 * ExecuteEvents_get_initializePotentialDrag_m183 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IBeginDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_beginDragHandler()
extern "C" EventFunction_1_t53 * ExecuteEvents_get_beginDragHandler_m184 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_dragHandler()
extern "C" EventFunction_1_t54 * ExecuteEvents_get_dragHandler_m185 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IEndDragHandler> UnityEngine.EventSystems.ExecuteEvents::get_endDragHandler()
extern "C" EventFunction_1_t55 * ExecuteEvents_get_endDragHandler_m186 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDropHandler> UnityEngine.EventSystems.ExecuteEvents::get_dropHandler()
extern "C" EventFunction_1_t56 * ExecuteEvents_get_dropHandler_m187 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IScrollHandler> UnityEngine.EventSystems.ExecuteEvents::get_scrollHandler()
extern "C" EventFunction_1_t57 * ExecuteEvents_get_scrollHandler_m188 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IUpdateSelectedHandler> UnityEngine.EventSystems.ExecuteEvents::get_updateSelectedHandler()
extern "C" EventFunction_1_t58 * ExecuteEvents_get_updateSelectedHandler_m189 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISelectHandler> UnityEngine.EventSystems.ExecuteEvents::get_selectHandler()
extern "C" EventFunction_1_t59 * ExecuteEvents_get_selectHandler_m190 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IDeselectHandler> UnityEngine.EventSystems.ExecuteEvents::get_deselectHandler()
extern "C" EventFunction_1_t60 * ExecuteEvents_get_deselectHandler_m191 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IMoveHandler> UnityEngine.EventSystems.ExecuteEvents::get_moveHandler()
extern "C" EventFunction_1_t61 * ExecuteEvents_get_moveHandler_m192 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ISubmitHandler> UnityEngine.EventSystems.ExecuteEvents::get_submitHandler()
extern "C" EventFunction_1_t62 * ExecuteEvents_get_submitHandler_m193 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.ICancelHandler> UnityEngine.EventSystems.ExecuteEvents::get_cancelHandler()
extern "C" EventFunction_1_t63 * ExecuteEvents_get_cancelHandler_m194 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::GetEventChain(UnityEngine.GameObject,System.Collections.Generic.IList`1<UnityEngine.Transform>)
extern "C" void ExecuteEvents_GetEventChain_m195 (Object_t * __this /* static, unused */, GameObject_t1 * ___root, Object_t* ___eventChain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.ExecuteEvents::<s_HandlerListPool>m__0(System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>)
extern "C" void ExecuteEvents_U3Cs_HandlerListPoolU3Em__0_m196 (Object_t * __this /* static, unused */, List_1_t256 * ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
