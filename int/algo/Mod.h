/*
 * Mod.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef MOD_H
#define MOD_H

#include "../IntType.h"
#include "./Add.h"
#include "./Mul.h"
#include "./Sub.h"
META_BEGIN
template <typename T1, typename T2> struct Mod;
template <int T1, int T2>
struct <>
META_END

#endif /* !MOD_H */
