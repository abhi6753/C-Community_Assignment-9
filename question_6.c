//6. Write a program to print the first 10 odd natural numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,count=0;
    while(count<10)
    {
        if(i%2)
        {
           printf("%d\t",i);
           count++;
        }
       i++;
    }
}