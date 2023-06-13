#include<stdio.h>
void myfunction()
{
    printf("hello\n");
}
int main()
{
    int count = 0;
    int i;
    for(i = 0;i < 5;i++)
    {
        count =+i;
    }
   myfunction(); 
    return count;
}
