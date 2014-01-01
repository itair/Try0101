// golf.h for pe9-1.cpp

#ifndef TRY0101_TRY0101_GOLF_H
#define TRY0101_TRY0101_GOLF_H

const int kLen =  40;

struct golf {
  char fullname[kLen];
  int handicap;
};

void SetGolf(golf & g, const char* name, int hc );

int SetGolf(golf & g) ;

void Handicap(golf & g, int hc);

void ShowGolf(const golf & g);

#endif // TRY0101_TRY0101_GOLF_H