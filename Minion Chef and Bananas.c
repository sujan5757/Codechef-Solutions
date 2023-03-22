#include <stdio.h>
#include <stdlib.h>

int t, n, h, a[1000005], max = 0, sum = 0;

int check(int x) {
    int i, cnt = 0;
    for (i = 0; i < n; i++) {
        if (a[i] > x)
            cnt += (a[i] + x - 1) / x;
        else
            cnt++;
    }
    return cnt <= h;
}

int main() {
    int i, j, k;
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d", &n, &h);
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (a[i] > max)
                max = a[i];
            sum += a[i];
        }
        int l = 0, r = max;
        while (l < r) {
            int mid = (l + r) / 2;
            if (check(mid))
                r = mid;
            else
                l = mid + 1;
        }
        printf("%d\n", l);
        max = 0;
        sum = 0;
    }
    return 0;
}
