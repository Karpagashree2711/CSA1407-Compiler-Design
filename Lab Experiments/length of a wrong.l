%{
  int counter = 0; 
%}
%% 
[a-zA-Z]+ {
  if (yyleng > counter) {
    counter = yyleng;
  }
} 
%%
int yywrap(){
return 1;
}  
int main() {
yylex();
printf("largest: %d", counter);
printf("\n");
}
