/*
 * meta.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef META_H
#define META_H

#define META_BEGIN namespace meta {
#define META_END }
#define DECLARE(type) namespace meta { struct type; }
#define USE_META using namespace meta;

#endif /* !META_H */
