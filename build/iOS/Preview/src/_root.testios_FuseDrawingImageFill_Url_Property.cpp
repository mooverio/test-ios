// This file was generated based on /Users/rolf.valstad/Desktop/test-ios/build/iOS/Preview/cache/ux11/test-ios.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.testios_FuseDrawingImageFill_Url_Property.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>

namespace g{

// internal sealed class testios_FuseDrawingImageFill_Url_Property :19
// {
static void testios_FuseDrawingImageFill_Url_Property_build(uType* type)
{
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::g::Fuse::Drawing::ImageFill_typeof(), offsetof(::g::testios_FuseDrawingImageFill_Url_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* testios_FuseDrawingImageFill_Url_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(testios_FuseDrawingImageFill_Url_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("testios_FuseDrawingImageFill_Url_Property", options);
    type->fp_build_ = testios_FuseDrawingImageFill_Url_Property_build;
    type->fp_Get = (void(*)(::g::Uno::UX::Property1*, uTRef))testios_FuseDrawingImageFill_Url_Property__Get_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))testios_FuseDrawingImageFill_Url_Property__get_Object_fn;
    type->fp_Set = (void(*)(::g::Uno::UX::Property1*, void*, uObject*))testios_FuseDrawingImageFill_Url_Property__Set_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::Property*, bool*))testios_FuseDrawingImageFill_Url_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public testios_FuseDrawingImageFill_Url_Property(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) :22
void testios_FuseDrawingImageFill_Url_Property__ctor_2_fn(testios_FuseDrawingImageFill_Url_Property* __this, ::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_2(obj, *name);
}

// public override sealed string Get() :24
void testios_FuseDrawingImageFill_Url_Property__Get_fn(testios_FuseDrawingImageFill_Url_Property* __this, uString** __retval)
{
    uStackFrame __("testios_FuseDrawingImageFill_Url_Property", "Get()");
    return *__retval = uPtr(__this->_obj)->Url(), void();
}

// public testios_FuseDrawingImageFill_Url_Property New(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) :22
void testios_FuseDrawingImageFill_Url_Property__New1_fn(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name, testios_FuseDrawingImageFill_Url_Property** __retval)
{
    *__retval = testios_FuseDrawingImageFill_Url_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :23
void testios_FuseDrawingImageFill_Url_Property__get_Object_fn(testios_FuseDrawingImageFill_Url_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(string v, Uno.UX.IPropertyListener origin) :25
void testios_FuseDrawingImageFill_Url_Property__Set_fn(testios_FuseDrawingImageFill_Url_Property* __this, uString* v, uObject* origin)
{
    uStackFrame __("testios_FuseDrawingImageFill_Url_Property", "Set(string,Uno.UX.IPropertyListener)");
    uPtr(__this->_obj)->Url(v);
}

// public override sealed bool get_SupportsOriginSetter() :26
void testios_FuseDrawingImageFill_Url_Property__get_SupportsOriginSetter_fn(testios_FuseDrawingImageFill_Url_Property* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public testios_FuseDrawingImageFill_Url_Property(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) [instance] :22
void testios_FuseDrawingImageFill_Url_Property::ctor_2(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name)
{
    ctor_1(name);
    _obj = obj;
}

// public testios_FuseDrawingImageFill_Url_Property New(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) [static] :22
testios_FuseDrawingImageFill_Url_Property* testios_FuseDrawingImageFill_Url_Property::New1(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name)
{
    testios_FuseDrawingImageFill_Url_Property* obj1 = (testios_FuseDrawingImageFill_Url_Property*)uNew(testios_FuseDrawingImageFill_Url_Property_typeof());
    obj1->ctor_2(obj, name);
    return obj1;
}
// }

} // ::g
