/*
 * EmptyType.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef EMPTYTYPE_H
#define EMPTYTYPE_H
#include "../meta.h"

META_BEGIN

template <typename T> struct EmptyType {};

META_END

#define __empty() meta::EmptyType


#endif /* !EMPTYTYPE_H */
