#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */ float a, b, c, d, e;
    printf("the cost price  \n");
    printf("the selling price  \n");
    scanf("%f%f", &a, &b);
    
    printf("the cost price is %f\n ", a);
    printf("the selling price is%f\n", b);
     c = b - a;
    e = a - b;
    if (c>0)
    {
        /* code */
    printf("thr profit is %f\n", c);
    }
    else if (e<0)
    {
        /* code */
    printf("the loss is %f", e);
    }
    else{
        printf("ther is no loss in that product\n");
    }

    return 0;
}
