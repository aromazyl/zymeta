/*
 * IsEqual.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef ISEQUAL_H
#define ISEQUAL_H

#include <bool/BoolType.h>
META_BEGIN
template <typename U, typename V>
struct IsEqual {
  using Result = FalseType;
};

template <typename T>
struct IsEqual<T, T> {
  using Result = TrueType;
};
META_END

#define __is_eq(...) typename IsEqual<__VA_ARGS__>::Result
#endif /* !ISEQUAL_H */
