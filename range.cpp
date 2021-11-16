#include <stdio.h>

int main()
{
    int num,limit,i,sum;
    printf("Enter the limit:");
    scanf("%d",&limit);
    for(num=1;num<=limit;num++)
    {
        sum=0;
        for(i=1;i<num;i++)
        {
            if(num%i==0)
            sum=sum+i;
        }
    }
    if(num==sum)
    printf("%d",num);

    return 0;
}
