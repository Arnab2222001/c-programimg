#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code */int a,m,w,t;
    a=80000;
    t=(80000*52)/100;
    m=(((80000*52)/100)*35)/100;
    w=(((80000*48)/100)*13)/100;
    printf("the total amount of population is 80000\n");
printf("the total percentage of illiterate people is %d\n",t);
printf("the  number illiterate man is %d \n",m);
printf("the number of illiterate woman is %d\n ",w);


    return 0;
}
