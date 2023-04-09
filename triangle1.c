#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */ int a, b, c,max;
printf("enter the triangle three side\n");
    scanf("%d%d%d", &a, &b, &c);
    
max=a;
if (max < b+c)
{
    /* code */printf("the triangle is valid\n");
}
else if (max>b+c)
{
    printf("the triangle is not valid\n");
}


    return 0;
}
