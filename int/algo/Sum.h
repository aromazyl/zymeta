/*
 * Sum.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef SUM_H
#define SUM_H

#include "Add.h"

META_BEGIN
template <typename ...Numbers> struct Sum;

template <typename Number, typename ...LeftNumbers>
struct Sum<Number, LeftNumbers...> {
  using Result = typename Add<Number, typename Sum<LeftNumbers...>::Result>::Result;
};
template <>
struct Sum<> {
  using Result = IntType<0>;
}
META_END

#define __sum(...) typename meta::Sum<__VA_ARGS__>::Result
#endif /* !SUM_H */
