grammar Calc;

program
    : (line SEP)* EOF		#ExProgram
    ;

line
    : expr			#ExpressionLine
    ;

expr
    : expr PLUS term		#AddExpr
    | expr MINUS term		#SubExpr
    | term			#TermExpr
    ;

term
    : term MUL INT		#MulTerm
    | term DIV INT		#DivTerm
    | INT			#IntTerm
    ;

INT : [0-9]+ ;

PLUS  : '+' ;
MINUS : '-' ;
MUL   : '*' ;
DIV   : '/' ;

SEP : ';' ;

WS : [ \t\r\n]+ -> skip ;