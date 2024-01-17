#include<stdio.h>
#include<conio.h>
int main()
{
    int a=-10,b=0,c=0,d=0,e=0,f=0;
    printf("Value of a is=%d\nValue of b is=%d\nValue of c is=%d\nValue of d is=%d\nValue of e is=%d\nValue of e is=%d\n",a,b,c,d,e,f);
    b=++a;
    c=a++;
    d=++a;
    e=a++;
    f=++a;
    printf("\nUpdated value of a is=%d\nUpdated value of b is=%d\nUpdated value of c is=%d\nUpdated value of d is=%d\nUpdated value of e is=%d\nUpdated value of f is=%d\n",a,b,c,d,e,f);
    printf("End of program");
}