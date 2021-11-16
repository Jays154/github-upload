#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,s;
    float area;
    printf("Enter three sides of the triangle:");
    scanf("%d %d %d",&a,&b,&c);
    s=0.5*(a+b+c);
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle is %f",area);
    return 0;
}

