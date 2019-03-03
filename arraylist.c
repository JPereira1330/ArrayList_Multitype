#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "type_line.h"
#include "arraylist.h"

LINE new_arraylist(){
    
    LINE al;
    
    al = (LINE) malloc( sizeof(al) );
    
    if( al == NULL ){
        return NULL;
    }
    
    memset(al, 0, sizeof(al));
    
    return al;
}

LINE add_arraylist( LINE al, void* valor, int type ){
    
    if( al->next != NULL ){
        al->next = add_arraylist(al->next, valor, type);
    }

    al->next = new_arraylist();
    al->next->valor = valor;
    al->next->type = type;
    al->next->next = NULL;
    
    return al;
}

LINE get_arraylist ( LINE al, int pos ){
    
    void *value;
    
    for(int i = 0; i < pos; i++){
        value = get_arraylist(al->next, pos);
    }
    
    return value;
}

void print_arraylist ( LINE al ){
    
    do{
        switch( al->type ){
            case 1:
                printf(" [ INT ] \t%d", al->valor);
                break;
            case 2:
                printf(" [ FLOAT ] \t%d", al->valor);
                break;
            case 3:
                printf(" [ DOUBLE ] \t%d", al->valor);
                break;
            case 4:
                printf(" [ CHAR ] \t%c", al->valor);
                break;
            case 5:
                printf(" [ STRING ] \t%s", al->valor);
                break;
        }
        
        al = al->next;
    }while(al->next != NULL);
    
}

LINE clear_arraylist( LINE al ){
    
    if( al->next != NULL ){
        return clear_arraylist(al->next);
    }
    
    al->next = NULL;
    al->type = NULL;
    al->valor = NULL;
    
    return al;
}

LINE erase_arraylist( LINE al ){
    
    if( al->next != NULL ){
        return erase_arraylist(al->next);
    }
    
    memset(al, 0, sizeof(al));
    return 0;
}
