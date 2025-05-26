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
    : term MUL factor           #MulTerm
    | term DIV factor		#DivTerm
    | primary			#PrimaryTerm
    ;

primary
    : PLUS factor		#PlusPrimary
    | MINUS factor		#MinusPrimary
    | factor			#FactPrimary
    ;

factor
    : LBRACKET expr RBRACKET    #BracketFactor
    | number			#NumberFactor
    ;

number
    : INT			#IntNumber
    | INT DOT INT		#RealNumber
    ;

INT : [0-9]+ ;

PLUS  : '+' ;
MINUS : '-' ;
MUL   : '*' ;
DIV   : '/' ;

DOT   : '.' ;

LBRACKET : '(' ;
RBRACKET : ')' ;

SEP : ';' ;

WS : [ \t\r\n]+ -> skip ;