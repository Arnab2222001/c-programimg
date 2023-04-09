#include <stdio.h>
int main()
{
    int num, i;
    printf("enter the number of array element\n");
    scanf("%d", &num);
    int arr[num];
    printf("ener the number\n ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("the value of array\n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("print the reverce oder\n");
    for (i = num - 1; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
        /* code */
    }

    return 0;
}