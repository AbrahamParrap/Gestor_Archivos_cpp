#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

    // Funcion para crear un archivo
    void crearArchivo(string nombreArchivo) {
        ofstream archivo(nombreArchivo);
        if (archivo.is_open()) {
            cout << "Archivo " << nombreArchivo << " creado exitosamente." << endl;
        } else {
            cout << "Error al crear el archivo." << endl;
        }
        archivo.close();
    }

    //Funcion para editar un archivo
    void editarArchivo(string nombreArchivo){
        ifstream archivo(nombreArchivo);
        if (archivo.is_open()) {
            vector<string> lineas;
            string linea;
            while (getline(archivo, linea)) {
                lineas.push_back(linea);
            }
            archivo.close();

            //Mostrar el contenido del archivo
            for (string linea : lineas){
                cout << linea <<endl;
            }

            //Editar el contenido del archivo
            cout << "Indroduzca las nuevas lineas del archivo (termina una linea vacia):" << endl;
            lineas.clear();
            while (getline(cin, linea)) {
                if (linea.empty()) {
                    break;
                }
                lineas.push_back(linea);
            }

            //Sobreescribir  el archivo con el nuevo contenido
            ofstream archivoSalida(nombreArchivo);
            for (string linea : lineas) {
                archivoSalida << linea << endl;
            }
            archivoSalida.close();

            cout << "Archivo " << nombreArchivo << " editado exitosamente." << endl;
        } else {
            cout << "Error al abrir el archivo." << endl;
        }
    }

    //Funcion para eliminar un archivo
    void eliminarArchivo(string nombreArchivo){
    }

    //Funcion para mostrar informacion del archivo.
    void mostrarInformacionArchivo(string nombreArchivo){
    }