/*
 * BoolType.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef BOOLTYPE_H
#define BOOLTYPE_H

#include "../meta.h"
META_BEGIN

template <bool V> struct BoolType;

template <>
struct BoolType<true> {
  enum { Value = true };
  using Result = BoolType<true>;
};

template <>
struct BoolType<false> {
  enum { Value = false };
  using Result = BoolType<false>;
};

using TrueType = BoolType<true>;
using FalseType = BoolType<false>;

META_END

#define __bool(...) typename meta::BoolType<__VA_ARGS__>::Result
#define __true() typename meta::TrueType::Result
#define __false() typename meta::FalseType::Result

#endif /* !BOOLTYPE_H */
