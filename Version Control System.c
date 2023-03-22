#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);

        int ignored[n+1], tracked[n+1];
        for (int i = 1; i <= n; i++) {
            ignored[i] = 0;
            tracked[i] = 0;
        }

        for (int i = 0; i < m; i++) {
            int x;
            scanf("%d", &x);
            ignored[x] = 1;
        }

        for (int i = 0; i < k; i++) {
            int x;
            scanf("%d", &x);
            tracked[x] = 1;
        }

        int tracked_and_ignored = 0, untracked_and_unignored = 0;
        for (int i = 1; i <= n; i++) {
            if (tracked[i] == 1 && ignored[i] == 1) {
                tracked_and_ignored++;
            } else if (tracked[i] == 0 && ignored[i] == 0) {
                untracked_and_unignored++;
            }
        }

        printf("%d %d\n", tracked_and_ignored, untracked_and_unignored);
    }
    return 0;
}


