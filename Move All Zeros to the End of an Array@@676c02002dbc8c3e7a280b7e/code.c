// Your code here...

#include <stdio.h>

int main (){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int ans[n],count =0;
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0) {
            ans[j]=arr[i];
            j++;
            }
    }   

    for(int i=j+1;i<n;i++){
        ans[i]=0;
    }
  
    for(int i=0;i<n;i++)
        printf("%d ",ans[i]);
}
