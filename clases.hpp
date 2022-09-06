#include <iostream>
using namespace std;

//* Figura
class EsFigura
{
public:
    virtual int getX();
    virtual int getY();
    virtual void setTipo(int);
    virtual int getTipo();
    virtual void imprimir();
};

class Cuadrado : public EsFigura
{
private:
    int tipo,
        x,
        y,
        size;

public:
    Cuadrado(int, int);
    int getX();
    int getY();
    void setTipo(int);
    int getTipo();
    void setSize(int);
    int getSize();
    void imprimir();
};

//* Triangulo
class Triangulo : public EsFigura
{
private:
    int x,
        y,
        altura;

public:
    Triangulo(int, int);
    int getX();
    int getY();
    void setAltura(int);
    int getAltura();
    void imprimir();
};

//* Rombo
class Rombo : public EsFigura
{
private:
    int x,
        y,
        diametro;

public:
    Rombo(int, int);
    int getX();
    int getY();
    void setDiametro(int);
    int getDiametro();
    void imprimir();
};

//* Menu
class Menu
{
private:
    int opc,
        x,
        y,
        tipo,
        size,
        altura,
        diametro;

public:
    Menu();
    void imprimir();
    void inputManager(int opc);
};

//* Programa
class Programa
{
private:
public:
    void run();
};

/*
//! menu y opciones
class ImputManager
{
private:
    int opc,
        x,
        y,
        tipo,
        size,
        altura,
        diametro;

public:
    ImputManager();
    void menu();
    void opciones(int opc);
};
*/