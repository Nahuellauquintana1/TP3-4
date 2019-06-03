#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "eEmpleado.h"


/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListeEmpleado LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path , LinkedList* pArrayListeEmpleado)
{
    fopen("C:\Users\alumno\Desktop\TP3\Win_64\data.csv", "r");
    return 1;
}

/** \brief Carga los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListeEmpleado LinkedList*
 * \return int
 *
 */
int controller_loadFromBinary(char* path , LinkedList* pArrayListeEmpleado)
{
    return 1;
}

/** \brief Alta de empleados
 *
 * \param path char*
 * \param pArrayListeEmpleado LinkedList*
 * \return int
 *
 */
int controller_addeEmpleado(LinkedList* pArrayListeEmpleado)
{
    return 1;
}

/** \brief Modificar datos de empleado
 *
 * \param path char*
 * \param pArrayListeEmpleado LinkedList*
 * \return int
 *
 */
int controller_editeEmpleado(LinkedList* pArrayListeEmpleado)
{
    return 1;
}

/** \brief Baja de empleado
 *
 * \param path char*
 * \param pArrayListeEmpleado LinkedList*
 * \return int
 *
 */
int controller_removeeEmpleado(LinkedList* pArrayListeEmpleado)
{
    return 1;
}

/** \brief Listar empleados
 *
 * \param path char*
 * \param pArrayListeEmpleado LinkedList*
 * \return int
 *
 */
int controller_ListeEmpleado(LinkedList* pArrayListeEmpleado)
{
    int i;
    for(i = 0; i < eEmpleado.id; i++)
    {

    }
    return 1;
}

/** \brief Ordenar empleados
 *
 * \param path char*
 * \param pArrayListeEmpleado LinkedList*
 * \return int
 *
 */
int controller_sorteEmpleado(LinkedList* pArrayListeEmpleado)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListeEmpleado LinkedList*
 * \return int
 *
 */
int controller_saveAsText(char* path , LinkedList* pArrayListeEmpleado)
{
    return 1;
}

/** \brief Guarda los datos de los empleados en el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListeEmpleado LinkedList*
 * \return int
 *
 */
int controller_saveAsBinary(char* path , LinkedList* pArrayListeEmpleado)
{
    return 1;
}

