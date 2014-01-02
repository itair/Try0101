// GobalFuc.cppp  // 全局方法实现 
#include "Inline.h"
#include <iostream>

//自带
void showtitle(void) { 
  using namespace std;
  cout<< "----------------------\n" ;
  cout<< "-  C++ Primer Plus  -\n" ;
  cout<< "-     by itAir      -\n"; 
  cout<< "        &           -\n" ;    
  cout<< "-  Hello World!     -\n";
}

//全局方法实现
void StrCount(const char * str) {
  using namespace std;
  static int total = 0;
  int count = 0;
  cout << "\"" << str << "\" contains. ";
  while (*str++)
    count++;
  total += count;
  cout << count << " characters\n";
  cout << total << " characters total\n";
}
