//Write a program to check whether a given number is an even number or an odd number.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    if(a%2)
        printf("%d is odd number.",a);
    else
        printf("%d is even number.",a);
    return 0;
}