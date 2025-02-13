// A Lenda de Flavious Josephus
#include <iostream>

using namespace std;

int main() {
  int nc, n, k;

  cin >> nc;

  for (int i = 1; i <= nc; i++) {
    cin >> n >> k;

    int last = 0;

    for (int j = 2; j <= n; ++j) {
      last = (last + k) % j;
    }

    cout << "Case " << i << ": " << last + 1 << "\n";
  }

  return 0;
}
