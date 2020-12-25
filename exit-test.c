#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void exit_handler(void)
{
    printf("Sir Quickly räumt auf.\n");
}

int main(int argc, char *argv[] )
    {
        if( atexit(exit_handler ) != 0 )
        {
            printf("Kann Exit-Handler nicht registrieren");
            exit(EXIT_FAILURE);
        }

        printf("Irgendwie ...");

        if( argc > 1)
        {
            if( strcmp(argv[1], "exit") == 0 )
                exit(EXIT_SUCCESS);
            else
                _exit(EXIT_FAILURE);
            
        }

        printf("und sowieso.\n");
        return(EXIT_SUCCESS );
    }
