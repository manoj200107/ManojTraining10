#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 512


int gline(char *array, int max)
{
    int cn=0,i=0;
    char c;
    while ((c = getchar())!= EOF)
    {
        array[i]=c;
        i++;
    if(c=='\n')
        break;
        if(i >= max)
              break;
     }
     return i;
   
}
        
              
   
   


int main()
{
      char  ip_buffer[BUFFER_SIZE];
      int a =gline(ip_buffer, BUFFER_SIZE);
      printf("%d",a);
}
