/*								*/
/* testparserr.c - written by Martin Gonda, 30-11-95            */
/* 								*/
/* code to test the parser - ie. get as many errors as possible */
/* generated by the parser.c module                             */
/*								*/ 


int a;

struct {int a,b;} b;

sizeof();		/* error: cannot determine size        	*/
sizeof(&);		/* error: must have lvalue		*/
sizeof(*);		/* Invalid argument to sizeof */
sizeof(int);
sizeof(int *[3]);

int f(int n)
{
    int n;              /*error: Redeclaration of parameter `n' */
    return n;
}


break;			/* error: misplaced break		*/
continue;		/* error: misplaced continue		*/ 
return;			/* error: misplaced return		*/
b.a = b.b + b.c;	/* error: illegal struct operation	*/

a = func(a);		/* error: undeclared identifier		*/
                        /* error: unknown type through output   */

int funcA(int a); { a; }  

funcA(a,a);		/* error: wrong number of arguments	*/

funcA; 			/* ????? */

switch (){} 		/* ????? */


switch (3) { 
  case 1: ;
  case 1: ;		/* error: duplicate case		*/
  case a:;		/* error: must be cont expr		*/
  case 3.24:;		/* error: must be int expr		*/
  case 3;		/* error: expected colon		*/
  default: ;		
  default: ;		/* error: duplicate default 		*/
}

if (){}			/* error: void expression		*/

do ; ();		/* error: missing while 		*/

return;			/* should be 'misplaced return stmnt' but isn't!! */
do ; while ();		/* error: void expression		*/
;
;;
case 3:			/* error: illegal label			*/
switch (a) {}

