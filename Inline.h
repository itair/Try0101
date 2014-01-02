//Inline.h  //内联 全局常量 全局函数原型 模板 显式具体化

#ifndef TRY0101_TRY0101_INLINE_H
#define TRY0101_TRY0101_INLINE_H

#include <iostream>
//全局常量

//常用内联
inline void longline(void) { std::cout<< "_______________________\n\n"; }

inline void longline(const int i) { std::cout<< "\n " << i << ".__________________\n\n"; }

//全局函数原型
void showtitle(void);

void StrCount(const char *);

#endif //TRY0101_TRY0101_INLINE_H