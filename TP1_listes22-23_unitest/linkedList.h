/**
 * @file linkedList.h
 * @brief Header file of linked list module
 */

#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include "valCell.h"

/** TO DO
 * @struct cell_t
 * @brief Data structure of the linked list's cell
 * 2 fields :
 *      - 'val' : value of a cell
 *      - 'next' : pointer to the next cell
 */

typedef struct cell_t cell_t;

struct cell_t{
    monom_t val;
    cell_t *next;
};


/** Example
 * @fn void LL_init_list(cell_t **adrHeadPt)
 * @brief Initialize a void list
 * @param [in, out] adrHeadPt address of head pointer of the list 
 */
void LL_init_list(cell_t **adrHeadPt);

/** TO DO
 * @brief create a new cell for linked list from its data 
 * @param [in] xxx address of the data
 * @return address of the new cell
 */
cell_t *LL_create_cell(monom_t* m1);

/** TO DO
 * @brief Insert a cell into a linked list at the given position
 * @param [in, out]  xxx address of previous pointer of the cell
 * @param [in]  xxx address of the cell to be added to the linked list
 */
void LL_add_cell(cell_t **adrCurPt, cell_t* adrNewCell);

/** TO DO
 * @brief Create a linked list from a file (in which the data is sorted)
 * @param [in, out] xxx address of head pointer of a linked list
 * @param [in] xxx name of a file containing the data for a linked list
 * @return head pointer of the linked list
 */
 cell_t **LL_create_list_fromFileName(cell_t **adrHeadPt, char *file);

/**
 * @brief Write the linked list to an output stream
 * @param [in] xxx file pointer of an output stream
 * @param [in] xxx head pointeur of a linked list
 * @param xxx fonction pointer for printing the data of a cell on an output stream
 */
// LL_save_list_toFile();

/** TO DO
 * @brief Save a linked list into a file
 * @param [in, out] xxx head pointer of a linked list
 * @param [in] xxx name of the backup file
 * @param xxx fonction pointer for writing the data of a cell to a output stream
 */
 // LL_save_list_toFileName();

/** TO DO
 * @brief Search a value in a linked list, and return the address of the previous pointer
 * @param [in] xxx address of the head pointer
 * @param [in] xxx address of the value to search
 * @param  xxx fonction pointer for comparison of two values
 * @return the address of the previous pointer
 */
 // LL_search_prev();

/** TO DO
 * @brief Delete a cell from a linked list
 * @param [in, out] xxx address of the previous pointer of the cell to delete
 */
 // LL_del_cell();


/** TO DO
 * @brief Free the memory location occupied by the cells of a linked list
 * @param [in, out] xxx address of head pointer of a linked list
 */
 // LL_free_list();


#endif