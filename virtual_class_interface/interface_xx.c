#include "interface_xx.h"

static int (*interface1)( struct interface_common * );
static int (*interface2)( struct interface_common * );

struct interface_xx_data 
{
    void map_ptr;
};

/*
struct interface_xx 
{
    struct interface_xx_data * data;
    int (*interface1)(void);
    int (*interface2)(void);
    void (*errstr)( int no, char * err );

};
*/

int init_xx( struct interface_common * xx )
{
    struct interface_xx_data * data = malloc( sizeof(struct interface_xx_data) );
    xx->data = (void *)(data);
    xx->fun1 = interface1;
    xx->fun2 = interface2;
    xx->errstr = NULL;

    return 0;
}

int (*interface1)( struct interface_common * xx )
{
    struct interface_xx_data * data = (struct interface_xx_data * )( xx->data );


    return 0;
}

int (*interface2)( struct interface_common * xx )
{
    struct interface_xx_data * data = (struct interface_xx_data * )( xx->data );
}

int exit_xx( struct interface_common * xx ) 
{
    if ( xx.data ) {
        free(xx.data);
        xx.data = NULL;
    }
    if ( xx.fun1 ) {
        xx.fun1 = NULL;
    }
    if ( xx.fun2 ) {
        xx.fun2 = NULL;
    }
}
