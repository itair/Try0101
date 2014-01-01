//Inline.h  // 全局常量内联库 //资源常量

#ifndef TRY0101_TRY0101_INLINE_H
#define TRY0101_TRY0101_INLINE_H

//常用内联
inline void showtitle(void) { 
  using namespace std;
  cout<< "----------------------\n" ;
  cout<< "-  C++ Primer Plus  -\n" ;
  cout<< "-     by itAir      -\n";
  cout<< "        &           -\n" ;    
  cout<< "-  Hello World!     -\n";
}
inline void longline(void) { 
  std::cout<< "_______________________\n\n";
}
inline void longline(const int i) { 
  std::cout<< "\n " << i << ".__________________\n\n"; 
}


#endif //TRY0101_TRY0101_INLINE_H