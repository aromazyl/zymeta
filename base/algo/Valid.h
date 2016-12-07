/*
 * Valid.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef VALID_H
#define VALID_H

#include <meta.h>
#include <base/NullType.h>
#include <bool/BoolType.h>

META_BEGIN

typename <typename T>
struct Valid {
  using Result = TrueType;
};

typename <>
struct Valid<NullType> {
  using Result = FalseType;
};

META_END

#define __valid(type) typename meta::Valid<type>::Result

#endif /* !VALID_H */
