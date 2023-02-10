#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ( int argc, char *argv[] )
{

    int **sptr;

    int num = 3;
    int i, j;

    sptr = malloc (sizeof (int *) * num);

    for (i = 0; i < num; i++) {
        sptr [i] = malloc (sizeof(int) * 4);
    }

    for (i = 0; i < num; i++) {
        for (j = 0; j < 4; j++) {
            sptr [i][j] = i * j + num;   // Removed sptr[i][j] as it has no intial value
        }
    }

    for (i = 0; i < num; i++) {
        for (j = 0; j < 4; j++) {
            printf ("%d \n", sptr [i][j]);
        }
    }

for (i=0; i<num ; i++)
{
  free(sptr[i]);     // we have to free two mallocs memory was dynmaically allocated in the beginning
}
  free(sptr);

    return 0;
}
