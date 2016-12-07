/*
 * TypeElem.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef TYPEELEM_H
#define TYPEELEM_H

#include "../meta.h"

META_BEGIN
template <typename H, typename T>
struct TypeElem {
  using Head = H;
  using Tail = T;
};
META_END

#define __type_elem(...) meta::TypeElem<__VA_ARGS__>
#endif /* !TYPEELEM_H */
