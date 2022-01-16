#include <iostream>
using namespace std;

long long gcd(long long A, long long B) {
  while(A >= 1 && B >= 1) {
    if(A > B) {
      A = A % B;
    } else {
      B = B % A;
    }
  }
  if(A >= 1)
    return A;
  return B;
}

int main() {
  long long A, B;
  cin >> A >> B;
  cout << gcd(A, B) << endl;
}
