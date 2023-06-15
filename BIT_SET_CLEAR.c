//this code is for setting bit and also clearing bit.

#include<stdio.h>

void print_binary(int num)
{    
    int i;
    char binary_str[31] = {0};
    for (i=31; i>=0; i--)
    {
         if(num & 0x01)
             binary_str[i] = '1';
         else
               binary_str[i]='0';
               num = num>>1;
     }
     binary_str[32] ='\0';
     printf( "num:%d=%s\n",num,binary_str);
}

int setbit( int n, int position)
{
    return n|(0x01<<(position-1));
}

int clearbit( int n, int position)
{
    return n&((~(0x01<<(position-1))));
} 

void main()
{
    int n = 31,position= 4;
    
    int a = setbit( n, position );
    int b = clearbit( n, position );
    print_binary(n);
    printf( "set bit: %x \n", a );
    printf( "clear bit: %x \n", b );
    
}
