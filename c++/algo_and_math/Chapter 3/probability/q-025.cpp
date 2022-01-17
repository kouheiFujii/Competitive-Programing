#include <iostream>
using namespace std;

int N, A[109], B[109];
double Answer = 0.0;

int main() {
  cin >> N;
  for(int i = 1; i <= N; i++)
    cin >> A[i];
  for(int i = 1; i <= N; i++)
    cin >> B[i];

  for(int i = 1; i <= N; i++) {
    double a = 1.0 * A[i] / 3;
    double b = 1.0 * (2 * B[i]) / 3;
    Answer = a + b;
  }

  cout << Answer << endl;
  return 0;
}
