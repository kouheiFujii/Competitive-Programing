#include <iostream>
using namespace std;

long long n;
long long arr[200000];
long long a = 0, b = 0, c = 0, d = 0;

int main() {
  cin >> n;
  for(long long i = 1; i <= n; i++)
    cin >> arr[i];

  for(long long i = 1; i <= n; i++) {
    if(arr[i] == 100)
      a += 1;
    if(arr[i] == 200)
      b += 1;
    if(arr[i] == 300)
      c += 1;
    if(arr[i] == 400)
      d += 1;
  }
  cout << (a * d) + (b * c) << endl;
}
