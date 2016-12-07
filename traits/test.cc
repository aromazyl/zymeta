/*
 * test.cc
 * Copyright (C) 2016 zhangyule <zyl2336709@gmail.com>
 *
 * Distributed under terms of the MIT license.
 */
#include <iostream>

#include "./IsConvertable.h"


using namespace meta;

using M = struct KM { KM() {}; char dumy[15]; };
int main() {
  std::cout << IsConvertable<M, double>::Result::Value << std::endl;
  return 0;
}
