#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "arraylist.h"

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

LINE addLine(LINE al, LINE new){
    
    if(getLineNext(al) != NULL){
        al = setLineNext(al, addLine(getLineNext(al), new));
        return al;
    }
    
    al = setLineNext(al, new);
    
    return al;
}

void printLine(LINE al){    
    
     do{
        switch( getLineType(al) ){
            case 1:
                printf(" [ %d INT    ] \t%d\n",getLineType(al), getLineValue(al));
                break;
            case 2:
                printf(" [ %d FLOAT  ] \t%d\n",getLineType(al), getLineValue(al));
                break;
            case 3:
                printf(" [ %d DOUBLE ] \t%d\n",getLineType(al), getLineValue(al));
                break;
            case 4:
                printf(" [ %d CHAR   ] \t%c\n",getLineType(al), getLineValue(al));
                break;
            case 5:
                printf(" [ %d STRING ] \t%s\n",getLineType(al), getLineValue(al));
                break;
        }
        
        al = getLineNext(al);
    }while(al != NULL);
    
}

int getLineSize(LINE al){
    
    int cont = 0;
    
    do{
        cont++;
        al = getLineNext(al);
    }while(al != NULL);
    
}

LINE clearLine(LINE al){
    
    if(getLineNext(al) != NULL){
        clearLine(getLineNext(al));
    }
    
    memset(al, 0, sizeof( getLineSizeOf() ));
    
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