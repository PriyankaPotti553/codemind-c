#include <stdio.h>
int main ( )
{
    char s [ 100 ] , b [ 100 ] ;
    scanf ( "%s" , s ) ;
    for ( int i = 0 ; s [ i ] != 0 ; i++ )
    {
        if ( s [ i ] == '.' )
        {
            printf ( "[.]" ) ;
        }
        else
        {
            printf ( "%c" , s [ i ] ) ;
        }
    }
}