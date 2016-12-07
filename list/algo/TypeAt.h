/*
 * TypeAt.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef TYPEAT_H
#define TYPEAT_H

#include "../TypeElem.h"
#include "../../int/IntType.h"
META_BEGIN
template <typename lst, typename Index> struct TypeAt;

template <int V>
struct TypeAt<NullType, IntType<V>> {
  using Result = NullType;
};

template <typename T, typename V>
struct TypeAt<TypeElem<T, V>, IntType<0>> {
  using Result = T;
};

template <typename H, typename T, int i>
struct TypeAt<TypeElem<H, T>, i> {
  static_assert(i > 0, "Index is not a valid range!");
  using Result = typename TypeAt<T, IntType<i - 1>>::Result;
};

using __at(...) typename meta::TypeAt<__VA_ARGS__>::Result

META_END

#endif /* !TYPEAT_H */
