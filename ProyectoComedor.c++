#include <iostream>
using namespace std; 

struct supervisor{ //estructura supervisor (probablemente se debe incorporar como lista enlazada)
       
  char nombre[30];//arreglo para almacenar el nombre
  int orden_de_llegada;//orden de llegada para pedir los menus 
  char apellido[30];//arreglo para almacenar el apellido     
  char adt[30];//arregla para almacenar el area de trabajo 
  int nvj;//nivel jerarquico
  int cant;//cantidad de trabajadores a su cargo 
  struct empleado tasc[30];//trabajadores a su cargo(probablemente se debe incorporar como lista enlazada)

      
      
       
      };
      
 struct empleado{ //estructura supervisor (probablemente se debe incorporar como lista enlazada)
       
  int menu[3] = {1, 2, 3};//cual de los 3 menus tienen asignados(podriamos cambiarlo a una cadena de chars con los nombres de cada menu)
 
       

      
      
       
      };  
int main()
{
    std::cout<<"Hello World";
  
        
        
    return 0;
}