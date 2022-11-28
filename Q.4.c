//. Write a program to print the first N odd natural number
#include<stdio.h>
int main()
{
    int x,i=1,s=1;
    printf("enter a number how many print first odd number:-");
    scanf("%d",&x);
    do
    {

        printf("\n %d",s);
        s=s+2;
        i++;

    }while(i<=x);
    getch();
    return 0;
}

