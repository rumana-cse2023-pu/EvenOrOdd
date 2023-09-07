#include<stdio.h>
int main()
{
    int number;
    printf("Enter a integer value: ");
    scanf("%d", &number);
    if(number%2==0)
    {
        printf("It is a Even Number.");
    }
    else{
        printf("It is a Odd Number.");
    }



    return 0;
}
