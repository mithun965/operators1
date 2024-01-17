#include<stdio.h>
#include<conio.h>
int main()
{
    int a=18, b=9, c, d, e=10, f;
    c=b++;
    d=b;
    f=a>b>d<c;
    printf("%i",f!=1);
    printf("\nEnd of program");
}