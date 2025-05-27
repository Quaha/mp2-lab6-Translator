grammar Calc;

WS : [ \t\r\n]+ -> skip ;

program
    : (line SEP)* EOF					#ExProgram
    ;

line
    : expr						#ExpressionLine
    ;

expr
    : variable EQ expr					#EqExpr
    | BNOT expr						#BnotExpr
    | expr BEQ expr					#BeqExpr
    | expr BNEQ expr					#BneqExpr
    | expr BLT expr					#BltExpr
    | expr BRT expr					#BrtExpr
    | expr BLTE expr					#BlteExpr
    | expr BRTE expr					#BrteExpr
    | expr BOR expr					#BorExpr
    | expr BAND expr					#BandExpr
    | expr PLUS term					#AddExpr
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
    | variable						#VariableFactor
    ;

function
    : NAME LBRACKET (expr (COMMA expr)*)? RBRACKET  	#FunctionCall
    ;

variable
    : NAME						#VarName
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

EQ    : '=' ;

BAND : '&&';
BOR : '||';
BNOT : '!';

BEQ    : '==' ;
BNEQ   : '!=' ;
BLT    : '<'  ;
BRT    : '>'  ;
BLTE   : '<=' ;
BRTE   : '>=' ;

DOT   : '.' ;
COMMA : ',' ;

LBRACKET : '(' ;
RBRACKET : ')' ;

LFBRACKET : '{' ;
RFBRACKET : '}' ;

SEP : ';' ;