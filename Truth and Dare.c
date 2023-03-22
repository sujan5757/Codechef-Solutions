#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int a;
        scanf("%d", &a);
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &arr[i]);
        }
        int b;
        scanf("%d", &b);
        int arr1[b];
        for (int i = 0; i < b; i++)
        {
            scanf("%d", &arr1[i]);
        }
        int c;
        scanf("%d", &c);
        int arr2[c];
        for (int i = 0; i < c; i++)
        {
            scanf("%d", &arr2[i]);
        }
        int d;
        scanf("%d", &d);
        int arr3[d];
        for (int i = 0; i < d; i++)
        {
            scanf("%d", &arr3[i]);
        }
        int freq[101];
        for (int i = 1; i < 101; i++)
        {
            freq[i] = 0;
        }
        for (int i = 0; i < a; i++)
        {
            freq[arr[i]]++;
        }
        int freq1[101];
        for (int i = 1; i < 101; i++)
        {
            freq1[i] = 0;
        }
        for (int i = 0; i < b; i++)
        {
            freq1[arr1[i]]++;
        }
        int count = 0;
        int count1 = 0;
        for (int i = 0; i < c; i++)
        {
            if (freq[arr2[i]] >= 1)
            {
                count++;
            }
        }
        for (int i = 0; i < d; i++)
        {
            if (freq1[arr3[i]] >= 1)
            {
                count1++;
            }
        }
        if (count != c || count1 != d)
        {
            printf("no\n");
        }
        else
            printf("yes\n");
    }
}
