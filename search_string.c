//this code for searching word index in a string
#include <stdio.h>

char* str_str(char* str, char* s) {
    if (*s == '\0') {
        return str;
    }
    
    while (*str) {
        char* p1 = str;
        char* p2 = s;
        
        while (*p1 && *p2 && (*p1 == *p2)) {
            p1++;
            p2++;
        }
        
        if (*p2 == '\0') {
            return str;
        }
        
        str++;
    }
    
    return NULL;
}

int main() {
    char str[] = "titanic, vikramaditya, vikranth";
    char s[] = "vikranth";
    
    char* result = str_str(str, s);
    
    if (result) {
        printf("Substring found at index: %ld\n", result - str);
    } else {
        printf("Substring not found.\n");
    }
    
    return 0;
}
