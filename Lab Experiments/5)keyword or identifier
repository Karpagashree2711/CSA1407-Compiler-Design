%{
#include<stdio.h>
%}
%%
[if|else|else if|for|while|do while|printf|scanf|float|int|break|continue|char|str|switch case|return]+ {printf("given is an keyword");}
.+[a-zA-z][A-z0-9]+ {printf("given is an indentifier");}
%%
int yywrap(){}
int main()
{
printf("\n enter value:");
yylex();
printf("\n");
return 0;
}
