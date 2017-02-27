// This file was generated based on '/Users/rolf.valstad/Library/Application Support/Fusetools/Packages/UnoCore/0.45.1/source/uno/compiler/exporttargetinterop/foreign/objc/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <ObjC.ID.h>
#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
static uType* TYPES[1];

namespace g{
namespace ObjC{

// public extern class Object :39
// {
// ~Object() :73
static void Object__Finalize_fn(Object* __this)
{
    [__this->_handle release];
}

static void Object_build(uType* type)
{
    ::TYPES[0] = ::g::ObjC::ID_typeof();
    type->SetFields(0,
        ::TYPES[0/*ObjC.ID*/], offsetof(::g::ObjC::Object, _handle), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Handle", NULL, (void*)Object__get_Handle_fn, 0, false, ::TYPES[0/*ObjC.ID*/], 0),
        new uFunction(".ctor", NULL, (void*)Object__New1_fn, 0, true, type, 0));
}

uType* Object_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Object);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("ObjC.Object", options);
    type->fp_build_ = Object_build;
    type->fp_ctor_ = (void*)Object__New1_fn;
    type->fp_Finalize = (void(*)(uObject*))Object__Finalize_fn;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))Object__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int*))Object__GetHashCode_fn;
    return type;
}

// public Object() :66
void Object__ctor__fn(Object* __this)
{
    __this->ctor_();
}

// private Object(ObjC.ID handle) :60
void Object__ctor_1_fn(Object* __this, ::id* handle)
{
    __this->ctor_1(*handle);
}

// private static ObjC.Object Create(ObjC.ID handle) :68
void Object__Create_fn(::id* handle, Object** __retval)
{
    *__retval = Object::Create(*handle);
}

// public override sealed bool Equals(object x) :78
void Object__Equals_fn(Object* __this, uObject* x, bool* __retval)
{
    uStackFrame __("ObjC.Object", "Equals(object)");
    Object* o = uAs<Object*>(x, Object_typeof());
    return *__retval = (o != NULL) && ::g::ObjC::ID::op_Equality(uPtr(o)->Handle(), __this->Handle()), void();
}

// private static ObjC.ID GetHandle(ObjC.Object o) :89
void Object__GetHandle_fn(Object* o, ::id* __retval)
{
    *__retval = Object::GetHandle(o);
}

// public override sealed int GetHashCode() :84
void Object__GetHashCode_fn(Object* __this, int* __retval)
{
    uStackFrame __("ObjC.Object", "GetHashCode()");
    return *__retval = ::g::ObjC::ID::GetHashCode(__this->_handle, ::TYPES[0/*ObjC.ID*/]), void();
}

// public ObjC.ID get_Handle() :45
void Object__get_Handle_fn(Object* __this, ::id* __retval)
{
    *__retval = __this->Handle();
}

// protected void set_Handle(ObjC.ID value) :49
void Object__set_Handle_fn(Object* __this, ::id* value)
{
    __this->Handle(*value);
}

// public Object New() :66
void Object__New1_fn(Object** __retval)
{
    *__retval = Object::New1();
}

// private Object New(ObjC.ID handle) :60
void Object__New2_fn(::id* handle, Object** __retval)
{
    *__retval = Object::New2(*handle);
}

// public Object() [instance] :66
void Object::ctor_()
{
    ctor_1(::g::ObjC::ID::Null_);
}

// private Object(ObjC.ID handle) [instance] :60
void Object::ctor_1(::id handle)
{
    _handle = handle;
    [_handle retain];
}

// public ObjC.ID get_Handle() [instance] :45
::id Object::Handle()
{
    return [[_handle retain] autorelease];
}

// protected void set_Handle(ObjC.ID value) [instance] :49
void Object::Handle(::id value)
{
    if (::g::ObjC::ID::op_Inequality(_handle, value))
    {
        [value retain];
        [_handle release];
        _handle = value;
    }
}

// private static ObjC.Object Create(ObjC.ID handle) [static] :68
Object* Object::Create(::id handle)
{
    uStackFrame __("ObjC.Object", "Create(ObjC.ID)");
    return ::g::ObjC::ID::op_Equality(handle, ::g::ObjC::ID::Null_) ? uCast<Object*>(NULL, Object_typeof()) : (Object*)Object::New2(handle);
}

// private static ObjC.ID GetHandle(ObjC.Object o) [static] :89
::id Object::GetHandle(Object* o)
{
    uStackFrame __("ObjC.Object", "GetHandle(ObjC.Object)");
    return (o == NULL) ? ::g::ObjC::ID::Null_ : uPtr(o)->Handle();
}

// public Object New() [static] :66
Object* Object::New1()
{
    Object* obj2 = (Object*)uNew(Object_typeof());
    obj2->ctor_();
    return obj2;
}

// private Object New(ObjC.ID handle) [static] :60
Object* Object::New2(::id handle)
{
    Object* obj1 = (Object*)uNew(Object_typeof());
    obj1->ctor_1(handle);
    return obj1;
}
// }

}} // ::g::ObjC
