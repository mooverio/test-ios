// This file was generated based on '/Users/rolf.valstad/Library/Application Support/Fusetools/Packages/UnoCore/0.45.1/source/uno/compiler/exporttargetinterop/foreign/objc/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <ObjC.ID.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
static uType* TYPES[1];

namespace g{
namespace ObjC{

// public extern struct ID :12
// {
static void ID_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::IntPtr_typeof();
    type->SetFields(0,
        ::TYPES[0/*Uno.IntPtr*/], offsetof(::g::ObjC::ID, _dummy), 0,
        type, (uintptr_t)&::g::ObjC::ID::Null_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("Null", 1));
}

uStructType* ID_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ValueSize = sizeof(::id);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("ObjC.ID", options);
    type->fp_build_ = ID_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))ID__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int*))ID__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object o) :17
void ID__Equals_fn(::id* __this, uType* __type, uObject* o, bool* __retval)
{
    uStackFrame __("ObjC.ID", "Equals(object)");
    return *__retval = uIs(o, __type) && ID::op_Equality(*__this, uUnbox< ::id>(__type, o)), void();
}

// public override sealed int GetHashCode() :22
void ID__GetHashCode_fn(::id* __this, uType* __type, int* __retval)
{
    uStackFrame __("ObjC.ID", "GetHashCode()");
    return *__retval = ::g::Uno::IntPtr::GetHashCode((void*)*__this, ::TYPES[0/*Uno.IntPtr*/]), void();
}

// public static operator ==(ObjC.ID a, ObjC.ID b) :27
void ID__op_Equality_fn(::id* a, ::id* b, bool* __retval)
{
    *__retval = ID::op_Equality(*a, *b);
}

// public static operator !=(ObjC.ID a, ObjC.ID b) :32
void ID__op_Inequality_fn(::id* a, ::id* b, bool* __retval)
{
    *__retval = ID::op_Inequality(*a, *b);
}

::id ID::Null_;

// public static operator ==(ObjC.ID a, ObjC.ID b) [static] :27
bool ID::op_Equality(::id a, ::id b)
{
    return a == b;
}

// public static operator !=(ObjC.ID a, ObjC.ID b) [static] :32
bool ID::op_Inequality(::id a, ::id b)
{
    return a != b;
}
// }

}} // ::g::ObjC
