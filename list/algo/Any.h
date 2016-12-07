/*
 * Any.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef ANY_H
#define ANY_H

#include "../TypeElem.h"
#include "../../bool/BoolType.h"
#include "../../bool/algo/IfThenElse.h"

META_BEGIN
template <typename TL, template <typename T> class Pred> struct Any;

template <template <typename T> class Pred>
struct Any<NullType, Pred> {
  using Result = FalseType;
};

template <typename Head, typename Tail, template <typename T> class Pred>
struct Any<TypeElem<Head, Tail>, Pred> {
  using Result = typename IfThenElse<typename Pred<Head>::Result, TrueType, typename Any<Tail, Pred>::Result>::Result;
};

META_END

#define __any(...) typename Any<__VA_ARGS__>::Result
#endif /* !ANY_H */
