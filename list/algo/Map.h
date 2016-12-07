/*
 * Map.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef MAP_H
#define MAP_H

#include "../TypeElem.h"
#include "../../base/NullType.h"

META_BEGIN
template <typename HL, template <typename T> class Func> struct Map;

template <template <typename T> class Func>
struct Map<NullType, Func> {
  using Result = NullType;
};

template <typename Head, typename Tail, template <typename T> class Func>
struct Map<TypeElem<Head, Tail>, Func> {
  using Result = TypeElem<typename Func<Head>::Result, typename Map<Tail, Func>::Result>;
};

META_END
#define __map(...) typename meta::Map<__VA_ARGS__>::Result

#endif /* !MAP_H */
