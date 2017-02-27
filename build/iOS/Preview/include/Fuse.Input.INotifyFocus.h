// This file was generated based on '/Users/rolf.valstad/Library/Application Support/Fusetools/Packages/FuseCore/0.45.5/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Input{

// public abstract interface INotifyFocus :228
// {
uInterfaceType* INotifyFocus_typeof();

struct INotifyFocus
{
    void(*fp_OnFocusGained)(uObject*);
    void(*fp_OnFocusLost)(uObject*);
    static void OnFocusGained(const uInterface& __this) { __this.VTable<INotifyFocus>()->fp_OnFocusGained(__this); }
    static void OnFocusLost(const uInterface& __this) { __this.VTable<INotifyFocus>()->fp_OnFocusLost(__this); }
};
// }

}}} // ::g::Fuse::Input
