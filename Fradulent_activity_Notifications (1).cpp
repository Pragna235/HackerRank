#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

#define MAXE 210

int A[200010];
int F[MAXE];

int median2(int D) {
  int p = 0;
  for (int i = 0; i < MAXE; i++) {
    p += F[i];
    if (p * 2 > D) {
      return 2 * i;
    } else if (p * 2 == D) {
      for (int j = i + 1; ; j++) {
        if (F[j]) {
          return i + j;
        }
      }
    }
  }
  return -1;
}

int main() {
  int N, D;
  cin >> N >> D;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  int result = 0;
  for (int i = 0; i < N; i++) {
    if (i >= D) {
      if (A[i] >= median2(D)) {
        ++result;
      }
      F[A[i - D]]--;
    }
    F[A[i]]++;
  }
  cout << result << endl;
  return 0;
}

