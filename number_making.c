#include <stdio.h>
#include<math.h>
int main()
{
    int num, i, j,digit,result=0;
    printf("enter thenumber of element of the array:- ");
    scanf("%d", &num);
    int arr[num];
    for (i = 0; i <= num; i++)
    {
        printf("\n Enter the digit at position %d", i+1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i <= num; i++)
    {
        printf(" the element of array is %d\n", arr[i]);
    }
    
    for ( i = 0; i <= num; i++)
    {
        
        digit= arr[i]*pow(10,i);
        result=result+digit;
    }
    printf("the number is %d ",result);
    return 0;
}