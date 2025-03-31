// Your code here...
#include <stdio.h>

int main (){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int k ;
    scanf("%d",&k);

    int m = 0;
    while (m<k)
    {
        for(int i=n-2;i>=0;i--){
             
            int temp = arr[i];
            arr[i]= arr[i+1];
            arr[i+1]= temp;
        }
        m++;
    }
    for(int i=0;i<n;i++)
        printf("%d\n",arr[i]);
}