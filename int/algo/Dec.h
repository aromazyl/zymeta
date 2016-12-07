/*
 * Dec.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef DEC_H
#define DEC_H

#include "../IntType.h"

META_BEGIN

template <typename T> struct Dec;
template <int V>
struct Dec<IntType<V>> {
  using Result = IntType<V - 1>::Result;
};

META_END

#define __dec(...) typename meta::Dec<__VA_ARGS__>::Result

#endif /* !DEC_H */
