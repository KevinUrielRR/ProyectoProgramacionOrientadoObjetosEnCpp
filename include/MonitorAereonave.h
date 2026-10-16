#ifndef MONITORAEREONAVES_H
#define MONITORAEREONAVES_H


class MonitorAereonave
{
    public:
        MonitorAereonave();
        MonitorAereonave(float pesoKg, float vueloVelocidadActual, float vueloVelocidadMaxima, double tamanioCentimetros, int totalMaximoPasajeros, int motores, std::string color, std::string nombre, std::string modelo, std::string marca);
        
        void mostrarDatos();
        
        std::string getTipoVelocidad();
        std::string getTipoMotor();
        std::string getModelo();
        std::string getColor();
        std::string getNombre();
        std::string getMarca();
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
};

#endif // MONITORAEREONAVES_H
