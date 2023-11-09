#include<stdio.h>
int main()
{
    int i,n,add=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            add+=i;
        }
    }
    printf("%d",add);
}