
#include <stdio.h>
#include <limits.h>

int main (){
    int n,arr[1000];

    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int min = INT_MAX,max = INT_MIN;

    for (int i=0;i<n;i++){
        if (arr[i]>max)
            max = arr[i];
        if (arr[i]<min)
            min = arr[i];
    }

    printf("%d %d", min ,max);
}

