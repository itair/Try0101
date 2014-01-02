//GobalFuc.h //模版重载 与 显示声明  //全局函数

#ifndef TRY0101_TRY0101_GOBLALFUN_H
#define TRY0101_TRY0101_GOBLALFUN_H

#include <iostream>



//函数
void StrCount(const char * str) {
  using namespace std;
  static int total = 0;
  int count = 0;
  cout << "\"" << str << "\" contains ";
  while (*str++)
    count++;
  total += count;
  cout << count << " characters\n";
  cout << total << " characters total\n";
}


#endif //TRY0101_TRY0101_GOBLALFUN_H