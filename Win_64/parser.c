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
       int auxId, auxHoras, auxSueldo;
       char nombreAux[80];
       c = fscanf(pFile,"%d,%[^,],%d,%d\n",&auxId,nombreAux,&auxHoras);
            if(c == 4)
            {
                eEmpleado->id = auxId;
                eEmpleado->horasTrabajadas = auxHoras;
                eEmpleado->sueldo = auxSueldo;
                strcpy(eEmpleado->nombre, nombreAux);
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
    do{
       int c;
       int auxId, auxHoras, auxSueldo;
       char nombreAux[80];
       c = fscanf(pFile,"%d,%[^,],%d,%d\n",&auxId,nombreAux,&auxHoras);
            if(c == 4)
            {
                eEmpleado->id = auxId;
                eEmpleado->horasTrabajadas = auxHoras;
                eEmpleado->sueldo = auxSueldo;
                strcpy(eEmpleado->nombre, nombreAux);
            }
    while(!feof(pFile));
    return 1;
}
