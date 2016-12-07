/*
 * Filter.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef FILTER_H
#define FILTER_H

#include "../TypeElem.h"
#include "../../base/NullType.h"

META_BEGIN
template <typename TL, template <typename T> class Pred> struct Filter;
template <template <typename T> class Pred>
struct Filter<NullType, T> {
  using Result = NullType;
};

template <typename H, typename T>
struct Filter<TypeElem<H, T>, H> {
  using Result = typename Filter<T, H>::Result;
};

templte <typename Head, typename Tail, typename T>
struct Filter<TypeElem<Head, Tail>, H> {
  using Result = TypeElem<Head, typename Filter<Tail, H>::Result>
};
META_END

#define __filter(...) typename Filter<__VA_ARGS__>::Result

#endif /* !FILTER_H */
