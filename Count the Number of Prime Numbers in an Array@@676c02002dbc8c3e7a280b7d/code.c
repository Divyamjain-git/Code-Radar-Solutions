// Your code here...

#include <stdio.h>

int main (){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int count = 0;
    for(int i=0;i<n;i++){
        int prime = 1;
        if (arr[i]<2)
            continue ;
        for(int j=2;j<arr[i];j++){
            if (arr[i]%j==0){
                prime = 0;
                break;
                }
        }
        if (prime)
            count++;
    }
    printf("%d",count);
}
