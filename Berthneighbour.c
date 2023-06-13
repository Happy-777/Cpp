
#include <stdio.h>

int main()
{
    int n[10], x, t, i;
    char *a[3]={"UB","LB","MB"};
    printf("Enter no. of test cases: ");
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("\nEnter berth no: ");
        scanf("%d",&n[i]);
    }
    
    for(i=1;i<=t;i++)
    {
        x=n[i]%8;
        if(x<=6&&x>0)
        {
            if(x<=3)
                printf("\n%d%s",n[i]+3,a[(x%3)]);
            else
                printf("\n%d%s",n[i]-3,a[(x%3)]);
        }
        else
        {
            if(x==7)
                printf("\n%dSU",n[i]+1);
            else if(x==0)
                printf("\n%dSL",n[i]-1);
        }
    }
}
