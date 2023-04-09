#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */int a,b,c,d;
printf("the length and breadth of the rectangle is\n");
scanf("%d%d",&a,&b);
printf("the length and breadth is %d & %d\n",a ,b);
c=a*b;
d=2*(a+b);
printf("the primeter and ara is %d & %d\n",c,d);
if (c>d)
{
    printf("the area is greater then its peimeter\n ",c);
}
else if (d>c)
{
    printf("the primeter is greater then area\n",d);
}
else{
    printf("the area and the primeter is equal to each other\n");
}
    return 0;
}
