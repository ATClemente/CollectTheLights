#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// UnityEngine.GUILayoutGroup
struct GUILayoutGroup_t3975363388;
// UnityEngineInternal.GenericStack
struct GenericStack_t3718539591;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t1598685972;
// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_t3033456180;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t3162557601;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t1021602117;
// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t934504150;
// UnityEngine.Camera[]
struct CameraU5BU5D_t3079764780;
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t674354611;
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t1783660110;
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t2214070761;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera
struct Camera_t189460977;
// System.Void
struct Void_t1841601450;
// UnityEngine.Events.UnityAction
struct UnityAction_t4025899511;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1572802995;
// System.Action
struct Action_t3226471752;
// System.Func`3<System.Int32,System.IntPtr,System.Boolean>
struct Func_3_t3099046685;
// System.Func`2<System.Exception,System.Boolean>
struct Func_2_t2127852612;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache>
struct Dictionary_2_t2128606680;
// UnityEngine.GUILayoutUtility/LayoutCache
struct LayoutCache_t3120781045;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;
// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry>
struct List_1_t3197707761;
// UnityEngine.RectOffset
struct RectOffset_t3387826427;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t4810721;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t601950206;
// UnityEngine.GUIContent
struct GUIContent_t4210063000;
// UnityEngine.GUIStyleState
struct GUIStyleState_t3801000545;
// UnityEngine.Font
struct Font_t4239498691;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// UnityEngine.GUIStyle[]
struct GUIStyleU5BU5D_t2497716199;
// UnityEngine.GUISettings
struct GUISettings_t622856320;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle>
struct Dictionary_2_t3714688016;
// UnityEngine.GUISkin/SkinChangedDelegate
struct SkinChangedDelegate_t3594822336;
// UnityEngine.GUISkin
struct GUISkin_t1436893342;

struct GUIStyle_t1799908754_marshaled_pinvoke;
struct GUIStyle_t1799908754_marshaled_com;
struct GUIStyleState_t3801000545_marshaled_pinvoke;
struct GUIStyleState_t3801000545_marshaled_com;
struct RectOffset_t3387826427_marshaled_com;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef LAYOUTCACHE_T3120781045_H
#define LAYOUTCACHE_T3120781045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutUtility/LayoutCache
struct  LayoutCache_t3120781045  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::topLevel
	GUILayoutGroup_t3975363388 * ___topLevel_0;
	// UnityEngineInternal.GenericStack UnityEngine.GUILayoutUtility/LayoutCache::layoutGroups
	GenericStack_t3718539591 * ___layoutGroups_1;
	// UnityEngine.GUILayoutGroup UnityEngine.GUILayoutUtility/LayoutCache::windows
	GUILayoutGroup_t3975363388 * ___windows_2;

public:
	inline static int32_t get_offset_of_topLevel_0() { return static_cast<int32_t>(offsetof(LayoutCache_t3120781045, ___topLevel_0)); }
	inline GUILayoutGroup_t3975363388 * get_topLevel_0() const { return ___topLevel_0; }
	inline GUILayoutGroup_t3975363388 ** get_address_of_topLevel_0() { return &___topLevel_0; }
	inline void set_topLevel_0(GUILayoutGroup_t3975363388 * value)
	{
		___topLevel_0 = value;
		Il2CppCodeGenWriteBarrier((&___topLevel_0), value);
	}

	inline static int32_t get_offset_of_layoutGroups_1() { return static_cast<int32_t>(offsetof(LayoutCache_t3120781045, ___layoutGroups_1)); }
	inline GenericStack_t3718539591 * get_layoutGroups_1() const { return ___layoutGroups_1; }
	inline GenericStack_t3718539591 ** get_address_of_layoutGroups_1() { return &___layoutGroups_1; }
	inline void set_layoutGroups_1(GenericStack_t3718539591 * value)
	{
		___layoutGroups_1 = value;
		Il2CppCodeGenWriteBarrier((&___layoutGroups_1), value);
	}

	inline static int32_t get_offset_of_windows_2() { return static_cast<int32_t>(offsetof(LayoutCache_t3120781045, ___windows_2)); }
	inline GUILayoutGroup_t3975363388 * get_windows_2() const { return ___windows_2; }
	inline GUILayoutGroup_t3975363388 ** get_address_of_windows_2() { return &___windows_2; }
	inline void set_windows_2(GUILayoutGroup_t3975363388 * value)
	{
		___windows_2 = value;
		Il2CppCodeGenWriteBarrier((&___windows_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYOUTCACHE_T3120781045_H
#ifndef INVOKABLECALLLIST_T2295673753_H
#define INVOKABLECALLLIST_T2295673753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCallList
struct  InvokableCallList_t2295673753  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_PersistentCalls
	List_1_t1598685972 * ___m_PersistentCalls_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_RuntimeCalls
	List_1_t1598685972 * ___m_RuntimeCalls_1;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_ExecutingCalls
	List_1_t1598685972 * ___m_ExecutingCalls_2;
	// System.Boolean UnityEngine.Events.InvokableCallList::m_NeedsUpdate
	bool ___m_NeedsUpdate_3;

public:
	inline static int32_t get_offset_of_m_PersistentCalls_0() { return static_cast<int32_t>(offsetof(InvokableCallList_t2295673753, ___m_PersistentCalls_0)); }
	inline List_1_t1598685972 * get_m_PersistentCalls_0() const { return ___m_PersistentCalls_0; }
	inline List_1_t1598685972 ** get_address_of_m_PersistentCalls_0() { return &___m_PersistentCalls_0; }
	inline void set_m_PersistentCalls_0(List_1_t1598685972 * value)
	{
		___m_PersistentCalls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_0), value);
	}

	inline static int32_t get_offset_of_m_RuntimeCalls_1() { return static_cast<int32_t>(offsetof(InvokableCallList_t2295673753, ___m_RuntimeCalls_1)); }
	inline List_1_t1598685972 * get_m_RuntimeCalls_1() const { return ___m_RuntimeCalls_1; }
	inline List_1_t1598685972 ** get_address_of_m_RuntimeCalls_1() { return &___m_RuntimeCalls_1; }
	inline void set_m_RuntimeCalls_1(List_1_t1598685972 * value)
	{
		___m_RuntimeCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_RuntimeCalls_1), value);
	}

	inline static int32_t get_offset_of_m_ExecutingCalls_2() { return static_cast<int32_t>(offsetof(InvokableCallList_t2295673753, ___m_ExecutingCalls_2)); }
	inline List_1_t1598685972 * get_m_ExecutingCalls_2() const { return ___m_ExecutingCalls_2; }
	inline List_1_t1598685972 ** get_address_of_m_ExecutingCalls_2() { return &___m_ExecutingCalls_2; }
	inline void set_m_ExecutingCalls_2(List_1_t1598685972 * value)
	{
		___m_ExecutingCalls_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutingCalls_2), value);
	}

	inline static int32_t get_offset_of_m_NeedsUpdate_3() { return static_cast<int32_t>(offsetof(InvokableCallList_t2295673753, ___m_NeedsUpdate_3)); }
	inline bool get_m_NeedsUpdate_3() const { return ___m_NeedsUpdate_3; }
	inline bool* get_address_of_m_NeedsUpdate_3() { return &___m_NeedsUpdate_3; }
	inline void set_m_NeedsUpdate_3(bool value)
	{
		___m_NeedsUpdate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALLLIST_T2295673753_H
#ifndef ATTRIBUTE_T542643598_H
#define ATTRIBUTE_T542643598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t542643598  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T542643598_H
#ifndef REMOTESETTINGS_T392466225_H
#define REMOTESETTINGS_T392466225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings
struct  RemoteSettings_t392466225  : public RuntimeObject
{
public:

public:
};

struct RemoteSettings_t392466225_StaticFields
{
public:
	// UnityEngine.RemoteSettings/UpdatedEventHandler UnityEngine.RemoteSettings::Updated
	UpdatedEventHandler_t3033456180 * ___Updated_0;

public:
	inline static int32_t get_offset_of_Updated_0() { return static_cast<int32_t>(offsetof(RemoteSettings_t392466225_StaticFields, ___Updated_0)); }
	inline UpdatedEventHandler_t3033456180 * get_Updated_0() const { return ___Updated_0; }
	inline UpdatedEventHandler_t3033456180 ** get_address_of_Updated_0() { return &___Updated_0; }
	inline void set_Updated_0(UpdatedEventHandler_t3033456180 * value)
	{
		___Updated_0 = value;
		Il2CppCodeGenWriteBarrier((&___Updated_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTESETTINGS_T392466225_H
#ifndef CLASSLIBRARYINITIALIZER_T504692705_H
#define CLASSLIBRARYINITIALIZER_T504692705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ClassLibraryInitializer
struct  ClassLibraryInitializer_t504692705  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSLIBRARYINITIALIZER_T504692705_H
#ifndef SLIDERSTATE_T1595681032_H
#define SLIDERSTATE_T1595681032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SliderState
struct  SliderState_t1595681032  : public RuntimeObject
{
public:
	// System.Single UnityEngine.SliderState::dragStartPos
	float ___dragStartPos_0;
	// System.Single UnityEngine.SliderState::dragStartValue
	float ___dragStartValue_1;
	// System.Boolean UnityEngine.SliderState::isDragging
	bool ___isDragging_2;

public:
	inline static int32_t get_offset_of_dragStartPos_0() { return static_cast<int32_t>(offsetof(SliderState_t1595681032, ___dragStartPos_0)); }
	inline float get_dragStartPos_0() const { return ___dragStartPos_0; }
	inline float* get_address_of_dragStartPos_0() { return &___dragStartPos_0; }
	inline void set_dragStartPos_0(float value)
	{
		___dragStartPos_0 = value;
	}

	inline static int32_t get_offset_of_dragStartValue_1() { return static_cast<int32_t>(offsetof(SliderState_t1595681032, ___dragStartValue_1)); }
	inline float get_dragStartValue_1() const { return ___dragStartValue_1; }
	inline float* get_address_of_dragStartValue_1() { return &___dragStartValue_1; }
	inline void set_dragStartValue_1(float value)
	{
		___dragStartValue_1 = value;
	}

	inline static int32_t get_offset_of_isDragging_2() { return static_cast<int32_t>(offsetof(SliderState_t1595681032, ___isDragging_2)); }
	inline bool get_isDragging_2() const { return ___isDragging_2; }
	inline bool* get_address_of_isDragging_2() { return &___isDragging_2; }
	inline void set_isDragging_2(bool value)
	{
		___isDragging_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SLIDERSTATE_T1595681032_H
#ifndef BASEINVOKABLECALL_T2229564840_H
#define BASEINVOKABLECALL_T2229564840_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t2229564840  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T2229564840_H
#ifndef SCROLLVIEWSTATE_T3820542997_H
#define SCROLLVIEWSTATE_T3820542997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScrollViewState
struct  ScrollViewState_t3820542997  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLVIEWSTATE_T3820542997_H
#ifndef PERSISTENTCALLGROUP_T339478082_H
#define PERSISTENTCALLGROUP_T339478082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCallGroup
struct  PersistentCallGroup_t339478082  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> UnityEngine.Events.PersistentCallGroup::m_Calls
	List_1_t3162557601 * ___m_Calls_0;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(PersistentCallGroup_t339478082, ___m_Calls_0)); }
	inline List_1_t3162557601 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline List_1_t3162557601 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(List_1_t3162557601 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALLGROUP_T339478082_H
#ifndef STACKTRACEUTILITY_T1881293839_H
#define STACKTRACEUTILITY_T1881293839_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceUtility
struct  StackTraceUtility_t1881293839  : public RuntimeObject
{
public:

public:
};

struct StackTraceUtility_t1881293839_StaticFields
{
public:
	// System.String UnityEngine.StackTraceUtility::projectFolder
	String_t* ___projectFolder_0;

public:
	inline static int32_t get_offset_of_projectFolder_0() { return static_cast<int32_t>(offsetof(StackTraceUtility_t1881293839_StaticFields, ___projectFolder_0)); }
	inline String_t* get_projectFolder_0() const { return ___projectFolder_0; }
	inline String_t** get_address_of_projectFolder_0() { return &___projectFolder_0; }
	inline void set_projectFolder_0(String_t* value)
	{
		___projectFolder_0 = value;
		Il2CppCodeGenWriteBarrier((&___projectFolder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACEUTILITY_T1881293839_H
#ifndef ARGUMENTCACHE_T4810721_H
#define ARGUMENTCACHE_T4810721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.ArgumentCache
struct  ArgumentCache_t4810721  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_t1021602117 * ___m_ObjectArgument_0;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_1;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_2;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_4;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_5;

public:
	inline static int32_t get_offset_of_m_ObjectArgument_0() { return static_cast<int32_t>(offsetof(ArgumentCache_t4810721, ___m_ObjectArgument_0)); }
	inline Object_t1021602117 * get_m_ObjectArgument_0() const { return ___m_ObjectArgument_0; }
	inline Object_t1021602117 ** get_address_of_m_ObjectArgument_0() { return &___m_ObjectArgument_0; }
	inline void set_m_ObjectArgument_0(Object_t1021602117 * value)
	{
		___m_ObjectArgument_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgument_0), value);
	}

	inline static int32_t get_offset_of_m_ObjectArgumentAssemblyTypeName_1() { return static_cast<int32_t>(offsetof(ArgumentCache_t4810721, ___m_ObjectArgumentAssemblyTypeName_1)); }
	inline String_t* get_m_ObjectArgumentAssemblyTypeName_1() const { return ___m_ObjectArgumentAssemblyTypeName_1; }
	inline String_t** get_address_of_m_ObjectArgumentAssemblyTypeName_1() { return &___m_ObjectArgumentAssemblyTypeName_1; }
	inline void set_m_ObjectArgumentAssemblyTypeName_1(String_t* value)
	{
		___m_ObjectArgumentAssemblyTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgumentAssemblyTypeName_1), value);
	}

	inline static int32_t get_offset_of_m_IntArgument_2() { return static_cast<int32_t>(offsetof(ArgumentCache_t4810721, ___m_IntArgument_2)); }
	inline int32_t get_m_IntArgument_2() const { return ___m_IntArgument_2; }
	inline int32_t* get_address_of_m_IntArgument_2() { return &___m_IntArgument_2; }
	inline void set_m_IntArgument_2(int32_t value)
	{
		___m_IntArgument_2 = value;
	}

	inline static int32_t get_offset_of_m_FloatArgument_3() { return static_cast<int32_t>(offsetof(ArgumentCache_t4810721, ___m_FloatArgument_3)); }
	inline float get_m_FloatArgument_3() const { return ___m_FloatArgument_3; }
	inline float* get_address_of_m_FloatArgument_3() { return &___m_FloatArgument_3; }
	inline void set_m_FloatArgument_3(float value)
	{
		___m_FloatArgument_3 = value;
	}

	inline static int32_t get_offset_of_m_StringArgument_4() { return static_cast<int32_t>(offsetof(ArgumentCache_t4810721, ___m_StringArgument_4)); }
	inline String_t* get_m_StringArgument_4() const { return ___m_StringArgument_4; }
	inline String_t** get_address_of_m_StringArgument_4() { return &___m_StringArgument_4; }
	inline void set_m_StringArgument_4(String_t* value)
	{
		___m_StringArgument_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringArgument_4), value);
	}

	inline static int32_t get_offset_of_m_BoolArgument_5() { return static_cast<int32_t>(offsetof(ArgumentCache_t4810721, ___m_BoolArgument_5)); }
	inline bool get_m_BoolArgument_5() const { return ___m_BoolArgument_5; }
	inline bool* get_address_of_m_BoolArgument_5() { return &___m_BoolArgument_5; }
	inline void set_m_BoolArgument_5(bool value)
	{
		___m_BoolArgument_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTCACHE_T4810721_H
#ifndef SETUPCOROUTINE_T3582942563_H
#define SETUPCOROUTINE_T3582942563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SetupCoroutine
struct  SetupCoroutine_t3582942563  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETUPCOROUTINE_T3582942563_H
#ifndef WEBREQUESTUTILS_T4100941042_H
#define WEBREQUESTUTILS_T4100941042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.WebRequestUtils
struct  WebRequestUtils_t4100941042  : public RuntimeObject
{
public:

public:
};

struct WebRequestUtils_t4100941042_StaticFields
{
public:
	// System.Text.RegularExpressions.Regex UnityEngineInternal.WebRequestUtils::domainRegex
	Regex_t1803876613 * ___domainRegex_0;

public:
	inline static int32_t get_offset_of_domainRegex_0() { return static_cast<int32_t>(offsetof(WebRequestUtils_t4100941042_StaticFields, ___domainRegex_0)); }
	inline Regex_t1803876613 * get_domainRegex_0() const { return ___domainRegex_0; }
	inline Regex_t1803876613 ** get_address_of_domainRegex_0() { return &___domainRegex_0; }
	inline void set_domainRegex_0(Regex_t1803876613 * value)
	{
		___domainRegex_0 = value;
		Il2CppCodeGenWriteBarrier((&___domainRegex_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTUTILS_T4100941042_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef SENDMOUSEEVENTS_T3505065032_H
#define SENDMOUSEEVENTS_T3505065032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t3505065032  : public RuntimeObject
{
public:

public:
};

struct SendMouseEvents_t3505065032_StaticFields
{
public:
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_0;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t934504150* ___m_LastHit_1;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t934504150* ___m_MouseDownHit_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t934504150* ___m_CurrentHit_3;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t3079764780* ___m_Cameras_4;

public:
	inline static int32_t get_offset_of_s_MouseUsed_0() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3505065032_StaticFields, ___s_MouseUsed_0)); }
	inline bool get_s_MouseUsed_0() const { return ___s_MouseUsed_0; }
	inline bool* get_address_of_s_MouseUsed_0() { return &___s_MouseUsed_0; }
	inline void set_s_MouseUsed_0(bool value)
	{
		___s_MouseUsed_0 = value;
	}

	inline static int32_t get_offset_of_m_LastHit_1() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3505065032_StaticFields, ___m_LastHit_1)); }
	inline HitInfoU5BU5D_t934504150* get_m_LastHit_1() const { return ___m_LastHit_1; }
	inline HitInfoU5BU5D_t934504150** get_address_of_m_LastHit_1() { return &___m_LastHit_1; }
	inline void set_m_LastHit_1(HitInfoU5BU5D_t934504150* value)
	{
		___m_LastHit_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastHit_1), value);
	}

	inline static int32_t get_offset_of_m_MouseDownHit_2() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3505065032_StaticFields, ___m_MouseDownHit_2)); }
	inline HitInfoU5BU5D_t934504150* get_m_MouseDownHit_2() const { return ___m_MouseDownHit_2; }
	inline HitInfoU5BU5D_t934504150** get_address_of_m_MouseDownHit_2() { return &___m_MouseDownHit_2; }
	inline void set_m_MouseDownHit_2(HitInfoU5BU5D_t934504150* value)
	{
		___m_MouseDownHit_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseDownHit_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentHit_3() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3505065032_StaticFields, ___m_CurrentHit_3)); }
	inline HitInfoU5BU5D_t934504150* get_m_CurrentHit_3() const { return ___m_CurrentHit_3; }
	inline HitInfoU5BU5D_t934504150** get_address_of_m_CurrentHit_3() { return &___m_CurrentHit_3; }
	inline void set_m_CurrentHit_3(HitInfoU5BU5D_t934504150* value)
	{
		___m_CurrentHit_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentHit_3), value);
	}

	inline static int32_t get_offset_of_m_Cameras_4() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3505065032_StaticFields, ___m_Cameras_4)); }
	inline CameraU5BU5D_t3079764780* get_m_Cameras_4() const { return ___m_Cameras_4; }
	inline CameraU5BU5D_t3079764780** get_address_of_m_Cameras_4() { return &___m_Cameras_4; }
	inline void set_m_Cameras_4(CameraU5BU5D_t3079764780* value)
	{
		___m_Cameras_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cameras_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMOUSEEVENTS_T3505065032_H
#ifndef SCRIPTINGUTILS_T2804582268_H
#define SCRIPTINGUTILS_T2804582268_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.ScriptingUtils
struct  ScriptingUtils_t2804582268  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCRIPTINGUTILS_T2804582268_H
#ifndef ATTRIBUTEHELPERENGINE_T958797062_H
#define ATTRIBUTEHELPERENGINE_T958797062_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AttributeHelperEngine
struct  AttributeHelperEngine_t958797062  : public RuntimeObject
{
public:

public:
};

struct AttributeHelperEngine_t958797062_StaticFields
{
public:
	// UnityEngine.DisallowMultipleComponent[] UnityEngine.AttributeHelperEngine::_disallowMultipleComponentArray
	DisallowMultipleComponentU5BU5D_t674354611* ____disallowMultipleComponentArray_0;
	// UnityEngine.ExecuteInEditMode[] UnityEngine.AttributeHelperEngine::_executeInEditModeArray
	ExecuteInEditModeU5BU5D_t1783660110* ____executeInEditModeArray_1;
	// UnityEngine.RequireComponent[] UnityEngine.AttributeHelperEngine::_requireComponentArray
	RequireComponentU5BU5D_t2214070761* ____requireComponentArray_2;

public:
	inline static int32_t get_offset_of__disallowMultipleComponentArray_0() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t958797062_StaticFields, ____disallowMultipleComponentArray_0)); }
	inline DisallowMultipleComponentU5BU5D_t674354611* get__disallowMultipleComponentArray_0() const { return ____disallowMultipleComponentArray_0; }
	inline DisallowMultipleComponentU5BU5D_t674354611** get_address_of__disallowMultipleComponentArray_0() { return &____disallowMultipleComponentArray_0; }
	inline void set__disallowMultipleComponentArray_0(DisallowMultipleComponentU5BU5D_t674354611* value)
	{
		____disallowMultipleComponentArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____disallowMultipleComponentArray_0), value);
	}

	inline static int32_t get_offset_of__executeInEditModeArray_1() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t958797062_StaticFields, ____executeInEditModeArray_1)); }
	inline ExecuteInEditModeU5BU5D_t1783660110* get__executeInEditModeArray_1() const { return ____executeInEditModeArray_1; }
	inline ExecuteInEditModeU5BU5D_t1783660110** get_address_of__executeInEditModeArray_1() { return &____executeInEditModeArray_1; }
	inline void set__executeInEditModeArray_1(ExecuteInEditModeU5BU5D_t1783660110* value)
	{
		____executeInEditModeArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____executeInEditModeArray_1), value);
	}

	inline static int32_t get_offset_of__requireComponentArray_2() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t958797062_StaticFields, ____requireComponentArray_2)); }
	inline RequireComponentU5BU5D_t2214070761* get__requireComponentArray_2() const { return ____requireComponentArray_2; }
	inline RequireComponentU5BU5D_t2214070761** get_address_of__requireComponentArray_2() { return &____requireComponentArray_2; }
	inline void set__requireComponentArray_2(RequireComponentU5BU5D_t2214070761* value)
	{
		____requireComponentArray_2 = value;
		Il2CppCodeGenWriteBarrier((&____requireComponentArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEHELPERENGINE_T958797062_H
#ifndef EXCEPTION_T1927440687_H
#define EXCEPTION_T1927440687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1927440687  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t169632028* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1927440687 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t169632028* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t169632028** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t169632028* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___inner_exception_1)); }
	inline Exception_t1927440687 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1927440687 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1927440687 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T1927440687_H
#ifndef GUILAYOUT_T2579273657_H
#define GUILAYOUT_T2579273657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayout
struct  GUILayout_t2579273657  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUT_T2579273657_H
#ifndef GUICONTENT_T4210063000_H
#define GUICONTENT_T4210063000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIContent
struct  GUIContent_t4210063000  : public RuntimeObject
{
public:
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t2243626319 * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(GUIContent_t4210063000, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_0), value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(GUIContent_t4210063000, ___m_Image_1)); }
	inline Texture_t2243626319 * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture_t2243626319 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture_t2243626319 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_1), value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(GUIContent_t4210063000, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Tooltip_2), value);
	}
};

struct GUIContent_t4210063000_StaticFields
{
public:
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t4210063000 * ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t4210063000 * ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t4210063000 * ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t4210063000 * ___none_6;

public:
	inline static int32_t get_offset_of_s_Text_3() { return static_cast<int32_t>(offsetof(GUIContent_t4210063000_StaticFields, ___s_Text_3)); }
	inline GUIContent_t4210063000 * get_s_Text_3() const { return ___s_Text_3; }
	inline GUIContent_t4210063000 ** get_address_of_s_Text_3() { return &___s_Text_3; }
	inline void set_s_Text_3(GUIContent_t4210063000 * value)
	{
		___s_Text_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_Text_3), value);
	}

	inline static int32_t get_offset_of_s_Image_4() { return static_cast<int32_t>(offsetof(GUIContent_t4210063000_StaticFields, ___s_Image_4)); }
	inline GUIContent_t4210063000 * get_s_Image_4() const { return ___s_Image_4; }
	inline GUIContent_t4210063000 ** get_address_of_s_Image_4() { return &___s_Image_4; }
	inline void set_s_Image_4(GUIContent_t4210063000 * value)
	{
		___s_Image_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_Image_4), value);
	}

	inline static int32_t get_offset_of_s_TextImage_5() { return static_cast<int32_t>(offsetof(GUIContent_t4210063000_StaticFields, ___s_TextImage_5)); }
	inline GUIContent_t4210063000 * get_s_TextImage_5() const { return ___s_TextImage_5; }
	inline GUIContent_t4210063000 ** get_address_of_s_TextImage_5() { return &___s_TextImage_5; }
	inline void set_s_TextImage_5(GUIContent_t4210063000 * value)
	{
		___s_TextImage_5 = value;
		Il2CppCodeGenWriteBarrier((&___s_TextImage_5), value);
	}

	inline static int32_t get_offset_of_none_6() { return static_cast<int32_t>(offsetof(GUIContent_t4210063000_StaticFields, ___none_6)); }
	inline GUIContent_t4210063000 * get_none_6() const { return ___none_6; }
	inline GUIContent_t4210063000 ** get_address_of_none_6() { return &___none_6; }
	inline void set_none_6(GUIContent_t4210063000 * value)
	{
		___none_6 = value;
		Il2CppCodeGenWriteBarrier((&___none_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t4210063000_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t2243626319 * ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t4210063000_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t2243626319 * ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};
#endif // GUICONTENT_T4210063000_H
#ifndef HIDEININSPECTOR_T2503583610_H
#define HIDEININSPECTOR_T2503583610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.HideInInspector
struct  HideInInspector_t2503583610  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HIDEININSPECTOR_T2503583610_H
#ifndef NATIVECLASSATTRIBUTE_T1576243993_H
#define NATIVECLASSATTRIBUTE_T1576243993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NativeClassAttribute
struct  NativeClassAttribute_t1576243993  : public Attribute_t542643598
{
public:
	// System.String UnityEngine.NativeClassAttribute::<QualifiedNativeName>k__BackingField
	String_t* ___U3CQualifiedNativeNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeClassAttribute_t1576243993, ___U3CQualifiedNativeNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CQualifiedNativeNameU3Ek__BackingField_0() const { return ___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return &___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline void set_U3CQualifiedNativeNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CQualifiedNativeNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CQualifiedNativeNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECLASSATTRIBUTE_T1576243993_H
#ifndef CONTEXTMENU_T2283362202_H
#define CONTEXTMENU_T2283362202_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContextMenu
struct  ContextMenu_t2283362202  : public Attribute_t542643598
{
public:
	// System.String UnityEngine.ContextMenu::menuItem
	String_t* ___menuItem_0;
	// System.Boolean UnityEngine.ContextMenu::validate
	bool ___validate_1;
	// System.Int32 UnityEngine.ContextMenu::priority
	int32_t ___priority_2;

public:
	inline static int32_t get_offset_of_menuItem_0() { return static_cast<int32_t>(offsetof(ContextMenu_t2283362202, ___menuItem_0)); }
	inline String_t* get_menuItem_0() const { return ___menuItem_0; }
	inline String_t** get_address_of_menuItem_0() { return &___menuItem_0; }
	inline void set_menuItem_0(String_t* value)
	{
		___menuItem_0 = value;
		Il2CppCodeGenWriteBarrier((&___menuItem_0), value);
	}

	inline static int32_t get_offset_of_validate_1() { return static_cast<int32_t>(offsetof(ContextMenu_t2283362202, ___validate_1)); }
	inline bool get_validate_1() const { return ___validate_1; }
	inline bool* get_address_of_validate_1() { return &___validate_1; }
	inline void set_validate_1(bool value)
	{
		___validate_1 = value;
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(ContextMenu_t2283362202, ___priority_2)); }
	inline int32_t get_priority_2() const { return ___priority_2; }
	inline int32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(int32_t value)
	{
		___priority_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTMENU_T2283362202_H
#ifndef DEFAULTEXECUTIONORDER_T2717914595_H
#define DEFAULTEXECUTIONORDER_T2717914595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DefaultExecutionOrder
struct  DefaultExecutionOrder_t2717914595  : public Attribute_t542643598
{
public:
	// System.Int32 UnityEngine.DefaultExecutionOrder::<order>k__BackingField
	int32_t ___U3CorderU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CorderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DefaultExecutionOrder_t2717914595, ___U3CorderU3Ek__BackingField_0)); }
	inline int32_t get_U3CorderU3Ek__BackingField_0() const { return ___U3CorderU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CorderU3Ek__BackingField_0() { return &___U3CorderU3Ek__BackingField_0; }
	inline void set_U3CorderU3Ek__BackingField_0(int32_t value)
	{
		___U3CorderU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEXECUTIONORDER_T2717914595_H
#ifndef IL2CPPSTRUCTALIGNMENTATTRIBUTE_T130316838_H
#define IL2CPPSTRUCTALIGNMENTATTRIBUTE_T130316838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IL2CPPStructAlignmentAttribute
struct  IL2CPPStructAlignmentAttribute_t130316838  : public Attribute_t542643598
{
public:
	// System.Int32 UnityEngine.IL2CPPStructAlignmentAttribute::Align
	int32_t ___Align_0;

public:
	inline static int32_t get_offset_of_Align_0() { return static_cast<int32_t>(offsetof(IL2CPPStructAlignmentAttribute_t130316838, ___Align_0)); }
	inline int32_t get_Align_0() const { return ___Align_0; }
	inline int32_t* get_address_of_Align_0() { return &___Align_0; }
	inline void set_Align_0(int32_t value)
	{
		___Align_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPSTRUCTALIGNMENTATTRIBUTE_T130316838_H
#ifndef EXECUTEINEDITMODE_T3043633143_H
#define EXECUTEINEDITMODE_T3043633143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExecuteInEditMode
struct  ExecuteInEditMode_t3043633143  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEINEDITMODE_T3043633143_H
#ifndef ASSEMBLYISEDITORASSEMBLY_T1557026495_H
#define ASSEMBLYISEDITORASSEMBLY_T1557026495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssemblyIsEditorAssembly
struct  AssemblyIsEditorAssembly_t1557026495  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYISEDITORASSEMBLY_T1557026495_H
#ifndef RECT_T3681755626_H
#define RECT_T3681755626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t3681755626 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t3681755626, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t3681755626, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t3681755626, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t3681755626, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T3681755626_H
#ifndef COLOR_T2020392075_H
#define COLOR_T2020392075_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2020392075 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2020392075, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2020392075_H
#ifndef RANGEINT_T2323401134_H
#define RANGEINT_T2323401134_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeInt
struct  RangeInt_t2323401134 
{
public:
	// System.Int32 UnityEngine.RangeInt::start
	int32_t ___start_0;
	// System.Int32 UnityEngine.RangeInt::length
	int32_t ___length_1;

public:
	inline static int32_t get_offset_of_start_0() { return static_cast<int32_t>(offsetof(RangeInt_t2323401134, ___start_0)); }
	inline int32_t get_start_0() const { return ___start_0; }
	inline int32_t* get_address_of_start_0() { return &___start_0; }
	inline void set_start_0(int32_t value)
	{
		___start_0 = value;
	}

	inline static int32_t get_offset_of_length_1() { return static_cast<int32_t>(offsetof(RangeInt_t2323401134, ___length_1)); }
	inline int32_t get_length_1() const { return ___length_1; }
	inline int32_t* get_address_of_length_1() { return &___length_1; }
	inline void set_length_1(int32_t value)
	{
		___length_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEINT_T2323401134_H
#ifndef HITINFO_T1761367055_H
#define HITINFO_T1761367055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t1761367055 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t1756533147 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t189460977 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t1761367055, ___target_0)); }
	inline GameObject_t1756533147 * get_target_0() const { return ___target_0; }
	inline GameObject_t1756533147 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t1756533147 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t1761367055, ___camera_1)); }
	inline Camera_t189460977 * get_camera_1() const { return ___camera_1; }
	inline Camera_t189460977 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t189460977 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t1761367055_marshaled_pinvoke
{
	GameObject_t1756533147 * ___target_0;
	Camera_t189460977 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t1761367055_marshaled_com
{
	GameObject_t1756533147 * ___target_0;
	Camera_t189460977 * ___camera_1;
};
#endif // HITINFO_T1761367055_H
#ifndef PROPERTYATTRIBUTE_T2606999759_H
#define PROPERTYATTRIBUTE_T2606999759_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PropertyAttribute
struct  PropertyAttribute_t2606999759  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYATTRIBUTE_T2606999759_H
#ifndef SELECTIONBASEATTRIBUTE_T936505999_H
#define SELECTIONBASEATTRIBUTE_T936505999_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SelectionBaseAttribute
struct  SelectionBaseAttribute_t936505999  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SELECTIONBASEATTRIBUTE_T936505999_H
#ifndef GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T107439586_H
#define GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T107439586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.GeneratedByOldBindingsGeneratorAttribute
struct  GeneratedByOldBindingsGeneratorAttribute_t107439586  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T107439586_H
#ifndef WRITABLEATTRIBUTE_T3715198420_H
#define WRITABLEATTRIBUTE_T3715198420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WritableAttribute
struct  WritableAttribute_t3715198420  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITABLEATTRIBUTE_T3715198420_H
#ifndef PREFERBINARYSERIALIZATION_T2472773525_H
#define PREFERBINARYSERIALIZATION_T2472773525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PreferBinarySerialization
struct  PreferBinarySerialization_t2472773525  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFERBINARYSERIALIZATION_T2472773525_H
#ifndef SERIALIZEPRIVATEVARIABLES_T2241034664_H
#define SERIALIZEPRIVATEVARIABLES_T2241034664_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializePrivateVariables
struct  SerializePrivateVariables_t2241034664  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEPRIVATEVARIABLES_T2241034664_H
#ifndef SERIALIZEFIELD_T3073427462_H
#define SERIALIZEFIELD_T3073427462_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializeField
struct  SerializeField_t3073427462  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEFIELD_T3073427462_H
#ifndef ADDCOMPONENTMENU_T1099699699_H
#define ADDCOMPONENTMENU_T1099699699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AddComponentMenu
struct  AddComponentMenu_t1099699699  : public Attribute_t542643598
{
public:
	// System.String UnityEngine.AddComponentMenu::m_AddComponentMenu
	String_t* ___m_AddComponentMenu_0;
	// System.Int32 UnityEngine.AddComponentMenu::m_Ordering
	int32_t ___m_Ordering_1;

public:
	inline static int32_t get_offset_of_m_AddComponentMenu_0() { return static_cast<int32_t>(offsetof(AddComponentMenu_t1099699699, ___m_AddComponentMenu_0)); }
	inline String_t* get_m_AddComponentMenu_0() const { return ___m_AddComponentMenu_0; }
	inline String_t** get_address_of_m_AddComponentMenu_0() { return &___m_AddComponentMenu_0; }
	inline void set_m_AddComponentMenu_0(String_t* value)
	{
		___m_AddComponentMenu_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_AddComponentMenu_0), value);
	}

	inline static int32_t get_offset_of_m_Ordering_1() { return static_cast<int32_t>(offsetof(AddComponentMenu_t1099699699, ___m_Ordering_1)); }
	inline int32_t get_m_Ordering_1() const { return ___m_Ordering_1; }
	inline int32_t* get_address_of_m_Ordering_1() { return &___m_Ordering_1; }
	inline void set_m_Ordering_1(int32_t value)
	{
		___m_Ordering_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDCOMPONENTMENU_T1099699699_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1841601450 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1841601450_H
#ifndef INVOKABLECALL_T2183506063_H
#define INVOKABLECALL_T2183506063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t2183506063  : public BaseInvokableCall_t2229564840
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t4025899511 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t2183506063, ___Delegate_0)); }
	inline UnityAction_t4025899511 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t4025899511 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t4025899511 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T2183506063_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2459695545  : public ValueType_t3507792607
{
public:

public:
};

struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1328083999* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1328083999* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1328083999** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1328083999* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
#ifndef INT32_T2071877448_H
#define INT32_T2071877448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2071877448 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2071877448, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2071877448_H
#ifndef VECTOR3_T2243707580_H
#define VECTOR3_T2243707580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2243707580 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2243707580_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2243707580  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2243707580  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2243707580  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2243707580  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2243707580  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2243707580  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2243707580  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2243707580  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2243707580  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2243707580  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2243707580  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2243707580 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2243707580  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___oneVector_5)); }
	inline Vector3_t2243707580  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2243707580 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2243707580  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___upVector_6)); }
	inline Vector3_t2243707580  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2243707580 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2243707580  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___downVector_7)); }
	inline Vector3_t2243707580  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2243707580 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2243707580  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___leftVector_8)); }
	inline Vector3_t2243707580  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2243707580 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2243707580  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___rightVector_9)); }
	inline Vector3_t2243707580  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2243707580 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2243707580  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2243707580  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2243707580 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2243707580  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___backVector_11)); }
	inline Vector3_t2243707580  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2243707580 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2243707580  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2243707580  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2243707580 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2243707580  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2243707580  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2243707580 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2243707580  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2243707580_H
#ifndef TIMESPAN_T3430258949_H
#define TIMESPAN_T3430258949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t3430258949 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t3430258949_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t3430258949  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t3430258949  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t3430258949  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t3430258949  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t3430258949 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t3430258949  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t3430258949  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t3430258949 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t3430258949  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t3430258949_StaticFields, ___Zero_2)); }
	inline TimeSpan_t3430258949  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t3430258949 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t3430258949  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T3430258949_H
#ifndef VECTOR2_T2243707579_H
#define VECTOR2_T2243707579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2243707579 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2243707579_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2243707579  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2243707579  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2243707579  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2243707579  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2243707579  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2243707579  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2243707579  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2243707579  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2243707579  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2243707579 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2243707579  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___oneVector_3)); }
	inline Vector2_t2243707579  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2243707579 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2243707579  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___upVector_4)); }
	inline Vector2_t2243707579  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2243707579 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2243707579  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___downVector_5)); }
	inline Vector2_t2243707579  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2243707579 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2243707579  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___leftVector_6)); }
	inline Vector2_t2243707579  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2243707579 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2243707579  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___rightVector_7)); }
	inline Vector2_t2243707579  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2243707579 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2243707579  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2243707579  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2243707579 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2243707579  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2243707579  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2243707579 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2243707579  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2243707579_H
#ifndef SINGLE_T2076509932_H
#define SINGLE_T2076509932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t2076509932 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t2076509932, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T2076509932_H
#ifndef REQUIRECOMPONENT_T864575032_H
#define REQUIRECOMPONENT_T864575032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RequireComponent
struct  RequireComponent_t864575032  : public Attribute_t542643598
{
public:
	// System.Type UnityEngine.RequireComponent::m_Type0
	Type_t * ___m_Type0_0;
	// System.Type UnityEngine.RequireComponent::m_Type1
	Type_t * ___m_Type1_1;
	// System.Type UnityEngine.RequireComponent::m_Type2
	Type_t * ___m_Type2_2;

public:
	inline static int32_t get_offset_of_m_Type0_0() { return static_cast<int32_t>(offsetof(RequireComponent_t864575032, ___m_Type0_0)); }
	inline Type_t * get_m_Type0_0() const { return ___m_Type0_0; }
	inline Type_t ** get_address_of_m_Type0_0() { return &___m_Type0_0; }
	inline void set_m_Type0_0(Type_t * value)
	{
		___m_Type0_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type0_0), value);
	}

	inline static int32_t get_offset_of_m_Type1_1() { return static_cast<int32_t>(offsetof(RequireComponent_t864575032, ___m_Type1_1)); }
	inline Type_t * get_m_Type1_1() const { return ___m_Type1_1; }
	inline Type_t ** get_address_of_m_Type1_1() { return &___m_Type1_1; }
	inline void set_m_Type1_1(Type_t * value)
	{
		___m_Type1_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type1_1), value);
	}

	inline static int32_t get_offset_of_m_Type2_2() { return static_cast<int32_t>(offsetof(RequireComponent_t864575032, ___m_Type2_2)); }
	inline Type_t * get_m_Type2_2() const { return ___m_Type2_2; }
	inline Type_t ** get_address_of_m_Type2_2() { return &___m_Type2_2; }
	inline void set_m_Type2_2(Type_t * value)
	{
		___m_Type2_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIRECOMPONENT_T864575032_H
#ifndef UNITYEXCEPTION_T2687879050_H
#define UNITYEXCEPTION_T2687879050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t2687879050  : public Exception_t1927440687
{
public:
	// System.String UnityEngine.UnityException::unityStackTrace
	String_t* ___unityStackTrace_12;

public:
	inline static int32_t get_offset_of_unityStackTrace_12() { return static_cast<int32_t>(offsetof(UnityException_t2687879050, ___unityStackTrace_12)); }
	inline String_t* get_unityStackTrace_12() const { return ___unityStackTrace_12; }
	inline String_t** get_address_of_unityStackTrace_12() { return &___unityStackTrace_12; }
	inline void set_unityStackTrace_12(String_t* value)
	{
		___unityStackTrace_12 = value;
		Il2CppCodeGenWriteBarrier((&___unityStackTrace_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T2687879050_H
#ifndef COLOR32_T874517518_H
#define COLOR32_T874517518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color32
struct ALIGN_TYPE(4) Color32_t874517518 
{
public:
	// System.Byte UnityEngine.Color32::r
	uint8_t ___r_0;
	// System.Byte UnityEngine.Color32::g
	uint8_t ___g_1;
	// System.Byte UnityEngine.Color32::b
	uint8_t ___b_2;
	// System.Byte UnityEngine.Color32::a
	uint8_t ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color32_t874517518, ___r_0)); }
	inline uint8_t get_r_0() const { return ___r_0; }
	inline uint8_t* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(uint8_t value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color32_t874517518, ___g_1)); }
	inline uint8_t get_g_1() const { return ___g_1; }
	inline uint8_t* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(uint8_t value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color32_t874517518, ___b_2)); }
	inline uint8_t get_b_2() const { return ___b_2; }
	inline uint8_t* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(uint8_t value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color32_t874517518, ___a_3)); }
	inline uint8_t get_a_3() const { return ___a_3; }
	inline uint8_t* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(uint8_t value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR32_T874517518_H
#ifndef DISALLOWMULTIPLECOMPONENT_T2656950_H
#define DISALLOWMULTIPLECOMPONENT_T2656950_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DisallowMultipleComponent
struct  DisallowMultipleComponent_t2656950  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISALLOWMULTIPLECOMPONENT_T2656950_H
#ifndef GUITARGETATTRIBUTE_T863467180_H
#define GUITARGETATTRIBUTE_T863467180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUITargetAttribute
struct  GUITargetAttribute_t863467180  : public Attribute_t542643598
{
public:
	// System.Int32 UnityEngine.GUITargetAttribute::displayMask
	int32_t ___displayMask_0;

public:
	inline static int32_t get_offset_of_displayMask_0() { return static_cast<int32_t>(offsetof(GUITargetAttribute_t863467180, ___displayMask_0)); }
	inline int32_t get_displayMask_0() const { return ___displayMask_0; }
	inline int32_t* get_address_of_displayMask_0() { return &___displayMask_0; }
	inline void set_displayMask_0(int32_t value)
	{
		___displayMask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUITARGETATTRIBUTE_T863467180_H
#ifndef EXITGUIEXCEPTION_T1618397098_H
#define EXITGUIEXCEPTION_T1618397098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExitGUIException
struct  ExitGUIException_t1618397098  : public Exception_t1927440687
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXITGUIEXCEPTION_T1618397098_H
#ifndef SPACEATTRIBUTE_T952253354_H
#define SPACEATTRIBUTE_T952253354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpaceAttribute
struct  SpaceAttribute_t952253354  : public PropertyAttribute_t2606999759
{
public:
	// System.Single UnityEngine.SpaceAttribute::height
	float ___height_0;

public:
	inline static int32_t get_offset_of_height_0() { return static_cast<int32_t>(offsetof(SpaceAttribute_t952253354, ___height_0)); }
	inline float get_height_0() const { return ___height_0; }
	inline float* get_address_of_height_0() { return &___height_0; }
	inline void set_height_0(float value)
	{
		___height_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACEATTRIBUTE_T952253354_H
#ifndef RANGEATTRIBUTE_T3336560921_H
#define RANGEATTRIBUTE_T3336560921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RangeAttribute
struct  RangeAttribute_t3336560921  : public PropertyAttribute_t2606999759
{
public:
	// System.Single UnityEngine.RangeAttribute::min
	float ___min_0;
	// System.Single UnityEngine.RangeAttribute::max
	float ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(RangeAttribute_t3336560921, ___min_0)); }
	inline float get_min_0() const { return ___min_0; }
	inline float* get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(float value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(RangeAttribute_t3336560921, ___max_1)); }
	inline float get_max_1() const { return ___max_1; }
	inline float* get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(float value)
	{
		___max_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGEATTRIBUTE_T3336560921_H
#ifndef DATETIMEKIND_T2186819611_H
#define DATETIMEKIND_T2186819611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t2186819611 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t2186819611, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T2186819611_H
#ifndef DELEGATE_T3022476291_H
#define DELEGATE_T3022476291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3022476291  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1572802995 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___data_8)); }
	inline DelegateData_t1572802995 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1572802995 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1572802995 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T3022476291_H
#ifndef TOOLTIPATTRIBUTE_T4278647215_H
#define TOOLTIPATTRIBUTE_T4278647215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TooltipAttribute
struct  TooltipAttribute_t4278647215  : public PropertyAttribute_t2606999759
{
public:
	// System.String UnityEngine.TooltipAttribute::tooltip
	String_t* ___tooltip_0;

public:
	inline static int32_t get_offset_of_tooltip_0() { return static_cast<int32_t>(offsetof(TooltipAttribute_t4278647215, ___tooltip_0)); }
	inline String_t* get_tooltip_0() const { return ___tooltip_0; }
	inline String_t** get_address_of_tooltip_0() { return &___tooltip_0; }
	inline void set_tooltip_0(String_t* value)
	{
		___tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((&___tooltip_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOOLTIPATTRIBUTE_T4278647215_H
#ifndef OBJECT_T1021602117_H
#define OBJECT_T1021602117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1021602117  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1021602117, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1021602117_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1021602117_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1021602117_H
#ifndef TRACKEDREFERENCE_T1045890189_H
#define TRACKEDREFERENCE_T1045890189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TrackedReference
struct  TrackedReference_t1045890189  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TrackedReference_t1045890189, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_t1045890189_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_t1045890189_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // TRACKEDREFERENCE_T1045890189_H
#ifndef PERSISTENTLISTENERMODE_T857969000_H
#define PERSISTENTLISTENERMODE_T857969000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentListenerMode
struct  PersistentListenerMode_t857969000 
{
public:
	// System.Int32 UnityEngine.Events.PersistentListenerMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PersistentListenerMode_t857969000, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTLISTENERMODE_T857969000_H
#ifndef UNITYEVENTCALLSTATE_T3420894182_H
#define UNITYEVENTCALLSTATE_T3420894182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventCallState
struct  UnityEventCallState_t3420894182 
{
public:
	// System.Int32 UnityEngine.Events.UnityEventCallState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityEventCallState_t3420894182, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTCALLSTATE_T3420894182_H
#ifndef TOUCHSCREENKEYBOARDTYPE_T875112366_H
#define TOUCHSCREENKEYBOARDTYPE_T875112366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboardType
struct  TouchScreenKeyboardType_t875112366 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboardType_t875112366, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARDTYPE_T875112366_H
#ifndef TEXTAREAATTRIBUTE_T2454598508_H
#define TEXTAREAATTRIBUTE_T2454598508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAreaAttribute
struct  TextAreaAttribute_t2454598508  : public PropertyAttribute_t2606999759
{
public:
	// System.Int32 UnityEngine.TextAreaAttribute::minLines
	int32_t ___minLines_0;
	// System.Int32 UnityEngine.TextAreaAttribute::maxLines
	int32_t ___maxLines_1;

public:
	inline static int32_t get_offset_of_minLines_0() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t2454598508, ___minLines_0)); }
	inline int32_t get_minLines_0() const { return ___minLines_0; }
	inline int32_t* get_address_of_minLines_0() { return &___minLines_0; }
	inline void set_minLines_0(int32_t value)
	{
		___minLines_0 = value;
	}

	inline static int32_t get_offset_of_maxLines_1() { return static_cast<int32_t>(offsetof(TextAreaAttribute_t2454598508, ___maxLines_1)); }
	inline int32_t get_maxLines_1() const { return ___maxLines_1; }
	inline int32_t* get_address_of_maxLines_1() { return &___maxLines_1; }
	inline void set_maxLines_1(int32_t value)
	{
		___maxLines_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTAREAATTRIBUTE_T2454598508_H
#ifndef RAY_T2469606224_H
#define RAY_T2469606224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t2469606224 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t2243707580  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t2243707580  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2469606224, ___m_Origin_0)); }
	inline Vector3_t2243707580  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t2243707580 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t2243707580  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2469606224, ___m_Direction_1)); }
	inline Vector3_t2243707580  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t2243707580 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t2243707580  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T2469606224_H
#ifndef RECTOFFSET_T3387826427_H
#define RECTOFFSET_T3387826427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t3387826427  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t3387826427, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t3387826427, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t3387826427_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t3387826427_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T3387826427_H
#ifndef PLANE_T3727654732_H
#define PLANE_T3727654732_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Plane
struct  Plane_t3727654732 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t2243707580  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t3727654732, ___m_Normal_0)); }
	inline Vector3_t2243707580  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t2243707580 * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t2243707580  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t3727654732, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLANE_T3727654732_H
#ifndef EVENTTYPE_T3919834026_H
#define EVENTTYPE_T3919834026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventType
struct  EventType_t3919834026 
{
public:
	// System.Int32 UnityEngine.EventType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventType_t3919834026, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTTYPE_T3919834026_H
#ifndef GUIUTILITY_T3275770671_H
#define GUIUTILITY_T3275770671_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIUtility
struct  GUIUtility_t3275770671  : public RuntimeObject
{
public:

public:
};

struct GUIUtility_t3275770671_StaticFields
{
public:
	// System.Int32 UnityEngine.GUIUtility::s_SkinMode
	int32_t ___s_SkinMode_0;
	// System.Int32 UnityEngine.GUIUtility::s_OriginalID
	int32_t ___s_OriginalID_1;
	// System.Action UnityEngine.GUIUtility::takeCapture
	Action_t3226471752 * ___takeCapture_2;
	// System.Action UnityEngine.GUIUtility::releaseCapture
	Action_t3226471752 * ___releaseCapture_3;
	// System.Func`3<System.Int32,System.IntPtr,System.Boolean> UnityEngine.GUIUtility::processEvent
	Func_3_t3099046685 * ___processEvent_4;
	// System.Func`2<System.Exception,System.Boolean> UnityEngine.GUIUtility::endContainerGUIFromException
	Func_2_t2127852612 * ___endContainerGUIFromException_5;
	// System.Boolean UnityEngine.GUIUtility::<guiIsExiting>k__BackingField
	bool ___U3CguiIsExitingU3Ek__BackingField_6;
	// UnityEngine.Vector2 UnityEngine.GUIUtility::s_EditorScreenPointOffset
	Vector2_t2243707579  ___s_EditorScreenPointOffset_7;

public:
	inline static int32_t get_offset_of_s_SkinMode_0() { return static_cast<int32_t>(offsetof(GUIUtility_t3275770671_StaticFields, ___s_SkinMode_0)); }
	inline int32_t get_s_SkinMode_0() const { return ___s_SkinMode_0; }
	inline int32_t* get_address_of_s_SkinMode_0() { return &___s_SkinMode_0; }
	inline void set_s_SkinMode_0(int32_t value)
	{
		___s_SkinMode_0 = value;
	}

	inline static int32_t get_offset_of_s_OriginalID_1() { return static_cast<int32_t>(offsetof(GUIUtility_t3275770671_StaticFields, ___s_OriginalID_1)); }
	inline int32_t get_s_OriginalID_1() const { return ___s_OriginalID_1; }
	inline int32_t* get_address_of_s_OriginalID_1() { return &___s_OriginalID_1; }
	inline void set_s_OriginalID_1(int32_t value)
	{
		___s_OriginalID_1 = value;
	}

	inline static int32_t get_offset_of_takeCapture_2() { return static_cast<int32_t>(offsetof(GUIUtility_t3275770671_StaticFields, ___takeCapture_2)); }
	inline Action_t3226471752 * get_takeCapture_2() const { return ___takeCapture_2; }
	inline Action_t3226471752 ** get_address_of_takeCapture_2() { return &___takeCapture_2; }
	inline void set_takeCapture_2(Action_t3226471752 * value)
	{
		___takeCapture_2 = value;
		Il2CppCodeGenWriteBarrier((&___takeCapture_2), value);
	}

	inline static int32_t get_offset_of_releaseCapture_3() { return static_cast<int32_t>(offsetof(GUIUtility_t3275770671_StaticFields, ___releaseCapture_3)); }
	inline Action_t3226471752 * get_releaseCapture_3() const { return ___releaseCapture_3; }
	inline Action_t3226471752 ** get_address_of_releaseCapture_3() { return &___releaseCapture_3; }
	inline void set_releaseCapture_3(Action_t3226471752 * value)
	{
		___releaseCapture_3 = value;
		Il2CppCodeGenWriteBarrier((&___releaseCapture_3), value);
	}

	inline static int32_t get_offset_of_processEvent_4() { return static_cast<int32_t>(offsetof(GUIUtility_t3275770671_StaticFields, ___processEvent_4)); }
	inline Func_3_t3099046685 * get_processEvent_4() const { return ___processEvent_4; }
	inline Func_3_t3099046685 ** get_address_of_processEvent_4() { return &___processEvent_4; }
	inline void set_processEvent_4(Func_3_t3099046685 * value)
	{
		___processEvent_4 = value;
		Il2CppCodeGenWriteBarrier((&___processEvent_4), value);
	}

	inline static int32_t get_offset_of_endContainerGUIFromException_5() { return static_cast<int32_t>(offsetof(GUIUtility_t3275770671_StaticFields, ___endContainerGUIFromException_5)); }
	inline Func_2_t2127852612 * get_endContainerGUIFromException_5() const { return ___endContainerGUIFromException_5; }
	inline Func_2_t2127852612 ** get_address_of_endContainerGUIFromException_5() { return &___endContainerGUIFromException_5; }
	inline void set_endContainerGUIFromException_5(Func_2_t2127852612 * value)
	{
		___endContainerGUIFromException_5 = value;
		Il2CppCodeGenWriteBarrier((&___endContainerGUIFromException_5), value);
	}

	inline static int32_t get_offset_of_U3CguiIsExitingU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GUIUtility_t3275770671_StaticFields, ___U3CguiIsExitingU3Ek__BackingField_6)); }
	inline bool get_U3CguiIsExitingU3Ek__BackingField_6() const { return ___U3CguiIsExitingU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CguiIsExitingU3Ek__BackingField_6() { return &___U3CguiIsExitingU3Ek__BackingField_6; }
	inline void set_U3CguiIsExitingU3Ek__BackingField_6(bool value)
	{
		___U3CguiIsExitingU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_s_EditorScreenPointOffset_7() { return static_cast<int32_t>(offsetof(GUIUtility_t3275770671_StaticFields, ___s_EditorScreenPointOffset_7)); }
	inline Vector2_t2243707579  get_s_EditorScreenPointOffset_7() const { return ___s_EditorScreenPointOffset_7; }
	inline Vector2_t2243707579 * get_address_of_s_EditorScreenPointOffset_7() { return &___s_EditorScreenPointOffset_7; }
	inline void set_s_EditorScreenPointOffset_7(Vector2_t2243707579  value)
	{
		___s_EditorScreenPointOffset_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIUTILITY_T3275770671_H
#ifndef TEXTCLIPPING_T2573530411_H
#define TEXTCLIPPING_T2573530411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextClipping
struct  TextClipping_t2573530411 
{
public:
	// System.Int32 UnityEngine.TextClipping::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextClipping_t2573530411, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTCLIPPING_T2573530411_H
#ifndef INTERNAL_DRAWWITHTEXTSELECTIONARGUMENTS_T1327795077_H
#define INTERNAL_DRAWWITHTEXTSELECTIONARGUMENTS_T1327795077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal_DrawWithTextSelectionArguments
struct  Internal_DrawWithTextSelectionArguments_t1327795077 
{
public:
	// System.IntPtr UnityEngine.Internal_DrawWithTextSelectionArguments::target
	IntPtr_t ___target_0;
	// UnityEngine.Rect UnityEngine.Internal_DrawWithTextSelectionArguments::position
	Rect_t3681755626  ___position_1;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::firstPos
	int32_t ___firstPos_2;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::lastPos
	int32_t ___lastPos_3;
	// UnityEngine.Color UnityEngine.Internal_DrawWithTextSelectionArguments::cursorColor
	Color_t2020392075  ___cursorColor_4;
	// UnityEngine.Color UnityEngine.Internal_DrawWithTextSelectionArguments::selectionColor
	Color_t2020392075  ___selectionColor_5;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::isHover
	int32_t ___isHover_6;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::isActive
	int32_t ___isActive_7;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::on
	int32_t ___on_8;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::hasKeyboardFocus
	int32_t ___hasKeyboardFocus_9;
	// System.Int32 UnityEngine.Internal_DrawWithTextSelectionArguments::drawSelectionAsComposition
	int32_t ___drawSelectionAsComposition_10;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1327795077, ___target_0)); }
	inline IntPtr_t get_target_0() const { return ___target_0; }
	inline IntPtr_t* get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(IntPtr_t value)
	{
		___target_0 = value;
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1327795077, ___position_1)); }
	inline Rect_t3681755626  get_position_1() const { return ___position_1; }
	inline Rect_t3681755626 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Rect_t3681755626  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_firstPos_2() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1327795077, ___firstPos_2)); }
	inline int32_t get_firstPos_2() const { return ___firstPos_2; }
	inline int32_t* get_address_of_firstPos_2() { return &___firstPos_2; }
	inline void set_firstPos_2(int32_t value)
	{
		___firstPos_2 = value;
	}

	inline static int32_t get_offset_of_lastPos_3() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1327795077, ___lastPos_3)); }
	inline int32_t get_lastPos_3() const { return ___lastPos_3; }
	inline int32_t* get_address_of_lastPos_3() { return &___lastPos_3; }
	inline void set_lastPos_3(int32_t value)
	{
		___lastPos_3 = value;
	}

	inline static int32_t get_offset_of_cursorColor_4() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1327795077, ___cursorColor_4)); }
	inline Color_t2020392075  get_cursorColor_4() const { return ___cursorColor_4; }
	inline Color_t2020392075 * get_address_of_cursorColor_4() { return &___cursorColor_4; }
	inline void set_cursorColor_4(Color_t2020392075  value)
	{
		___cursorColor_4 = value;
	}

	inline static int32_t get_offset_of_selectionColor_5() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1327795077, ___selectionColor_5)); }
	inline Color_t2020392075  get_selectionColor_5() const { return ___selectionColor_5; }
	inline Color_t2020392075 * get_address_of_selectionColor_5() { return &___selectionColor_5; }
	inline void set_selectionColor_5(Color_t2020392075  value)
	{
		___selectionColor_5 = value;
	}

	inline static int32_t get_offset_of_isHover_6() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1327795077, ___isHover_6)); }
	inline int32_t get_isHover_6() const { return ___isHover_6; }
	inline int32_t* get_address_of_isHover_6() { return &___isHover_6; }
	inline void set_isHover_6(int32_t value)
	{
		___isHover_6 = value;
	}

	inline static int32_t get_offset_of_isActive_7() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1327795077, ___isActive_7)); }
	inline int32_t get_isActive_7() const { return ___isActive_7; }
	inline int32_t* get_address_of_isActive_7() { return &___isActive_7; }
	inline void set_isActive_7(int32_t value)
	{
		___isActive_7 = value;
	}

	inline static int32_t get_offset_of_on_8() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1327795077, ___on_8)); }
	inline int32_t get_on_8() const { return ___on_8; }
	inline int32_t* get_address_of_on_8() { return &___on_8; }
	inline void set_on_8(int32_t value)
	{
		___on_8 = value;
	}

	inline static int32_t get_offset_of_hasKeyboardFocus_9() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1327795077, ___hasKeyboardFocus_9)); }
	inline int32_t get_hasKeyboardFocus_9() const { return ___hasKeyboardFocus_9; }
	inline int32_t* get_address_of_hasKeyboardFocus_9() { return &___hasKeyboardFocus_9; }
	inline void set_hasKeyboardFocus_9(int32_t value)
	{
		___hasKeyboardFocus_9 = value;
	}

	inline static int32_t get_offset_of_drawSelectionAsComposition_10() { return static_cast<int32_t>(offsetof(Internal_DrawWithTextSelectionArguments_t1327795077, ___drawSelectionAsComposition_10)); }
	inline int32_t get_drawSelectionAsComposition_10() const { return ___drawSelectionAsComposition_10; }
	inline int32_t* get_address_of_drawSelectionAsComposition_10() { return &___drawSelectionAsComposition_10; }
	inline void set_drawSelectionAsComposition_10(int32_t value)
	{
		___drawSelectionAsComposition_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_DRAWWITHTEXTSELECTIONARGUMENTS_T1327795077_H
#ifndef INTERNAL_DRAWARGUMENTS_T2834709342_H
#define INTERNAL_DRAWARGUMENTS_T2834709342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Internal_DrawArguments
struct  Internal_DrawArguments_t2834709342 
{
public:
	// System.IntPtr UnityEngine.Internal_DrawArguments::target
	IntPtr_t ___target_0;
	// UnityEngine.Rect UnityEngine.Internal_DrawArguments::position
	Rect_t3681755626  ___position_1;
	// System.Int32 UnityEngine.Internal_DrawArguments::isHover
	int32_t ___isHover_2;
	// System.Int32 UnityEngine.Internal_DrawArguments::isActive
	int32_t ___isActive_3;
	// System.Int32 UnityEngine.Internal_DrawArguments::on
	int32_t ___on_4;
	// System.Int32 UnityEngine.Internal_DrawArguments::hasKeyboardFocus
	int32_t ___hasKeyboardFocus_5;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(Internal_DrawArguments_t2834709342, ___target_0)); }
	inline IntPtr_t get_target_0() const { return ___target_0; }
	inline IntPtr_t* get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(IntPtr_t value)
	{
		___target_0 = value;
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(Internal_DrawArguments_t2834709342, ___position_1)); }
	inline Rect_t3681755626  get_position_1() const { return ___position_1; }
	inline Rect_t3681755626 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Rect_t3681755626  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_isHover_2() { return static_cast<int32_t>(offsetof(Internal_DrawArguments_t2834709342, ___isHover_2)); }
	inline int32_t get_isHover_2() const { return ___isHover_2; }
	inline int32_t* get_address_of_isHover_2() { return &___isHover_2; }
	inline void set_isHover_2(int32_t value)
	{
		___isHover_2 = value;
	}

	inline static int32_t get_offset_of_isActive_3() { return static_cast<int32_t>(offsetof(Internal_DrawArguments_t2834709342, ___isActive_3)); }
	inline int32_t get_isActive_3() const { return ___isActive_3; }
	inline int32_t* get_address_of_isActive_3() { return &___isActive_3; }
	inline void set_isActive_3(int32_t value)
	{
		___isActive_3 = value;
	}

	inline static int32_t get_offset_of_on_4() { return static_cast<int32_t>(offsetof(Internal_DrawArguments_t2834709342, ___on_4)); }
	inline int32_t get_on_4() const { return ___on_4; }
	inline int32_t* get_address_of_on_4() { return &___on_4; }
	inline void set_on_4(int32_t value)
	{
		___on_4 = value;
	}

	inline static int32_t get_offset_of_hasKeyboardFocus_5() { return static_cast<int32_t>(offsetof(Internal_DrawArguments_t2834709342, ___hasKeyboardFocus_5)); }
	inline int32_t get_hasKeyboardFocus_5() const { return ___hasKeyboardFocus_5; }
	inline int32_t* get_address_of_hasKeyboardFocus_5() { return &___hasKeyboardFocus_5; }
	inline void set_hasKeyboardFocus_5(int32_t value)
	{
		___hasKeyboardFocus_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNAL_DRAWARGUMENTS_T2834709342_H
#ifndef DBLCLICKSNAPPING_T1119726228_H
#define DBLCLICKSNAPPING_T1119726228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextEditor/DblClickSnapping
struct  DblClickSnapping_t1119726228 
{
public:
	// System.Byte UnityEngine.TextEditor/DblClickSnapping::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DblClickSnapping_t1119726228, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBLCLICKSNAPPING_T1119726228_H
#ifndef EVENTMODIFIERS_T2690251474_H
#define EVENTMODIFIERS_T2690251474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventModifiers
struct  EventModifiers_t2690251474 
{
public:
	// System.Int32 UnityEngine.EventModifiers::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventModifiers_t2690251474, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTMODIFIERS_T2690251474_H
#ifndef GUISETTINGS_T622856320_H
#define GUISETTINGS_T622856320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISettings
struct  GUISettings_t622856320  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.GUISettings::m_DoubleClickSelectsWord
	bool ___m_DoubleClickSelectsWord_0;
	// System.Boolean UnityEngine.GUISettings::m_TripleClickSelectsLine
	bool ___m_TripleClickSelectsLine_1;
	// UnityEngine.Color UnityEngine.GUISettings::m_CursorColor
	Color_t2020392075  ___m_CursorColor_2;
	// System.Single UnityEngine.GUISettings::m_CursorFlashSpeed
	float ___m_CursorFlashSpeed_3;
	// UnityEngine.Color UnityEngine.GUISettings::m_SelectionColor
	Color_t2020392075  ___m_SelectionColor_4;

public:
	inline static int32_t get_offset_of_m_DoubleClickSelectsWord_0() { return static_cast<int32_t>(offsetof(GUISettings_t622856320, ___m_DoubleClickSelectsWord_0)); }
	inline bool get_m_DoubleClickSelectsWord_0() const { return ___m_DoubleClickSelectsWord_0; }
	inline bool* get_address_of_m_DoubleClickSelectsWord_0() { return &___m_DoubleClickSelectsWord_0; }
	inline void set_m_DoubleClickSelectsWord_0(bool value)
	{
		___m_DoubleClickSelectsWord_0 = value;
	}

	inline static int32_t get_offset_of_m_TripleClickSelectsLine_1() { return static_cast<int32_t>(offsetof(GUISettings_t622856320, ___m_TripleClickSelectsLine_1)); }
	inline bool get_m_TripleClickSelectsLine_1() const { return ___m_TripleClickSelectsLine_1; }
	inline bool* get_address_of_m_TripleClickSelectsLine_1() { return &___m_TripleClickSelectsLine_1; }
	inline void set_m_TripleClickSelectsLine_1(bool value)
	{
		___m_TripleClickSelectsLine_1 = value;
	}

	inline static int32_t get_offset_of_m_CursorColor_2() { return static_cast<int32_t>(offsetof(GUISettings_t622856320, ___m_CursorColor_2)); }
	inline Color_t2020392075  get_m_CursorColor_2() const { return ___m_CursorColor_2; }
	inline Color_t2020392075 * get_address_of_m_CursorColor_2() { return &___m_CursorColor_2; }
	inline void set_m_CursorColor_2(Color_t2020392075  value)
	{
		___m_CursorColor_2 = value;
	}

	inline static int32_t get_offset_of_m_CursorFlashSpeed_3() { return static_cast<int32_t>(offsetof(GUISettings_t622856320, ___m_CursorFlashSpeed_3)); }
	inline float get_m_CursorFlashSpeed_3() const { return ___m_CursorFlashSpeed_3; }
	inline float* get_address_of_m_CursorFlashSpeed_3() { return &___m_CursorFlashSpeed_3; }
	inline void set_m_CursorFlashSpeed_3(float value)
	{
		___m_CursorFlashSpeed_3 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_4() { return static_cast<int32_t>(offsetof(GUISettings_t622856320, ___m_SelectionColor_4)); }
	inline Color_t2020392075  get_m_SelectionColor_4() const { return ___m_SelectionColor_4; }
	inline Color_t2020392075 * get_address_of_m_SelectionColor_4() { return &___m_SelectionColor_4; }
	inline void set_m_SelectionColor_4(Color_t2020392075  value)
	{
		___m_SelectionColor_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISETTINGS_T622856320_H
#ifndef GUILAYOUTENTRY_T3828586629_H
#define GUILAYOUTENTRY_T3828586629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutEntry
struct  GUILayoutEntry_t3828586629  : public RuntimeObject
{
public:
	// System.Single UnityEngine.GUILayoutEntry::minWidth
	float ___minWidth_0;
	// System.Single UnityEngine.GUILayoutEntry::maxWidth
	float ___maxWidth_1;
	// System.Single UnityEngine.GUILayoutEntry::minHeight
	float ___minHeight_2;
	// System.Single UnityEngine.GUILayoutEntry::maxHeight
	float ___maxHeight_3;
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::rect
	Rect_t3681755626  ___rect_4;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchWidth
	int32_t ___stretchWidth_5;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchHeight
	int32_t ___stretchHeight_6;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::m_Style
	GUIStyle_t1799908754 * ___m_Style_7;

public:
	inline static int32_t get_offset_of_minWidth_0() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629, ___minWidth_0)); }
	inline float get_minWidth_0() const { return ___minWidth_0; }
	inline float* get_address_of_minWidth_0() { return &___minWidth_0; }
	inline void set_minWidth_0(float value)
	{
		___minWidth_0 = value;
	}

	inline static int32_t get_offset_of_maxWidth_1() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629, ___maxWidth_1)); }
	inline float get_maxWidth_1() const { return ___maxWidth_1; }
	inline float* get_address_of_maxWidth_1() { return &___maxWidth_1; }
	inline void set_maxWidth_1(float value)
	{
		___maxWidth_1 = value;
	}

	inline static int32_t get_offset_of_minHeight_2() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629, ___minHeight_2)); }
	inline float get_minHeight_2() const { return ___minHeight_2; }
	inline float* get_address_of_minHeight_2() { return &___minHeight_2; }
	inline void set_minHeight_2(float value)
	{
		___minHeight_2 = value;
	}

	inline static int32_t get_offset_of_maxHeight_3() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629, ___maxHeight_3)); }
	inline float get_maxHeight_3() const { return ___maxHeight_3; }
	inline float* get_address_of_maxHeight_3() { return &___maxHeight_3; }
	inline void set_maxHeight_3(float value)
	{
		___maxHeight_3 = value;
	}

	inline static int32_t get_offset_of_rect_4() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629, ___rect_4)); }
	inline Rect_t3681755626  get_rect_4() const { return ___rect_4; }
	inline Rect_t3681755626 * get_address_of_rect_4() { return &___rect_4; }
	inline void set_rect_4(Rect_t3681755626  value)
	{
		___rect_4 = value;
	}

	inline static int32_t get_offset_of_stretchWidth_5() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629, ___stretchWidth_5)); }
	inline int32_t get_stretchWidth_5() const { return ___stretchWidth_5; }
	inline int32_t* get_address_of_stretchWidth_5() { return &___stretchWidth_5; }
	inline void set_stretchWidth_5(int32_t value)
	{
		___stretchWidth_5 = value;
	}

	inline static int32_t get_offset_of_stretchHeight_6() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629, ___stretchHeight_6)); }
	inline int32_t get_stretchHeight_6() const { return ___stretchHeight_6; }
	inline int32_t* get_address_of_stretchHeight_6() { return &___stretchHeight_6; }
	inline void set_stretchHeight_6(int32_t value)
	{
		___stretchHeight_6 = value;
	}

	inline static int32_t get_offset_of_m_Style_7() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629, ___m_Style_7)); }
	inline GUIStyle_t1799908754 * get_m_Style_7() const { return ___m_Style_7; }
	inline GUIStyle_t1799908754 ** get_address_of_m_Style_7() { return &___m_Style_7; }
	inline void set_m_Style_7(GUIStyle_t1799908754 * value)
	{
		___m_Style_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Style_7), value);
	}
};

struct GUILayoutEntry_t3828586629_StaticFields
{
public:
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::kDummyRect
	Rect_t3681755626  ___kDummyRect_8;
	// System.Int32 UnityEngine.GUILayoutEntry::indent
	int32_t ___indent_9;

public:
	inline static int32_t get_offset_of_kDummyRect_8() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629_StaticFields, ___kDummyRect_8)); }
	inline Rect_t3681755626  get_kDummyRect_8() const { return ___kDummyRect_8; }
	inline Rect_t3681755626 * get_address_of_kDummyRect_8() { return &___kDummyRect_8; }
	inline void set_kDummyRect_8(Rect_t3681755626  value)
	{
		___kDummyRect_8 = value;
	}

	inline static int32_t get_offset_of_indent_9() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629_StaticFields, ___indent_9)); }
	inline int32_t get_indent_9() const { return ___indent_9; }
	inline int32_t* get_address_of_indent_9() { return &___indent_9; }
	inline void set_indent_9(int32_t value)
	{
		___indent_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTENTRY_T3828586629_H
#ifndef GUILAYOUTUTILITY_T996096873_H
#define GUILAYOUTUTILITY_T996096873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutUtility
struct  GUILayoutUtility_t996096873  : public RuntimeObject
{
public:

public:
};

struct GUILayoutUtility_t996096873_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredLayouts
	Dictionary_2_t2128606680 * ___s_StoredLayouts_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.GUILayoutUtility/LayoutCache> UnityEngine.GUILayoutUtility::s_StoredWindows
	Dictionary_2_t2128606680 * ___s_StoredWindows_1;
	// UnityEngine.GUILayoutUtility/LayoutCache UnityEngine.GUILayoutUtility::current
	LayoutCache_t3120781045 * ___current_2;
	// UnityEngine.Rect UnityEngine.GUILayoutUtility::kDummyRect
	Rect_t3681755626  ___kDummyRect_3;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutUtility::s_SpaceStyle
	GUIStyle_t1799908754 * ___s_SpaceStyle_4;

public:
	inline static int32_t get_offset_of_s_StoredLayouts_0() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t996096873_StaticFields, ___s_StoredLayouts_0)); }
	inline Dictionary_2_t2128606680 * get_s_StoredLayouts_0() const { return ___s_StoredLayouts_0; }
	inline Dictionary_2_t2128606680 ** get_address_of_s_StoredLayouts_0() { return &___s_StoredLayouts_0; }
	inline void set_s_StoredLayouts_0(Dictionary_2_t2128606680 * value)
	{
		___s_StoredLayouts_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_StoredLayouts_0), value);
	}

	inline static int32_t get_offset_of_s_StoredWindows_1() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t996096873_StaticFields, ___s_StoredWindows_1)); }
	inline Dictionary_2_t2128606680 * get_s_StoredWindows_1() const { return ___s_StoredWindows_1; }
	inline Dictionary_2_t2128606680 ** get_address_of_s_StoredWindows_1() { return &___s_StoredWindows_1; }
	inline void set_s_StoredWindows_1(Dictionary_2_t2128606680 * value)
	{
		___s_StoredWindows_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_StoredWindows_1), value);
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t996096873_StaticFields, ___current_2)); }
	inline LayoutCache_t3120781045 * get_current_2() const { return ___current_2; }
	inline LayoutCache_t3120781045 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(LayoutCache_t3120781045 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((&___current_2), value);
	}

	inline static int32_t get_offset_of_kDummyRect_3() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t996096873_StaticFields, ___kDummyRect_3)); }
	inline Rect_t3681755626  get_kDummyRect_3() const { return ___kDummyRect_3; }
	inline Rect_t3681755626 * get_address_of_kDummyRect_3() { return &___kDummyRect_3; }
	inline void set_kDummyRect_3(Rect_t3681755626  value)
	{
		___kDummyRect_3 = value;
	}

	inline static int32_t get_offset_of_s_SpaceStyle_4() { return static_cast<int32_t>(offsetof(GUILayoutUtility_t996096873_StaticFields, ___s_SpaceStyle_4)); }
	inline GUIStyle_t1799908754 * get_s_SpaceStyle_4() const { return ___s_SpaceStyle_4; }
	inline GUIStyle_t1799908754 ** get_address_of_s_SpaceStyle_4() { return &___s_SpaceStyle_4; }
	inline void set_s_SpaceStyle_4(GUIStyle_t1799908754 * value)
	{
		___s_SpaceStyle_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_SpaceStyle_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTUTILITY_T996096873_H
#ifndef IMAGEPOSITION_T3491916276_H
#define IMAGEPOSITION_T3491916276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ImagePosition
struct  ImagePosition_t3491916276 
{
public:
	// System.Int32 UnityEngine.ImagePosition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ImagePosition_t3491916276, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGEPOSITION_T3491916276_H
#ifndef GUISTYLESTATE_T3801000545_H
#define GUISTYLESTATE_T3801000545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t3801000545  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t1799908754 * ___m_SourceStyle_1;
	// UnityEngine.Texture2D UnityEngine.GUIStyleState::m_Background
	Texture2D_t3542995729 * ___m_Background_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t3801000545, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t3801000545, ___m_SourceStyle_1)); }
	inline GUIStyle_t1799908754 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t1799908754 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t1799908754 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}

	inline static int32_t get_offset_of_m_Background_2() { return static_cast<int32_t>(offsetof(GUIStyleState_t3801000545, ___m_Background_2)); }
	inline Texture2D_t3542995729 * get_m_Background_2() const { return ___m_Background_2; }
	inline Texture2D_t3542995729 ** get_address_of_m_Background_2() { return &___m_Background_2; }
	inline void set_m_Background_2(Texture2D_t3542995729 * value)
	{
		___m_Background_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Background_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t3801000545_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t1799908754_marshaled_pinvoke* ___m_SourceStyle_1;
	Texture2D_t3542995729 * ___m_Background_2;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t3801000545_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t1799908754_marshaled_com* ___m_SourceStyle_1;
	Texture2D_t3542995729 * ___m_Background_2;
};
#endif // GUISTYLESTATE_T3801000545_H
#ifndef TYPE_T4024155706_H
#define TYPE_T4024155706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutOption/Type
struct  Type_t4024155706 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t4024155706, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T4024155706_H
#ifndef EVENT_T3028476042_H
#define EVENT_T3028476042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Event
struct  Event_t3028476042  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Event::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Event_t3028476042, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

struct Event_t3028476042_StaticFields
{
public:
	// UnityEngine.Event UnityEngine.Event::s_Current
	Event_t3028476042 * ___s_Current_1;
	// UnityEngine.Event UnityEngine.Event::s_MasterEvent
	Event_t3028476042 * ___s_MasterEvent_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Event::<>f__switch$map0
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map0_3;

public:
	inline static int32_t get_offset_of_s_Current_1() { return static_cast<int32_t>(offsetof(Event_t3028476042_StaticFields, ___s_Current_1)); }
	inline Event_t3028476042 * get_s_Current_1() const { return ___s_Current_1; }
	inline Event_t3028476042 ** get_address_of_s_Current_1() { return &___s_Current_1; }
	inline void set_s_Current_1(Event_t3028476042 * value)
	{
		___s_Current_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_Current_1), value);
	}

	inline static int32_t get_offset_of_s_MasterEvent_2() { return static_cast<int32_t>(offsetof(Event_t3028476042_StaticFields, ___s_MasterEvent_2)); }
	inline Event_t3028476042 * get_s_MasterEvent_2() const { return ___s_MasterEvent_2; }
	inline Event_t3028476042 ** get_address_of_s_MasterEvent_2() { return &___s_MasterEvent_2; }
	inline void set_s_MasterEvent_2(Event_t3028476042 * value)
	{
		___s_MasterEvent_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_MasterEvent_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_3() { return static_cast<int32_t>(offsetof(Event_t3028476042_StaticFields, ___U3CU3Ef__switchU24map0_3)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map0_3() const { return ___U3CU3Ef__switchU24map0_3; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map0_3() { return &___U3CU3Ef__switchU24map0_3; }
	inline void set_U3CU3Ef__switchU24map0_3(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map0_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Event
struct Event_t3028476042_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Event
struct Event_t3028476042_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // EVENT_T3028476042_H
#ifndef COMPAREFUNCTION_T457874581_H
#define COMPAREFUNCTION_T457874581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.CompareFunction
struct  CompareFunction_t457874581 
{
public:
	// System.Int32 UnityEngine.Rendering.CompareFunction::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CompareFunction_t457874581, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPAREFUNCTION_T457874581_H
#ifndef TEXTUREWRAPMODE_T3683976566_H
#define TEXTUREWRAPMODE_T3683976566_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t3683976566 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureWrapMode_t3683976566, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREWRAPMODE_T3683976566_H
#ifndef MATHFINTERNAL_T715669973_H
#define MATHFINTERNAL_T715669973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.MathfInternal
struct  MathfInternal_t715669973 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t715669973__padding[1];
	};

public:
};

struct MathfInternal_t715669973_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t715669973_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t715669973_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t715669973_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHFINTERNAL_T715669973_H
#ifndef KEYCODE_T2283395152_H
#define KEYCODE_T2283395152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2283395152 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2283395152, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2283395152_H
#ifndef STENCILOP_T2936374925_H
#define STENCILOP_T2936374925_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.StencilOp
struct  StencilOp_t2936374925 
{
public:
	// System.Int32 UnityEngine.Rendering.StencilOp::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StencilOp_t2936374925, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STENCILOP_T2936374925_H
#ifndef COLORWRITEMASK_T926634530_H
#define COLORWRITEMASK_T926634530_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rendering.ColorWriteMask
struct  ColorWriteMask_t926634530 
{
public:
	// System.Int32 UnityEngine.Rendering.ColorWriteMask::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ColorWriteMask_t926634530, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLORWRITEMASK_T926634530_H
#ifndef CAMERACLEARFLAGS_T452084705_H
#define CAMERACLEARFLAGS_T452084705_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t452084705 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraClearFlags_t452084705, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACLEARFLAGS_T452084705_H
#ifndef RUNTIMEPLATFORM_T1869584967_H
#define RUNTIMEPLATFORM_T1869584967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t1869584967 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t1869584967, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEPLATFORM_T1869584967_H
#ifndef SENDMESSAGEOPTIONS_T1414041951_H
#define SENDMESSAGEOPTIONS_T1414041951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t1414041951 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SendMessageOptions_t1414041951, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMESSAGEOPTIONS_T1414041951_H
#ifndef SPACE_T4278750806_H
#define SPACE_T4278750806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t4278750806 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Space_t4278750806, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACE_T4278750806_H
#ifndef LOGTYPE_T1559732862_H
#define LOGTYPE_T1559732862_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t1559732862 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t1559732862, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGTYPE_T1559732862_H
#ifndef SAMPLETYPE_T2751317430_H
#define SAMPLETYPE_T2751317430_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UISystemProfilerApi/SampleType
struct  SampleType_t2751317430 
{
public:
	// System.Int32 UnityEngine.UISystemProfilerApi/SampleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SampleType_t2751317430, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAMPLETYPE_T2751317430_H
#ifndef OPERATINGSYSTEMFAMILY_T1896948788_H
#define OPERATINGSYSTEMFAMILY_T1896948788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.OperatingSystemFamily
struct  OperatingSystemFamily_t1896948788 
{
public:
	// System.Int32 UnityEngine.OperatingSystemFamily::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(OperatingSystemFamily_t1896948788, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATINGSYSTEMFAMILY_T1896948788_H
#ifndef GUILAYOUTOPTION_T4183744904_H
#define GUILAYOUTOPTION_T4183744904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutOption
struct  GUILayoutOption_t4183744904  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t4183744904, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t4183744904, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTOPTION_T4183744904_H
#ifndef GUILAYOUTGROUP_T3975363388_H
#define GUILAYOUTGROUP_T3975363388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutGroup
struct  GUILayoutGroup_t3975363388  : public GUILayoutEntry_t3828586629
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GUILayoutEntry> UnityEngine.GUILayoutGroup::entries
	List_1_t3197707761 * ___entries_10;
	// System.Boolean UnityEngine.GUILayoutGroup::isVertical
	bool ___isVertical_11;
	// System.Boolean UnityEngine.GUILayoutGroup::resetCoords
	bool ___resetCoords_12;
	// System.Single UnityEngine.GUILayoutGroup::spacing
	float ___spacing_13;
	// System.Boolean UnityEngine.GUILayoutGroup::sameSize
	bool ___sameSize_14;
	// System.Boolean UnityEngine.GUILayoutGroup::isWindow
	bool ___isWindow_15;
	// System.Int32 UnityEngine.GUILayoutGroup::windowID
	int32_t ___windowID_16;
	// System.Int32 UnityEngine.GUILayoutGroup::m_Cursor
	int32_t ___m_Cursor_17;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountX
	int32_t ___m_StretchableCountX_18;
	// System.Int32 UnityEngine.GUILayoutGroup::m_StretchableCountY
	int32_t ___m_StretchableCountY_19;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedWidth
	bool ___m_UserSpecifiedWidth_20;
	// System.Boolean UnityEngine.GUILayoutGroup::m_UserSpecifiedHeight
	bool ___m_UserSpecifiedHeight_21;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinWidth
	float ___m_ChildMinWidth_22;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxWidth
	float ___m_ChildMaxWidth_23;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMinHeight
	float ___m_ChildMinHeight_24;
	// System.Single UnityEngine.GUILayoutGroup::m_ChildMaxHeight
	float ___m_ChildMaxHeight_25;
	// UnityEngine.RectOffset UnityEngine.GUILayoutGroup::m_Margin
	RectOffset_t3387826427 * ___m_Margin_26;

public:
	inline static int32_t get_offset_of_entries_10() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3975363388, ___entries_10)); }
	inline List_1_t3197707761 * get_entries_10() const { return ___entries_10; }
	inline List_1_t3197707761 ** get_address_of_entries_10() { return &___entries_10; }
	inline void set_entries_10(List_1_t3197707761 * value)
	{
		___entries_10 = value;
		Il2CppCodeGenWriteBarrier((&___entries_10), value);
	}

	inline static int32_t get_offset_of_isVertical_11() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3975363388, ___isVertical_11)); }
	inline bool get_isVertical_11() const { return ___isVertical_11; }
	inline bool* get_address_of_isVertical_11() { return &___isVertical_11; }
	inline void set_isVertical_11(bool value)
	{
		___isVertical_11 = value;
	}

	inline static int32_t get_offset_of_resetCoords_12() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3975363388, ___resetCoords_12)); }
	inline bool get_resetCoords_12() const { return ___resetCoords_12; }
	inline bool* get_address_of_resetCoords_12() { return &___resetCoords_12; }
	inline void set_resetCoords_12(bool value)
	{
		___resetCoords_12 = value;
	}

	inline static int32_t get_offset_of_spacing_13() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3975363388, ___spacing_13)); }
	inline float get_spacing_13() const { return ___spacing_13; }
	inline float* get_address_of_spacing_13() { return &___spacing_13; }
	inline void set_spacing_13(float value)
	{
		___spacing_13 = value;
	}

	inline static int32_t get_offset_of_sameSize_14() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3975363388, ___sameSize_14)); }
	inline bool get_sameSize_14() const { return ___sameSize_14; }
	inline bool* get_address_of_sameSize_14() { return &___sameSize_14; }
	inline void set_sameSize_14(bool value)
	{
		___sameSize_14 = value;
	}

	inline static int32_t get_offset_of_isWindow_15() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3975363388, ___isWindow_15)); }
	inline bool get_isWindow_15() const { return ___isWindow_15; }
	inline bool* get_address_of_isWindow_15() { return &___isWindow_15; }
	inline void set_isWindow_15(bool value)
	{
		___isWindow_15 = value;
	}

	inline static int32_t get_offset_of_windowID_16() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3975363388, ___windowID_16)); }
	inline int32_t get_windowID_16() const { return ___windowID_16; }
	inline int32_t* get_address_of_windowID_16() { return &___windowID_16; }
	inline void set_windowID_16(int32_t value)
	{
		___windowID_16 = value;
	}

	inline static int32_t get_offset_of_m_Cursor_17() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3975363388, ___m_Cursor_17)); }
	inline int32_t get_m_Cursor_17() const { return ___m_Cursor_17; }
	inline int32_t* get_address_of_m_Cursor_17() { return &___m_Cursor_17; }
	inline void set_m_Cursor_17(int32_t value)
	{
		___m_Cursor_17 = value;
	}

	inline static int32_t get_offset_of_m_StretchableCountX_18() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3975363388, ___m_StretchableCountX_18)); }
	inline int32_t get_m_StretchableCountX_18() const { return ___m_StretchableCountX_18; }
	inline int32_t* get_address_of_m_StretchableCountX_18() { return &___m_StretchableCountX_18; }
	inline void set_m_StretchableCountX_18(int32_t value)
	{
		___m_StretchableCountX_18 = value;
	}

	inline static int32_t get_offset_of_m_StretchableCountY_19() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3975363388, ___m_StretchableCountY_19)); }
	inline int32_t get_m_StretchableCountY_19() const { return ___m_StretchableCountY_19; }
	inline int32_t* get_address_of_m_StretchableCountY_19() { return &___m_StretchableCountY_19; }
	inline void set_m_StretchableCountY_19(int32_t value)
	{
		___m_StretchableCountY_19 = value;
	}

	inline static int32_t get_offset_of_m_UserSpecifiedWidth_20() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3975363388, ___m_UserSpecifiedWidth_20)); }
	inline bool get_m_UserSpecifiedWidth_20() const { return ___m_UserSpecifiedWidth_20; }
	inline bool* get_address_of_m_UserSpecifiedWidth_20() { return &___m_UserSpecifiedWidth_20; }
	inline void set_m_UserSpecifiedWidth_20(bool value)
	{
		___m_UserSpecifiedWidth_20 = value;
	}

	inline static int32_t get_offset_of_m_UserSpecifiedHeight_21() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3975363388, ___m_UserSpecifiedHeight_21)); }
	inline bool get_m_UserSpecifiedHeight_21() const { return ___m_UserSpecifiedHeight_21; }
	inline bool* get_address_of_m_UserSpecifiedHeight_21() { return &___m_UserSpecifiedHeight_21; }
	inline void set_m_UserSpecifiedHeight_21(bool value)
	{
		___m_UserSpecifiedHeight_21 = value;
	}

	inline static int32_t get_offset_of_m_ChildMinWidth_22() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3975363388, ___m_ChildMinWidth_22)); }
	inline float get_m_ChildMinWidth_22() const { return ___m_ChildMinWidth_22; }
	inline float* get_address_of_m_ChildMinWidth_22() { return &___m_ChildMinWidth_22; }
	inline void set_m_ChildMinWidth_22(float value)
	{
		___m_ChildMinWidth_22 = value;
	}

	inline static int32_t get_offset_of_m_ChildMaxWidth_23() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3975363388, ___m_ChildMaxWidth_23)); }
	inline float get_m_ChildMaxWidth_23() const { return ___m_ChildMaxWidth_23; }
	inline float* get_address_of_m_ChildMaxWidth_23() { return &___m_ChildMaxWidth_23; }
	inline void set_m_ChildMaxWidth_23(float value)
	{
		___m_ChildMaxWidth_23 = value;
	}

	inline static int32_t get_offset_of_m_ChildMinHeight_24() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3975363388, ___m_ChildMinHeight_24)); }
	inline float get_m_ChildMinHeight_24() const { return ___m_ChildMinHeight_24; }
	inline float* get_address_of_m_ChildMinHeight_24() { return &___m_ChildMinHeight_24; }
	inline void set_m_ChildMinHeight_24(float value)
	{
		___m_ChildMinHeight_24 = value;
	}

	inline static int32_t get_offset_of_m_ChildMaxHeight_25() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3975363388, ___m_ChildMaxHeight_25)); }
	inline float get_m_ChildMaxHeight_25() const { return ___m_ChildMaxHeight_25; }
	inline float* get_address_of_m_ChildMaxHeight_25() { return &___m_ChildMaxHeight_25; }
	inline void set_m_ChildMaxHeight_25(float value)
	{
		___m_ChildMaxHeight_25 = value;
	}

	inline static int32_t get_offset_of_m_Margin_26() { return static_cast<int32_t>(offsetof(GUILayoutGroup_t3975363388, ___m_Margin_26)); }
	inline RectOffset_t3387826427 * get_m_Margin_26() const { return ___m_Margin_26; }
	inline RectOffset_t3387826427 ** get_address_of_m_Margin_26() { return &___m_Margin_26; }
	inline void set_m_Margin_26(RectOffset_t3387826427 * value)
	{
		___m_Margin_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYOUTGROUP_T3975363388_H
#ifndef SCRIPTABLEOBJECT_T1975622470_H
#define SCRIPTABLEOBJECT_T1975622470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t1975622470  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1975622470_marshaled_pinvoke : public Object_t1021602117_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t1975622470_marshaled_com : public Object_t1021602117_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T1975622470_H
#ifndef PERSISTENTCALL_T3793436469_H
#define PERSISTENTCALL_T3793436469_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCall
struct  PersistentCall_t3793436469  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_t1021602117 * ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_1;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_2;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t4810721 * ___m_Arguments_3;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(PersistentCall_t3793436469, ___m_Target_0)); }
	inline Object_t1021602117 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_t1021602117 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_t1021602117 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodName_1() { return static_cast<int32_t>(offsetof(PersistentCall_t3793436469, ___m_MethodName_1)); }
	inline String_t* get_m_MethodName_1() const { return ___m_MethodName_1; }
	inline String_t** get_address_of_m_MethodName_1() { return &___m_MethodName_1; }
	inline void set_m_MethodName_1(String_t* value)
	{
		___m_MethodName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodName_1), value);
	}

	inline static int32_t get_offset_of_m_Mode_2() { return static_cast<int32_t>(offsetof(PersistentCall_t3793436469, ___m_Mode_2)); }
	inline int32_t get_m_Mode_2() const { return ___m_Mode_2; }
	inline int32_t* get_address_of_m_Mode_2() { return &___m_Mode_2; }
	inline void set_m_Mode_2(int32_t value)
	{
		___m_Mode_2 = value;
	}

	inline static int32_t get_offset_of_m_Arguments_3() { return static_cast<int32_t>(offsetof(PersistentCall_t3793436469, ___m_Arguments_3)); }
	inline ArgumentCache_t4810721 * get_m_Arguments_3() const { return ___m_Arguments_3; }
	inline ArgumentCache_t4810721 ** get_address_of_m_Arguments_3() { return &___m_Arguments_3; }
	inline void set_m_Arguments_3(ArgumentCache_t4810721 * value)
	{
		___m_Arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arguments_3), value);
	}

	inline static int32_t get_offset_of_m_CallState_4() { return static_cast<int32_t>(offsetof(PersistentCall_t3793436469, ___m_CallState_4)); }
	inline int32_t get_m_CallState_4() const { return ___m_CallState_4; }
	inline int32_t* get_address_of_m_CallState_4() { return &___m_CallState_4; }
	inline void set_m_CallState_4(int32_t value)
	{
		___m_CallState_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALL_T3793436469_H
#ifndef COMPONENT_T3819376471_H
#define COMPONENT_T3819376471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3819376471  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3819376471_H
#ifndef TEXTEDITOR_T3975561390_H
#define TEXTEDITOR_T3975561390_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextEditor
struct  TextEditor_t3975561390  : public RuntimeObject
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.TextEditor::keyboardOnScreen
	TouchScreenKeyboard_t601950206 * ___keyboardOnScreen_0;
	// System.Int32 UnityEngine.TextEditor::controlID
	int32_t ___controlID_1;
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t1799908754 * ___style_2;
	// System.Boolean UnityEngine.TextEditor::multiline
	bool ___multiline_3;
	// System.Boolean UnityEngine.TextEditor::hasHorizontalCursorPos
	bool ___hasHorizontalCursorPos_4;
	// System.Boolean UnityEngine.TextEditor::isPasswordField
	bool ___isPasswordField_5;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_t2243707579  ___scrollOffset_6;
	// UnityEngine.GUIContent UnityEngine.TextEditor::m_Content
	GUIContent_t4210063000 * ___m_Content_7;
	// System.Int32 UnityEngine.TextEditor::m_CursorIndex
	int32_t ___m_CursorIndex_8;
	// System.Int32 UnityEngine.TextEditor::m_SelectIndex
	int32_t ___m_SelectIndex_9;
	// System.Boolean UnityEngine.TextEditor::m_RevealCursor
	bool ___m_RevealCursor_10;
	// System.Boolean UnityEngine.TextEditor::m_MouseDragSelectsWholeWords
	bool ___m_MouseDragSelectsWholeWords_11;
	// System.Int32 UnityEngine.TextEditor::m_DblClickInitPos
	int32_t ___m_DblClickInitPos_12;
	// UnityEngine.TextEditor/DblClickSnapping UnityEngine.TextEditor::m_DblClickSnap
	uint8_t ___m_DblClickSnap_13;
	// System.Boolean UnityEngine.TextEditor::m_bJustSelected
	bool ___m_bJustSelected_14;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos_15;

public:
	inline static int32_t get_offset_of_keyboardOnScreen_0() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___keyboardOnScreen_0)); }
	inline TouchScreenKeyboard_t601950206 * get_keyboardOnScreen_0() const { return ___keyboardOnScreen_0; }
	inline TouchScreenKeyboard_t601950206 ** get_address_of_keyboardOnScreen_0() { return &___keyboardOnScreen_0; }
	inline void set_keyboardOnScreen_0(TouchScreenKeyboard_t601950206 * value)
	{
		___keyboardOnScreen_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyboardOnScreen_0), value);
	}

	inline static int32_t get_offset_of_controlID_1() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___controlID_1)); }
	inline int32_t get_controlID_1() const { return ___controlID_1; }
	inline int32_t* get_address_of_controlID_1() { return &___controlID_1; }
	inline void set_controlID_1(int32_t value)
	{
		___controlID_1 = value;
	}

	inline static int32_t get_offset_of_style_2() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___style_2)); }
	inline GUIStyle_t1799908754 * get_style_2() const { return ___style_2; }
	inline GUIStyle_t1799908754 ** get_address_of_style_2() { return &___style_2; }
	inline void set_style_2(GUIStyle_t1799908754 * value)
	{
		___style_2 = value;
		Il2CppCodeGenWriteBarrier((&___style_2), value);
	}

	inline static int32_t get_offset_of_multiline_3() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___multiline_3)); }
	inline bool get_multiline_3() const { return ___multiline_3; }
	inline bool* get_address_of_multiline_3() { return &___multiline_3; }
	inline void set_multiline_3(bool value)
	{
		___multiline_3 = value;
	}

	inline static int32_t get_offset_of_hasHorizontalCursorPos_4() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___hasHorizontalCursorPos_4)); }
	inline bool get_hasHorizontalCursorPos_4() const { return ___hasHorizontalCursorPos_4; }
	inline bool* get_address_of_hasHorizontalCursorPos_4() { return &___hasHorizontalCursorPos_4; }
	inline void set_hasHorizontalCursorPos_4(bool value)
	{
		___hasHorizontalCursorPos_4 = value;
	}

	inline static int32_t get_offset_of_isPasswordField_5() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___isPasswordField_5)); }
	inline bool get_isPasswordField_5() const { return ___isPasswordField_5; }
	inline bool* get_address_of_isPasswordField_5() { return &___isPasswordField_5; }
	inline void set_isPasswordField_5(bool value)
	{
		___isPasswordField_5 = value;
	}

	inline static int32_t get_offset_of_scrollOffset_6() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___scrollOffset_6)); }
	inline Vector2_t2243707579  get_scrollOffset_6() const { return ___scrollOffset_6; }
	inline Vector2_t2243707579 * get_address_of_scrollOffset_6() { return &___scrollOffset_6; }
	inline void set_scrollOffset_6(Vector2_t2243707579  value)
	{
		___scrollOffset_6 = value;
	}

	inline static int32_t get_offset_of_m_Content_7() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_Content_7)); }
	inline GUIContent_t4210063000 * get_m_Content_7() const { return ___m_Content_7; }
	inline GUIContent_t4210063000 ** get_address_of_m_Content_7() { return &___m_Content_7; }
	inline void set_m_Content_7(GUIContent_t4210063000 * value)
	{
		___m_Content_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_Content_7), value);
	}

	inline static int32_t get_offset_of_m_CursorIndex_8() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_CursorIndex_8)); }
	inline int32_t get_m_CursorIndex_8() const { return ___m_CursorIndex_8; }
	inline int32_t* get_address_of_m_CursorIndex_8() { return &___m_CursorIndex_8; }
	inline void set_m_CursorIndex_8(int32_t value)
	{
		___m_CursorIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_SelectIndex_9() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_SelectIndex_9)); }
	inline int32_t get_m_SelectIndex_9() const { return ___m_SelectIndex_9; }
	inline int32_t* get_address_of_m_SelectIndex_9() { return &___m_SelectIndex_9; }
	inline void set_m_SelectIndex_9(int32_t value)
	{
		___m_SelectIndex_9 = value;
	}

	inline static int32_t get_offset_of_m_RevealCursor_10() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_RevealCursor_10)); }
	inline bool get_m_RevealCursor_10() const { return ___m_RevealCursor_10; }
	inline bool* get_address_of_m_RevealCursor_10() { return &___m_RevealCursor_10; }
	inline void set_m_RevealCursor_10(bool value)
	{
		___m_RevealCursor_10 = value;
	}

	inline static int32_t get_offset_of_m_MouseDragSelectsWholeWords_11() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_MouseDragSelectsWholeWords_11)); }
	inline bool get_m_MouseDragSelectsWholeWords_11() const { return ___m_MouseDragSelectsWholeWords_11; }
	inline bool* get_address_of_m_MouseDragSelectsWholeWords_11() { return &___m_MouseDragSelectsWholeWords_11; }
	inline void set_m_MouseDragSelectsWholeWords_11(bool value)
	{
		___m_MouseDragSelectsWholeWords_11 = value;
	}

	inline static int32_t get_offset_of_m_DblClickInitPos_12() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_DblClickInitPos_12)); }
	inline int32_t get_m_DblClickInitPos_12() const { return ___m_DblClickInitPos_12; }
	inline int32_t* get_address_of_m_DblClickInitPos_12() { return &___m_DblClickInitPos_12; }
	inline void set_m_DblClickInitPos_12(int32_t value)
	{
		___m_DblClickInitPos_12 = value;
	}

	inline static int32_t get_offset_of_m_DblClickSnap_13() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_DblClickSnap_13)); }
	inline uint8_t get_m_DblClickSnap_13() const { return ___m_DblClickSnap_13; }
	inline uint8_t* get_address_of_m_DblClickSnap_13() { return &___m_DblClickSnap_13; }
	inline void set_m_DblClickSnap_13(uint8_t value)
	{
		___m_DblClickSnap_13 = value;
	}

	inline static int32_t get_offset_of_m_bJustSelected_14() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_bJustSelected_14)); }
	inline bool get_m_bJustSelected_14() const { return ___m_bJustSelected_14; }
	inline bool* get_address_of_m_bJustSelected_14() { return &___m_bJustSelected_14; }
	inline void set_m_bJustSelected_14(bool value)
	{
		___m_bJustSelected_14 = value;
	}

	inline static int32_t get_offset_of_m_iAltCursorPos_15() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_iAltCursorPos_15)); }
	inline int32_t get_m_iAltCursorPos_15() const { return ___m_iAltCursorPos_15; }
	inline int32_t* get_address_of_m_iAltCursorPos_15() { return &___m_iAltCursorPos_15; }
	inline void set_m_iAltCursorPos_15(int32_t value)
	{
		___m_iAltCursorPos_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTEDITOR_T3975561390_H
#ifndef GUISTYLE_T1799908754_H
#define GUISTYLE_T1799908754_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t1799908754  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t3801000545 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t3801000545 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t3801000545 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t3801000545 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t3801000545 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t3801000545 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t3801000545 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t3801000545 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t3387826427 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t3387826427 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t3387826427 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t3387826427 * ___m_Overflow_12;
	// UnityEngine.Font UnityEngine.GUIStyle::m_FontInternal
	Font_t4239498691 * ___m_FontInternal_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_Normal_1)); }
	inline GUIStyleState_t3801000545 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t3801000545 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t3801000545 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Normal_1), value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_Hover_2)); }
	inline GUIStyleState_t3801000545 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t3801000545 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t3801000545 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Hover_2), value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_Active_3)); }
	inline GUIStyleState_t3801000545 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t3801000545 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t3801000545 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Active_3), value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_Focused_4)); }
	inline GUIStyleState_t3801000545 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t3801000545 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t3801000545 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Focused_4), value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_OnNormal_5)); }
	inline GUIStyleState_t3801000545 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t3801000545 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t3801000545 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnNormal_5), value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_OnHover_6)); }
	inline GUIStyleState_t3801000545 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t3801000545 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t3801000545 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnHover_6), value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_OnActive_7)); }
	inline GUIStyleState_t3801000545 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t3801000545 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t3801000545 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnActive_7), value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_OnFocused_8)); }
	inline GUIStyleState_t3801000545 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t3801000545 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t3801000545 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnFocused_8), value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_Border_9)); }
	inline RectOffset_t3387826427 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t3387826427 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t3387826427 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Border_9), value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_Padding_10)); }
	inline RectOffset_t3387826427 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t3387826427 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t3387826427 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Padding_10), value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_Margin_11)); }
	inline RectOffset_t3387826427 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t3387826427 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t3387826427 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_Margin_11), value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_Overflow_12)); }
	inline RectOffset_t3387826427 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t3387826427 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t3387826427 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_Overflow_12), value);
	}

	inline static int32_t get_offset_of_m_FontInternal_13() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_FontInternal_13)); }
	inline Font_t4239498691 * get_m_FontInternal_13() const { return ___m_FontInternal_13; }
	inline Font_t4239498691 ** get_address_of_m_FontInternal_13() { return &___m_FontInternal_13; }
	inline void set_m_FontInternal_13(Font_t4239498691 * value)
	{
		___m_FontInternal_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontInternal_13), value);
	}
};

struct GUIStyle_t1799908754_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t1799908754 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754_StaticFields, ___s_None_15)); }
	inline GUIStyle_t1799908754 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t1799908754 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t1799908754 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_None_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t1799908754_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t3801000545_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t3801000545_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t3801000545_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t3801000545_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t3801000545_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t3801000545_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t3801000545_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t3801000545_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t3387826427_marshaled_pinvoke ___m_Border_9;
	RectOffset_t3387826427_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t3387826427_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t3387826427_marshaled_pinvoke ___m_Overflow_12;
	Font_t4239498691 * ___m_FontInternal_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t1799908754_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t3801000545_marshaled_com* ___m_Normal_1;
	GUIStyleState_t3801000545_marshaled_com* ___m_Hover_2;
	GUIStyleState_t3801000545_marshaled_com* ___m_Active_3;
	GUIStyleState_t3801000545_marshaled_com* ___m_Focused_4;
	GUIStyleState_t3801000545_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t3801000545_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t3801000545_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t3801000545_marshaled_com* ___m_OnFocused_8;
	RectOffset_t3387826427_marshaled_com* ___m_Border_9;
	RectOffset_t3387826427_marshaled_com* ___m_Padding_10;
	RectOffset_t3387826427_marshaled_com* ___m_Margin_11;
	RectOffset_t3387826427_marshaled_com* ___m_Overflow_12;
	Font_t4239498691 * ___m_FontInternal_13;
};
#endif // GUISTYLE_T1799908754_H
#ifndef MULTICASTDELEGATE_T3201952435_H
#define MULTICASTDELEGATE_T3201952435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3201952435  : public Delegate_t3022476291
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3201952435 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3201952435 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___prev_9)); }
	inline MulticastDelegate_t3201952435 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3201952435 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3201952435 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___kpm_next_10)); }
	inline MulticastDelegate_t3201952435 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3201952435 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3201952435 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3201952435_H
#ifndef DATETIME_T693205669_H
#define DATETIME_T693205669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t693205669 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t3430258949  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t693205669, ___ticks_0)); }
	inline TimeSpan_t3430258949  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t3430258949 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t3430258949  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t693205669, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t693205669_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t693205669  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t693205669  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1642385972* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1642385972* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1642385972* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1642385972* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1642385972* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1642385972* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1642385972* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t3030399641* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t3030399641* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___MaxValue_2)); }
	inline DateTime_t693205669  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t693205669 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t693205669  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___MinValue_3)); }
	inline DateTime_t693205669  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t693205669 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t693205669  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1642385972* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1642385972* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1642385972* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1642385972* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1642385972* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1642385972* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1642385972* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1642385972* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1642385972* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1642385972** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1642385972* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1642385972* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1642385972** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1642385972* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1642385972* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1642385972** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1642385972* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t3030399641* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t3030399641** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t3030399641* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t3030399641* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t3030399641** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t3030399641* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t693205669_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T693205669_H
#ifndef CANVASGROUP_T3296560743_H
#define CANVASGROUP_T3296560743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasGroup
struct  CanvasGroup_t3296560743  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASGROUP_T3296560743_H
#ifndef CANVASRENDERER_T261436805_H
#define CANVASRENDERER_T261436805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasRenderer
struct  CanvasRenderer_t261436805  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASRENDERER_T261436805_H
#ifndef UPDATEDEVENTHANDLER_T3033456180_H
#define UPDATEDEVENTHANDLER_T3033456180_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings/UpdatedEventHandler
struct  UpdatedEventHandler_t3033456180  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEDEVENTHANDLER_T3033456180_H
#ifndef SKINCHANGEDDELEGATE_T3594822336_H
#define SKINCHANGEDDELEGATE_T3594822336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISkin/SkinChangedDelegate
struct  SkinChangedDelegate_t3594822336  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SKINCHANGEDDELEGATE_T3594822336_H
#ifndef GUISCROLLGROUP_T755788567_H
#define GUISCROLLGROUP_T755788567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIScrollGroup
struct  GUIScrollGroup_t755788567  : public GUILayoutGroup_t3975363388
{
public:
	// System.Single UnityEngine.GUIScrollGroup::calcMinWidth
	float ___calcMinWidth_27;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxWidth
	float ___calcMaxWidth_28;
	// System.Single UnityEngine.GUIScrollGroup::calcMinHeight
	float ___calcMinHeight_29;
	// System.Single UnityEngine.GUIScrollGroup::calcMaxHeight
	float ___calcMaxHeight_30;
	// System.Single UnityEngine.GUIScrollGroup::clientWidth
	float ___clientWidth_31;
	// System.Single UnityEngine.GUIScrollGroup::clientHeight
	float ___clientHeight_32;
	// System.Boolean UnityEngine.GUIScrollGroup::allowHorizontalScroll
	bool ___allowHorizontalScroll_33;
	// System.Boolean UnityEngine.GUIScrollGroup::allowVerticalScroll
	bool ___allowVerticalScroll_34;
	// System.Boolean UnityEngine.GUIScrollGroup::needsHorizontalScrollbar
	bool ___needsHorizontalScrollbar_35;
	// System.Boolean UnityEngine.GUIScrollGroup::needsVerticalScrollbar
	bool ___needsVerticalScrollbar_36;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::horizontalScrollbar
	GUIStyle_t1799908754 * ___horizontalScrollbar_37;
	// UnityEngine.GUIStyle UnityEngine.GUIScrollGroup::verticalScrollbar
	GUIStyle_t1799908754 * ___verticalScrollbar_38;

public:
	inline static int32_t get_offset_of_calcMinWidth_27() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t755788567, ___calcMinWidth_27)); }
	inline float get_calcMinWidth_27() const { return ___calcMinWidth_27; }
	inline float* get_address_of_calcMinWidth_27() { return &___calcMinWidth_27; }
	inline void set_calcMinWidth_27(float value)
	{
		___calcMinWidth_27 = value;
	}

	inline static int32_t get_offset_of_calcMaxWidth_28() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t755788567, ___calcMaxWidth_28)); }
	inline float get_calcMaxWidth_28() const { return ___calcMaxWidth_28; }
	inline float* get_address_of_calcMaxWidth_28() { return &___calcMaxWidth_28; }
	inline void set_calcMaxWidth_28(float value)
	{
		___calcMaxWidth_28 = value;
	}

	inline static int32_t get_offset_of_calcMinHeight_29() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t755788567, ___calcMinHeight_29)); }
	inline float get_calcMinHeight_29() const { return ___calcMinHeight_29; }
	inline float* get_address_of_calcMinHeight_29() { return &___calcMinHeight_29; }
	inline void set_calcMinHeight_29(float value)
	{
		___calcMinHeight_29 = value;
	}

	inline static int32_t get_offset_of_calcMaxHeight_30() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t755788567, ___calcMaxHeight_30)); }
	inline float get_calcMaxHeight_30() const { return ___calcMaxHeight_30; }
	inline float* get_address_of_calcMaxHeight_30() { return &___calcMaxHeight_30; }
	inline void set_calcMaxHeight_30(float value)
	{
		___calcMaxHeight_30 = value;
	}

	inline static int32_t get_offset_of_clientWidth_31() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t755788567, ___clientWidth_31)); }
	inline float get_clientWidth_31() const { return ___clientWidth_31; }
	inline float* get_address_of_clientWidth_31() { return &___clientWidth_31; }
	inline void set_clientWidth_31(float value)
	{
		___clientWidth_31 = value;
	}

	inline static int32_t get_offset_of_clientHeight_32() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t755788567, ___clientHeight_32)); }
	inline float get_clientHeight_32() const { return ___clientHeight_32; }
	inline float* get_address_of_clientHeight_32() { return &___clientHeight_32; }
	inline void set_clientHeight_32(float value)
	{
		___clientHeight_32 = value;
	}

	inline static int32_t get_offset_of_allowHorizontalScroll_33() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t755788567, ___allowHorizontalScroll_33)); }
	inline bool get_allowHorizontalScroll_33() const { return ___allowHorizontalScroll_33; }
	inline bool* get_address_of_allowHorizontalScroll_33() { return &___allowHorizontalScroll_33; }
	inline void set_allowHorizontalScroll_33(bool value)
	{
		___allowHorizontalScroll_33 = value;
	}

	inline static int32_t get_offset_of_allowVerticalScroll_34() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t755788567, ___allowVerticalScroll_34)); }
	inline bool get_allowVerticalScroll_34() const { return ___allowVerticalScroll_34; }
	inline bool* get_address_of_allowVerticalScroll_34() { return &___allowVerticalScroll_34; }
	inline void set_allowVerticalScroll_34(bool value)
	{
		___allowVerticalScroll_34 = value;
	}

	inline static int32_t get_offset_of_needsHorizontalScrollbar_35() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t755788567, ___needsHorizontalScrollbar_35)); }
	inline bool get_needsHorizontalScrollbar_35() const { return ___needsHorizontalScrollbar_35; }
	inline bool* get_address_of_needsHorizontalScrollbar_35() { return &___needsHorizontalScrollbar_35; }
	inline void set_needsHorizontalScrollbar_35(bool value)
	{
		___needsHorizontalScrollbar_35 = value;
	}

	inline static int32_t get_offset_of_needsVerticalScrollbar_36() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t755788567, ___needsVerticalScrollbar_36)); }
	inline bool get_needsVerticalScrollbar_36() const { return ___needsVerticalScrollbar_36; }
	inline bool* get_address_of_needsVerticalScrollbar_36() { return &___needsVerticalScrollbar_36; }
	inline void set_needsVerticalScrollbar_36(bool value)
	{
		___needsVerticalScrollbar_36 = value;
	}

	inline static int32_t get_offset_of_horizontalScrollbar_37() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t755788567, ___horizontalScrollbar_37)); }
	inline GUIStyle_t1799908754 * get_horizontalScrollbar_37() const { return ___horizontalScrollbar_37; }
	inline GUIStyle_t1799908754 ** get_address_of_horizontalScrollbar_37() { return &___horizontalScrollbar_37; }
	inline void set_horizontalScrollbar_37(GUIStyle_t1799908754 * value)
	{
		___horizontalScrollbar_37 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalScrollbar_37), value);
	}

	inline static int32_t get_offset_of_verticalScrollbar_38() { return static_cast<int32_t>(offsetof(GUIScrollGroup_t755788567, ___verticalScrollbar_38)); }
	inline GUIStyle_t1799908754 * get_verticalScrollbar_38() const { return ___verticalScrollbar_38; }
	inline GUIStyle_t1799908754 ** get_address_of_verticalScrollbar_38() { return &___verticalScrollbar_38; }
	inline void set_verticalScrollbar_38(GUIStyle_t1799908754 * value)
	{
		___verticalScrollbar_38 = value;
		Il2CppCodeGenWriteBarrier((&___verticalScrollbar_38), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISCROLLGROUP_T755788567_H
#ifndef GUISKIN_T1436893342_H
#define GUISKIN_T1436893342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUISkin
struct  GUISkin_t1436893342  : public ScriptableObject_t1975622470
{
public:
	// UnityEngine.Font UnityEngine.GUISkin::m_Font
	Font_t4239498691 * ___m_Font_2;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_box
	GUIStyle_t1799908754 * ___m_box_3;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_button
	GUIStyle_t1799908754 * ___m_button_4;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_toggle
	GUIStyle_t1799908754 * ___m_toggle_5;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_label
	GUIStyle_t1799908754 * ___m_label_6;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textField
	GUIStyle_t1799908754 * ___m_textField_7;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_textArea
	GUIStyle_t1799908754 * ___m_textArea_8;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_window
	GUIStyle_t1799908754 * ___m_window_9;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSlider
	GUIStyle_t1799908754 * ___m_horizontalSlider_10;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalSliderThumb
	GUIStyle_t1799908754 * ___m_horizontalSliderThumb_11;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSlider
	GUIStyle_t1799908754 * ___m_verticalSlider_12;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalSliderThumb
	GUIStyle_t1799908754 * ___m_verticalSliderThumb_13;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbar
	GUIStyle_t1799908754 * ___m_horizontalScrollbar_14;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarThumb
	GUIStyle_t1799908754 * ___m_horizontalScrollbarThumb_15;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarLeftButton
	GUIStyle_t1799908754 * ___m_horizontalScrollbarLeftButton_16;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_horizontalScrollbarRightButton
	GUIStyle_t1799908754 * ___m_horizontalScrollbarRightButton_17;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbar
	GUIStyle_t1799908754 * ___m_verticalScrollbar_18;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarThumb
	GUIStyle_t1799908754 * ___m_verticalScrollbarThumb_19;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarUpButton
	GUIStyle_t1799908754 * ___m_verticalScrollbarUpButton_20;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_verticalScrollbarDownButton
	GUIStyle_t1799908754 * ___m_verticalScrollbarDownButton_21;
	// UnityEngine.GUIStyle UnityEngine.GUISkin::m_ScrollView
	GUIStyle_t1799908754 * ___m_ScrollView_22;
	// UnityEngine.GUIStyle[] UnityEngine.GUISkin::m_CustomStyles
	GUIStyleU5BU5D_t2497716199* ___m_CustomStyles_23;
	// UnityEngine.GUISettings UnityEngine.GUISkin::m_Settings
	GUISettings_t622856320 * ___m_Settings_24;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GUIStyle> UnityEngine.GUISkin::m_Styles
	Dictionary_2_t3714688016 * ___m_Styles_26;

public:
	inline static int32_t get_offset_of_m_Font_2() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_Font_2)); }
	inline Font_t4239498691 * get_m_Font_2() const { return ___m_Font_2; }
	inline Font_t4239498691 ** get_address_of_m_Font_2() { return &___m_Font_2; }
	inline void set_m_Font_2(Font_t4239498691 * value)
	{
		___m_Font_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Font_2), value);
	}

	inline static int32_t get_offset_of_m_box_3() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_box_3)); }
	inline GUIStyle_t1799908754 * get_m_box_3() const { return ___m_box_3; }
	inline GUIStyle_t1799908754 ** get_address_of_m_box_3() { return &___m_box_3; }
	inline void set_m_box_3(GUIStyle_t1799908754 * value)
	{
		___m_box_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_box_3), value);
	}

	inline static int32_t get_offset_of_m_button_4() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_button_4)); }
	inline GUIStyle_t1799908754 * get_m_button_4() const { return ___m_button_4; }
	inline GUIStyle_t1799908754 ** get_address_of_m_button_4() { return &___m_button_4; }
	inline void set_m_button_4(GUIStyle_t1799908754 * value)
	{
		___m_button_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_button_4), value);
	}

	inline static int32_t get_offset_of_m_toggle_5() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_toggle_5)); }
	inline GUIStyle_t1799908754 * get_m_toggle_5() const { return ___m_toggle_5; }
	inline GUIStyle_t1799908754 ** get_address_of_m_toggle_5() { return &___m_toggle_5; }
	inline void set_m_toggle_5(GUIStyle_t1799908754 * value)
	{
		___m_toggle_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_toggle_5), value);
	}

	inline static int32_t get_offset_of_m_label_6() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_label_6)); }
	inline GUIStyle_t1799908754 * get_m_label_6() const { return ___m_label_6; }
	inline GUIStyle_t1799908754 ** get_address_of_m_label_6() { return &___m_label_6; }
	inline void set_m_label_6(GUIStyle_t1799908754 * value)
	{
		___m_label_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_label_6), value);
	}

	inline static int32_t get_offset_of_m_textField_7() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_textField_7)); }
	inline GUIStyle_t1799908754 * get_m_textField_7() const { return ___m_textField_7; }
	inline GUIStyle_t1799908754 ** get_address_of_m_textField_7() { return &___m_textField_7; }
	inline void set_m_textField_7(GUIStyle_t1799908754 * value)
	{
		___m_textField_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_textField_7), value);
	}

	inline static int32_t get_offset_of_m_textArea_8() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_textArea_8)); }
	inline GUIStyle_t1799908754 * get_m_textArea_8() const { return ___m_textArea_8; }
	inline GUIStyle_t1799908754 ** get_address_of_m_textArea_8() { return &___m_textArea_8; }
	inline void set_m_textArea_8(GUIStyle_t1799908754 * value)
	{
		___m_textArea_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_textArea_8), value);
	}

	inline static int32_t get_offset_of_m_window_9() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_window_9)); }
	inline GUIStyle_t1799908754 * get_m_window_9() const { return ___m_window_9; }
	inline GUIStyle_t1799908754 ** get_address_of_m_window_9() { return &___m_window_9; }
	inline void set_m_window_9(GUIStyle_t1799908754 * value)
	{
		___m_window_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_window_9), value);
	}

	inline static int32_t get_offset_of_m_horizontalSlider_10() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_horizontalSlider_10)); }
	inline GUIStyle_t1799908754 * get_m_horizontalSlider_10() const { return ___m_horizontalSlider_10; }
	inline GUIStyle_t1799908754 ** get_address_of_m_horizontalSlider_10() { return &___m_horizontalSlider_10; }
	inline void set_m_horizontalSlider_10(GUIStyle_t1799908754 * value)
	{
		___m_horizontalSlider_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSlider_10), value);
	}

	inline static int32_t get_offset_of_m_horizontalSliderThumb_11() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_horizontalSliderThumb_11)); }
	inline GUIStyle_t1799908754 * get_m_horizontalSliderThumb_11() const { return ___m_horizontalSliderThumb_11; }
	inline GUIStyle_t1799908754 ** get_address_of_m_horizontalSliderThumb_11() { return &___m_horizontalSliderThumb_11; }
	inline void set_m_horizontalSliderThumb_11(GUIStyle_t1799908754 * value)
	{
		___m_horizontalSliderThumb_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalSliderThumb_11), value);
	}

	inline static int32_t get_offset_of_m_verticalSlider_12() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_verticalSlider_12)); }
	inline GUIStyle_t1799908754 * get_m_verticalSlider_12() const { return ___m_verticalSlider_12; }
	inline GUIStyle_t1799908754 ** get_address_of_m_verticalSlider_12() { return &___m_verticalSlider_12; }
	inline void set_m_verticalSlider_12(GUIStyle_t1799908754 * value)
	{
		___m_verticalSlider_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSlider_12), value);
	}

	inline static int32_t get_offset_of_m_verticalSliderThumb_13() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_verticalSliderThumb_13)); }
	inline GUIStyle_t1799908754 * get_m_verticalSliderThumb_13() const { return ___m_verticalSliderThumb_13; }
	inline GUIStyle_t1799908754 ** get_address_of_m_verticalSliderThumb_13() { return &___m_verticalSliderThumb_13; }
	inline void set_m_verticalSliderThumb_13(GUIStyle_t1799908754 * value)
	{
		___m_verticalSliderThumb_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalSliderThumb_13), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbar_14() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_horizontalScrollbar_14)); }
	inline GUIStyle_t1799908754 * get_m_horizontalScrollbar_14() const { return ___m_horizontalScrollbar_14; }
	inline GUIStyle_t1799908754 ** get_address_of_m_horizontalScrollbar_14() { return &___m_horizontalScrollbar_14; }
	inline void set_m_horizontalScrollbar_14(GUIStyle_t1799908754 * value)
	{
		___m_horizontalScrollbar_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbar_14), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarThumb_15() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_horizontalScrollbarThumb_15)); }
	inline GUIStyle_t1799908754 * get_m_horizontalScrollbarThumb_15() const { return ___m_horizontalScrollbarThumb_15; }
	inline GUIStyle_t1799908754 ** get_address_of_m_horizontalScrollbarThumb_15() { return &___m_horizontalScrollbarThumb_15; }
	inline void set_m_horizontalScrollbarThumb_15(GUIStyle_t1799908754 * value)
	{
		___m_horizontalScrollbarThumb_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarThumb_15), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarLeftButton_16() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_horizontalScrollbarLeftButton_16)); }
	inline GUIStyle_t1799908754 * get_m_horizontalScrollbarLeftButton_16() const { return ___m_horizontalScrollbarLeftButton_16; }
	inline GUIStyle_t1799908754 ** get_address_of_m_horizontalScrollbarLeftButton_16() { return &___m_horizontalScrollbarLeftButton_16; }
	inline void set_m_horizontalScrollbarLeftButton_16(GUIStyle_t1799908754 * value)
	{
		___m_horizontalScrollbarLeftButton_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarLeftButton_16), value);
	}

	inline static int32_t get_offset_of_m_horizontalScrollbarRightButton_17() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_horizontalScrollbarRightButton_17)); }
	inline GUIStyle_t1799908754 * get_m_horizontalScrollbarRightButton_17() const { return ___m_horizontalScrollbarRightButton_17; }
	inline GUIStyle_t1799908754 ** get_address_of_m_horizontalScrollbarRightButton_17() { return &___m_horizontalScrollbarRightButton_17; }
	inline void set_m_horizontalScrollbarRightButton_17(GUIStyle_t1799908754 * value)
	{
		___m_horizontalScrollbarRightButton_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_horizontalScrollbarRightButton_17), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbar_18() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_verticalScrollbar_18)); }
	inline GUIStyle_t1799908754 * get_m_verticalScrollbar_18() const { return ___m_verticalScrollbar_18; }
	inline GUIStyle_t1799908754 ** get_address_of_m_verticalScrollbar_18() { return &___m_verticalScrollbar_18; }
	inline void set_m_verticalScrollbar_18(GUIStyle_t1799908754 * value)
	{
		___m_verticalScrollbar_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbar_18), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarThumb_19() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_verticalScrollbarThumb_19)); }
	inline GUIStyle_t1799908754 * get_m_verticalScrollbarThumb_19() const { return ___m_verticalScrollbarThumb_19; }
	inline GUIStyle_t1799908754 ** get_address_of_m_verticalScrollbarThumb_19() { return &___m_verticalScrollbarThumb_19; }
	inline void set_m_verticalScrollbarThumb_19(GUIStyle_t1799908754 * value)
	{
		___m_verticalScrollbarThumb_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarThumb_19), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarUpButton_20() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_verticalScrollbarUpButton_20)); }
	inline GUIStyle_t1799908754 * get_m_verticalScrollbarUpButton_20() const { return ___m_verticalScrollbarUpButton_20; }
	inline GUIStyle_t1799908754 ** get_address_of_m_verticalScrollbarUpButton_20() { return &___m_verticalScrollbarUpButton_20; }
	inline void set_m_verticalScrollbarUpButton_20(GUIStyle_t1799908754 * value)
	{
		___m_verticalScrollbarUpButton_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarUpButton_20), value);
	}

	inline static int32_t get_offset_of_m_verticalScrollbarDownButton_21() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_verticalScrollbarDownButton_21)); }
	inline GUIStyle_t1799908754 * get_m_verticalScrollbarDownButton_21() const { return ___m_verticalScrollbarDownButton_21; }
	inline GUIStyle_t1799908754 ** get_address_of_m_verticalScrollbarDownButton_21() { return &___m_verticalScrollbarDownButton_21; }
	inline void set_m_verticalScrollbarDownButton_21(GUIStyle_t1799908754 * value)
	{
		___m_verticalScrollbarDownButton_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_verticalScrollbarDownButton_21), value);
	}

	inline static int32_t get_offset_of_m_ScrollView_22() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_ScrollView_22)); }
	inline GUIStyle_t1799908754 * get_m_ScrollView_22() const { return ___m_ScrollView_22; }
	inline GUIStyle_t1799908754 ** get_address_of_m_ScrollView_22() { return &___m_ScrollView_22; }
	inline void set_m_ScrollView_22(GUIStyle_t1799908754 * value)
	{
		___m_ScrollView_22 = value;
		Il2CppCodeGenWriteBarrier((&___m_ScrollView_22), value);
	}

	inline static int32_t get_offset_of_m_CustomStyles_23() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_CustomStyles_23)); }
	inline GUIStyleU5BU5D_t2497716199* get_m_CustomStyles_23() const { return ___m_CustomStyles_23; }
	inline GUIStyleU5BU5D_t2497716199** get_address_of_m_CustomStyles_23() { return &___m_CustomStyles_23; }
	inline void set_m_CustomStyles_23(GUIStyleU5BU5D_t2497716199* value)
	{
		___m_CustomStyles_23 = value;
		Il2CppCodeGenWriteBarrier((&___m_CustomStyles_23), value);
	}

	inline static int32_t get_offset_of_m_Settings_24() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_Settings_24)); }
	inline GUISettings_t622856320 * get_m_Settings_24() const { return ___m_Settings_24; }
	inline GUISettings_t622856320 ** get_address_of_m_Settings_24() { return &___m_Settings_24; }
	inline void set_m_Settings_24(GUISettings_t622856320 * value)
	{
		___m_Settings_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_Settings_24), value);
	}

	inline static int32_t get_offset_of_m_Styles_26() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342, ___m_Styles_26)); }
	inline Dictionary_2_t3714688016 * get_m_Styles_26() const { return ___m_Styles_26; }
	inline Dictionary_2_t3714688016 ** get_address_of_m_Styles_26() { return &___m_Styles_26; }
	inline void set_m_Styles_26(Dictionary_2_t3714688016 * value)
	{
		___m_Styles_26 = value;
		Il2CppCodeGenWriteBarrier((&___m_Styles_26), value);
	}
};

struct GUISkin_t1436893342_StaticFields
{
public:
	// UnityEngine.GUIStyle UnityEngine.GUISkin::ms_Error
	GUIStyle_t1799908754 * ___ms_Error_25;
	// UnityEngine.GUISkin/SkinChangedDelegate UnityEngine.GUISkin::m_SkinChanged
	SkinChangedDelegate_t3594822336 * ___m_SkinChanged_27;
	// UnityEngine.GUISkin UnityEngine.GUISkin::current
	GUISkin_t1436893342 * ___current_28;

public:
	inline static int32_t get_offset_of_ms_Error_25() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342_StaticFields, ___ms_Error_25)); }
	inline GUIStyle_t1799908754 * get_ms_Error_25() const { return ___ms_Error_25; }
	inline GUIStyle_t1799908754 ** get_address_of_ms_Error_25() { return &___ms_Error_25; }
	inline void set_ms_Error_25(GUIStyle_t1799908754 * value)
	{
		___ms_Error_25 = value;
		Il2CppCodeGenWriteBarrier((&___ms_Error_25), value);
	}

	inline static int32_t get_offset_of_m_SkinChanged_27() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342_StaticFields, ___m_SkinChanged_27)); }
	inline SkinChangedDelegate_t3594822336 * get_m_SkinChanged_27() const { return ___m_SkinChanged_27; }
	inline SkinChangedDelegate_t3594822336 ** get_address_of_m_SkinChanged_27() { return &___m_SkinChanged_27; }
	inline void set_m_SkinChanged_27(SkinChangedDelegate_t3594822336 * value)
	{
		___m_SkinChanged_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_SkinChanged_27), value);
	}

	inline static int32_t get_offset_of_current_28() { return static_cast<int32_t>(offsetof(GUISkin_t1436893342_StaticFields, ___current_28)); }
	inline GUISkin_t1436893342 * get_current_28() const { return ___current_28; }
	inline GUISkin_t1436893342 ** get_address_of_current_28() { return &___current_28; }
	inline void set_current_28(GUISkin_t1436893342 * value)
	{
		___current_28 = value;
		Il2CppCodeGenWriteBarrier((&___current_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUISKIN_T1436893342_H
#ifndef GUI_T4082743951_H
#define GUI_T4082743951_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI
struct  GUI_t4082743951  : public RuntimeObject
{
public:

public:
};

struct GUI_t4082743951_StaticFields
{
public:
	// System.Single UnityEngine.GUI::s_ScrollStepSize
	float ___s_ScrollStepSize_0;
	// System.Int32 UnityEngine.GUI::s_HotTextField
	int32_t ___s_HotTextField_1;
	// System.Int32 UnityEngine.GUI::s_BoxHash
	int32_t ___s_BoxHash_2;
	// System.Int32 UnityEngine.GUI::s_RepeatButtonHash
	int32_t ___s_RepeatButtonHash_3;
	// System.Int32 UnityEngine.GUI::s_ToggleHash
	int32_t ___s_ToggleHash_4;
	// System.Int32 UnityEngine.GUI::s_ButtonGridHash
	int32_t ___s_ButtonGridHash_5;
	// System.Int32 UnityEngine.GUI::s_SliderHash
	int32_t ___s_SliderHash_6;
	// System.Int32 UnityEngine.GUI::s_BeginGroupHash
	int32_t ___s_BeginGroupHash_7;
	// System.Int32 UnityEngine.GUI::s_ScrollviewHash
	int32_t ___s_ScrollviewHash_8;
	// System.DateTime UnityEngine.GUI::<nextScrollStepTime>k__BackingField
	DateTime_t693205669  ___U3CnextScrollStepTimeU3Ek__BackingField_9;
	// UnityEngine.GUISkin UnityEngine.GUI::s_Skin
	GUISkin_t1436893342 * ___s_Skin_10;
	// UnityEngineInternal.GenericStack UnityEngine.GUI::s_ScrollViewStates
	GenericStack_t3718539591 * ___s_ScrollViewStates_11;

public:
	inline static int32_t get_offset_of_s_ScrollStepSize_0() { return static_cast<int32_t>(offsetof(GUI_t4082743951_StaticFields, ___s_ScrollStepSize_0)); }
	inline float get_s_ScrollStepSize_0() const { return ___s_ScrollStepSize_0; }
	inline float* get_address_of_s_ScrollStepSize_0() { return &___s_ScrollStepSize_0; }
	inline void set_s_ScrollStepSize_0(float value)
	{
		___s_ScrollStepSize_0 = value;
	}

	inline static int32_t get_offset_of_s_HotTextField_1() { return static_cast<int32_t>(offsetof(GUI_t4082743951_StaticFields, ___s_HotTextField_1)); }
	inline int32_t get_s_HotTextField_1() const { return ___s_HotTextField_1; }
	inline int32_t* get_address_of_s_HotTextField_1() { return &___s_HotTextField_1; }
	inline void set_s_HotTextField_1(int32_t value)
	{
		___s_HotTextField_1 = value;
	}

	inline static int32_t get_offset_of_s_BoxHash_2() { return static_cast<int32_t>(offsetof(GUI_t4082743951_StaticFields, ___s_BoxHash_2)); }
	inline int32_t get_s_BoxHash_2() const { return ___s_BoxHash_2; }
	inline int32_t* get_address_of_s_BoxHash_2() { return &___s_BoxHash_2; }
	inline void set_s_BoxHash_2(int32_t value)
	{
		___s_BoxHash_2 = value;
	}

	inline static int32_t get_offset_of_s_RepeatButtonHash_3() { return static_cast<int32_t>(offsetof(GUI_t4082743951_StaticFields, ___s_RepeatButtonHash_3)); }
	inline int32_t get_s_RepeatButtonHash_3() const { return ___s_RepeatButtonHash_3; }
	inline int32_t* get_address_of_s_RepeatButtonHash_3() { return &___s_RepeatButtonHash_3; }
	inline void set_s_RepeatButtonHash_3(int32_t value)
	{
		___s_RepeatButtonHash_3 = value;
	}

	inline static int32_t get_offset_of_s_ToggleHash_4() { return static_cast<int32_t>(offsetof(GUI_t4082743951_StaticFields, ___s_ToggleHash_4)); }
	inline int32_t get_s_ToggleHash_4() const { return ___s_ToggleHash_4; }
	inline int32_t* get_address_of_s_ToggleHash_4() { return &___s_ToggleHash_4; }
	inline void set_s_ToggleHash_4(int32_t value)
	{
		___s_ToggleHash_4 = value;
	}

	inline static int32_t get_offset_of_s_ButtonGridHash_5() { return static_cast<int32_t>(offsetof(GUI_t4082743951_StaticFields, ___s_ButtonGridHash_5)); }
	inline int32_t get_s_ButtonGridHash_5() const { return ___s_ButtonGridHash_5; }
	inline int32_t* get_address_of_s_ButtonGridHash_5() { return &___s_ButtonGridHash_5; }
	inline void set_s_ButtonGridHash_5(int32_t value)
	{
		___s_ButtonGridHash_5 = value;
	}

	inline static int32_t get_offset_of_s_SliderHash_6() { return static_cast<int32_t>(offsetof(GUI_t4082743951_StaticFields, ___s_SliderHash_6)); }
	inline int32_t get_s_SliderHash_6() const { return ___s_SliderHash_6; }
	inline int32_t* get_address_of_s_SliderHash_6() { return &___s_SliderHash_6; }
	inline void set_s_SliderHash_6(int32_t value)
	{
		___s_SliderHash_6 = value;
	}

	inline static int32_t get_offset_of_s_BeginGroupHash_7() { return static_cast<int32_t>(offsetof(GUI_t4082743951_StaticFields, ___s_BeginGroupHash_7)); }
	inline int32_t get_s_BeginGroupHash_7() const { return ___s_BeginGroupHash_7; }
	inline int32_t* get_address_of_s_BeginGroupHash_7() { return &___s_BeginGroupHash_7; }
	inline void set_s_BeginGroupHash_7(int32_t value)
	{
		___s_BeginGroupHash_7 = value;
	}

	inline static int32_t get_offset_of_s_ScrollviewHash_8() { return static_cast<int32_t>(offsetof(GUI_t4082743951_StaticFields, ___s_ScrollviewHash_8)); }
	inline int32_t get_s_ScrollviewHash_8() const { return ___s_ScrollviewHash_8; }
	inline int32_t* get_address_of_s_ScrollviewHash_8() { return &___s_ScrollviewHash_8; }
	inline void set_s_ScrollviewHash_8(int32_t value)
	{
		___s_ScrollviewHash_8 = value;
	}

	inline static int32_t get_offset_of_U3CnextScrollStepTimeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(GUI_t4082743951_StaticFields, ___U3CnextScrollStepTimeU3Ek__BackingField_9)); }
	inline DateTime_t693205669  get_U3CnextScrollStepTimeU3Ek__BackingField_9() const { return ___U3CnextScrollStepTimeU3Ek__BackingField_9; }
	inline DateTime_t693205669 * get_address_of_U3CnextScrollStepTimeU3Ek__BackingField_9() { return &___U3CnextScrollStepTimeU3Ek__BackingField_9; }
	inline void set_U3CnextScrollStepTimeU3Ek__BackingField_9(DateTime_t693205669  value)
	{
		___U3CnextScrollStepTimeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_s_Skin_10() { return static_cast<int32_t>(offsetof(GUI_t4082743951_StaticFields, ___s_Skin_10)); }
	inline GUISkin_t1436893342 * get_s_Skin_10() const { return ___s_Skin_10; }
	inline GUISkin_t1436893342 ** get_address_of_s_Skin_10() { return &___s_Skin_10; }
	inline void set_s_Skin_10(GUISkin_t1436893342 * value)
	{
		___s_Skin_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_Skin_10), value);
	}

	inline static int32_t get_offset_of_s_ScrollViewStates_11() { return static_cast<int32_t>(offsetof(GUI_t4082743951_StaticFields, ___s_ScrollViewStates_11)); }
	inline GenericStack_t3718539591 * get_s_ScrollViewStates_11() const { return ___s_ScrollViewStates_11; }
	inline GenericStack_t3718539591 ** get_address_of_s_ScrollViewStates_11() { return &___s_ScrollViewStates_11; }
	inline void set_s_ScrollViewStates_11(GenericStack_t3718539591 * value)
	{
		___s_ScrollViewStates_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_ScrollViewStates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUI_T4082743951_H
#ifndef WINDOWFUNCTION_T3486805455_H
#define WINDOWFUNCTION_T3486805455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUI/WindowFunction
struct  WindowFunction_t3486805455  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWFUNCTION_T3486805455_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { sizeof (SampleType_t2751317430)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1400[3] = 
{
	SampleType_t2751317430::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { sizeof (CanvasGroup_t3296560743), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (CanvasRenderer_t261436805), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { sizeof (Event_t3028476042), sizeof(Event_t3028476042_marshaled_pinvoke), sizeof(Event_t3028476042_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1404[4] = 
{
	Event_t3028476042::get_offset_of_m_Ptr_0(),
	Event_t3028476042_StaticFields::get_offset_of_s_Current_1(),
	Event_t3028476042_StaticFields::get_offset_of_s_MasterEvent_2(),
	Event_t3028476042_StaticFields::get_offset_of_U3CU3Ef__switchU24map0_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { sizeof (EventType_t3919834026)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1405[33] = 
{
	EventType_t3919834026::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (EventModifiers_t2690251474)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1406[9] = 
{
	EventModifiers_t2690251474::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1407 = { sizeof (GUI_t4082743951), -1, sizeof(GUI_t4082743951_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1407[12] = 
{
	GUI_t4082743951_StaticFields::get_offset_of_s_ScrollStepSize_0(),
	GUI_t4082743951_StaticFields::get_offset_of_s_HotTextField_1(),
	GUI_t4082743951_StaticFields::get_offset_of_s_BoxHash_2(),
	GUI_t4082743951_StaticFields::get_offset_of_s_RepeatButtonHash_3(),
	GUI_t4082743951_StaticFields::get_offset_of_s_ToggleHash_4(),
	GUI_t4082743951_StaticFields::get_offset_of_s_ButtonGridHash_5(),
	GUI_t4082743951_StaticFields::get_offset_of_s_SliderHash_6(),
	GUI_t4082743951_StaticFields::get_offset_of_s_BeginGroupHash_7(),
	GUI_t4082743951_StaticFields::get_offset_of_s_ScrollviewHash_8(),
	GUI_t4082743951_StaticFields::get_offset_of_U3CnextScrollStepTimeU3Ek__BackingField_9(),
	GUI_t4082743951_StaticFields::get_offset_of_s_Skin_10(),
	GUI_t4082743951_StaticFields::get_offset_of_s_ScrollViewStates_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1408 = { sizeof (WindowFunction_t3486805455), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1409 = { sizeof (GUIContent_t4210063000), -1, sizeof(GUIContent_t4210063000_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1409[7] = 
{
	GUIContent_t4210063000::get_offset_of_m_Text_0(),
	GUIContent_t4210063000::get_offset_of_m_Image_1(),
	GUIContent_t4210063000::get_offset_of_m_Tooltip_2(),
	GUIContent_t4210063000_StaticFields::get_offset_of_s_Text_3(),
	GUIContent_t4210063000_StaticFields::get_offset_of_s_Image_4(),
	GUIContent_t4210063000_StaticFields::get_offset_of_s_TextImage_5(),
	GUIContent_t4210063000_StaticFields::get_offset_of_none_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1410 = { sizeof (GUILayout_t2579273657), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1411 = { sizeof (GUILayoutOption_t4183744904), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1411[2] = 
{
	GUILayoutOption_t4183744904::get_offset_of_type_0(),
	GUILayoutOption_t4183744904::get_offset_of_value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1412 = { sizeof (Type_t4024155706)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1412[15] = 
{
	Type_t4024155706::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1413 = { sizeof (GUILayoutGroup_t3975363388), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1413[17] = 
{
	GUILayoutGroup_t3975363388::get_offset_of_entries_10(),
	GUILayoutGroup_t3975363388::get_offset_of_isVertical_11(),
	GUILayoutGroup_t3975363388::get_offset_of_resetCoords_12(),
	GUILayoutGroup_t3975363388::get_offset_of_spacing_13(),
	GUILayoutGroup_t3975363388::get_offset_of_sameSize_14(),
	GUILayoutGroup_t3975363388::get_offset_of_isWindow_15(),
	GUILayoutGroup_t3975363388::get_offset_of_windowID_16(),
	GUILayoutGroup_t3975363388::get_offset_of_m_Cursor_17(),
	GUILayoutGroup_t3975363388::get_offset_of_m_StretchableCountX_18(),
	GUILayoutGroup_t3975363388::get_offset_of_m_StretchableCountY_19(),
	GUILayoutGroup_t3975363388::get_offset_of_m_UserSpecifiedWidth_20(),
	GUILayoutGroup_t3975363388::get_offset_of_m_UserSpecifiedHeight_21(),
	GUILayoutGroup_t3975363388::get_offset_of_m_ChildMinWidth_22(),
	GUILayoutGroup_t3975363388::get_offset_of_m_ChildMaxWidth_23(),
	GUILayoutGroup_t3975363388::get_offset_of_m_ChildMinHeight_24(),
	GUILayoutGroup_t3975363388::get_offset_of_m_ChildMaxHeight_25(),
	GUILayoutGroup_t3975363388::get_offset_of_m_Margin_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1414 = { sizeof (GUIScrollGroup_t755788567), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1414[12] = 
{
	GUIScrollGroup_t755788567::get_offset_of_calcMinWidth_27(),
	GUIScrollGroup_t755788567::get_offset_of_calcMaxWidth_28(),
	GUIScrollGroup_t755788567::get_offset_of_calcMinHeight_29(),
	GUIScrollGroup_t755788567::get_offset_of_calcMaxHeight_30(),
	GUIScrollGroup_t755788567::get_offset_of_clientWidth_31(),
	GUIScrollGroup_t755788567::get_offset_of_clientHeight_32(),
	GUIScrollGroup_t755788567::get_offset_of_allowHorizontalScroll_33(),
	GUIScrollGroup_t755788567::get_offset_of_allowVerticalScroll_34(),
	GUIScrollGroup_t755788567::get_offset_of_needsHorizontalScrollbar_35(),
	GUIScrollGroup_t755788567::get_offset_of_needsVerticalScrollbar_36(),
	GUIScrollGroup_t755788567::get_offset_of_horizontalScrollbar_37(),
	GUIScrollGroup_t755788567::get_offset_of_verticalScrollbar_38(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1415 = { sizeof (GUILayoutEntry_t3828586629), -1, sizeof(GUILayoutEntry_t3828586629_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1415[10] = 
{
	GUILayoutEntry_t3828586629::get_offset_of_minWidth_0(),
	GUILayoutEntry_t3828586629::get_offset_of_maxWidth_1(),
	GUILayoutEntry_t3828586629::get_offset_of_minHeight_2(),
	GUILayoutEntry_t3828586629::get_offset_of_maxHeight_3(),
	GUILayoutEntry_t3828586629::get_offset_of_rect_4(),
	GUILayoutEntry_t3828586629::get_offset_of_stretchWidth_5(),
	GUILayoutEntry_t3828586629::get_offset_of_stretchHeight_6(),
	GUILayoutEntry_t3828586629::get_offset_of_m_Style_7(),
	GUILayoutEntry_t3828586629_StaticFields::get_offset_of_kDummyRect_8(),
	GUILayoutEntry_t3828586629_StaticFields::get_offset_of_indent_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1416 = { sizeof (GUILayoutUtility_t996096873), -1, sizeof(GUILayoutUtility_t996096873_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1416[5] = 
{
	GUILayoutUtility_t996096873_StaticFields::get_offset_of_s_StoredLayouts_0(),
	GUILayoutUtility_t996096873_StaticFields::get_offset_of_s_StoredWindows_1(),
	GUILayoutUtility_t996096873_StaticFields::get_offset_of_current_2(),
	GUILayoutUtility_t996096873_StaticFields::get_offset_of_kDummyRect_3(),
	GUILayoutUtility_t996096873_StaticFields::get_offset_of_s_SpaceStyle_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1417 = { sizeof (LayoutCache_t3120781045), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1417[3] = 
{
	LayoutCache_t3120781045::get_offset_of_topLevel_0(),
	LayoutCache_t3120781045::get_offset_of_layoutGroups_1(),
	LayoutCache_t3120781045::get_offset_of_windows_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1418 = { sizeof (GUISettings_t622856320), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1418[5] = 
{
	GUISettings_t622856320::get_offset_of_m_DoubleClickSelectsWord_0(),
	GUISettings_t622856320::get_offset_of_m_TripleClickSelectsLine_1(),
	GUISettings_t622856320::get_offset_of_m_CursorColor_2(),
	GUISettings_t622856320::get_offset_of_m_CursorFlashSpeed_3(),
	GUISettings_t622856320::get_offset_of_m_SelectionColor_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1419 = { sizeof (GUISkin_t1436893342), -1, sizeof(GUISkin_t1436893342_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1419[27] = 
{
	GUISkin_t1436893342::get_offset_of_m_Font_2(),
	GUISkin_t1436893342::get_offset_of_m_box_3(),
	GUISkin_t1436893342::get_offset_of_m_button_4(),
	GUISkin_t1436893342::get_offset_of_m_toggle_5(),
	GUISkin_t1436893342::get_offset_of_m_label_6(),
	GUISkin_t1436893342::get_offset_of_m_textField_7(),
	GUISkin_t1436893342::get_offset_of_m_textArea_8(),
	GUISkin_t1436893342::get_offset_of_m_window_9(),
	GUISkin_t1436893342::get_offset_of_m_horizontalSlider_10(),
	GUISkin_t1436893342::get_offset_of_m_horizontalSliderThumb_11(),
	GUISkin_t1436893342::get_offset_of_m_verticalSlider_12(),
	GUISkin_t1436893342::get_offset_of_m_verticalSliderThumb_13(),
	GUISkin_t1436893342::get_offset_of_m_horizontalScrollbar_14(),
	GUISkin_t1436893342::get_offset_of_m_horizontalScrollbarThumb_15(),
	GUISkin_t1436893342::get_offset_of_m_horizontalScrollbarLeftButton_16(),
	GUISkin_t1436893342::get_offset_of_m_horizontalScrollbarRightButton_17(),
	GUISkin_t1436893342::get_offset_of_m_verticalScrollbar_18(),
	GUISkin_t1436893342::get_offset_of_m_verticalScrollbarThumb_19(),
	GUISkin_t1436893342::get_offset_of_m_verticalScrollbarUpButton_20(),
	GUISkin_t1436893342::get_offset_of_m_verticalScrollbarDownButton_21(),
	GUISkin_t1436893342::get_offset_of_m_ScrollView_22(),
	GUISkin_t1436893342::get_offset_of_m_CustomStyles_23(),
	GUISkin_t1436893342::get_offset_of_m_Settings_24(),
	GUISkin_t1436893342_StaticFields::get_offset_of_ms_Error_25(),
	GUISkin_t1436893342::get_offset_of_m_Styles_26(),
	GUISkin_t1436893342_StaticFields::get_offset_of_m_SkinChanged_27(),
	GUISkin_t1436893342_StaticFields::get_offset_of_current_28(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1420 = { sizeof (SkinChangedDelegate_t3594822336), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1421 = { sizeof (GUIStyleState_t3801000545), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1421[3] = 
{
	GUIStyleState_t3801000545::get_offset_of_m_Ptr_0(),
	GUIStyleState_t3801000545::get_offset_of_m_SourceStyle_1(),
	GUIStyleState_t3801000545::get_offset_of_m_Background_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1422 = { sizeof (ImagePosition_t3491916276)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1422[5] = 
{
	ImagePosition_t3491916276::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1423 = { sizeof (GUIStyle_t1799908754), -1, sizeof(GUIStyle_t1799908754_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1423[16] = 
{
	GUIStyle_t1799908754::get_offset_of_m_Ptr_0(),
	GUIStyle_t1799908754::get_offset_of_m_Normal_1(),
	GUIStyle_t1799908754::get_offset_of_m_Hover_2(),
	GUIStyle_t1799908754::get_offset_of_m_Active_3(),
	GUIStyle_t1799908754::get_offset_of_m_Focused_4(),
	GUIStyle_t1799908754::get_offset_of_m_OnNormal_5(),
	GUIStyle_t1799908754::get_offset_of_m_OnHover_6(),
	GUIStyle_t1799908754::get_offset_of_m_OnActive_7(),
	GUIStyle_t1799908754::get_offset_of_m_OnFocused_8(),
	GUIStyle_t1799908754::get_offset_of_m_Border_9(),
	GUIStyle_t1799908754::get_offset_of_m_Padding_10(),
	GUIStyle_t1799908754::get_offset_of_m_Margin_11(),
	GUIStyle_t1799908754::get_offset_of_m_Overflow_12(),
	GUIStyle_t1799908754::get_offset_of_m_FontInternal_13(),
	GUIStyle_t1799908754_StaticFields::get_offset_of_showKeyboardFocus_14(),
	GUIStyle_t1799908754_StaticFields::get_offset_of_s_None_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1424 = { sizeof (TextClipping_t2573530411)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1424[3] = 
{
	TextClipping_t2573530411::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1425 = { sizeof (GUITargetAttribute_t863467180), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1425[1] = 
{
	GUITargetAttribute_t863467180::get_offset_of_displayMask_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1426 = { sizeof (ExitGUIException_t1618397098), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1427 = { sizeof (GUIUtility_t3275770671), -1, sizeof(GUIUtility_t3275770671_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1427[8] = 
{
	GUIUtility_t3275770671_StaticFields::get_offset_of_s_SkinMode_0(),
	GUIUtility_t3275770671_StaticFields::get_offset_of_s_OriginalID_1(),
	GUIUtility_t3275770671_StaticFields::get_offset_of_takeCapture_2(),
	GUIUtility_t3275770671_StaticFields::get_offset_of_releaseCapture_3(),
	GUIUtility_t3275770671_StaticFields::get_offset_of_processEvent_4(),
	GUIUtility_t3275770671_StaticFields::get_offset_of_endContainerGUIFromException_5(),
	GUIUtility_t3275770671_StaticFields::get_offset_of_U3CguiIsExitingU3Ek__BackingField_6(),
	GUIUtility_t3275770671_StaticFields::get_offset_of_s_EditorScreenPointOffset_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1428 = { sizeof (ScrollViewState_t3820542997), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1429 = { sizeof (SliderState_t1595681032), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1429[3] = 
{
	SliderState_t1595681032::get_offset_of_dragStartPos_0(),
	SliderState_t1595681032::get_offset_of_dragStartValue_1(),
	SliderState_t1595681032::get_offset_of_isDragging_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1430 = { sizeof (TextEditor_t3975561390), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1430[16] = 
{
	TextEditor_t3975561390::get_offset_of_keyboardOnScreen_0(),
	TextEditor_t3975561390::get_offset_of_controlID_1(),
	TextEditor_t3975561390::get_offset_of_style_2(),
	TextEditor_t3975561390::get_offset_of_multiline_3(),
	TextEditor_t3975561390::get_offset_of_hasHorizontalCursorPos_4(),
	TextEditor_t3975561390::get_offset_of_isPasswordField_5(),
	TextEditor_t3975561390::get_offset_of_scrollOffset_6(),
	TextEditor_t3975561390::get_offset_of_m_Content_7(),
	TextEditor_t3975561390::get_offset_of_m_CursorIndex_8(),
	TextEditor_t3975561390::get_offset_of_m_SelectIndex_9(),
	TextEditor_t3975561390::get_offset_of_m_RevealCursor_10(),
	TextEditor_t3975561390::get_offset_of_m_MouseDragSelectsWholeWords_11(),
	TextEditor_t3975561390::get_offset_of_m_DblClickInitPos_12(),
	TextEditor_t3975561390::get_offset_of_m_DblClickSnap_13(),
	TextEditor_t3975561390::get_offset_of_m_bJustSelected_14(),
	TextEditor_t3975561390::get_offset_of_m_iAltCursorPos_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1431 = { sizeof (DblClickSnapping_t1119726228)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1431[3] = 
{
	DblClickSnapping_t1119726228::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1432 = { sizeof (Internal_DrawArguments_t2834709342)+ sizeof (RuntimeObject), sizeof(Internal_DrawArguments_t2834709342 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1432[6] = 
{
	Internal_DrawArguments_t2834709342::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawArguments_t2834709342::get_offset_of_position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawArguments_t2834709342::get_offset_of_isHover_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawArguments_t2834709342::get_offset_of_isActive_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawArguments_t2834709342::get_offset_of_on_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawArguments_t2834709342::get_offset_of_hasKeyboardFocus_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1433 = { sizeof (Internal_DrawWithTextSelectionArguments_t1327795077)+ sizeof (RuntimeObject), sizeof(Internal_DrawWithTextSelectionArguments_t1327795077 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1433[11] = 
{
	Internal_DrawWithTextSelectionArguments_t1327795077::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1327795077::get_offset_of_position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1327795077::get_offset_of_firstPos_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1327795077::get_offset_of_lastPos_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1327795077::get_offset_of_cursorColor_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1327795077::get_offset_of_selectionColor_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1327795077::get_offset_of_isHover_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1327795077::get_offset_of_isActive_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1327795077::get_offset_of_on_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1327795077::get_offset_of_hasKeyboardFocus_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Internal_DrawWithTextSelectionArguments_t1327795077::get_offset_of_drawSelectionAsComposition_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1434 = { sizeof (WebRequestUtils_t4100941042), -1, sizeof(WebRequestUtils_t4100941042_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1434[1] = 
{
	WebRequestUtils_t4100941042_StaticFields::get_offset_of_domainRegex_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1435 = { sizeof (RemoteSettings_t392466225), -1, sizeof(RemoteSettings_t392466225_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1435[1] = 
{
	RemoteSettings_t392466225_StaticFields::get_offset_of_Updated_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1436 = { sizeof (UpdatedEventHandler_t3033456180), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1437 = { sizeof (AttributeHelperEngine_t958797062), -1, sizeof(AttributeHelperEngine_t958797062_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1437[3] = 
{
	AttributeHelperEngine_t958797062_StaticFields::get_offset_of__disallowMultipleComponentArray_0(),
	AttributeHelperEngine_t958797062_StaticFields::get_offset_of__executeInEditModeArray_1(),
	AttributeHelperEngine_t958797062_StaticFields::get_offset_of__requireComponentArray_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1438 = { sizeof (DisallowMultipleComponent_t2656950), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1439 = { sizeof (RequireComponent_t864575032), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1439[3] = 
{
	RequireComponent_t864575032::get_offset_of_m_Type0_0(),
	RequireComponent_t864575032::get_offset_of_m_Type1_1(),
	RequireComponent_t864575032::get_offset_of_m_Type2_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1440 = { sizeof (AddComponentMenu_t1099699699), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1440[2] = 
{
	AddComponentMenu_t1099699699::get_offset_of_m_AddComponentMenu_0(),
	AddComponentMenu_t1099699699::get_offset_of_m_Ordering_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1441 = { sizeof (ContextMenu_t2283362202), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1441[3] = 
{
	ContextMenu_t2283362202::get_offset_of_menuItem_0(),
	ContextMenu_t2283362202::get_offset_of_validate_1(),
	ContextMenu_t2283362202::get_offset_of_priority_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1442 = { sizeof (ExecuteInEditMode_t3043633143), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1443 = { sizeof (HideInInspector_t2503583610), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1444 = { sizeof (DefaultExecutionOrder_t2717914595), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1444[1] = 
{
	DefaultExecutionOrder_t2717914595::get_offset_of_U3CorderU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1445 = { sizeof (IL2CPPStructAlignmentAttribute_t130316838), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1445[1] = 
{
	IL2CPPStructAlignmentAttribute_t130316838::get_offset_of_Align_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1446 = { sizeof (NativeClassAttribute_t1576243993), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1446[1] = 
{
	NativeClassAttribute_t1576243993::get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1447 = { sizeof (AssemblyIsEditorAssembly_t1557026495), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1448 = { sizeof (WritableAttribute_t3715198420), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1449 = { sizeof (GeneratedByOldBindingsGeneratorAttribute_t107439586), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1450 = { sizeof (SendMessageOptions_t1414041951)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1450[3] = 
{
	SendMessageOptions_t1414041951::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1451 = { sizeof (Space_t4278750806)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1451[3] = 
{
	Space_t4278750806::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1452 = { sizeof (RuntimePlatform_t1869584967)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1452[34] = 
{
	RuntimePlatform_t1869584967::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1453 = { sizeof (OperatingSystemFamily_t1896948788)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1453[5] = 
{
	OperatingSystemFamily_t1896948788::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1454 = { sizeof (LogType_t1559732862)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1454[6] = 
{
	LogType_t1559732862::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1455 = { sizeof (ClassLibraryInitializer_t504692705), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1456 = { sizeof (Color_t2020392075)+ sizeof (RuntimeObject), sizeof(Color_t2020392075 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1456[4] = 
{
	Color_t2020392075::get_offset_of_r_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t2020392075::get_offset_of_g_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t2020392075::get_offset_of_b_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color_t2020392075::get_offset_of_a_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1457 = { sizeof (Color32_t874517518)+ sizeof (RuntimeObject), sizeof(Color32_t874517518 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1457[4] = 
{
	Color32_t874517518::get_offset_of_r_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color32_t874517518::get_offset_of_g_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color32_t874517518::get_offset_of_b_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Color32_t874517518::get_offset_of_a_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1458 = { sizeof (SetupCoroutine_t3582942563), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1459 = { sizeof (CameraClearFlags_t452084705)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1459[6] = 
{
	CameraClearFlags_t452084705::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1460 = { sizeof (TextureWrapMode_t3683976566)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1460[5] = 
{
	TextureWrapMode_t3683976566::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1461 = { sizeof (CompareFunction_t457874581)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1461[10] = 
{
	CompareFunction_t457874581::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1462 = { sizeof (ColorWriteMask_t926634530)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1462[6] = 
{
	ColorWriteMask_t926634530::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1463 = { sizeof (StencilOp_t2936374925)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1463[9] = 
{
	StencilOp_t2936374925::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1464 = { sizeof (KeyCode_t2283395152)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1464[322] = 
{
	KeyCode_t2283395152::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1465 = { sizeof (MathfInternal_t715669973)+ sizeof (RuntimeObject), sizeof(MathfInternal_t715669973 ), sizeof(MathfInternal_t715669973_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1465[3] = 
{
	MathfInternal_t715669973_StaticFields::get_offset_of_FloatMinNormal_0(),
	MathfInternal_t715669973_StaticFields::get_offset_of_FloatMinDenormal_1(),
	MathfInternal_t715669973_StaticFields::get_offset_of_IsFlushToZeroEnabled_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1466 = { sizeof (ScriptingUtils_t2804582268), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1467 = { sizeof (SendMouseEvents_t3505065032), -1, sizeof(SendMouseEvents_t3505065032_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1467[5] = 
{
	SendMouseEvents_t3505065032_StaticFields::get_offset_of_s_MouseUsed_0(),
	SendMouseEvents_t3505065032_StaticFields::get_offset_of_m_LastHit_1(),
	SendMouseEvents_t3505065032_StaticFields::get_offset_of_m_MouseDownHit_2(),
	SendMouseEvents_t3505065032_StaticFields::get_offset_of_m_CurrentHit_3(),
	SendMouseEvents_t3505065032_StaticFields::get_offset_of_m_Cameras_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1468 = { sizeof (HitInfo_t1761367055)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1468[2] = 
{
	HitInfo_t1761367055::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HitInfo_t1761367055::get_offset_of_camera_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1469 = { sizeof (Plane_t3727654732)+ sizeof (RuntimeObject), sizeof(Plane_t3727654732 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1469[2] = 
{
	Plane_t3727654732::get_offset_of_m_Normal_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Plane_t3727654732::get_offset_of_m_Distance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1470 = { sizeof (PropertyAttribute_t2606999759), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1471 = { sizeof (TooltipAttribute_t4278647215), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1471[1] = 
{
	TooltipAttribute_t4278647215::get_offset_of_tooltip_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1472 = { sizeof (SpaceAttribute_t952253354), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1472[1] = 
{
	SpaceAttribute_t952253354::get_offset_of_height_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1473 = { sizeof (RangeAttribute_t3336560921), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1473[2] = 
{
	RangeAttribute_t3336560921::get_offset_of_min_0(),
	RangeAttribute_t3336560921::get_offset_of_max_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1474 = { sizeof (TextAreaAttribute_t2454598508), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1474[2] = 
{
	TextAreaAttribute_t2454598508::get_offset_of_minLines_0(),
	TextAreaAttribute_t2454598508::get_offset_of_maxLines_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1475 = { sizeof (RangeInt_t2323401134)+ sizeof (RuntimeObject), sizeof(RangeInt_t2323401134 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1475[2] = 
{
	RangeInt_t2323401134::get_offset_of_start_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RangeInt_t2323401134::get_offset_of_length_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1476 = { sizeof (Ray_t2469606224)+ sizeof (RuntimeObject), sizeof(Ray_t2469606224 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1476[2] = 
{
	Ray_t2469606224::get_offset_of_m_Origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ray_t2469606224::get_offset_of_m_Direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1477 = { sizeof (Rect_t3681755626)+ sizeof (RuntimeObject), sizeof(Rect_t3681755626 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1477[4] = 
{
	Rect_t3681755626::get_offset_of_m_XMin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t3681755626::get_offset_of_m_YMin_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t3681755626::get_offset_of_m_Width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t3681755626::get_offset_of_m_Height_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1478 = { sizeof (SelectionBaseAttribute_t936505999), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1479 = { sizeof (SerializePrivateVariables_t2241034664), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1480 = { sizeof (SerializeField_t3073427462), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1481 = { sizeof (PreferBinarySerialization_t2472773525), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1482 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1483 = { sizeof (StackTraceUtility_t1881293839), -1, sizeof(StackTraceUtility_t1881293839_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1483[1] = 
{
	StackTraceUtility_t1881293839_StaticFields::get_offset_of_projectFolder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1484 = { sizeof (UnityException_t2687879050), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1484[2] = 
{
	0,
	UnityException_t2687879050::get_offset_of_unityStackTrace_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1485 = { sizeof (TouchScreenKeyboardType_t875112366)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1485[12] = 
{
	TouchScreenKeyboardType_t875112366::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1486 = { sizeof (TrackedReference_t1045890189), sizeof(TrackedReference_t1045890189_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1486[1] = 
{
	TrackedReference_t1045890189::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1487 = { sizeof (PersistentListenerMode_t857969000)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1487[8] = 
{
	PersistentListenerMode_t857969000::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1488 = { sizeof (ArgumentCache_t4810721), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1488[6] = 
{
	ArgumentCache_t4810721::get_offset_of_m_ObjectArgument_0(),
	ArgumentCache_t4810721::get_offset_of_m_ObjectArgumentAssemblyTypeName_1(),
	ArgumentCache_t4810721::get_offset_of_m_IntArgument_2(),
	ArgumentCache_t4810721::get_offset_of_m_FloatArgument_3(),
	ArgumentCache_t4810721::get_offset_of_m_StringArgument_4(),
	ArgumentCache_t4810721::get_offset_of_m_BoolArgument_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1489 = { sizeof (BaseInvokableCall_t2229564840), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1490 = { sizeof (InvokableCall_t2183506063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1490[1] = 
{
	InvokableCall_t2183506063::get_offset_of_Delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1491 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1491[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1492 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1492[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1493 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1493[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1494 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1494[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1495 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1495[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1496 = { sizeof (UnityEventCallState_t3420894182)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1496[4] = 
{
	UnityEventCallState_t3420894182::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1497 = { sizeof (PersistentCall_t3793436469), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1497[5] = 
{
	PersistentCall_t3793436469::get_offset_of_m_Target_0(),
	PersistentCall_t3793436469::get_offset_of_m_MethodName_1(),
	PersistentCall_t3793436469::get_offset_of_m_Mode_2(),
	PersistentCall_t3793436469::get_offset_of_m_Arguments_3(),
	PersistentCall_t3793436469::get_offset_of_m_CallState_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1498 = { sizeof (PersistentCallGroup_t339478082), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1498[1] = 
{
	PersistentCallGroup_t339478082::get_offset_of_m_Calls_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1499 = { sizeof (InvokableCallList_t2295673753), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1499[4] = 
{
	InvokableCallList_t2295673753::get_offset_of_m_PersistentCalls_0(),
	InvokableCallList_t2295673753::get_offset_of_m_RuntimeCalls_1(),
	InvokableCallList_t2295673753::get_offset_of_m_ExecutingCalls_2(),
	InvokableCallList_t2295673753::get_offset_of_m_NeedsUpdate_3(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
