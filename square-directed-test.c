#include "square.h"
#include "ece2400-stdlib.h"
#include <stdio.h>
#include <stdlib.h>

void test_case_1_basic()
{
  printf("\n%s\n", __func__  );
  ECE2400_CHECK_INT_EQ( square( 2 ), 4 );
}

int main( int argc, char* argv[] )
{
  __n = ( argc == 1 ) ? 0 : atoi( argv[1] );

  if ( (__n <= 0) || (__n == 1) )
    test_case_1_basic();

  printf( "\n" );
  return __failed;
}
