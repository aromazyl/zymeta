/*
 * Mul.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef MUL_H
#define MUL_H

#include "../IntType.h"
META_BEGIN
template <typename T1, typename T2> struct Mul;
template <int V1, int V2>
struct Mul<IntType<V1>, IntType<V2>> {
  using Result = typename IntType<V1 * V2>::Result;
};
META_END

#define __mul(...) typename Mul<__VA__ARGS__>::Result;
#endif /* !MUL_H */
