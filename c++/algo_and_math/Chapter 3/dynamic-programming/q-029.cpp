#include <iostream>
using namespace std;

int N, dp[54];
int main() {
  cin >> N;
  for(int i = 1; i <= N; i++) {
    if(i == 1)
      dp[i] = 1;
    if(i == 2)
      dp[i] = dp[i - 1] + 1;
    if(i >= 3) {
      dp[i] = dp[i - 2] + dp[i - 1];
    }
  }
  cout << dp[N] << endl;
  return 0;
}
