/*
 * TransForm.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef TRANSFORM_H
#define TRANSFORM_H

#include "../TypeElem.h"
#include "../../base/NullType.h"

META_BEGIN
template <typename TL1, typename TL2, template <typename A, typename B> class Func> struct TransForm;

template <typename T, template <typename A, typename B> class Func> struct TransForm<NullType, T, Func> {
  using Result = T;
};
template <typename T, template <typename A, typename B> class Func> struct TransForm<T, NullType, Func> {
  using Result = T;
};

template <typename Head1, typename Tail1,
         typename Head2, typename Tail2,
         template <typename A, typename B> class Func>
struct TransForm<TypeElem<Head1, Tail1>, TypeElem<Head2, Tail2>, Func> {
  using Result = TypeElem<typename Func<Head1, Head2>::Result, typename TransForm<Tail1, Tail2>::Result>;
};
META_END

#endif /* !TRANSFORM_H */
