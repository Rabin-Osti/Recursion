#include<stdio.h>
#include<conio.h>
int power(int x,int n)
{
    if(n==1)
    return x;
    return x*power(x,n-1);
}
int main()
{
    int x,n;
    printf("Enter coefficient \"x\" and power \"n\": ");
    scanf("%d%d",&x,&n);
    printf("Answer = %d",power(x,n));
    return 0;
}