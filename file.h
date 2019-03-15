/* 
 * File:   file.h
 * Author: José C. Pereira
 *
 * Created on 14 de Março de 2019, 11:12
 */

#ifndef FILE_H
#define	FILE_H

#ifdef	__cplusplus
extern "C" {
#endif

    LINE fileLoad();
    
    void fileWrite(LINE array);

#ifdef	__cplusplus
}
#endif

#endif	/* FILE_H */

