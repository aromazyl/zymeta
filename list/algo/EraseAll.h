/*
 * EraseAll.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef ERASEALL_H
#define ERASEALL_H

#include "../../base/NullType.h"
#include "./TypeElem.h"

META_BEGIN
template <typename TL, typename T> struct EraseAll;

template <typename T>
struct EraseAll<NullType, T> {
  using Result = NullType;
};

template <typename Head, typename Tail>
struct EraseAll<TypeElem<Head, Tail>, Head> {
  using Result = typename EraseAll<Tail, Head>::Result;
};

template <typename Head, typename Tail, typename T>
struct EraseAll<TypeElem<Head, Tail>, T> {
  using Result = TypeElem<Head, typename EraseAll<Tail, T>::Result>;
};

META_END
#define __erase_all(...) typename EraseAll<__VA_ARGS__>::Result;

#endif /* !ERASEALL_H */
