#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("please enter your age\n");
    scanf("%d",&age);

    if(age>18)
    {
        printf("the age is greater than 18");
    }
    if(age==18)
    {
        printf("the age is equal to 18");
    }
    if(age<18)
    {
        printf("the age is lesser than 18");
    }

    return 0;

}
