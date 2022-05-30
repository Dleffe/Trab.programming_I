/* 
FILE: number.c
TITLE: Trab. Programming I
SUBMITED BY: Augusto Daleffe , Milton Pacheco
    All code is my own except where credited to others. 
FOR COURSE: Programming I
DUE DATE: May 29, 2022

PURPOSE:
This programm will calculate the resul of an expression based on
what number the user typed. 

OVERRAL METHOD: 
the list of general tasks is:
1. The user type an entire number.
2. The program performs the expression: 2x+5
3. If the result of it is less than 0, the program performs 
expression:  2*(y*y)-(3*y)+7.
    Else the program performs the task: 4*(y*y)+(5*y)-3.
4. Print the final result in your screen.  

FUNCTIONS:
1. printf : print in the screen. 
2. scanf  : storing data in the memory.
3. if/else: analyzes an condition.

INCLUDE FILES:
    stdio.h
    stdlib.h

DATA FILES:
1. three integers numbers, x; y; z.


*/
#include <stdio.h>// include the file.
#include <stdlib.h>// include the file.
int main()

{
    int x,y,z; //declaring variables.
    x=y=z=0;//initializing the variables.
    printf("\tO PROGRAMA MOSTRA O VALOR DE Z BASEADO NA VARIAVEL X:\n\n");//print on the screen.
    printf("DIGITE O VALOR DE X DESEJADO:");//print on the screen. 
    scanf("%d", &x);//storing data in the memory.
    
    y=2*x + 5;//performs the expression. 
    
    if(y<0)//analyzes the result.
    {
            z = 2*(y*y)-(3*y)+7;//performs the expression.
    }
    else //if the first condition don't adopted, performs this.
    {
        z= 4*(y*y)+(5*y)-3;//performs the expression.
    }
    printf("\tO RESULTADO É EQUIVAENTE A : %d\n\n", z);//print the final result.
    return 0;//ends the program.
}

