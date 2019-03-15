#include <stdio.h>
#include <stdlib.h>

#include "typeline.h"
#include "file.h"
#include "arraylist.h"

LINE fileLoad(){
    
    FILE *fp;
    
    if( (fp = fopen("arc.txt", "r+")) == NULL ){
        printf(" [ ERRO ] Não foi possivel abrir o arquivo. ");
        exit(1);
    }
    
    LINE al;
    
    fread(&al, getLineSizeOf(), 1, fp);
    
    return al;
}

void fileWrite(LINE array){
    
    FILE *fp = fopen("arc.txt", "w+");
    
    if( fp == NULL ){
        printf(" [ ERRO ] Não foi possivel abrir o arquivo. ");
        exit(1);
    }
    
    printf("%d", getLineValue(array));
    printf("%d", getLineType (array));
    
    int teste[] = {getLineValue(array),getLineType (array)};
    
    fwrite( &teste, sizeof(int), sizeof(teste), fp);
    
    
    /*
    if( fwrite( getLineType(array) , sizeof(int), sizeof(getLineType(array)), fp) != 1 ){
        printf(" [ ERRO ] Não foi possivel escrever no arquivo. ");
        fclose(fp);
        exit(1);
    }*/
    
    fclose(fp);
}