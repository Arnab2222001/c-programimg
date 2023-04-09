#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n;
    printf("enterthe number\n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        /* code */for ( j= 0; j <=2*n-1; j++)
        {
            if (j>=n-(i-1)&&j<=n+(i-1))
            {
                /* code */printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    

    return 0;
}
