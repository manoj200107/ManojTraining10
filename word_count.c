#include<stdio.h>

#define BUFFER_SIZE 512
#define IN_STATE 1
#define OUT_STATE 0

int get_line(char *array, int max)
{
    
    int  i = 0 ;
    char c;
    while((c = getchar()) != EOF)
    {
       
        array[i]=c;
        i++;
        
        
    if(c == '\n')
        break;
    if(i >= max)
        break; 
        
    }
    array[i] = '\0';
    return i;
}

        
  
          
          
int write_line(char *array)
{
   int cw = 0, cl = 0, status;
   status=OUT_STATE;
   char c;
   
   if(c == '\n')
   {
        cl++;
   }    
        
           
    if(c == '\t' || c == ' ' || c == '\n')
    {
        status = OUT_STATE;
    } 
       
    else if(OUT_STATE == 0)
    {
       status = IN_STATE;
       cw++; 
