/*
 * forward.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef FORWARD_H
#define FORWARD_H

#include <meta.h>
META_BEGIN
#define __func_forward(Name, ...) using Name = __VA_ARGS__
#define __func_forward1(Name, ...) template <typename T> using Name = __VA_ARGS__
#define __func_forward2(Name, ...) template <typename T1, typename T2> using Name = __VA_ARGS__
#define __func_forward3(Name, ...) template <typename T1, typename T2, typename T3> using Name = __VA_ARGS__
#define __func_forward4(Name, ...) template <typename T1, typename T2, typename T3, typename T4> using Name = __VA_ARGS__
META_END

#endif /* !FORWARD_H */
