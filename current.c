#include <stdio.h>

enum { SIZE = 10000 };

int i = 0;
double a[SIZE][SIZE];
const double b[SIZE][SIZE];
const double c[SIZE][SIZE];

int main( int argc, char **argv )
{
    int j;
    const double *b_ptr = (const double *) b;
    const double *c_ptr = (const double *) c;
    double *a_ptr = (double *) a;
    
    for(j = 0; j < SIZE; ++j) {
        for(i = 0; i < SIZE; ++i) {
            *a_ptr++ = *b_ptr++ + *c_ptr++;
        }
    }
    return 0;
}
