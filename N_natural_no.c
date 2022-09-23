//
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n;
    printf("Enter number to print odd natural num in rverse:\n");
    scanf("%d",&n);
    while(n>=1)
    {
        if(n%2)
        printf("%d\n",n);
        n--;
    }
    getch();
    return 0;
}