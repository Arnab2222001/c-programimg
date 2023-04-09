#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */int a,b,c,d,e,f,g,h,i;
    printf("enter a number\n");
scanf("%d",&a);
printf("enterthe five digit number=%d\n",a);
b=(a%10);
c=(a/10)%10;
d=(a/100)%10;
e=(a/1000)%10;
f=(a/10000)%10;
g=b+c+d+e+f;

h=f%10;
i=f/10;
if ((h!=0)&&(i==0))
{
    /* code */printf("sum of the number=%d\n",g);
}
else{
    printf("enter no is not fve digit no\n");
}



    



    return 0;
}
