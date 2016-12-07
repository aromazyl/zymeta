/*
 * Div.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef DIV_H
#define DIV_H

#include "../IntType.h"
META_BEGIN
template <typename V1, typename V2> struct Div;
template <int V1, int V2>
struct Div<IntType<V1>, IntType<V2>> {
  static_assert(V2 != 0, "Divisor is zero");
  using Result = IntType<V1 / V2>;
};
META_END

#define __div(...) typename meta::Div<__VA_ARGS__>::Result

#endif /* !DIV_H */
