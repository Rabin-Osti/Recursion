#include<stdio.h>
#include<conio.h>

int ans=0,rem;

int rev(int n)
{
    if(n)
    {
        rem=n%10;
        ans=ans*10+rem;
        rev(n/10);
    }
    return ans;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Reverse of %d is %d",num,rev(num));
    return 0;
}