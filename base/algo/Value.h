/*
 * Value.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef VALUE_H
#define VALUE_H

#include <meta.h>
#include <base/NullType.h>
#include <base/EmptyType.h>

META_BEGIN

template <typename T>
struct Value {
  using Result = T::Value;
};

template <>
struct Value<NullType> {
  enum { Result = 0xFFFFFFF };
};

template <>
struct Value<EmptyType> {
  enum { Result = 0 };
};


META_END

#define __value(type) meta::Value<type>::Result

#endif /* !VALUE_H */
