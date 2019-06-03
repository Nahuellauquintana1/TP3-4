#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "eEmpleado.h"

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListeEmpleado LinkedList*
 * \return int
 *
 */
int parser_eEmpleadoFromText(FILE* pFile , LinkedList* pArrayListeEmpleado)
{
    do{
       int c;
       int id, horas, sueldo;
       char nombre[80];
       c = fscanf(pFile,"%d,%[^,],%d,%d\n",&id,nombre,&horas,&edad);
            if(c == 4)
            {   //asigno

            }
    while(!feof(pFile));
    return 1;
}

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo binario).
 *
 * \param path char*
 * \param pArrayListeEmpleado LinkedList*
 * \return int
 *
 */
int parser_eEmpleadoFromBinary(FILE* pFile , LinkedList* pArrayListeEmpleado)
{

    return 1;
}
