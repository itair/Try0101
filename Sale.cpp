#include "sales.h"
#include <iostream>

namespace SALES{

  void setSales(Sales & s, const double ar[], int n) {
     if (n <= 0 || n > 4) return ;
    int i = n;
    double temp(0.0), tol(0.0);
    s.max = s. min = ar[i-1];
    while (--i >= 0) {
     temp = ar[i];
      s.sales[i] = temp;
      tol += temp;
      s.max = temp > s.max ? temp : s.max;
     s.min = temp < s.min ? temp : s.min;
    }
    s.average = tol / n;
    return;
  }

  void setSales(Sales & s) {
   std::cout << "Enter 4 double sales:\n";
   double temp(0.0), tol(0.0);
    int n = 4;
    int i = n - 1;
    if(std::cin >> temp) {
       s.average = s.sales[i]= s.max = s. min = temp;
       while (--i && std::cin >> temp) {
       s.sales[n] = temp;
        tol += temp;
        s.max = temp > s.max ? temp : s.max;
       s.min = temp < s.min ? temp : s.min;
      }
      s.average = tol / n;
   } 
   return;
  }

  void showSeles(const Sales & s) {
    using namespace std;
     cout << " Sales:\n" << s.sales[0] << endl << s.sales[1] << endl 
          << s.sales[2]  << endl << s.sales[3] 
          << "\naverage: " << s.average 
          << "\nmax: " << s.max  << "\nmin: " << s.min  << endl; 
   return;
  }
}