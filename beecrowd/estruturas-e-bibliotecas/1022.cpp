// TDA Racional
#include <cmath>
#include <iostream>

using namespace std;

#define MIN(a, b) (a < b ? a : b);

int main() {
  int n, xn, xd, yn, yd;
  char operation;
  char slash;

  cin >> n;

  while (n--) {
    cin >> xn >> slash >> xd;
    cin >> operation;
    cin >> yn >> slash >> yd;

    switch (operation) {
    case '+':
      xn = ((xn * yd) + (yn * xd));
      xd = (xd * yd);
      break;
    case '-':
      xn = ((xn * yd) - (yn * xd));
      xd = (xd * yd);
      break;
    case '*':
      xn = (xn * yn);
      xd = (xd * yd);
      break;
    case '/':
      xn = (xn * yd);
      xd = (yn * xd);
      break;
    default:
      break;
    }

    cout << xn << slash << xd;

    int axn = abs(xn);
    int axd = abs(xd);

    int maxDiv = MIN(axn, axd);
    while ((xn % maxDiv != 0) || (xd % maxDiv != 0)) {
      maxDiv--;
      if (maxDiv <= 0) {
        break;
      }
    }

    yn = xn / maxDiv;
    yd = xd / maxDiv;

    cout << " = ";
    cout << yn << slash << yd << endl;
  }

  return 0;
}
