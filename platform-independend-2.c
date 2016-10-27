#include <stdio.h>

enum { SIZE = 10000 };

int i = 0;
double a[SIZE][SIZE];
const double b[SIZE][SIZE];
const double c[SIZE][SIZE];

int main( int argc, char **argv )
{
    int j;
    const size_t diff_a_b = (double *) b - (double *) a;
    const size_t diff_a_c = (double *) c - (double *) a;
    double *a_ptr = (double *) a;
    
    for(j = 0; j < SIZE; ++j) {
        a_ptr = ((double *) a) + j;
                
        for(i = 0; i < SIZE; ++i) {
            *a_ptr = *(a_ptr + diff_a_b) + *(a_ptr + diff_a_c);
            a_ptr += SIZE;
        }
    }
    return 0;
}
