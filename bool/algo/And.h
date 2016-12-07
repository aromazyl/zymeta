/*
 * And.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef AND_H
#define AND_H

#include <meta.h>
#include <bool/BoolType.h>

META_BEGIN

/*
template <template <typename T1> BoolType<T1>,
          template <typename T2> BoolType<T2>>
struct AndType {
  using Result = typename BoolType<T1 && T2>::Result
};
*/
template <typename T1, typename T2> struct And;

template <bool V1, bool V2>
struct And<BoolType<V1>, BoolType<V2>> {
  using Result = BoolType<V1 && V2>;
};

META_END

#define __and(...) typename meta::And<__VA_ARGS__>::Result

#endif /* !AND_H */
