// Your code here...
// Your code here...
#include <stdio.h>
#include <limits.h>
int main (){
    int n,arr[1000];

    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int max = INT_MIN, sec =INT_MIN;
    for (int i=0;i<n;i++){
        if (arr[i]>max)
            max = arr[i];
    }
    for (int i=0;i<n;i++){
        if (arr[i]==max)
            continue;
        if (arr[i]>sec)
            sec = arr[i];

    }
    if (sec==INT_MIN)
        printf("%d",-1);
    else 
    printf("%d", sec);
}