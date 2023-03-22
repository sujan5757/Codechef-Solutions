#include <stdio.h>
#include <string.h>

int main() {
    
    char beautiful[27],word[27];
    int n,i,j;
    scanf("%s",beautiful);
    scanf("%d",&n);
    int len = strlen(beautiful);
    int temp[26] = {0};
    for (i=0;i<len;i++) {
        temp[beautiful[i]-'a'] = 1;
    }
    for (i=0;i<n;i++) {
        scanf("%s",word);
        len = strlen(word);
        int count = 1;
        for (j=0;j<len;j++) {
            if (!temp[word[j]-'a']) {
                count=0;
                break;
            }
        }
        if (count){
            printf("Yes\n");
        } 
        else{
            printf("No\n");
        }
    }
    return 0;
}
