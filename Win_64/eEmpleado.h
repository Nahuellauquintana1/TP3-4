#ifndef eEmpleado_H_INCLUDED
#define eEmpleado_H_INCLUDED
typedef struct
{
    int id;
    char nombre[128];
    int horasTrabajadas;
    int sueldo;
}eEmpleado;

eEmpleado* eEmpleado_new();
eEmpleado* eEmpleado_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr);
void eEmpleado_delete();

int eEmpleado_setId(eEmpleado* this,int id);
int eEmpleado_getId(eEmpleado* this,int* id);

int eEmpleado_setNombre(eEmpleado* this,char* nombre);
int eEmpleado_getNombre(eEmpleado* this,char* nombre);

int eEmpleado_setHorasTrabajadas(eEmpleado* this,int horasTrabajadas);
int eEmpleado_getHorasTrabajadas(eEmpleado* this,int* horasTrabajadas);

int eEmpleado_setSueldo(eEmpleado* this,int sueldo);
int eEmpleado_getSueldo(eEmpleado* this,int* sueldo);

#endif // eEmpleado_H_INCLUDED
