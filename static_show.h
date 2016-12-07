/*
 * static_show.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef STATIC_SHOW_H
#define STATIC_SHOW_H

template <int A, int B>
struct Plus {
  enum { Value = A + B };
};
template <int Value>
struct Print {
  operator char() {
    return Value + 0xff;
  }
};

#define __print(token, ...) char print_value_##token = Print<__VA_ARGS__>()

#endif /* !STATIC_SHOW_H */
