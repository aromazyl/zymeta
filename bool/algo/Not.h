/*
 * Not.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef NOT_H
#define NOT_H

#include <bool/BoolType.h>

template <typename T> struct Not;
template <bool V>
struct Node<BoolType<V>> {
  using Result = BoolType<!V>;
};

#define __not(...) typename meta::Not<__VA_ARGS__>::Result

#endif /* !NOT_H */

