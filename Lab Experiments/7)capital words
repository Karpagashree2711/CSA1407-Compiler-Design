%{
%}
%%
[A-Z]+[\t\n] {printf("%s",yytext);}
. ;
%%
int main()
{
printf("enter string:");
yylex();
}
int yywrap(){
return 1;
}
