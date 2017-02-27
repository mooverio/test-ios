// This file was generated based on /Users/rolf.valstad/Desktop/test-ios/build/iOS/Preview/cache/ux11/test-ios.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.testios_FuseTriggersActionsDebugAction_Message_Property.h>
#include <Fuse.Triggers.Actions.DebugAction.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class testios_FuseTriggersActionsDebugAction_Message_Property :28
// {
static void testios_FuseTriggersActionsDebugAction_Message_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Triggers::Actions::DebugAction_typeof(), offsetof(::g::testios_FuseTriggersActionsDebugAction_Message_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* testios_FuseTriggersActionsDebugAction_Message_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(testios_FuseTriggersActionsDebugAction_Message_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("testios_FuseTriggersActionsDebugAction_Message_Property", options);
    type->fp_build_ = testios_FuseTriggersActionsDebugAction_Message_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))testios_FuseTriggersActionsDebugAction_Message_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))testios_FuseTriggersActionsDebugAction_Message_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))testios_FuseTriggersActionsDebugAction_Message_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))testios_FuseTriggersActionsDebugAction_Message_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public testios_FuseTriggersActionsDebugAction_Message_Property(Fuse.Triggers.Actions.DebugAction obj, Uno.UX.Selector name) :31
void testios_FuseTriggersActionsDebugAction_Message_Property__ctor_2_fn(testios_FuseTriggersActionsDebugAction_Message_Property* __this, ::g::Fuse::Triggers::Actions::DebugAction* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :33
void testios_FuseTriggersActionsDebugAction_Message_Property__Get_fn(testios_FuseTriggersActionsDebugAction_Message_Property* __this, uString** __retval)
{
    uStackFrame __("testios_FuseTriggersActionsDebugAction_Message_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Message(), void();
}

// public testios_FuseTriggersActionsDebugAction_Message_Property New(Fuse.Triggers.Actions.DebugAction obj, Uno.UX.Selector name) :31
void testios_FuseTriggersActionsDebugAction_Message_Property__New1_fn(::g::Fuse::Triggers::Actions::DebugAction* obj, ::g::Uno::UX::Selector* name, testios_FuseTriggersActionsDebugAction_Message_Property** __retval)
{
    *__retval = testios_FuseTriggersActionsDebugAction_Message_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :32
void testios_FuseTriggersActionsDebugAction_Message_Property__get_Object_fn(testios_FuseTriggersActionsDebugAction_Message_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :34
void testios_FuseTriggersActionsDebugAction_Message_Property__Set_fn(testios_FuseTriggersActionsDebugAction_Message_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("testios_FuseTriggersActionsDebugAction_Message_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->Message(v);
}

// public override sealed bool get_SupportsOriginSetter() :35
void testios_FuseTriggersActionsDebugAction_Message_Property__get_SupportsOriginSetter_fn(testios_FuseTriggersActionsDebugAction_Message_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public testios_FuseTriggersActionsDebugAction_Message_Property(Fuse.Triggers.Actions.DebugAction obj, Uno.UX.Selector name) [instance] :31
void testios_FuseTriggersActionsDebugAction_Message_Property::ctor_2(::g::Fuse::Triggers::Actions::DebugAction* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public testios_FuseTriggersActionsDebugAction_Message_Property New(Fuse.Triggers.Actions.DebugAction obj, Uno.UX.Selector name) [static] :31
testios_FuseTriggersActionsDebugAction_Message_Property* testios_FuseTriggersActionsDebugAction_Message_Property::New1(::g::Fuse::Triggers::Actions::DebugAction* obj, ::g::Uno::UX::Selector name)
{
    testios_FuseTriggersActionsDebugAction_Message_Property* obj1 = (testios_FuseTriggersActionsDebugAction_Message_Property*)uNew(testios_FuseTriggersActionsDebugAction_Message_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
