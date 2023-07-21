#include<stdio.h>
int add(int a,int b);
int main()
{
    int m1,m2;
    scanf("%d%d",&m1,&m2);
    printf("%d",add(m1,m2));
    return 0;
}
int add(int a,int b)
{
    int sum=0;
    sum=a+b;
    return sum;
}
