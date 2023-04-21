#include<stdio.h>
int main()
{
    int p,q,a,i,j;
    for( i=1; i<=5; i++)
    {
        for( j=1; j<=5; j++)
        {
            scanf("%d",&a);
            if(a)
            {
                p=i;
                q=j;
            }
        }
    }
    printf("%d",abs(p-3)+abs(q-3));
}
