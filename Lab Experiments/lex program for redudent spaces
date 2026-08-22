%{
#include <stdio.h>
%}

%%
[ \t\n]    ; 
. { printf("Token: %s\n", yytext); }
%%
int yywrap(void){}
int main() {
    yylex();
    return 0;
}
