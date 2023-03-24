#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int cmpfunc(const void* a, const void* b) {
    return ((int)a - (int)b);
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        // Sort the array in ascending order
        qsort(a, n, sizeof(int), cmpfunc);
        int min_diff = INT_MAX;
        for(int i = 0; i < n - 1; i++) {
            int diff = abs(a[i] - a[i+1]);
            if(diff < min_diff) {
                min_diff = diff;
            }
        }
        printf("%d\n", min_diff);
    }
    return 0;
}
