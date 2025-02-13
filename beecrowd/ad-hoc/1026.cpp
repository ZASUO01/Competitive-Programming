// Carrega ou não Carrega?
#include <iostream>
#include <vector>

using namespace std;

vector<bool> decToBit(long long dec) {
  vector<bool> bits(32, false);

  if (dec == 0) {
    return bits;
  }

  int pos = 31;

  while (dec > 0) {
    if (dec % 2 > 0)
      bits[pos] = true;
    dec /= 2;
    pos--;
  }

  return bits;
}

long long bitToDec(vector<bool> &bits) {
  long long pot = 1;
  long long dec = 0;

  for (int i = 31; i >= 0; i--) {
    if (bits[i]) {
      dec += pot;
    }
    pot *= 2;
  }

  return dec;
}

long long mofizSum(long long a, long long b) {
  vector<bool> aBits = decToBit(a);
  vector<bool> bBits = decToBit(b);
  vector<bool> cBits(32, false);

  for (int i = 31; i >= 0; i--) {
    cBits[i] = ((aBits[i] || bBits[i]) && !(aBits[i] && bBits[i]));
  }

  long long result = bitToDec(cBits);

  return result;
}

int main() {
  long long a, b;

  while (cin >> a >> b) {
    cout << mofizSum(a, b) << endl;
  }

  return 0;
}
