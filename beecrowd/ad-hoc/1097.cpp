#include <iostream>
#include <string>

using namespace std;

int main() {
  int k, n, m, x, y;
  string values[5] = {"SE", "SO", "NE", "NO", "divisa"};

  cin >> k;

  while (k) {
    cin >> n >> m;
    while (k--) {
      cin >> x >> y;

      if (x == n || y == n) {
        cout << values[4] << endl;
      } else if (x > n) {
        if (y > m) {
          cout << values[3] << endl;
        } else {
          cout << values[1] << endl;
        }
      } else if (x < n) {
        if (y > m) {
          cout << values[2] << endl;
        } else {
          cout << values[0] << endl;
        }
      }
    }

    cin >> k;
  }
}
