/*
 * Inc.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef INC_H
#define INC_H

#include "../IntType.h"

META_BEGIN
template <typename T> struct Inc;
template <int V>
struct Inc<IntType<V>> {
  using Result = typename IntType<V - 1>::Result;
};
META_END
#define __inc(...) typename meta::Inc<__VA_ARGS__>::Result;
#endif /* !INC_H */
