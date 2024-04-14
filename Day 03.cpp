⭐ Day 03 solution ⭐


int solve(int A, int nl) {
  int o = 0, e = 0, num = 0;
  for (i = 0; i < n; i++) {
    if (A[i] != 0) {
      if (A[i] % 2 == 0) {
        e++;
      } else {
        o++;
      }
    }
  }
  num = (eo) ? o : e;
  return num;
}
