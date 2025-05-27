grammar Calc;

WS : [ \t\r\n]+ -> skip ;

pstart
    : program												#ProgStart
    ;

program
    : (line SEP)* (EOF)?										#ExProgram
    ;

line
    : expr												#ExpressionLine
    ;

expr
    : IF LBRACKET expr RBRACKET LFBRACKET program RFBRACKET (ELSE LFBRACKET program RFBRACKET)?		#IfExpr
    | WHILE LBRACKET expr RBRACKET LFBRACKET program RFBRACKET						#WhileExpr
    | variable EQ expr											#EqExpr
    | oexpr												#OExpr
    ;

oexpr
    : BNOT oexpr											#BnotExpr
    | oexpr BEQ oexpr											#BeqExpr
    | oexpr BNEQ oexpr											#BneqExpr
    | oexpr BLT oexpr											#BltExpr
    | oexpr BRT oexpr											#BrtExpr
    | oexpr BLTE oexpr											#BlteExpr
    | oexpr BRTE oexpr											#BrteExpr
    | oexpr BOR oexpr											#BorExpr
    | oexpr BAND oexpr											#BandExpr
    | oexpr PLUS term											#AddExpr
    | oexpr MINUS term											#SubExpr
    | term												#TermExpr
    ;

variable
    : NAME												#VarName
    ;


term
    : term MUL factor           									#MulTerm
    | term DIV factor											#DivTerm
    | term MDIV factor											#MDivTerm
    | primary												#PrimaryTerm
    ;

primary
    : PLUS factor											#PlusPrimary
    | MINUS factor											#MinusPrimary
    | factor												#FactPrimary
    ;

factor
    : LBRACKET expr RBRACKET    									#BracketFactor
    | function												#FunctionFactor
    | number												#NumberFactor
    | variable												#VariableFactor
    ;

function
    : NAME LBRACKET (expr (COMMA expr)*)? RBRACKET  							#FunctionCall
    ;

number
    : INT												#IntNumber
    | INT DOT INT											#RealNumber
    ;

INT : [0-9]+ ;

IF : 'if' ;
ELSE : 'else' ;

WHILE : 'while' ;

EQ    : '=' ;

NAME : [a-zA-Z_][a-zA-Z0-9_]* ;

PLUS  : '+' ;
MINUS : '-' ;
MUL   : '*' ;
DIV   : '/' ;
MDIV  : '%' ;

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