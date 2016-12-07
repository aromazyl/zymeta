#pragma once

#include "../TypeElem.h"
#include "../../base/NullType.h"
#include "../../int/IntType.h"
#include "../../int/algo/Add.h"

META_BEGIN
template <typename TL> struct Length;

template <typename Head, typename Tail>
struct Length<TypeElem<Head, Tail>> {
  using Result = typename Add<IntType<1>, typename Length<Tail>::Result>::Result;
};
template <>
struct Length<NullType> {
  using Result = IntType<0>;
};
META_END

#define __length(...) typename Length<__VA_ARGS__>::Result
