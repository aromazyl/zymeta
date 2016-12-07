/*
 * Sub.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef SUB_H
#define SUB_H

#include "../IntType.h"
META_BEGIN
template <typename T1, typename T2> struct Sub;
template <int V1, int V2>
struct Sub<IntType<V1>, IntType<V2>> {
  using Result = typename IntType<V1 / V2>::Result;
};
META_END

#define __sub(...) typename Sub<__VA__ARGS__>::Result

#endif /* !SUB_H */
