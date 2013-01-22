#include <stdio.h>
#include <string.h>

char * ReplaceAll( char *s, char old, char new );
char * Replace( char *str, char *orig, char *rep );

int main() {
    //char s[100] = { '\0' };
    //scanf( "%[^\n]", s );

    //char old = ' ';
    //char new = 0;
    //getchar();
    //scanf( "%c", &new );

    //printf( "the old string: %s\n", s );
    //char *res = ReplaceAll( s, old, new );
    //printf( "the new string: %s\n", res );

    puts( Replace( "ab cde fefdf :w", " ", "*" ) );
    return 0;
}

char * ReplaceAll( char *s, char old, char new ) {
    char *p = s;

    while ( *p ) {
        if ( *p == old ) {
            *p = new;
        }
        p++;
    }

    return s;
}

char * Replace( char *str, char *orig, char *rep ) {
   static char buffer[2048]; 
   char *p;

   if ( !( p = strstr( str, orig ) ) ) {
       return str;
   }

   strncpy( buffer, str, p - str );
   buffer[p - str] = '\0';
   sprintf( buffer + ( p - str ), "%s%s", rep, p + strlen( orig ) );

   return Replace( buffer, orig, rep );
}
