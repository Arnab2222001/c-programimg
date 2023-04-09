#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c,d,e,f,g,h,i;
    printf("enter the five digit number\n");
    scanf("%d",&a);
    printf("the five digit number is =%d\n",a);
    b=(a%10)*10000;
c=((a/10)%10)*1000;
d=((a/100)%10)*100;
e=((a/1000)%10)*10;
f=((a/10000)%10);
g=b+c+d+e+f;

h=f%10;
i=f/10;
printf("the reverce number is %d\n",g);
    return 0;
}
