// This file was generated based on '/Users/rolf.valstad/Library/Application Support/Fusetools/Packages/UnoCore/0.45.1/source/uno/io/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.h>
namespace g{namespace Uno{namespace IO{struct Path;}}}

namespace g{
namespace Uno{
namespace IO{

// public static class Path :2629
// {
uClassType* Path_typeof();
void Path__Combine_fn(uString* a, uString* b, uString** __retval);
void Path__get_DirectorySeparatorChar_fn(uChar* __retval);
void Path__GetDirectoryName_fn(uString* filename, uString** __retval);
void Path__GetFullPath_fn(uString* filename, uString** __retval);
void Path__IsPathRooted_fn(uString* filename, bool* __retval);

struct Path : uObject
{
    static uString* Combine(uString* a, uString* b);
    static uString* GetDirectoryName(uString* filename);
    static uString* GetFullPath(uString* filename);
    static bool IsPathRooted(uString* filename);
    static uChar DirectorySeparatorChar();
};
// }

}}} // ::g::Uno::IO
