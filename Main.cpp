/*-----------------------------------------
//   C++ Primer Plus 课后习题 p338 9.6
//   by itAir
//   Try to use Google C++ programing style   
----------------------------------------- */    
#include "Try.h"
#include "GobalFuc.h"
#include "Inline.h"
#include "golf.h"
#include <iostream>
#include <string>

using namespace std;

void main()
{
  showtitle();
  longline();

  longline(1);
  //1
  golf test1[3];
  for (int i = 0; i < 3; i++)  {
    if(!SetGolf(test1[i])) break;;
    Handicap(test1[i], (test1[i].handicap+i));
    ShowGolf(test1[i]);
  }
  SetGolf(test1[0], "Itari Catharp", 99);
  ShowGolf(test1[0]);
  //
  
  
  longline();
  system("pause");
}