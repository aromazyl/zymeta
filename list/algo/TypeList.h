#pragma once
#include "../../base/NullType.h"
#include "../TypeElem.h"

META_BEGIN
template <typename Head, typename ...Tail>
struct TypeList {
  using Result = TypeElem<Head, typename TypeList<Tail...>::Result>;
};

template <typename T>
struct TypeList {
  using Result = TypeElem<NullType, NullType>;
};
META_END
#define __type_list(...) meta::TypeList<__VA_ARGS__>::Result
