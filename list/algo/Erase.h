/*
 * Erase.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef ERASE_H
#define ERASE_H

#include "../../base/NullType.h"
#include "./TypeElem.h"

META_BEGIN
template <typename TL, typename T> struct Erase;

template <typename T>
struct Erase<NullType, T> {
  using Result = NullType;
};

template <typename Head, typename Tail>
struct Erase<TypeElem<Head, Tail>, Head> {
  using Result = Tail;
};

template <typename Head, typename Tail, typename T>
struct Erase<TypeElem<Head, Tail>, T> {
  using Result = TypeElem<Head, typename Erase<Tail, T>::Result>;
};

META_END
#define __erase(...) typename Erase<__VA_ARGS__>::Result

#endif /* !ERASE_H */
