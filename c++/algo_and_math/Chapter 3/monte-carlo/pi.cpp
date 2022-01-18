#include <iostream>
using namespace std;

int main() {
  int N = 1000;
  int M = 0;
  for(int i = 1; i <= N; i++) {
    double px = rand() / (double)RAND_MAX;
    double py = rand() / (double)RAND_MAX;
    if(px * px + py * py <= 1.0) {
      M += 1;
    }
  }
  printf("%.12lf\n", 4.0 * M / N);
  return 0;
}
