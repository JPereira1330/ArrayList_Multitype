/* 
 * File:   main.c
 * Author: José C. Pereira
 *
 * Created on 13 de Março de 2019, 00:13
 */

#include <stdio.h>
#include <stdlib.h>

#include "typeline.h"
#include "arraylist.h"
#include "file.h"

/*
 * 
 */
int main(int argc, char** argv) {
    
    LINE al1 = newLineObj( 4, TYPE_INT);
    LINE al2 = newLineObj( 3, TYPE_INT);
    LINE al3 = newLineObj( 2, TYPE_INT);
    LINE al4 = newLineObj( 1, TYPE_INT);
    
    al1 = addLine(al1, al2);
    al1 = addLine(al1, al3);
    al1 = addLine(al1, al4);

    printLine(al1);
    
    fileWrite(al1);
    
    printf("-=-=-=-");
    
    //LINE new = fileLoad();
    //printLine(new);
    
    return (EXIT_SUCCESS);
}

