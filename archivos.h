//
// Created by COTYS on 1/6/2023.
//
#include <iostream>
#ifndef PROYECTOFINAL_ARCHIVOS_H
#define PROYECTOFINAL_ARCHIVOS_H

using namespace std;

class archivos : public Clientes {
private:
    int num_cliente;
public:

    archivos();
    archivos(int _num);

    void setNum_cliente(int _num);
    int getNum_cliente();

    void GenerarArchClientes();
    void GenerarArchTransaccciones();
};


#endif //PROYECTOFINAL_ARCHIVOS_H
