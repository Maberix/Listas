#include <iostream>
using namespace std;

class Nodo {
	//Atributos
	int dato; //char, float, string, objeto
	Nodo* enlace;//puntero..
public:
	//Constructor - inicializar los atributos
	Nodo(int dato)
	{
		this->dato = dato;
		enlace = NULL;//por que no apuntamos a ningun nodo
	}
	//getter and setter
	int getDato()
	{
		return dato;
	}
	void setDato(int dato)
	{
		this->dato = dato;
	}
	Nodo* getEnlace()
	{
		return this->enlace;
	}
	void setEnlace(Nodo* enlace)
	{
		this->enlace = enlace;
	}
	void imprimir()
	{
		cout << "/-------------------\\" << endl;
		cout << "|Dato: " << dato << endl;
		cout << "|-------------------" << endl;
		cout << "|Enlace: " << enlace << endl;
		cout << "\\------------------/" << endl;
	}

	void buscar()
	{
	    cout<<dato<<endl;
	}

	void eliminar()
	{
	    cout<<enlace<<endl;
	}
};

class Lista {
	Nodo* inicio;
public:
	Lista()
	{
		this->inicio = NULL;
	}
	void Insertar(int dato)
	{
		Nodo* temp = new Nodo(dato);
		if (inicio == NULL)//lista vacia
		{
			inicio = temp;
		}
		else
		{
			Nodo* recorrido = this->inicio;
			while (recorrido->getEnlace() != NULL)
			{
				recorrido = recorrido->getEnlace();
			}
			recorrido->setEnlace(temp);
		}
	}
	void Imprimir()
	{
		int i = 1;
		Nodo* recorrido = inicio;
		cout << "Lista enlazada****************************" << endl;
		while (recorrido != NULL)
		{
			cout << "---> Nodo " << i++ << endl;
			recorrido->imprimir();
			recorrido = recorrido->getEnlace();
		}
		cout << "****************************" << endl << endl;
	}
	//Implementar la busqueda de un elemento en la lista enlazada
	//Si la encuentra tiene que imprimir la direcci?n de memor?a donde esta este elemento.
	//------------------------------------
	//Implementar la eliminaci?n de un nodo final
	//Implementar la eliminaci?n de un nodo inicio

	void Buscar()
	{
	    bool band = false;
	    int n;
		Nodo* recorrido = inicio;
		while ((recorrido != NULL) && (recorrido<=n))
		{
			if(recorrido->dato==n){
                band = true
			}
			recorrido = recorrido->getEnlace();
        }
        if(band=true){
            cout<<"Elemento "<<n<<" esta en la lista\n ";
        }
        else{
            cout<<"Elemento "<<n<<" NO esta en la lista\n ";
        }
	}

	void Eliminar()
	{
	    Nodo* elimina1 = inicio;
	    Nodo* elimina2 = inicio;
	    if(inicio != nullptr){
            while(elimina1->dato != nullptr)
            {
                elimina2=elimina1;
                elimina1=elimina1->dato;
            }

            if(elimina1 != elimina2)
            {
                elimina2->dato = nullptr;
                delete elimina1;
            }
	    }
	}
};

int main()
{
	Lista edades = Lista();
	edades.Insertar(20);
	edades.Imprimir();
	edades.Insertar(30);
	edades.Imprimir();/*
	edades.Insertar(21);
	edades.Imprimir();
	edades.Insertar(21);
	edades.Imprimir();
	edades.Insertar(24);
	edades.Imprimir();
	edades.Insertar(22);
	edades.Imprimir();
	edades.Insertar(33);
	edades.Imprimir();*/
	int n;
	cin >> n;

}
//int main()
//{
//	Nodo temp1 = Nodo(666);
//	cout << "Nodo temp1 Dato: " << temp1.getDato() << endl;
//	cout << temp1.getEnlace() << endl;
//
//	Nodo temp2 = Nodo(25555);
//	cout << "Nodo temp2 Dato: " << temp2.getDato() << endl;
//	cout << temp2.getEnlace() << endl;
//
//
//	////enlace de nodos
//	temp1.setEnlace(&temp2);
//	cout << "Despues de enlazar" << endl;
//	cout << "Nodo temp1 Dato: " << temp1.getDato() << endl;
//	cout << temp1.getEnlace() << endl;
//
//	cout << "Nodo temp2 Dato: " << temp2.getDato() << endl;
//	cout << temp2.getEnlace() << endl;
//}
