#ifndef MY_PROJECT_H
#define MY_PROJECT_H

/**
 * project_init: This function should be called before all
 * return 0 on seccess otherwise -1;
 */
 
int project_init();

/**
 * project_qmalloc : the wrap for malloc.
 * We will store all the malloc info and free these when
 * project_exit() is called.
 * return available pointer on success otherwise NULL.
 */

void * project_qmalloc( size_t size );

/**
 * project_qfree : the wrap for free.
 * We will free all the mem when project_exit is called.
 * So if you'd like to free the mem ,plese call this fun.
 */

void project_qfree( void * ptr );

/**
 * project_error: the info isn't available when calling successful.
 * return error string on error otherwise NULL.
 */

const char * project_error();

/**
 * project_interface1: 
 */

int project_interface1();

/**
 * project_interface2:
 */

int project_interface2();


/**
 * project_exit: free all malloc mem and clean. 
 */

void project_exit();

#endif 
