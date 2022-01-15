#include <iostream>
using namespace std;

int n, arr[109];
int answer = 0;
int main() {
  cin >> n;
  for(int i = 1; i <= n; i++) {
    cin >> arr[i];
  }
  for(int i = 1; i <= n; i++) {
    for(int j = i + 1; j <= n; j++) {
      for(int k = j + 1; k <= n; k++) {
        for(int l = k + 1; l <= n; l++) {
          for(int m = l + 1; i <= n; m++) {
            if(arr[i] + arr[j] + arr[k] + arr[l] + arr[m] == 1000)
              answer += 1;
          }
        }
      }
    }
  }

  cout << answer << endl;
  return 0;
}
