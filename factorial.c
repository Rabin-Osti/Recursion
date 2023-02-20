#include<stdio.h>
#include<conio.h>

int fact(int n)
{
    if(n==1 || n==0)
    return 1;
    return n*fact(n-1);
}
int main()
{
    int num;
    printf("Factorial of : ");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num,fact(num));
}