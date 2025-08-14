#include <iostream>
#include <iomanip>


struct Dato{

    unsigned int Id;      
    char Nombre [50];    
    char Fecha_Nacimiento [11]; 
    int Notas [3];      
    char Curso [7];      
    unsigned short VTR;   
};


void Mostrar_Datos_Alumno(Dato* datos, int tamanio){

    /*
    *    Descripción: 
    *            Imprimir por consola los datos cargados en el parametro 'datos', mostrando los primeros 5 o menos en caso de que 'tamanio' sea menor a 5.
    *
    *    Parametros:
    *            Dato* datos: Puntero/arreglo que contiene los datos a querer mostrar.
    *            int tamanio: Tamaño del arreglo.
    *    
    *    Retorno:
    *            Función tipo void, no retorna nada.
    *    
    */
    
    std::cout << std::left 
                    << std::setw(8) << "ID" 
                    << std::setw(50) << "NOMBRE" 
                    << std::setw(12) << "CURSO" 
                    << std::setw(17) << "FECHA NAC." 
                    << std::setw(5) << "VTR" 
                    << std::endl;

    for (int i = 0; i < 5 && i < tamanio; i++) {

        std::cout << std::left
                    << std::setw(8) << datos[i].Id 
                    << std::setw(50) << datos[i].Nombre 
                    << std::setw(12) << datos[i].Curso 
                    << std::setw(17) << datos[i].Fecha_Nacimiento 
                    << std::setw(5) << datos[i].VTR 
                    << std::endl;
    }
}
