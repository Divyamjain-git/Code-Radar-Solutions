// Your code here...
// Your code here...
#include <stdio.h>
int main (){
    int n,arr[1000];

    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int even = 0,odd = 0;

    for (int i=0;i<n;i++){
        if (arr[i]%2==0)
            even++;
        else 
            odd++;

    }
    printf("%d %d",even ,odd);

}
