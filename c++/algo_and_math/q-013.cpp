#include <iostream>
using namespace std;

int main() {
  long long n;
  cin >> n;
  for(int i = 1; i * i <= n; i++) {
    if(n % i != 0)
      continue;
    cout << i << endl;
    if(i != n / i) {
      cout << n / i << endl;
    }
  }
  return 0;
}
