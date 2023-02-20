#include<stdio.h>
#include<conio.h>

int fibo(int n)
{
    if(n==2)
    return 1;
    if(n==1)
    return 0;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int num,i=1;
    printf("Print fibonacci series upto: \n");
    scanf("%d",&num);
    while(i<=num)
    {
    printf("%d\t",fibo(i));
    i++;
    }
    return 0;
}