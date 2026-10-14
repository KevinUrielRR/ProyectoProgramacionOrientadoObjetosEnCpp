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
        float vueloVelocidadMaxima = 0.0;
        double tamanioCentimetros = 0.0;
        int totalMaximoPpasajeros = 0;
        int motores = 0;
};

#endif // AEREONAVES_H
