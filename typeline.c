#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "typeline.h"

struct line{
    void *value;
    int type;
    LINE next;
};

LINE newLine(){
    
    LINE al;
    
    al = (LINE) malloc( sizeof( getLineSizeOf() ) );
    
    if(al == NULL){
        return NULL;
    }
    
    memset(al, 0, sizeof( getLineSizeOf() ));
    
    return al;
}

LINE newLineObj(void *value, int type){
    
    LINE al = newLine();
    
    al->value = value;
    al->type = type;

    return al;
}

int getLineSizeOf(){
    return sizeof( struct line );
}

int getLineType(LINE al){
    return al->type;
}

LINE setLineType(LINE al, int type){
    al->type = type;
    return al;
}

LINE getLineNext(LINE al){
    return al->next;
}

LINE setLineNext(LINE al, LINE next){
    al->next = next;
    return al;
}

void *getLineValue(LINE al){
    return al->value;
}

LINE setLineValue(LINE al, void *value){
    al->value = value;
    return al;
}