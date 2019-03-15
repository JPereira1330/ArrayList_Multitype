#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "typeline.h"
#include "arraylist.h"

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