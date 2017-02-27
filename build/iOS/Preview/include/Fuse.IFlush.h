// This file was generated based on '/Users/rolf.valstad/Library/Application Support/Fusetools/Packages/FuseCore/0.45.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct DrawContext;}}

namespace g{
namespace Fuse{

// public abstract interface IFlush :861
// {
uInterfaceType* IFlush_typeof();

struct IFlush
{
    void(*fp_Flush)(uObject*, ::g::Fuse::DrawContext*);
    static void Flush(const uInterface& __this, ::g::Fuse::DrawContext* dc) { __this.VTable<IFlush>()->fp_Flush(__this, dc); }
};
// }

}} // ::g::Fuse
