/*
 * IsConvertable.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef ISCONVERTABLE_H
#define ISCONVERTABLE_H

#include "../bool/BoolType.h"
META_BEGIN

template <typename T, typename U>
struct IsConvertable {
  using Yes = char;
  using No = struct { char dummy[2]; };
  static Yes test(U);
  static No test(...);
  static T self();
  using Result = BoolType<(sizeof(test(self())) == sizeof(Yes))>;
};

META_END

#endif /* !ISCONVERTABLE_H */
