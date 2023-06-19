#include<stdio.h>

#define STATUS_A ('A')
#define STATUS_B ('B')
#define STATUS_C ('C')
#define STATUS_D ('D')
#define STATUS_E ('E')
#define STATUS_J ('J')

char trans_state(char cur_state,int option)
{
    char next_status;
    next_status =cur_state;
    switch(cur_state)
    {
        case STATUS_A: 
            if (option == 1)
                next_status = STATUS_B;
            else if(option == 2)
                next_status = STATUS_D;
            else 
                next_status = STATUS_A;
                break;
        case STATUS_B: 
            if(option == 3)
                next_status = STATUS_E;
            else if(option == 4)
                next_status = STATUS_C;
            else 
                next_status = STATUS_B;
                break; 
        case STATUS_C:
            if(option == 5)
                next_status = STATUS_D;
            else if(option == 6)
                next_status = STATUS_E;
            else 
                next_status = STATUS_C;
                break; 
        case STATUS_D: 
            if(option == 7)
                next_status = STATUS_A;
            else if(option == 8)
                next_status = STATUS_B;
            else 
                next_status = STATUS_D;
                break;
        case STATUS_E: 
            if(option == 9)
                next_status = STATUS_C;
            else if(option == 10)
                next_status = STATUS_A;
                break;
        case STATUS_J:
             if (option == 11)
                   next_status = STATUS_J ;
                   break;
         default: printf("Invalid state\n");                                
    }
    
    return next_status;
}

int main()
{
    char curr_state = STATUS_E;
    int input;
    
    while(1)
    {
        printf("Enter the Input: ");
        scanf("%d",&input);
        
        if(input == 888)
            break;
        
        printf("Before transition: %c\n",curr_state);
        curr_state = trans_state(curr_state, input);
        printf("Currrent state: %c\n", curr_state);
    }
    
    return 0;
}

