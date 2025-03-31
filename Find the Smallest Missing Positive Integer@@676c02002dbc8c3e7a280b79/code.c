// Your code here...

#include <stdio.h>

int main (){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int ans[100];
    for(int i=0;i<n+1;i++)
        arr[i]=0;
    
    for (int i=0;i<n;i++){
        if (arr[i]>0 && arr[i]<=n)
            ans[i]=1;
    }

    for (int i=0;i<n;i++)
        if (ans[i]==0){
            printf("%d",i);
            break;
        }
        
         
        
}
