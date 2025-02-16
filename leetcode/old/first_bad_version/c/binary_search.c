#include <stdio.h>

// bad version?
// yes: high =mid  -1
// no: low = mid + 1

#define BAD_VERSION 0

int isBadVersion(int version) { return version >= BAD_VERSION; }

int firstBadVersion(int n) {

  int low = 1;
  int high = n;

  while (high >= low) {
    int mid = low + (high - low) / 2;

    if (!isBadVersion(mid)) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return low;
  // return low because we need to return the first bad version;
}
int main() {
  int result = firstBadVersion(0);
  printf("result: %i", result);
}
