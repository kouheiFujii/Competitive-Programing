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

long long n;
long long arr[100000];
int main() {
  cin >> n;
  for(int i = 1; i <= n; i++)
    cin >> arr[i];

  long long r = gcd(arr[1], arr[2]);

  for(int i = 3; i <= n; i++) {
    r = gcd(r, arr[i]);
  }

  cout << r << endl;
  return 0;
}
