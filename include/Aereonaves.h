#ifndef AEREONAVES_H
#define AEREONAVES_H


class Aereonaves
{
    public:
        Aereonaves();
        void volar();
        void despegar();
        void aterrizar();
        void transportarGente();
        
      
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
        virtual ~Aereonaves(); 

    protected:

    private:
        std::string color = "";
        std::string nombre = "";
        std::string modelo = "";
        std::string marca = "";
        //std::string tipo_motor = "";
        //std::string tipo_velocidad = "";
        float pesoKg = 0.0;
        float vueloVelocidadActual = 0.0;
        float vueloVelocidadMaxima = 0.0;
        double tamanioCentimetros = 0.0;
        int totalMaximoPasajeros = 0;
        int motores = 0;
};

#endif // AEREONAVES_H
