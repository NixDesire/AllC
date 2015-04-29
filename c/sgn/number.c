w#include <stdio.h>
#include <stdlib.h>       
#include <ctype.h>        

unsigned long ToDec(char argv[])
{
    short i = 0;
    short n;
    unsigned long x = 0;
    char c;

    while (argv[i] != '\0') {

        if ('0' <= argv[i] && argv[i] <= '9')
            n = argv[i] - '0'; 

        else if ('a' <= (c = tolower(argv[i])) && c <= 'f')
            n = c - 'a' + 10; 

        else {       
            exit(0); 
        }
        i++;        
        x = x *16 + n; 
    }
    return (x);
}

int main(int argc, char *argv[])
{
    int i;           
    int box=0;
    
    if(argc > 1){
        for(i = 1; i < argc; i++){
            box += ToDec(argv[i]);
        }
        printf("%x (%d)\n", box, box);
    }
    return 0;
}
