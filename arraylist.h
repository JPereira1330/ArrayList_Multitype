/* 
 * File:   arraylist.h
 * Author: José C. Pereira
 *
 * Created on 24 de Fevereiro de 2019, 11:00
 */

#ifndef ARRAYLIST_H
#define	ARRAYLIST_H

#ifdef	__cplusplus
extern "C" {
#endif

    /**
     * @brief Inicia uma nova lista
     * @return      Retorna NULL em caso de erro
     */
    LINE new_arraylist();
    
    /**
     * @brief Adiciona um novo valor na arraylist
     * @param type  O tipo do valor já pré-definido numa constante Ex: type_int
     * @return      A nova arraylist com o novo valor adicionado
     */
    LINE add_arraylist( LINE al, void* valor, int type );
    
    /**
     * 
     * @param arraylist
     */
    void print_arraylist ( LINE al );
    
    /**
     * @brief Retorna valor numa determinada posição ( 1ª Valor na posição 0 )
     * @return      o valor da posição informada
     */
    LINE get_arraylist ( LINE al, int pos );
    
    /**
     * @brief Deleta todos os valores da arraylist
     * @return      arraylist limpa (NULL)
     */
    LINE clear_arraylist( LINE al );
    
    /**
     * @brief Deleta todos os valores na arraylist e reseta da memoria
     * @return      arraylist limpa (NULL)
     */
    LINE erase_arraylist( LINE al );

#ifdef	__cplusplus
}
#endif

#endif	/* ARRAYLIST_H */