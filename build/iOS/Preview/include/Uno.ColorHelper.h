// This file was generated based on '/Users/rolf.valstad/Library/Application Support/Fusetools/Packages/UnoCore/0.45.1/source/uno/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{struct ColorHelper;}}

namespace g{
namespace Uno{

// internal static class ColorHelper :1592
// {
uClassType* ColorHelper_typeof();
void ColorHelper__BaseValue_fn(uChar* c, int* __retval);
void ColorHelper__ParseBase_fn(uString* str, int* radix, int* __retval);

struct ColorHelper : uObject
{
    static int BaseValue(uChar c);
    static int ParseBase(uString* str, int radix);
};
// }

}} // ::g::Uno
