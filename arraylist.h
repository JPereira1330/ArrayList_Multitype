/* 
 * File:   arraylist.h
 * Author: José C. Pereira
 *
 * Created on 14 de Março de 2019, 08:58
 */

#ifndef ARRAYLIST_H
#define	ARRAYLIST_H

#ifdef	__cplusplus
extern "C" {
#endif

#define TYPE_INT 1
#define TYPE_FLOAT 2
#define TYPE_DOUBLE 3
#define TYPE_CHAR 4
#define TYPE_STRING 5
    
    typedef struct line *LINE;
    
    LINE newLine();
    
    LINE newLineObj(void *value, int type);
    
    LINE addLine(LINE al, LINE new);
    
    void printLine(LINE al);
    
    int getLineSize(LINE al);
    
    LINE clearLine(LINE al);
    
    int getLineSizeOf();
    
    int getLineType(LINE al);
    
    LINE setLineType(LINE al, int type);
    
    LINE getLineNext(LINE al);
    
    LINE setLineNext(LINE al, LINE next);
    
    void *getLineValue(LINE al);

    LINE setLineValue(LINE al, void *value);
    
#ifdef	__cplusplus
}
#endif

#endif	/* ARRAYLIST_H */