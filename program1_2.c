///program to print 5 times Hello world on screen

#include<stdio.h>
void Display()
{
    int i = 0;
    for(i = 1; i <= 5; i++)
    {
        printf("Hello world \n");
    }
}
int main()
{
    Display();
    return 0;
}