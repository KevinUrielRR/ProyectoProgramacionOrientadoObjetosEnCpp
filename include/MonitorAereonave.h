#ifndef MONITORAEREONAVES_H
#define MONITORAEREONAVES_H

using namespace std;

class MonitorAereonave
{
    public:
        MonitorAereonave();
        MonitorAereonave(float pesoKg, float vueloVelocidadActual, float vueloVelocidadMaxima, double tamanioCentimetros, int totalMaximoPasajeros, int motores, string color, string nombre, string modelo, string marca);
        
        void mostrarDatos();
        
        string getTipoVelocidad();
        string getTipoMotor();
        string getModelo();
        string getColor();
        string getNombre();
        string getMarca();
        float getPesoKg();
        float getVelocidadActual();
        float getVelocidadMaxima();
        double getTamanioCentimetros();
        int getTotalMaximoPasajeros();
        int getMotores();
        int getTotalActualPasajeros();
        
        void setVelocidadActual();
        void setPasajero();
        void setColor();
        void setModelo();
        void setMarca();
        void setNombre();
        
        virtual ~MonitorAereonave();

    protected:

    private:
        int ArregloEnteros[1];
};

#endif // MONITORAEREONAVES_H
