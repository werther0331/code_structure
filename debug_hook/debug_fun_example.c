#include <stdio.h>


struct st_t 
{
    int a;
    char b;
    float c;
    char *d;
} st_test ;

/**
 * dump all the important struct.
 * Called by gdb
 * After run the program and stop at break,
 * the command 'call debug_dump()' will call the function
 * and dump the struct info
 */
void debug_dump()
{
    fprintf( stdout, " struct st_test --> a: %d\n", st_test.a );
    fprintf( stdout, "                --> b: %c\n", st_test.b ? st_test.b : " " );
    fprintf( stdout, "                --> c: %f\n", st_test.c );
    fprintf( stdout, "                --> d: %s\n", st_test.d ? st_test.d : "NULL");
}

int main ( int argc, char ** argv )
{
    st_test.a = 1;
    st_test.b = '2';
    st_test.c = 3.0;

    return 0;
}
