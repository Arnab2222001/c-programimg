
#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */int a,b,power,count=1;
printf("enter the numbrs for factorial\n ");
scanf("%d%d",&a,&b);
for (power=1 ; power <= b; power++)
{
    /* code */count=count*a;
}
printf("%d power %d =%d",a,b,count);
    return 0;
}
