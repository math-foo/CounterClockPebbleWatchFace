#pragma once

#include "pebble.h"

#define NUM_CLOCK_TICKS 8

static const struct GPathInfo ANALOG_BG_POINTS[] = {
  { 4, (GPoint []){ // Dot in position 1
      {110, 13},
      {114, 13},
      {114, 17},
      {110, 17}
    }
  },
  { 4, (GPoint []){ // Dot in position 2
      {132, 47},
      {144, 40},
      {144, 44},
      {135, 49}
    }
  },
  { 4, (GPoint []){ // Dot in position 4
      {135, 118},
      {144, 123},
      {144, 126},
      {132, 120}
    }
  },
  { 4, (GPoint []){ // Dot in position 5
      {108, 144},
      {114, 154},
      {112, 157},
      {106, 147}
    }
  },
  { 4, (GPoint []){ // Dot in position 11
      {32, 10},
      {30, 12},
      {36, 23},
      {38, 21}
    }
  },
  { 4, (GPoint []){ // Dot in position 10
      {12, 47},
      {-1, 40},
      {-1, 44},
      {9, 49}
    }
  },
  { 4, (GPoint []){ // Dot in position 8
      {9, 118},
      {-1, 123},
      {-1, 126},
      {12, 120}
    }
  },
  { 4, (GPoint []){ // Dot in position 7
      {36, 144},
      {30, 154},
      {32, 157},
      {38, 147}
    }
  },

};

static const GPathInfo MINUTE_HAND_POINTS = {
  5,
  (GPoint []) {
    { -4, 20 },
    { 4, 20 },
    { 4, -55 },
    { 0, -60 },
    { -4, -55 }  
  }
};

static const GPathInfo HOUR_HAND_POINTS = {
  5, (GPoint []){
    {-4, 20},
    {4, 20},
    {4, -35},
    {0, -40},
    {-4, -35}
  }
};