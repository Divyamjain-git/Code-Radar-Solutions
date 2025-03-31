// Your code here...

#include <stdio.h>

int main (){
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    for (int i=0;i<n;i++){
        int rem,ans = 0,m=arr[i];
        while (m){
            rem = m%10;
            ans += rem;
            m = m/10;
        }
        if (ans<0)
            printf("%d ",-1*ans);
        else 
            printf("%d ",ans);
    }
}
