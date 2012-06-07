/*
Program  : trlowup.c
Comments : translate lower case characters into upper case ones.
 */

#include <stdio.h>
#include <ctype.h>

char trlowup(char);

int main(){
    char c;

    while( (c=getchar()) != EOF )
        putchar( trlowup(c) );
    return(0);
}

char trlowup( char c ){
    if ( 'a' <= c && c <= 'z' )
        return( c-'a'+'A' );
    else
        return( c );
}
