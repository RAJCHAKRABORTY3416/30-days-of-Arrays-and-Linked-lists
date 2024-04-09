⭐ Day 01 solution ⭐


int Solution::solve (vector<int> &A) {
    int n = A.size();
    int maxMod = -1;
    for(int i=0;i<n; ++i){
        for (int j=0;j<n; ++j) {
            if (A[j] != 0) {
                maxMod = max(maxMod, A[i] % A[j]);
            }
        }
    }
    return maxMod;
}
