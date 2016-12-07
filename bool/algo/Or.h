/*
 * Or.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef OR_H
#define OR_H

#include <bool/BoolType.h>
META_BEGIN
template <typename T1, typename T2> struct Or;
template <bool V1, bool V2>
struct Or<BoolType<V1>, BoolType<V2>> {
  using Result = BoolType<V1 || V2>;
};

META_END

#define __or(...) typename Or<__VA_ARGS__>::Result

#endif /* !OR_H */
