// This file was generated based on '/Users/rolf.valstad/Library/Application Support/Fusetools/Packages/UnoCore/0.45.1/source/uno/platform/ios/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <ObjC.Object.h>
#include <Uno.Bool.h>
#include <Uno.Platform.iOS.Application.h>
#include <Uno-iOS/AppDelegate.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Uno{
namespace Platform{
namespace iOS{

// public static extern class Application :182
// {
static void Application_build(uType* type)
{
    type->Reflection.SetFunctions(4,
        new uFunction("GetRootView", NULL, (void*)Application__GetRootView_fn, 0, true, ::g::ObjC::Object_typeof(), 0),
        new uFunction("IsLandscape", NULL, (void*)Application__IsLandscape_fn, 0, true, ::g::Uno::Bool_typeof(), 0),
        new uFunction("IsRootView", NULL, (void*)Application__IsRootView_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::ObjC::Object_typeof()),
        new uFunction("SetRootView", NULL, (void*)Application__SetRootView_fn, 0, true, uVoid_typeof(), 1, ::g::ObjC::Object_typeof()));
}

uClassType* Application_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Platform.iOS.Application", options);
    type->fp_build_ = Application_build;
    return type;
}

// public static ObjC.Object GetRootView() :221
void Application__GetRootView_fn(::g::ObjC::Object** __retval)
{
    *__retval = Application::GetRootView();
}

// public static bool IsLandscape() :239
void Application__IsLandscape_fn(bool* __retval)
{
    *__retval = Application::IsLandscape();
}

// public static bool IsRootView(ObjC.Object view) :233
void Application__IsRootView_fn(::g::ObjC::Object* view, bool* __retval)
{
    *__retval = Application::IsRootView(view);
}

// public static void SetRootView(ObjC.Object view) :227
void Application__SetRootView_fn(::g::ObjC::Object* view)
{
    Application::SetRootView(view);
}

// public static ObjC.Object GetRootView() [static] :221
::g::ObjC::Object* Application::GetRootView()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            return (UIView*)((uAppDelegate*)[UIApplication sharedApplication].delegate).view;
        } ());
        
    }
    
}

// public static bool IsLandscape() [static] :239
bool Application::IsLandscape()
{
    @autoreleasepool
    {
        return UIInterfaceOrientationIsLandscape([UIApplication sharedApplication].statusBarOrientation);
    }
    
}

// public static bool IsRootView(ObjC.Object view) [static] :233
bool Application::IsRootView(::g::ObjC::Object* view)
{
    @autoreleasepool
    {
        return [] (::id view) -> bool
        {
            return view == ((uAppDelegate*)[UIApplication sharedApplication].delegate).view;
        } (::g::ObjC::Object::GetHandle(view));
        
    }
    
}

// public static void SetRootView(ObjC.Object view) [static] :227
void Application::SetRootView(::g::ObjC::Object* view)
{
    @autoreleasepool
    {
        [] (::id view) -> void
        {
            ((uAppDelegate*)[UIApplication sharedApplication].delegate).view = (UIView*)view;
        } (::g::ObjC::Object::GetHandle(view));
        
    }
    
}
// }

}}}} // ::g::Uno::Platform::iOS
