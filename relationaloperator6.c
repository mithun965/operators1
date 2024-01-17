#include<stdio.h>
#include<conio.h>
int main()
{
    int a=18, b=9, c,d,e=10, f;
    c=b++;
    d=b;
    f=a>b>d<c;
    printf("Value of a is=%d\n",a);
    printf("Value of b is=%d\n",b);
    printf("Value of c is=%d\n",c);
    printf("Value of d is=%d\n",d);
    printf("Value of e is=%d\n",e);
    printf("Value of f is=%d\n",f);
    printf("Value of (a+c==b>=e<c+d!=1) is=%d",a+c==b>=e<c+d!=1);
}