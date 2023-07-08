#include <stdio.h>
int main ( )
{
    char s [ 1000 ] ;
    scanf ( "%[^n]s" , s ) ;
    int sum = 0 ; 
    for ( int  i = 0 ; s [ i ] != 0 ; i++ )
    {
        if ( s [ i ] >=48 && s [ i ] <= 57 )
        {
            sum = sum +  ( s [ i ] - '0' ) ;
        }
    }
    printf ( "%d" , sum ) ; 
}