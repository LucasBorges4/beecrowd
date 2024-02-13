#include <stdio.h>

int main(void) {
    double var, var2;
    var = 234.345;
    var2 = 45.698;

  printf(
    "%.6lf - %.6lf\n"\
        "%.0lf - %.0lf\n"\
        "%.1lf - %.1lf\n"\
        "%.2lf - %.2lf\n"\
        "%.3lf - %.3lf\n"\
        "%.6e - %.6e\n"\
        "%.6E - %.6E\n"\
        "%.3lf - %.3lf\n"\
        "%.3lf - %.3lf\n"\
        , var, var2, var, var2, var, var2, var, var2, var, var2, var, var2, var, var2, var, var2, var, var2
  );

      return 0;
}
