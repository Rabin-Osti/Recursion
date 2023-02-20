#include<stdio.h>
#include<conio.h>

void toh(int num,char source, char aux, char dest)
{
    if(num>=1)
    {
    toh(num-1,source,dest,aux);
    printf("Move %c to %c\n",source,dest);
    toh(num-1,aux,source,dest);
    }
}
int main()
{
    toh(3,'A','B','C');
    return 0;
}