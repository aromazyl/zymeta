/*
 * All.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef ALL_H
#define ALL_H

#include "./Any.h"
#include "../../bool/algo/Not.h"
#include "../../func/NegtiveOf.h"

template <typename TL, template <typename T> class Pred>
struct All {
  using Result = typename Not<typename Any<TL, NegtiveOf<Pred>::template Apply>::Result>::Result;
};

#define __all(...) typename meta::All<__VA_ARGS__>::Result

#endif /* !ALL_H */
