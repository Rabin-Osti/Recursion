#include<stdio.h>
#include<conio.h>
int fact(int num)
{
    if(num==0 || num==1)
    return 1;
    return num*fact(num-1);
}
int main()
{
    int x;
    printf("Find factorial of: ");
    scanf("%d",&x);
    printf("Factorial of %d is %d",x,fact(x));
    return 0;
}