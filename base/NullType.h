/*
 * NullType.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef NULLTYPE_H
#define NULLTYPE_H

#include "../meta.h"

META_BEGIN

struct NullType

META_END

#define __null() meta::NullType

#endif /* !NULLTYPE_H */
