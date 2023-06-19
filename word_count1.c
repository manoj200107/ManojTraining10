#include<stdio.h>

#define BUFFER_SIZE 512
#define IN_STATE 1
#define OUT_STATE 0
#define WHITE_SPACE(c) ((c) == ' ' || \
                       (c) == '\t' || \
                       (c) == '\n' || \
                       (c) == '\r')


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
          
int word_count(char *array)
{
   int cw = 0, cl = 0, status;
   status=OUT_STATE;
   char c;
   
    while(array[cl] != '\0')  
    {
        c = array[cl];
        cl++;
           
    if(WHITE_SPACE (c))
    {
        status = OUT_STATE;
    } 
       
    else if(status ==OUT_STATE)
    {
       status = IN_STATE;
       cw++;
    }
    } 
    return cw;
}

int main()
{
    char array[BUFFER_SIZE];
    int d = get_line( array, BUFFER_SIZE);
    int z = word_count(array);
    printf("%d\n", d);
    printf("%d\n",z);
    
}
