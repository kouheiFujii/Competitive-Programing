#include <iostream>
using namespace std;

long long n, r;
long long fact_n = 1;
long long fact_r = 1;
long long fact_nr = 1;

int main() {
  cin >> n >> r;
  for(int i = 1; i <= n; i++)
    fact_n *= i;
  for(int i = 1; i <= r; i++)
    fact_r *= i;
  for(int i = 1; i <= n - r; i++)
    fact_nr *= i;

  cout << fact_n / (fact_r * fact_nr) << endl;
  return 0;
}
