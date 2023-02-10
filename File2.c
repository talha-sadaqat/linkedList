#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ( )
{

    char *ptr;

    ptr = malloc ( sizeof(char)*10 );   // memeroy was allocatd hence we have to free it at the end
    strcpy ( ptr, "Ritu" );
    printf ( "%s (%p)\n\n", ptr, ptr );

    ptr = realloc ( ptr, sizeof(char)*20000 );
    printf ( "%s (%p)\n\n", ptr, ptr );

    ptr = realloc ( ptr, sizeof(char)*5 );   // memeroy was reallocated to 2 however RITU\0 has five digits hence we should multiply it by 5
    printf ( "%s (%p)\n", ptr, ptr );

    free(prt);

    return 0;

}
