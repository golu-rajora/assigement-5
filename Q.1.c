// Write a program to print iNeuron N times on the screen
#include<stdio.h>
int main()
{
    int x,i=0;
    printf("enter a number how many time print ineuron:-");
    scanf("%d",&x);
    do
    {
        printf("\n iNeuron");
        i++;
    }while(i<=x);
    getch();
    return 0;
}
