// Vampiros
#include <iostream>

using namespace std;

int main() {
  int ev1, ev2, at, d;

  cin >> ev1 >> ev2 >> at >> d;

  while (d) {
    double prob = 1.0;
    while (ev2 > 0) {
      ev2 -= d;
      prob *= at / 6.0;
    }

    cout << prob << endl;

    cin >> ev1 >> ev2 >> at >> d;
  }

  return 0;
}
