// This file was generated based on /Users/rolf.valstad/Desktop/test-ios/build/iOS/Preview/cache/ux11/test-ios.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.testios_FuseControlsTextControl_Value_Property.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class testios_FuseControlsTextControl_Value_Property :37
// {
static void testios_FuseControlsTextControl_Value_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Controls::TextControl_typeof(), offsetof(::g::testios_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* testios_FuseControlsTextControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(testios_FuseControlsTextControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("testios_FuseControlsTextControl_Value_Property", options);
    type->fp_build_ = testios_FuseControlsTextControl_Value_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))testios_FuseControlsTextControl_Value_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))testios_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))testios_FuseControlsTextControl_Value_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))testios_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public testios_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :40
void testios_FuseControlsTextControl_Value_Property__ctor_2_fn(testios_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :42
void testios_FuseControlsTextControl_Value_Property__Get_fn(testios_FuseControlsTextControl_Value_Property* __this, uString** __retval)
{
    uStackFrame __("testios_FuseControlsTextControl_Value_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Value(), void();
}

// public testios_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :40
void testios_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, testios_FuseControlsTextControl_Value_Property** __retval)
{
    *__retval = testios_FuseControlsTextControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :41
void testios_FuseControlsTextControl_Value_Property__get_Object_fn(testios_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :43
void testios_FuseControlsTextControl_Value_Property__Set_fn(testios_FuseControlsTextControl_Value_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("testios_FuseControlsTextControl_Value_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :44
void testios_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(testios_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public testios_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :40
void testios_FuseControlsTextControl_Value_Property::ctor_2(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public testios_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :40
testios_FuseControlsTextControl_Value_Property* testios_FuseControlsTextControl_Value_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    testios_FuseControlsTextControl_Value_Property* obj1 = (testios_FuseControlsTextControl_Value_Property*)uNew(testios_FuseControlsTextControl_Value_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
