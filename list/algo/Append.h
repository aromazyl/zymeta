/*
 * Append.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef APPEND_H
#define APPEND_H

#include "./TypeElem.h"
#include "./TypeList.h"

template <typename TL, typename T> struct Append;

template <>
struct Append<NullType, NullType> {
  using Result = typename TypeList<NullType>::Result;
};

template <typename T>
struct Append<NullType, T> {
  using Result = typename TypeList<T>::Result;
};

template <typename Head, typename Tail>
struct Append<NullType, TypeElem<Head, Tail>> {
  using Result = TypeElem<Head, Tail>;
};

template <typename Head, typename Tail, typename T>
struct Append<TypeElem<Head, Tail>, T> {
  using Result = TypeElem<Head, typename Append<Tail, T>::Result>;
};

#define __append(...) typename meta::Append<__VA_ARGS__>::Result

#endif /* !APPEND_H */
