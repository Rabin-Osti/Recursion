#include<stdio.h>
#include<conio.h>
int fact(int num,int result)
{
    if(num==0)
    return result;
    return fact(num-1,num*result);
}
int main()
{
    int x;
    printf("Find factorial of: ");
    scanf("%d",&x);
    printf("Factorial of %d is %d",x,fact(x,1));
    return 0;
}