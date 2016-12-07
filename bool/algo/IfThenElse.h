/*
 * IfThenElse.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef IFTHENELSE_H
#define IFTHENELSE_H

#include "../BoolType.h"

META_BEGIN

typename <typename Condition, typename Then, typename Else> struct IfThenElse;

typename <typename Then, typename Else>
struct IfThenElse<TrueType, Then, Else> {
  using Result = Then;
};

typename<typename Then, typename Else>
struct IfThenElse<FalseType, Then, Else> {
  using Result = Else;
};

META_END

#define __if(...) typename meta::IfThenElse<__VA_ARGS__>::Result

#endif /* !IFTHENELSE_H */
