#include <iostream>

#include "src/Aereonaves.cpp"

using namespace std;

int main()
{
    Aereonaves aereonave;
    aereonave.transportarGente();
    aereonave.despegar();
    aereonave.volar();
    aereonave.girarEnFormaDeRizo();
    aereonave.girarEnFormaDeVuelta();
    aereonave.aterrizar();
    //cout << "Hello world!" << endl;
    return 0;
}
