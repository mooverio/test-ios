// This file was generated based on '/Users/rolf.valstad/Library/Application Support/Fusetools/Packages/Fuse.Triggers/0.45.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBasePlayerFeedback.h>
#include <Fuse.Animations.IUnwrappedPlayerFeedback.h>
#include <Fuse.Binding.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.WhileWindowAspect.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileWindowPortrait;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class WhileWindowPortrait :4469
// {
::g::Fuse::Triggers::WindowSizeTrigger_type* WhileWindowPortrait_typeof();
void WhileWindowPortrait__ctor_8_fn(WhileWindowPortrait* __this);
void WhileWindowPortrait__get_IsActive_fn(WhileWindowPortrait* __this, bool* __retval);
void WhileWindowPortrait__New2_fn(WhileWindowPortrait** __retval);

struct WhileWindowPortrait : ::g::Fuse::Triggers::WhileWindowAspect
{
    void ctor_8();
    static WhileWindowPortrait* New2();
};
// }

}}} // ::g::Fuse::Triggers
