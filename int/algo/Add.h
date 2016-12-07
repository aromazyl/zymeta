/*
 * Add.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef ADD_H
#define ADD_H

#include "../IntType.h"

META_BEGIN

template <typename V1, typename V2> struct Add;
template <int V1, int V2>
struct Add<IntType<V1>, IntType<V2>> {
  using Result = typename IntType<V1 + V2>::Result
};

META_END

#define __add(...) typename meta::Add<__VA_ARGS__>::Result
#endif /* !ADD_H */
