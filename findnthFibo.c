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
    int num;
    printf("Which term of fibonacci series: ");
    scanf("%d",&num);
    printf("The %d th term of fibonacci series is %d",num,fibo(num));
    return 0;
}