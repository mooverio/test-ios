// This file was generated based on /Users/rolf.valstad/Desktop/test-ios/build/iOS/Preview/cache/ux11/test-ios.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct DebugAction;}}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct testios_FuseTriggersActionsDebugAction_Message_Property;}

namespace g{

// internal sealed class testios_FuseTriggersActionsDebugAction_Message_Property :28
// {
::g::Uno::UX::Property1_type* testios_FuseTriggersActionsDebugAction_Message_Property_typeof();
void testios_FuseTriggersActionsDebugAction_Message_Property__ctor_2_fn(testios_FuseTriggersActionsDebugAction_Message_Property* __this, ::g::Fuse::Triggers::Actions::DebugAction* obj, ::g::Uno::UX::Selector* name);
void testios_FuseTriggersActionsDebugAction_Message_Property__Get_fn(testios_FuseTriggersActionsDebugAction_Message_Property* __this, uString** __retval);
void testios_FuseTriggersActionsDebugAction_Message_Property__New1_fn(::g::Fuse::Triggers::Actions::DebugAction* obj, ::g::Uno::UX::Selector* name, testios_FuseTriggersActionsDebugAction_Message_Property** __retval);
void testios_FuseTriggersActionsDebugAction_Message_Property__get_Object_fn(testios_FuseTriggersActionsDebugAction_Message_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void testios_FuseTriggersActionsDebugAction_Message_Property__Set_fn(testios_FuseTriggersActionsDebugAction_Message_Property* __this, uString* v, uObject* origin);
void testios_FuseTriggersActionsDebugAction_Message_Property__get_SupportsOriginSetter_fn(testios_FuseTriggersActionsDebugAction_Message_Property* __this, bool* __retval);

struct testios_FuseTriggersActionsDebugAction_Message_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::Actions::DebugAction*> _obj;

    void ctor_2(::g::Fuse::Triggers::Actions::DebugAction* obj, ::g::Uno::UX::Selector name);
    static testios_FuseTriggersActionsDebugAction_Message_Property* New1(::g::Fuse::Triggers::Actions::DebugAction* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
