#include<stdio.h>
#include<conio.h>
#include<string.h>
int len;
void palindrome(char text[],int index)
{
    len = strlen(text)-index;

    if(text[index]==text[len-1])
    {
        if(index==len || index+1==len)
        {
        printf("Entered string is palindrome");
        return;
        }
        palindrome(text,++index);
    }else{
        printf("Entered string is not palindrome.");
        return;
    }
}
int main()
{
    char text[20];
    printf("Enter a string: ");
    scanf("%s",&text);
    palindrome(text,0);
    return 0;
}