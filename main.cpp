// queue::push/pop

#include <iostream>
#include <list>
#include <fstream>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include "Planeta.h"
#include "Evaluador.h"
#include "NodoBinario.h"

using namespace std;

//Escribe los datos del objeto mascota dado en un archivo binario con el nombre dado en la posicion dada
//Nota: Se deben poder agregar varias mascotas en un solo archivo
void escribir(string nombre_archivo, Planeta*planeta, int posicion)
{
ofstream out(nombre_archivo.c_str());
  out.seekp(0,ios::end);
//  arr[planeta]
//  out.write((*posicion)->nombre.c_str(),10);
//  out.write((char*)&(*posicion)->habitantes,4);
//  out.write((char*)&(*posicion)->diametro,1);
//  out.write((*posicion)->categoria,1);




}

//Devuelve una mascota previamente escrita (con la funcion escribir()) en un archivo binario con nombre dado en la posicion dada
//Nota: Se deben poder leer varias mascotas de un solo archivo
Planeta* leer(string nombre_archivo, int posicion)
{
    Planeta *p = new Planeta("", -1, -1.0, ' ');
    return p;
}

//Devuelve el primer valor fue ingresado en mi_pila (dada)
//Nota: devuelve el valor mas viejo
string getFondo(stack<string> mi_pila)
{
    string resultado;
    while(mi_pila.empty()==false){
    resultado=mi_pila.top();
    mi_pila.pop();
    }

    return resultado;
}

//Devuelve el ultimo valor que fue ingresado en mi_cola (dada)
//Nota: devuelve el valor mas nuevo
char getUltimo(queue<char> mi_cola)
{
    char resultado;
    while(mi_cola.empty()==false){
    resultado=mi_cola.front();
    mi_cola.pop();
    }
    return resultado;
}

//Dado una lista, devuelve un vector que contenga los datos de la lista en el mismo orden
vector<int> convertirAVector(list<int> mi_lista)
{
    vector<int> mi_vector;
    for(std::list<int>::iterator i=mi_lista.begin(); i!=mi_lista.end(); i++){
    mi_vector.push_back(*i);
    }

    return mi_vector;
}

//Dado un numero, devuelve un mapa que contenga su tabla de multiplicacion
//Ejemplo:
//Dado num = 5
//Devuelve el siguiente mapa
//{1=>5,2=>10,3=>15,4=>20,5=>25,6=>30,7=>35,8=>40,9=>45,10=>50}
map<int,int> getTabla(int num)
{
    map<int,int> mi_mapa;
   // for(std::map<int,int>::iterator i=mi_mapa.begin(); i!=mi_mapa.end(); i++){
    //for(int i=0;i<11;i++){
//    int multiplicacion=num*(*i);
//    mi_mapa.insert(i,multiplicacion);
  //  }
    return mi_mapa;
}

//Dado un arbol con raiz dada, devuelve un set que contenga todos los valores almacenados en el arbol
//Nota los valores estan almacendados en el atributo valor en la clase NodoBinario
set<string> getValores(NodoBinario* raiz)
{
    set<string> mi_set;
    string  valores= " ";
//if (raiz!=NULL){
//mi_set.insert(raiz->valor);
//string x=getValores(raiz->hijo_der);
//mi_set.insert(x);
//string y=getValores(raiz->hijo_der);
//mi_set.insert(y);
//}

    return mi_set;
}

//Dado un arbol con raiz dada, busca el nodo que contenga el valor buscado (dado) y lo reemplaza con la variable reemplazo (dada)
//Nota los valores estan almacendados en el atributo valor en la clase NodoBinario
void buscarYReemplazar(NodoBinario* raiz, string buscado, string reemplazo)
{
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}

