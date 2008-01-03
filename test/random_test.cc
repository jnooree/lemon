/* -*- C++ -*-
 *
 * This file is a part of LEMON, a generic C++ optimization library
 *
 * Copyright (C) 2003-2007
 * Egervary Jeno Kombinatorikus Optimalizalasi Kutatocsoport
 * (Egervary Research Group on Combinatorial Optimization, EGRES).
 *
 * Permission to use, modify and distribute this software is granted
 * provided that this copyright notice appears in all copies. For
 * precise terms see the accompanying LICENSE file.
 *
 * This software is provided "AS IS" with no warranty of any kind,
 * express or implied, and with no claim as to its suitability for any
 * purpose.
 *
 */

#include <lemon/random.h>
#include "test_tools.h"

///\file \brief Test cases for random.h
///
///\todo To be extended
///

int main()
{
  double a=lemon::rnd();
  check(a<1.0&&a>0.0,"This should be in [0,1)");
  a=lemon::rnd.gauss();
  a=lemon::rnd.gamma(3.45,0);
  a=lemon::rnd.gamma(4);
  //Does gamma work with integer k?
  a=lemon::rnd.gamma(4.0,0);
}
