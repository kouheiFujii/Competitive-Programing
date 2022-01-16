#include <iostream>
using namespace std;

long long n;
long long arr[500009];
long long red = 0, yellow = 0, blue = 0;

int main() {
  cin >> n;
  for(long long i = 1; i <= n; i++)
    cin >> arr[i];

  for(long long i = 1; i <= n; i++) {
    if(arr[i] == 1)
      red += 1;
    if(arr[i] == 2)
      yellow += 1;
    if(arr[i] == 3)
      blue += 1;
  }

  cout << (red * (red - 1) / 2) + (yellow * (yellow - 1) / 2) +
              (blue * (blue - 1) / 2)
       << endl;
  return 0;
}
