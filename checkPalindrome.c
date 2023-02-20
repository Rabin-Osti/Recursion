#include<stdio.h>
#include<conio.h>
int rem,ans=0;
int palindrome(int n)
{
    if(n)
    {
        rem=n%10;
        ans=ans*10+rem;
        palindrome(n/10);
    }
    return ans;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(palindrome(num)==num)
    {
        printf("%d is palindrome.",num);
    }else{
        printf("%d is not palindrome.",num);
    }
    return 0;
}