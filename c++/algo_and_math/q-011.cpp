#include <iostream>
using namespace std;

bool isprim(int x) {
  for(int i = 2; i <= x - 1; i++) {
    if(x % i == 0)
      return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  for(int i = 2; i <= n; i++) {
    if(isprim(i) == true)
      cout << i << endl;
  }
  return 0;
}
