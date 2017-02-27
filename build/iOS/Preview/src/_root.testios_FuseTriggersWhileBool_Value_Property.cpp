// This file was generated based on /Users/rolf.valstad/Desktop/test-ios/build/iOS/Preview/cache/ux11/test-ios.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.testios_FuseTriggersWhileBool_Value_Property.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class testios_FuseTriggersWhileBool_Value_Property :1
// {
static void testios_FuseTriggersWhileBool_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Triggers::WhileBool_typeof(), offsetof(::g::testios_FuseTriggersWhileBool_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* testios_FuseTriggersWhileBool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(testios_FuseTriggersWhileBool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("testios_FuseTriggersWhileBool_Value_Property", options);
    type->fp_build_ = testios_FuseTriggersWhileBool_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))testios_FuseTriggersWhileBool_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))testios_FuseTriggersWhileBool_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))testios_FuseTriggersWhileBool_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))testios_FuseTriggersWhileBool_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public testios_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :4
void testios_FuseTriggersWhileBool_Value_Property__ctor_2_fn(testios_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed bool Get() :6
void testios_FuseTriggersWhileBool_Value_Property__Get_fn(testios_FuseTriggersWhileBool_Value_Property* __this, bool* __retval)
{
    uStackFrame __("testios_FuseTriggersWhileBool_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value1(), void();
}

// public testios_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :4
void testios_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, testios_FuseTriggersWhileBool_Value_Property** __retval)
{
    *__retval = testios_FuseTriggersWhileBool_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :5
void testios_FuseTriggersWhileBool_Value_Property__get_Object_fn(testios_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(bool v, Uno.UX.IPropertyListener origin) :7
void testios_FuseTriggersWhileBool_Value_Property__Set_fn(testios_FuseTriggersWhileBool_Value_Property* __this, bool* v, uObject* origin)
{
    uStackFrame __("testios_FuseTriggersWhileBool_Value_Property", "Set(bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(__this->_obj)->Value1(v_);
}

// public override sealed bool get_SupportsOriginSetter() :8
void testios_FuseTriggersWhileBool_Value_Property__get_SupportsOriginSetter_fn(testios_FuseTriggersWhileBool_Value_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public testios_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [instance] :4
void testios_FuseTriggersWhileBool_Value_Property::ctor_2(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public testios_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [static] :4
testios_FuseTriggersWhileBool_Value_Property* testios_FuseTriggersWhileBool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    testios_FuseTriggersWhileBool_Value_Property* obj1 = (testios_FuseTriggersWhileBool_Value_Property*)uNew(testios_FuseTriggersWhileBool_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
