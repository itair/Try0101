//Inline.h

#ifndef TRY0101_TRY0101_INLINE_H
#define TRY0101_TRY0101_INLINE_H

#include <iostream>
//全局常量


//常用内联
inline void longline(void) { std::cout<< "_______________________\n\n"; }

inline void longline(const int i) { std::cout<< "\n " << i << ".__________________\n\n"; }



struct chaff {
  char dross[20];
  int slag;
};

//全局函数原型
void ShowTitle();

void StrCount(const char *);

void ShowChaff(chaff*, const int);

#endif //TRY0101_TRY0101_INLINE_H