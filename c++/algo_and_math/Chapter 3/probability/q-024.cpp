#include <iostream>
using namespace std;

int n, P[59], Q[59];
double answer = 0.0;
int main() {
  cin >> n;
  for(int i = 1; i <= n; i++)
    cin >> P[i] >> Q[i];

  for(int i = 1; i <= n; i++) {
    answer += 1.0 * Q[i] / P[i];
  }

  printf("%.12lf\n", answer);
  return 0;
}
