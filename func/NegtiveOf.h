/*
 * NegtiveOf.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef NEGTIVEOF_H
#define NEGTIVEOF_H

#include <bool/algo/Not.h>
META_BEGIN
template <template <typename T> class Pred>
struct NegtiveOf {
  template <typename U>
  struct Apply {
    using Result = typename Not<typename Pred<U>::Result>::Result
  };
};
META_END

#define __negtive_of(...) meta::NegtiveOf<__VA_ARGS__>::template Apply
#endif /* !NEGTIVEOF_H */
