#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */int age;
    printf("enter your age\n");
    scanf("%d", &age);
    switch (age)
    {
    case  3 :

        /* code */printf("the age is 3");

        break;
    
    case 13 :

        /* code */printf("the age is 13");

        break;
        case 23 :

        /* code */printf("the age is 23");

        break;
        case  33 :

        /* code */printf("the age is 33");

        break;
    default:printf("the age is not 3,13,23,33");
        break;
    }
    return 0;
}
