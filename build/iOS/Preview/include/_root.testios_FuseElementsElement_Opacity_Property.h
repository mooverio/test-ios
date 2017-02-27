// This file was generated based on /Users/rolf.valstad/Desktop/test-ios/build/iOS/Preview/cache/ux11/test-ios.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct testios_FuseElementsElement_Opacity_Property;}

namespace g{

// internal sealed class testios_FuseElementsElement_Opacity_Property :46
// {
::g::Uno::UX::Property1_type* testios_FuseElementsElement_Opacity_Property_typeof();
void testios_FuseElementsElement_Opacity_Property__ctor_2_fn(testios_FuseElementsElement_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name);
void testios_FuseElementsElement_Opacity_Property__Get_fn(testios_FuseElementsElement_Opacity_Property* __this, float* __retval);
void testios_FuseElementsElement_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, testios_FuseElementsElement_Opacity_Property** __retval);
void testios_FuseElementsElement_Opacity_Property__get_Object_fn(testios_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void testios_FuseElementsElement_Opacity_Property__Set_fn(testios_FuseElementsElement_Opacity_Property* __this, float* v, uObject* origin);
void testios_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(testios_FuseElementsElement_Opacity_Property* __this, bool* __retval);

struct testios_FuseElementsElement_Opacity_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Elements::Element*> _obj;

    void ctor_2(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
    static testios_FuseElementsElement_Opacity_Property* New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
