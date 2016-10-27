#include <stdio.h>

enum { SIZE = 10000 };

int i = 0;
double a[SIZE][SIZE];
double b[SIZE][SIZE];
double c[SIZE][SIZE];

int main( int argc, char **argv )
{
    int j;
    for(j = 0; j < SIZE; ++j) {
        for(i = 0; i < SIZE; ++i) {
            a[i][j] = b[i][j]+c[i][j];
        }
    }
    return 0;
}
