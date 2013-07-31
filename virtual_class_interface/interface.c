#include "interface.h"

#include "interface_xx.h"
#include "interface_yy.h"

static int project_errorno;

struct interface_common {
    void * data;
    int (*fun1)( struct interface_common * );
    int (*fun2)( struct interface_common * );
    void (*errstr)( int no, char * err );
};

static struct interface_common * xx = NULL;
static struct interface_common * yy = NULL;

static struct_array[2] = { xx, yy };

int project_init()
{
    xx = qmalloc( sizeof(struct interface_common) );
    yy = qmalloc( sizeof(struct interface_common) );

    if ( xx == NULL || yy == NULL ) {
        return -1;
    }

    init_xx( xx );
    init_yy( yy );



    return 0;
}

void * project_qmalloc( size_t size )
{
    
}

void project_qfree( void * ptr )
{

}

const char * project_error()
{

}

int project_interface1()
{

}

int project_interface2()
{

}

void project_exit()
{

}
