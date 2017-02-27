// This file was generated based on /Users/rolf.valstad/Desktop/test-ios/build/iOS/Preview/cache/ux11/test-ios.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct WebView;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct testios_FuseControlsWebView_Url_Property;}

namespace g{

// internal sealed class testios_FuseControlsWebView_Url_Property :10
// {
::g::Uno::UX::Property1_type* testios_FuseControlsWebView_Url_Property_typeof();
void testios_FuseControlsWebView_Url_Property__ctor_2_fn(testios_FuseControlsWebView_Url_Property* __this, ::g::Fuse::Controls::WebView* obj, ::g::Uno::UX::Selector* name);
void testios_FuseControlsWebView_Url_Property__Get_fn(testios_FuseControlsWebView_Url_Property* __this, uString** __retval);
void testios_FuseControlsWebView_Url_Property__New1_fn(::g::Fuse::Controls::WebView* obj, ::g::Uno::UX::Selector* name, testios_FuseControlsWebView_Url_Property** __retval);
void testios_FuseControlsWebView_Url_Property__get_Object_fn(testios_FuseControlsWebView_Url_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void testios_FuseControlsWebView_Url_Property__Set_fn(testios_FuseControlsWebView_Url_Property* __this, uString* v, uObject* origin);
void testios_FuseControlsWebView_Url_Property__get_SupportsOriginSetter_fn(testios_FuseControlsWebView_Url_Property* __this, bool* __retval);

struct testios_FuseControlsWebView_Url_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::WebView*> _obj;

    void ctor_2(::g::Fuse::Controls::WebView* obj, ::g::Uno::UX::Selector name);
    static testios_FuseControlsWebView_Url_Property* New1(::g::Fuse::Controls::WebView* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
