/*
 * LinearInherits.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef LINEARINHERITS_H
#define LINEARINHERITS_H

#include "../../base/EmptyType.h"
#include "../../base/NullType.h"
#include "../../list/TypeElem.h"

META_BEGIN

template <typename TL,
         template <typename Atom, typename Base> class Unit,
         typename Root = EmptyType
         >
struct LinearInherits;

template <typename T,
         template <typename Atom, typename Base> class Unit,
         typename Root
         >
struct LinearInherits<TypeElem<T, NullType>, Unit, Root>
: Unit<T, Root> {};

template <typename Head, typename Tail,
         template <typename Atom, typename Base> class Unit,
         typename Root>
struct LinearInherits<TypeElem<Head, Tail>, Unit, Root>
: Unit<Head, LinearInherits<Tail, Unit, Root>> {};

META_END

#define __linear_inherits(...) meta::LinearInherits<__VA_ARGS__>
#endif /* !LINEARINHERITS_H */
