#include <iostream>
#include <queue>

using namespace std;

#define MIN(a, b) (a < b) ? a : b

class Solution {
public:
  string gcdOfStrings(string str1, string str2) {
    queue<char> q;
    int size = MIN(str1.size(), str2.size());

    for (int i = 0; i < size; i++) {
      if (str1[i] == str2[i]) {
        if (q.front() == str1[i]) {
          q.pop();
        }
        q.push(str1[i]);
      } else {
        break;
      }
    }

    string minStr = "";
    for (int i = 0; i < q.size(); i++) {
      minStr += q.front();
      q.pop();
    }

    return minStr;
  }
};

int main() {
  string a, b;
  cin >> a;
  cin >> b;

  Solution s;

  string sol = s.gcdOfStrings(a, b);

  cout << sol << endl;

  return 0;
}
