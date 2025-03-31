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
        for(int i=n-1;i>=0;i--){
             
            int temp = arr[i];
            arr[i]= arr[i+1];
            arr[i+1]= temp;
        }
        m++;
    }
    return arr ;
}