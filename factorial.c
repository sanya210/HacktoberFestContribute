#include<stdio.h>
main()
{
    int n,i,s=1;
    scanf("%d",&n); //inputting number whose factorial is to be calculated
    for(i=1;i<=n;i++)
    {
        s=s*i;//computing factorial
        
    }
    printf("%d ",s);//printing factorial
}
