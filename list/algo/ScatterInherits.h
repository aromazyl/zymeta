/*
 * ScatterInherits.h
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */

#ifndef SCATTERINHERITS_H
#define SCATTERINHERITS_H

#include "../../list/TypeElem.h"
#include "../../base/NullType.h"

template <typename TL, template <typename T> class Unit> struct ScatterInherits;
template <template <typename> class Unit>
struct ScatterInherits<NullType, Unit> {};

template <typename Atom, template <typename T> class Unit>
struct ScatterInherits : public Unit<Atom> {};

template <typename Head, typename Tail, template <typename> class Unit>
struct ScatterInherits<TypeElem<Head, Tail>, Unit> : public ScatterInherits<Head, Unit>, ScatterInherits<Tail, Unit> {};

#endif /* !SCATTERINHERITS_H */
