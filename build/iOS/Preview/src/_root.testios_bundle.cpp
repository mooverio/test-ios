// This file was generated based on /Users/rolf.valstad/Desktop/test-ios/test-ios.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.testios_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[5];

namespace g{

// public static generated class testios_bundle :0
// {
// static testios_bundle() :0
static void testios_bundle__cctor__fn(uType* __type)
{
    testios_bundle::back210c96fe_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"test-ios"*/]))->GetFile(::STRINGS[1/*"back-bec6be...*/]);
    testios_bundle::FBfLogo__white_5122c25ed0d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"test-ios"*/]))->GetFile(::STRINGS[2/*"fb-f-logo__...*/]);
    testios_bundle::LoginPage2c8bc6f2_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"test-ios"*/]))->GetFile(::STRINGS[3/*"loginpage-3...*/]);
    testios_bundle::MainView318943ea_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"test-ios"*/]))->GetFile(::STRINGS[4/*"mainview-cb...*/]);
}

static void testios_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("test-ios");
    ::STRINGS[1] = uString::Const("back-bec6be01.jpeg");
    ::STRINGS[2] = uString::Const("fb-f-logo__white_51-0803b70e.png");
    ::STRINGS[3] = uString::Const("loginpage-3395fb5b.js");
    ::STRINGS[4] = uString::Const("mainview-cb8c4a65.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::testios_bundle::back210c96fe_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::testios_bundle::FBfLogo__white_5122c25ed0d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::testios_bundle::LoginPage2c8bc6f2_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&::g::testios_bundle::MainView318943ea_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("back210c96fe", 0),
        new uField("FBfLogo__white_5122c25ed0d", 1),
        new uField("LoginPage2c8bc6f2", 2),
        new uField("MainView318943ea", 3));
}

uClassType* testios_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("testios_bundle", options);
    type->fp_build_ = testios_bundle_build;
    type->fp_cctor_ = testios_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> testios_bundle::back210c96fe_;
uSStrong< ::g::Uno::IO::BundleFile*> testios_bundle::FBfLogo__white_5122c25ed0d_;
uSStrong< ::g::Uno::IO::BundleFile*> testios_bundle::LoginPage2c8bc6f2_;
uSStrong< ::g::Uno::IO::BundleFile*> testios_bundle::MainView318943ea_;
// }

} // ::g
