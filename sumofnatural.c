#include<stdio.h>
#include<conio.h>

int naturalSum(int sum)
{
    if(sum==0)
    return 0;
    return sum+naturalSum(sum-1);
}
int main()
{
    int num;
    printf("Sum of natural number upto: ");
    scanf("%d",&num);
    printf("Sum = %d",naturalSum(num));
    return 0;
}