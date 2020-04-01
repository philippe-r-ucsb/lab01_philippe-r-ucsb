#include <iostream>
#include <string.h>

using namespace std;

const int LENGTH = 4;

int min_two(int a, int b);
int min(int* x, int l);

int main(int argc, char *argv[]) {
  int nums[LENGTH];
  for (int i = 0; i < LENGTH; i++) {
    nums[i] = atoi(argv[i + 1]);
  }

  cout << min(nums, LENGTH) << endl;
}

int min_two(int a, int b) {
  if (a < b) {
    return a;
  } else {
    return b;
  }
}

int min(int* xs, int len) {
  if (len == 1) {
    return xs[0];
  } else {
    return min_two(xs[0], min(xs+1, len-1));
  }
}
