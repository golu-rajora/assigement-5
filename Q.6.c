//Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int x,i=0;
    printf("enter a number how many time even nature number :-");
    scanf("%d",&x);
    x=x*2;
    do
    {
        i=i+2;
        printf("%d\n",i);

    }while(i<x);
    getch();
    return 0;
}

