#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */int limit ,num, positive=0 ,negitive=0, zero=0;
    printf("enter the numbers\n");
    scanf("%d",&limit);
    
    while (limit)
    {
        scanf("%d",&num);
        
        /* code */if (num>0)
        {
            
        positive++;
        }
        else if (num<0)
        {
            /* code */
            negitive++;
        }
        else{
            zero++;
        }
        
        limit--;
    }
    printf("\n positive number :%d\n",positive);
    printf("\n negitive number :%d\n",negitive);
    printf("\n negitive number :%d\n",zero);
    return 0;
}
