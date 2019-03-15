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

    LINE addLine(LINE al, LINE new);
    
    void printLine(LINE al);
    
    int getLineSize(LINE al);
    
    LINE clearLine(LINE al);

#ifdef	__cplusplus
}
#endif

#endif	/* ARRAYLIST_H */

