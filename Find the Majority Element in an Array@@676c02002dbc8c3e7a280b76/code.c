// Your code here...
// Your code here...
#include <stdio.h>

int main (){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for (int i=0;i<n;i++){
    int count = 0;
        for(int j=0;j<n;j++){
            if (arr[i]==arr[j])
                count++;
        }
        if (count>n/2){
            printf("%d",arr[i]);
            return 0;
            }

    }
    printf("%d",-1);
}
