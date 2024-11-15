%%writefile ejemplo1.cpp
#include <iostream>
#include <omp.h>

using namespace std;
int main() {
    //directiva de compilador de OpenMP para
    //ejecutar 8 hilos de forma paralela
   #pragma omp parallel num_threads(8)  
    { 
        // se asigna el número de hilo a la variable id
        int id = omp_get_thread_num();
        //despliega en pantalla el número de hilo
        cout <<"Hola desde el hilo " <<id<< endl;
    } 
    return 0;
}
