/* 
 * File:   main.c
 * Author: José C. Pereira
 *
 * Created on 24 de Fevereiro de 2019, 10:54
 */

#include <stdio.h>
#include <stdlib.h>

#include "type_line.h"
#include "arraylist.h"


int main(int argc, char** argv) {

    LINE arraylist;
    
    arraylist = new_arraylist();
    arraylist = add_arraylist(arraylist, 10, TYPE_INT);
    arraylist = add_arraylist(arraylist, '5', TYPE_CHAR);
    arraylist = add_arraylist(arraylist, "abcde", TYPE_STRING);
    print_arraylist(arraylist);
    
    return (EXIT_SUCCESS);
}

