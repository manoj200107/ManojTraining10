
//program to set bit_value and  clear bit

#include<stdio.h> 
#define SET_BIT( n , position ) ((n) = (n) | ((0x01) << (position)))
#define CLEAR_BIT(n, position ) ((n) = (n) & ( ~((0x01) << (position))))


void print_binary(int n)
{
    int temp = n;
    char binary_str[33] = { 0 };
    int i;
    for (i = 31; i >= 0; i-- )
    {
        if (n & 0x01)
            binary_str[i] = '1';
        else
            binary_str[i] = '0';
        n = n >>1;
    }
    binary_str[32] = '\0';
    printf(" No :%d , binary string : %s \n", temp, binary_str );

}                





       
void main()
{
    int n = 31,position = 2;
    print_binary(n);
    
    int a = SET_BIT(n, position);
    int b = CLEAR_BIT(n, position);
    printf("set bit: %x \n", a);
    printf("clear bit: %x \n", b);
}
