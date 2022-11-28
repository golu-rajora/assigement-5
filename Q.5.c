// Write a program to print the first N odd natural numbers in reverse order.
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number how many to print the odd natural numbers in reverse order:-");
    scanf("%d",&x);
    int i;
    i=x*2+1;
    do{
            i=i-2;
        printf("%d\n",i);
        x--;
    }while(1<=x);
    getch();
    return 0;
}
