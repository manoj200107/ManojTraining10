
#include <stdio.h>

#define IS_SPACE(c) ((c) == ' ' || \
                       (c) == '\t' || \
                       (c) == '\n' || \
                       (c) == '\r')


/*void trim_string( char *str)
{

    int i = 0;
    int j;
    if (!str)
    {
        printf("no string\n");
        return;
    }
    while(IS_SPACE(str[i]))
    {
        i++;
    }    
    for( j =0,i; str[i]!= '\0'; i++, j++)
    {
            str[j] = str[i];
    }
    
    while(IS_SPACE(str[j - 1]))
    {
         j--; 
    }
    str[j + 1] = '\0';
}*/

char *trim_string( char *str)
{
    int first_index = -1;
    int left_index = -1;
    int idx;
    if (!str)
    {
        printf("no string\n");
        return NULL;
    }
    for( idx =0; str[i] != '\0'; idx++)
    {
         if(!(IS_SPACE(str[i])))
         {
              if(first_index == -1)
              {
                   first_index = idx;
              }
              else
                   left_index = idx;
         }
    }
    for ( idx = 0; first_index <= left_index ; first_index++, idx++)
    {
         str[idx] = str[first_index];
    }
    str[idx] = '\0';
    
    return str;
}       
        
    
  
int rm_white_main()
{
    char string[20];
    printf("enter the string with white space\n");
    scanf("%s",string);
    char c = trim_string(string);
    printf("After trim string function :%s\n", c);
}


#ifndef ONE_FILE_ELF
int main()
{
    rm_white_space();
}
#endif


