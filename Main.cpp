/*-----------------------------------------
//   C++ Primer Plus �κ�ϰ�� p338 9.6
//   by itAir
//   Try to use Google C++ programing style   
----------------------------------------- */    
#include <iostream>
#include <string>
#include <new>

#include "main.h"     //���� ȫ�ֳ��� ȫ�ֺ���ԭ�� ģ�� ��ʽ���廯
//#include "Try.h"        //����ṹ �෽������ 
//#include "GobalFuc.cpp"         //ȫ�ַ���ʵ�� 
//#include "Try.cpp"             //����ṹ����ʵ��
#include "golf.h"         // ��ҿ�
#include "sales.h"
//#include "sale.cpp"

char buffer1[40];

void ShowTitle() { 
  using namespace std;
   cout << "----------------------\n" 
    << "-  C++ Primer Plus  -\n" 
    << "-     by itAir      -\n" 
    << "        &           -\n"     
    << "-  Hello World!     -\n";
  return;
}

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
  return ;
}

void ShowChaff(chaff* pch, const int num) {
   using namespace std;
  for (int i = 0; i < num; i++) {
    cout << "Shaff:   \t" << "Adress\n";
    cout << pch[i].dross << "\t" << &pch[i].dross << endl
         << pch[i].slag << "\t\t" << &pch[i].slag << endl;
  }
  return;
}

void main()
{
  
  ShowTitle();
  longline();

  longline(1);  //1 ;
//   golf test1[3];
//     for (int i = 0; i < 3; i++)  {
//       if(SetGolf(test1[i]) == 0) break;
//       Handicap(test1[i], (test1[i].handicap)+i+1 );
//       ShowGolf(test1[i]);
//     }
//     SetGolf(test1[0], "Itair Catharp", 99);
//     ShowGolf(test1[0]);
    // Դ�ļ���ͷ�ļ�; ���ݹ����Խ��з���; �����ĵ����й������;
  
    longline(2);  //2
//     string input;
//     cout << "Enter a line:\n";
//     cin.get();
//     getline(cin, input, '\n');
//     while (input != "") {
//       StrCount(input.c_str());
//       cout << "Enter next line (empty line to quit):\n";
//       getline(cin, input);
//     }
  //string �ô�����ɶ, ˭˵���˽�����͸��� ;
     
  longline(3); //3
  //chaff* p1 = new chaff[2];
  //strcpy_s(p1[0].dross, "It is yes.");
  //strcpy_s(p1[1].dross, "It is no.");
  //p1[0].slag = 20;
  //p1[1].slag = 230;
  //ShowChaff(p1, 2);

  //chaff* p2 = new (buffer1) chaff[2];
  // strcpy_s(p2[0].dross, "It is yes.");
  //strcpy_s(p2[1].dross, "It is no.");
  //p2[0].slag = 20;
  //p2[1].slag = 230;
  //ShowChaff(p2, 2);
  //#include <new>

  longline(4);//4  
  using namespace SALES;
  using SALES::Sales;
  using SALES::setSales;
  using SALES::showSeles;
  double ar[4] = { 12.5, 22.1, 18.7, 34.4};  
  Sales biger;
  Sales tiner;
  setSales(biger,ar, 4);
  showSeles(biger);
  //setSales(tiner);
  //showSeles(tiner);

  longline();//�չ�
  system("pause");
}
