// This file was generated based on '/Users/rolf.valstad/Library/Application Support/Fusetools/Packages/FuseCore/0.45.5/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FastProperty1Link;}}

namespace g{
namespace Fuse{

// internal class FastProperty1Link :5735
// {
uType* FastProperty1Link_typeof();
void FastProperty1Link__ctor__fn(FastProperty1Link* __this, int* p);
void FastProperty1Link__New1_fn(int* p, FastProperty1Link** __retval);

struct FastProperty1Link : uObject
{
    uStrong<FastProperty1Link*> Next;
    int Property;

    void ctor_(int p);
    static FastProperty1Link* New1(int p);
};
// }

}} // ::g::Fuse
