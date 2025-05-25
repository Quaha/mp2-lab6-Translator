grammar MyGrammar;

program
    : expr (SEP expr)* EOF
    ;

expr
    : INT
    ;

SEP : ';' ;
INT : [0-9]+ ;

WS : [ \t\r\n]+ -> skip ;