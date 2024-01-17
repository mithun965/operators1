#include<stdio.h>
#include<conio.h>
int main()
{
    int a=5,b=0,c=0,d=0;
    printf("Value of a is=%d\n",a);
    printf("Value of b is=%d\n",b);
    printf("Value of c is=%d\n",c);
    printf("Value of d is=%d\n",d);
    b=++a;
    c=a++;
    d=++a;
    printf("\nUpdated value of a is=%d\n",a);
    printf("Updated value of b is=%d\n",b);
    printf("Updated value of c is=%d\n",c );
    printf("Updated value of d is=%d\n",d);
}