// O Primo de Josephus
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int upperLimit(int n) {
  if (n <= 6) {
    return 15;
  }
  return n * log(n) + n * log(log(n));
}

vector<int> firstNPrimes(int n) {
  int limit = upperLimit(n);
  vector<bool> isPrime(limit + 1, true);
  vector<int> primes;

  isPrime[0] = isPrime[1] = false;

  for (int i = 2; i <= limit && primes.size() < n; i++) {
    if (isPrime[i]) {
      primes.emplace_back(i);
      for (int j = i * i; j <= limit; j += i) {
        isPrime[j] = false;
      }
    }
  }

  return primes;
}

int main() {
  int n;
  vector<int> primes = firstNPrimes(3501);

  cin >> n;

  while (n) {
    int last = 0;

    for (int i = 1; i <= n; ++i) {
      last = (last + primes[n - i]) % i;
    }

    cout << last + 1 << endl;

    cin >> n;
  }

  return 0;
}
