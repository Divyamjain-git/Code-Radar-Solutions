
#include <stdio.h>

int main (){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int target ;
    scanf("%d",&target);

    for(int i=0;i<n;i++){
        if (arr[i]==target){
            printf("%d",i);
            return 0;
        }
    }
    printf("%d",-1);
}
