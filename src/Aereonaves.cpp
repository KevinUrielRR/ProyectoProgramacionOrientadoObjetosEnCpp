#include "../include/Aereonaves.h"

using namespace std;



Aereonaves::Aereonaves()
{
    //ctor
    cout<<"aereonave construida"<<endl;
}

void Aereonaves::volar()
{
	cout<<"aereonave esta volando"<<endl;
}

void Aereonaves::aterrizar()
{
	cout<<"aereonave aterrizando"<<endl;
}

void Aereonaves::despegar()
{
	cout<<"aereonave despegando"<<endl;
}

void Aereonaves::transportarGente()
{
	cout<<"aereonave transportando pasajeros"<<endl;
}

void Aereonaves::girarEnFormaDeRizo()
{
	cout<<"aereonave girando haciendo un rizo"<<endl;
}

void Aereonaves::girarEnFormaDeVuelta()
{
	cout<<"aereonave girando haciendo una vuelta"<<endl;
}

Aereonaves::~Aereonaves()
{
    cout<<"aereonave finalizada"<<endl;
     
  
}
