// Dama
#include <cmath>
#include <iostream>

using namespace std;

bool inDiagonal(int x1, int y1, int x2, int y2) {
  if (abs(y2 - y1) == abs(x2 - x1))
    return true;
  return false;
}

int main() {
  int x1, y1, x2, y2;

  cin >> x1 >> y1 >> x2 >> y2;

  while (x1) {
    int solution;

    if (x1 == x2 && y1 == y2)
      solution = 0;
    else if (x1 == x2 || y1 == y2)
      solution = 1;
    else {
      if (inDiagonal(x1, y1, x2, y2))
        solution = 1;
      else
        solution = 2;
    }

    cout << solution << endl;

    cin >> x1 >> y1 >> x2 >> y2;
  }

  return 0;
}
