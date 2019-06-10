#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"
#include "Controller.h"
#include "eEmpleado.h"

/****************************************************
    Menu:
     1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).
     2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).
     3. Alta de empleado
     4. Modificar datos de empleado
     5. Baja de empleado
     6. Listar empleados
     7. Ordenar empleados
     8. Guardar los datos de los empleados en el archivo data.csv (modo texto).
     9. Guardar los datos de los empleados en el archivo data.csv (modo binario).
    10. Salir
*****************************************************/


int main()
{
    int option = 0;
    system("Color F0");
    printf("Menu:\n1. Cargar los datos de los empleados desde el archivo data.csv (modo texto).\n2. Cargar los datos de los empleados desde el archivo data.csv (modo binario).\n3. Alta de empleado.\n4. Modificar datos de empleado.\n5. Baja de empleado.\n6. Listar empleados\n7. Ordenar empleados\n8. Guardar los datos de los empleados en el archivo data.csv (modo texto).\n9. Guardar los datos de los empleados en el archivo data.csv (modo binario).\n10. Salir\nIngrese una opcion: ");
    scanf("%d", &option);
    LinkedList* listaEmpleados = ll_newLinkedList();
    do{
        switch(option)
        {
            case 1:
                controller_loadFromText("data.csv",listaEmpleados);
                break;
            case 2:
                controller_loadFromBinary("data.csv",listaEmpleados);
                break;
            case 3:
                //controller_editeEmpleado(LinkedList*);//falta puntero al array eEmpleado
                break;
            case 4:
                //controller_editeEmpleado(LinkedList*);//falta puntero al array eEmpleado
                break;
            case 5:
                //controller_removeeEmpleado(LinkedList*);//falta puntero al array eEmpleado
                break;
            case 6:
                //controller_ListeEmpleado(LinkedList);//falta puntero al array eEmpleado
                break;
            case 7:
                //controller_sorteEmpleado(LinkedList*);//falta puntero al array eEmpleado
                break;
            case 8:
                //controller_saveAsText(char "data.csv", LinkedList*);//falta puntero al array eEmpleado
                break;
            case 9:
                //controller_saveAsBinary(char "data.csv", LinkedList*);//falta puntero al array eEmpleado
                break;
            case 10:
                printf("");
                break;
        }
    }while(option != 10);
    return 0;
}
