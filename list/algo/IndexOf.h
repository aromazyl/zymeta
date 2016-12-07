/*
 * IndexOf.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef INDEXOF_H
#define INDEXOF_H

#include "../TypeElem.h"
#include "../../int/IntType.h"
#include "../../base/NullType.h"
#include "../../base/algo/Valid.h"
#include "../../base/algo/Value.h"
#include "../../bool/algo/IfThenElse.h"

META_BEGIN
template <typename TL, typename TLS> struct IndexOf;

template <typename T>
struct IndexOf<NullType, T> {
  using Result = NullType;
};
template <typename Head, typename Tail>
struct IndexOf<TypeElem<Head, Tail>, Head> {
  using Result = IntType<0>;
};

template <typename Head, typename Tail, typename T>
struct IndexOf<TypeElem<Head, Tail>, T> {
private:
  using Temp = typename IndexOf<Tail, T>::Result;
public:
  using Result = typename IfThenElse<typename Valid<Temp>::Result, IntType<typename Value<Temp>::Result + 1>, NullType>::Result;
};
META_END
#define __index_of(...) typename meta::IndexOf<__VA_ARGS__>::Result

#endif /* !INDEXOF_H */
