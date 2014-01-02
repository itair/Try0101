#ifndef TRY0101_TRY0101_NAMESPACE_H
#define TRY0101_TRY0101_NAMESPACE_H

namespace SALES {
  const int QUARTERS =4;

  struct Sales  {
    double sales[QUARTERS];
    double average;
    double max;
    double min;
  };

  void setSales(Sales & s, const double ar[], int n);

  void setSeles(Sales & s);

  void showSeles(const Sales & s);
}

#endif //TRY0101_TRY0101_NAMESPACE_H