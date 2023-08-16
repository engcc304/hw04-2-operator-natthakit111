
#include <stdio.h>  // Corrected library name

int main() {
    int a = 0, b = 0 ;
    printf( "Please enter value (a b) : " ) ;
    scanf( "%d %d", &a, &b ) ; // Corrected placeholder names

    // Complete operator, and display all operator output
    printf( "a = %d , b = %d \n", a, b ) ;
    printf( "a + b = %d \n", a + b ) ;
    printf( "a - b = %d \n", a - b ) ;
    printf( "a * b = %d \n", a * b );  // Added missing semicolon
    printf( "a / b = %d (b must greater than 0)\n", b > 0 ? a / b : 0 ) ;
    printf( "a %% b = %d \n", a % b ) ;  // Escaped % symbol
    printf( "++a = %d \n", ++a ) ;
    printf( "a-- = %d \n", a-- ) ;
    printf( "a += 1 %d \n", a += 1 ) ;
    printf( "a += b %d \n", a += b ) ;
    printf( "a -= 1 %d \n", a -= 1 );  // Replaced ":" with ";"
    printf( "a -= b %d \n", a -= b ) ;
    printf( "a *= 1 %d \n", a *= 1 ) ;
    printf( "a *= b %d \n", a *= b ) ;
    printf( "a %%= 1 %d \n", a %= 1 ) ;
    printf( "a %%= b %d \n", a %= b ) ;
    printf( "a && b %d \n", a && b ) ;
    printf( "a || b %d \n", a || b ) ;
    return 0 ;
}