/*
 * Fold.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef FOLD_H
#define FOLD_H

#include "../TypeElem.h"
#include "../../base/NullType.h"

META_BEGIN
template <typename TL, typename T, template <typename Acc, typename U> class Func> struct Fold;

template <template <typename Acc, typename U> class Func>
struct Fold<NullType, T, Func> {
  using Result = T;
};

template <typename Head, typename Tail, typename T, template <typename Acc, typename U> class Func> struct Fold;
struct Fold<TypeElem<Head, Tail>, T, Func> {
  using Result = typename Func<typename Fold<Tail, T, Func>::Result, Head>::Result;
};
META_END

#define __fold(...) typename meta::Fold<__VA_ARGS__>::Result

#endif /* !FOLD_H */
