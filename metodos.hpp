#include "clases.hpp"

//* LIMPIAR CONSOLA
void clear()
{
    cout << "\x1B[2J\x1B[H";
}

//* LIENZO
void lienzo(EsFigura *figura)
{
    figura->imprimir();
}

//* FORMA
int EsFigura::getX() {}
int EsFigura::getY() {}
void EsFigura::setTipo(int) {}
int EsFigura::getTipo() {}
void EsFigura::imprimir() {}

//* CUADRADO
Cuadrado::Cuadrado(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Cuadrado::getX()
{
    if (this->x < 0)
    {
        this->x = 0;
    }
    else if (this->x > 30)
    {
        this->x = 30;
    }
    return x;
}

int Cuadrado::getY()
{
    if (this->y < 0)
    {
        this->y = 0;
    }
    else if (this->y > 30)
    {
        this->y = 30;
    }
    return y;
}

void Cuadrado::setTipo(int tipo)
{
    this->tipo = tipo;
}

int Cuadrado::getTipo()
{
    if (this->tipo < 1)
    {
        tipo = 1;
    }
    else if (this->tipo > 2)
    {
        tipo = 2;
    }
    return tipo;
}

void Cuadrado::setSize(int size)
{
    this->size = size;
}
int Cuadrado::getSize()
{
    if (this->size < 2)
    {
        this->size = 2;
    }
    else if (this->size > 30)
    {
        this->size = 30;
    }
    return size;
}

void Cuadrado::imprimir()
{
    char desplazamiento;
    while ((desplazamiento = getchar()) != 'f')
    {
        clear();
        cout << "Tamano:" << this->size << endl;
        cout << "Cordenada X:" << this->x << endl;
        cout << "Cordenada Y:" << this->y << endl;
        cout << endl;
        cout << "Desplazar: w - Arriba" << endl
             << "           s - Abajo" << endl
             << "           d - Derecha" << endl
             << "           a - Izquierda" << endl
             << "           f - Volver" << endl;
        cout << endl;

        switch (desplazamiento)
        {
        case 'w':
            y--;
            break;
        case 's':
            y++;
            break;
        case 'a':
            x--;
            break;
        case 'd':
            x++;
            break;
        }
        for (int s = 0; s <= getY(); s++) // Movimiento en Y (s = Saltos de linea)
        {
            cout << endl;
        }
        for (int f = 0; f < getSize(); f++) // Filas (f =  filas)
        {
            for (int e = 0; e < getX(); e++) // Movimiento en x (e = espacios)
            {
                if (f < getSize())
                {
                    cout << " ";
                }
            }
            for (int c = 0; c < getSize(); c++) // Columnas (c = columnas)
            {
                if (getTipo() == 1) // Con Relleno
                {
                    cout << " *";
                }
                else // Sin relleno
                {
                    if ((f == 0 || c == 0) || (f == (getSize() - 1)) || (c == (getSize() - 1)))
                    {
                        cout << "* ";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
            }
            cout << endl;
        }
    };
}

//* TRIANGULO
Triangulo::Triangulo(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Triangulo::getX()
{
    if (this->x < 0)
    {
        this->x = 0;
    }
    else if (this->x > 30)
    {
        this->x = 30;
    }
    return x;
}

int Triangulo::getY()
{
    if (this->y < 0)
    {
        this->y = 0;
    }
    else if (this->y > 30)
    {
        this->y = 30;
    }
    return y;
}

void Triangulo::setAltura(int altura)
{
    this->altura = altura;
}
int Triangulo::getAltura()
{
    if (this->altura < 2)
    {
        this->altura = 2;
    }
    else if (this->altura > 30)
    {
        this->altura = 30;
    }
    return altura;
}

void Triangulo::imprimir()
{
    char desplazamiento;
    while ((desplazamiento = getchar()) != 'f')
    {
        clear();
        cout << "Altura:" << this->altura << endl;
        cout << "Cordenada X:" << this->x << endl;
        cout << "Cordenada Y:" << this->y << endl;
        cout << endl;
        cout << "Desplazar: w - Arriba" << endl
             << "           s - Abajo" << endl
             << "           d - Derecha" << endl
             << "           a - Izquierda" << endl
             << "           f - Volver" << endl;
        cout << endl;

        switch (desplazamiento)
        {
        case 'w':
            y--;
            break;
        case 's':
            y++;
            break;
        case 'a':
            x--;
            break;
        case 'd':
            x++;
            break;
        }
        for (int s = 0; s <= getY(); s++) // Movimiento en Y (s = Saltos de linea)
        {
            cout << endl;
        }
        for (int f = 0; f < getAltura(); f++) // Filas (f =  filas)
        {
            for (int e = 0; e < getX(); e++) // Movimiento en x (e = espacios)
            {
                if (f < getAltura())
                {
                    cout << " ";
                }
            }
            for (int c = 0; c < f; c++) // Columnas (c = columnas)
            {
                cout << "* ";
            }
            cout << "*" << endl;
        }
        cout << endl;
    };
}

//* ROMBO
Rombo::Rombo(int x, int y)
{
    this->x = x;
    this->y = y;
}

int Rombo::getX()
{
    if (this->x < 0)
    {
        this->x = 0;
    }
    else if (this->x > 30)
    {
        this->x = 30;
    }
    return x;
}

int Rombo::getY()
{
    if (this->y < 0)
    {
        this->y = 0;
    }
    else if (this->y > 30)
    {
        this->y = 30;
    }
    return y;
}

void Rombo::setDiametro(int diametro)
{
    this->diametro = diametro;
}

int Rombo::getDiametro()
{
    if (this->diametro < 2)
    {
        this->diametro = 2;
    }
    else if (this->diametro > 30)
    {
        this->diametro = 30;
    }
    return diametro;
}

void Rombo::imprimir()
{
    clear();
    char desplazamiento;
    while ((desplazamiento = getchar()) != 'f')
    {
        clear();
        cout << "Altura:" << this->diametro << endl;
        cout << "Cordenada X:" << this->x << endl;
        cout << "Cordenada Y:" << this->y << endl;
        cout << endl;
        cout << "Desplazar: w - Arriba" << endl
             << "           s - Abajo" << endl
             << "           d - Derecha" << endl
             << "           a - Izquierda" << endl
             << "           f - Volver" << endl;
        cout << endl;

        switch (desplazamiento)
        {
        case 'w':
            y--;
            break;
        case 's':
            y++;
            break;
        case 'a':
            x--;
            break;
        case 'd':
            x++;
            break;
        }
        for (int s = 0; s <= getY(); s++) // Movimiento en Y (s = Saltos de linea)
        {
            cout << endl;
        }
        for (int f = 0; f < getDiametro(); ++f) // Filas (f =  filas) (- a +)
        {
            for (int e = 0; e < getX() + getDiametro() - f - 1; e++) // Movimiento en x (e = espacios)
            {
                cout << " ";
            }
            for (int c = 0; c < 2 * f + 1; ++c) // Columnas
            {
                cout << "*";
            }
            cout << endl;
        }
        for (int f = getDiametro() - 2; f >= 0; --f) // Filas (f =  filas) (+ a -)
        {
            for (int e = 0; e < getX() + getDiametro() - f - 1; e++) // Movimiento en x (e = espacios)
            {
                cout << " ";
            }
            for (int c = 0; c < 2 * f + 1; ++c) // Columnas
            {
                cout << "*";
            }
            cout << endl;
        }
    };
}

//* MENU
Menu::Menu()
{
    int opc = 0;
    int x = 0;
    int y = 0;
    int tipo = 0;
}

void Menu::imprimir()
{
    do
    {
        clear();
        cout << "1- Cuadrado" << endl;
        cout << "2- Triangulo" << endl;
        cout << "3- Rombo" << endl;
        cin >> opc;

        inputManager(opc);

        cout << "0- Reiniciar" << endl;
        cout << "1- Terminar" << endl;
        cin >> opc;
    } while (opc == 0);
}

void Menu::inputManager(int opc)
{
    switch (opc)
    {
    case 1:
    {
        clear();
        cout << "Cuadrado" << endl;
        cout << "Ingresa el tamano del cuadrado" << endl;
        cin >> size;
        clear();

        cout << "Ingresa el tipo de figura:" << endl;
        cout << endl;
        cout << "1- Rellena" << endl;
        cout << "2- Hueca" << endl;
        cin >> tipo;
        clear();

        cout << "Ingresa la coordenada X" << endl;
        cin >> x;
        cout << "Ingresa la cordenada Y" << endl;
        cin >> y;
        clear();

        Cuadrado c = Cuadrado(x, y);
        c.setSize(size);
        c.setTipo(tipo);
        lienzo(&c);
    }
    break;

    case 2:
    {
        clear();
        cout << "Triangulo" << endl;
        cout << "Ingresa la altura del triangulo" << endl;
        cin >> altura;
        clear();

        cout << "Ingresa la coordenada X" << endl;
        cin >> x;
        cout << "Ingresa la cordenada Y" << endl;
        cin >> y;
        clear();

        Triangulo t = Triangulo(x, y);
        t.setAltura(altura);
        lienzo(&t);
    }
    break;
    case 3:
    {
        clear();
        cout << "Rombo" << endl;
        cout << "Ingresa el diametro del rombo" << endl;
        cin >> diametro;
        clear();

        cout << "Ingresa la coordenada X" << endl;
        cin >> x;
        cout << "Ingresa la cordenada Y" << endl;
        cin >> y;
        clear();

        Rombo r = Rombo(x, y);
        r.setDiametro(diametro);
        lienzo(&r);
    }
    break;
    default:
        cout << "La opcion ingresada es incorrecta" << endl;
        break;
    }
}

//* PROGRAMA
void Programa::run()
{
    Menu m;
    m.imprimir();
}