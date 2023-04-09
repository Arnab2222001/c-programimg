#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */ int a, b;
    printf("enter the number\n");
    scanf("%d", &a);
b=a%2;
    if  (b == 0)
    {
        /* code */ printf("the number is even\n",b);
    }
    
    else{
        printf("this is a odd digit number\n");
    }
    
    

    return 0;
}
