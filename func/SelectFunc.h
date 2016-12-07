/*
 * SelectFunc.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef SELECTFUNC_H
#define SELECTFUNC_H

#include "../bool/algo/IfThenElse.h"

META_BEGIN

template <typename Cond, typename Func1, typename Func2>
struct SelectFunc {
  using Result = typename IfThenElse<Cond, Func1, Func2>::Result;
};

META_END

#endif /* !SELECTFUNC_H */
