#ifndef FUNCIONES_H
#define FUNCIONES_H

struct Producto {
    char nombre[50];
    int cantidad;
    float precio;
};

struct Factura {
    char nombre[20];
    int cedula;
    int numProductos;
    struct Producto productos[10];
    float total;
};

int menu();
void saveFactura(struct Factura *factura);
void leerCadena(char *cadena, int num);
void createFactura();
void readFactura();
void editarFactura(int cedula); // Nueva función
void buscarFactura(const char *busqueda); // Nueva función

#endif