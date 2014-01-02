// golf .cpp pe9_1

#include "golf.h"
#include "iostream"



void SetGolf(golf & g, const char* name, int hc ) {
  using namespace std;  
  if (hc < 0 || strlen(name) == 0 ) {
    cout << "Wrong input.\n";
    return;
  } else {
    int len = strlen(name)>=kLen ? strlen(name) : kLen;
    for (int i = 0; i < len ; i++)
      g.fullname[i] = name[i];
    }
  g.handicap = hc;
  return ;
}

int SetGolf(golf & g) {
   using namespace std;
  cout << "\nEnter number name: ";
//  char name_[kLen];
  char next;
  cin.get(g.fullname, kLen);
  if (*g.fullname == '\0') 
    return 0; 
  if (cin) {
     cin.get(next);
    while (next != '\n')
      cin.get(next);
  }
  cout << "Enter number's handicap: ";
  cin >> g.handicap;
  cin.get(); //ÊäÈëÖØÖÃ
  return 1;
} 

void Handicap(golf & g, int hc)  {
  if (hc >= 0)
    g.handicap = hc;
  return;
}

void ShowGolf(const golf & g)  {
   using namespace std;
  cout << "\nGolf numbers info list\n" << "Name: " << g.fullname << endl
       << "Level: " << g.handicap << endl; 
}