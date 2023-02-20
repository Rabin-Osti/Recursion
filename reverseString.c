#include<stdio.h>
#include<conio.h>

void rev(char *s)
{
    if(*s!='\0')
    {
        rev(s+1);
        printf("%c",*s);
    }
}
int main()
{
    char text[] = "hello world";
    printf("Reverse of the string is: \n");
    rev(text);
    return 0;
}