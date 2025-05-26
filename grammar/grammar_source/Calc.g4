grammar Calc;

WS : [ \t\r\n]+ -> skip ;

program
    : (line SEP)* EOF					#ExProgram
    ;

line
    : expr						#ExpressionLine
    ;

expr
    : expr PLUS term					#AddExpr
    | expr MINUS term					#SubExpr
    | term						#TermExpr
    ;

term
    : term MUL factor           			#MulTerm
    | term DIV factor					#DivTerm
    | primary						#PrimaryTerm
    ;

primary
    : PLUS factor					#PlusPrimary
    | MINUS factor					#MinusPrimary
    | factor						#FactPrimary
    ;

factor
    : LBRACKET expr RBRACKET    			#BracketFactor
    | function						#FunctionFactor
    | number						#NumberFactor
    ;

function
    : NAME LBRACKET (expr (COMMA expr)*)? RBRACKET  	#FunctionCall
    ;

number
    : INT						#IntNumber
    | INT DOT INT					#RealNumber
    ;

INT : [0-9]+ ;

NAME : [a-zA-Z_][a-zA-Z0-9_]* ;

PLUS  : '+' ;
MINUS : '-' ;
MUL   : '*' ;
DIV   : '/' ;

DOT   : '.' ;
COMMA : ',' ;

LBRACKET : '(' ;
RBRACKET : ')' ;

SEP : ';' ;