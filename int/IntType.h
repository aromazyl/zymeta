/*
 * IntType.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef INTTYPE_H
#define INTTYPE_H

#include <meta.h>
META_BEGIN

template <int V>
struct IntType {
  enum { Value = V };
  using Result = IntType<V>;
};

META_END

#define __int(...) typename meta::IntType<__VA_ARGS__>::Result
#endif /* !INTTYPE_H */
