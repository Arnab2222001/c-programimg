#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */float a,b,c,d,e ,sum,g;
    
    printf(" enter your five subject marks");
    scanf("%f",&a);
    printf("a is the nuumber of subject%f\n",a);
    scanf("%f",&b);
    printf("b is the gating marks in that subject%f\n",b);
scanf("%f",&c);
    printf("c is the gating marks in that subject%f\n",c);
scanf("%f",&d);
    printf("d is the gating marks in that subject%f\n",d);
scanf("%f",&e);
    printf("e is the gating marks in that subject%f\n",e);
sum=a+b+c+d+e;
g=(sum/500)*100;
if (/* condition */sum<=500 )
{
    /* code */printf("aggregate marks =%f\n",sum);
    printf("percentage marks=%f\n",g);
}
else{
    printf("invalide marks\n");
}

    return 0;
}
