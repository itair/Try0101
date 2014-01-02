/*-----------------------------------------
//   C++ Primer Plus 课后习题 p338 9.6
//   by itAir
//   Try to use Google C++ programing style   
----------------------------------------- */    
#include "Inline.h"     //内联 全局常量 全局函数原型 模板 显式具体化
#include "Try.h"        //主类结构 类方法声明 
// GobalFuc.cpp         //全局方法实现 
// Try.cppp             //主类结构方法实现
#include "golf.h"         // 外挂库
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
    if(SetGolf(test1[i]) == 0) break;
    Handicap(test1[i], (test1[i].handicap)+i+1 );
    ShowGolf(test1[i]);
  }
  SetGolf(test1[0], "Itair Catharp", 99);
  ShowGolf(test1[0]);
  // 源文件与头文件; 根据功能性进行分离; 根据文档进行功能设计;
  longline(2);
  //2
  string input;
  cout << "Enter a line:\n";
  getline(cin, input, '\n');
  while (input != "") {
    StrCount(input.c_str());
    cout << "Enter next line (empty line to quit):\n";
    getline(cin, input);
  }
  //string 好处都有啥, 谁说对了金坷垃就给他;
  longline(3);
  //3
  chaff chaff[2] = new (chaff)

  longline();
  system("pause");
}