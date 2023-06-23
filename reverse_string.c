#include<stdio.h>

char *reverse_string(char *str)
{
    int i , j ;
    int len;
    
    len = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        len++;
    }    
    printf("length is :%d \n", len);    
    char temp;
    for(i = 0 , j = len - 1; i < j ; i++, j--)
    {
          temp = str[i];   
          str[i] = str[j];
          str[j] = temp;
          
            
    }        
            
        
    return str;


}
int reverse_string_main()
{
    char str[10];
    printf("enter a string:");
    scanf("%s", str);
    printf("entered string is %s \n",str);
    reverse_string(str);
    printf("reversed string is :%s\n", str);
    
}

#ifndef ONE_FILE_ELF
int main()
{
    reverse_string_main();
}
#endif
      
