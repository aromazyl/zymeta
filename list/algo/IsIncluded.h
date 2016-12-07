/*
 * IsIncluded.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef ISINCLUDED_H
#define ISINCLUDED_H

#include "./IndexOf.h"

META_BEGIN

template <typename TL, typename T>
struct IsIncluded {
  using Result = typename Valid<typename IndexOf<TL, T>::Result>::Result;
};

META_END

#define __is_included(...) typename IsIncluded<__VA_ARGS__>::Result

#endif /* !ISINCLUDED_H */
