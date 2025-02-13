// Loop Musical
#include <iostream>

using namespace std;

int main() {
  int n, h, prev;

  cin >> n;
  while (n) {
    int direction;
    int peaks = 0;

    cin >> prev >> h;

    if (h < prev) {
      direction = -1;
    } else {
      direction = 1;
    }

    peaks++;

    while (n > 2) {
      cin >> h;

      if (h < prev && direction > 0) {
        peaks++;
        direction = -1;
      } else if (h > prev && direction < 0) {
        peaks++;
        direction = 1;
      }

      prev = h;
      n--;
    }
    peaks++;

    cout << peaks << endl;

    cin >> n;
  }

  return 0;
}
