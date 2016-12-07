/*
 * IsSubset.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef ISSUBSET_H
#define ISSUBSET_H

#include "../../base/NullType.h"
#include "../../bool/BoolType.h"
#include "../../bool/algo/And.h"
#include "../TypeElem.h"
#include "./IsIncluded.h"

META_BEGIN

template <typename TL1, typename TL2> struct IsSubset;

template <typename TL>
struct IsSubset<NullType, TL> {
  using Result = TrueType;
};


template <typename Head, typename Tail, typename TL>
struct IsSubset<TypeElem<Head, Tail>, TL> {
  using Result = typename And<typename IsIncluded<TL, Head>::Result, typename IsSubset<Tail, TL>::Result>;
};

META_END

#define __is_subset(...) typename meta::IsSubset(__VA_ARGS__)::Result

#endif /* !ISSUBSET_H */
