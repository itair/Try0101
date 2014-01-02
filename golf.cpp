// golf .cpp pe9_1

#include "golf.h"
#include "iostream"

using namespace std;

void SetGolf(golf & g, const char* name, int hc ) {
  
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
  cin.get(); // ‰»Î÷ÿ÷√
  return 1;
  
//   bool cinnmaneok = cin.getline(name_, kLen);
//   strcpy_s(g.fullname , name_);
//   cout << "Enter number's handicap: ";
//   cin >> g.handicap;
//   return cinnmaneok ? 1 : 0;
} 

void Handicap(golf & g, int hc)  {
  if (hc >= 0)
    g.handicap = hc;
  return;
}

void ShowGolf(const golf & g)  {
  cout << "\nGolf numbers info list\n" << "Name: " << g.fullname << endl
       << "Level: " << g.handicap << endl; 
}