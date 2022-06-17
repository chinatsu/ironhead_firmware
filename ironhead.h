
#pragma once

#include "quantum.h"



#define LAYOUT( \
  sw01, sw04, sw07, sw11, sw15, sw19,             sw42, sw38, sw34, sw30, sw27, sw24, \
  sw02, sw05, sw08, sw12, sw16, sw20,             sw43, sw39, sw35, sw31, sw28, sw25, \
  sw03, sw06, sw09, sw13, sw17, sw21,             sw44, sw40, sw36, sw32, sw29, sw26, \
              sw10, sw14, sw18, sw22, sw23, sw46, sw45, sw41, sw37, sw33 \
  ) \
  { \
    { sw01,  sw04, sw08, sw12, sw16, sw20 }, \
    { sw02,  sw05, sw09, sw13, sw17, sw21 }, \
    { sw03,  sw06, sw10, sw14, sw18, sw22 }, \
    { KC_NO, sw07, sw11, sw15, sw19, sw23 }, \
    { sw24,  sw27, sw31, sw35, sw39, sw43 }, \
    { sw25,  sw28, sw32, sw36, sw40, sw44 }, \
    { sw26,  sw29, sw33, sw37, sw41, sw45 }, \
    { KC_NO, sw30, sw34, sw38, sw42, sw46 }, \
 } 
