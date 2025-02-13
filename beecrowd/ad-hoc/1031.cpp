// Crise de Energia
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;

  cin >> n;

  while (n) {
    int solution = 1;

    while (true) {
      vector<bool> visited(n + 1, false);

      int skip = solution;
      int current = 1;
      int notVisited = n;

      while (notVisited > 1) {
        visited[current] = true;
        notVisited--;

        while (skip > 0) {
          current++;
          if (current > n)
            current = 1;

          if (!visited[current]) {
            skip--;
          }
        }

        skip = solution;
      }

      if (current == 13) {
        break;
      }

      solution++;
    }

    cout << solution << endl;

    cin >> n;
  }
  return 0;
}
