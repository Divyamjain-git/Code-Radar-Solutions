// Your code here...
#include <stdio.h>
int main (){
    int n,arr[1000];

    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for (int i=1;i<n;i++){
        if (arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                printf("%d",arr[i]);
                return 0;
            }
    }
    if (arr[n-1]>arr[n-2]){
        printf("%d",arr[n-1]);
        return 0;
        }
    else if (arr[n-1]<arr[n-2]){
        printf("%d",arr[n-2]);
        return 0;
        }
    printf("%d",-1);
}