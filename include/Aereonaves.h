#ifndef AEREONAVES_H
#define AEREONAVES_H


class Aereonaves
{
    public:
        Aereonaves();
        virtual ~Aereonaves();

    protected:

    private:
        std::string color = "";
        std::string nombre = "";
        std::string modelo = "";
        //std::string tipo_motor = "";
        std::string tipo_velocidad = "";
        float peso_kg = 0.0;
        float velocidad_mph = 0.0;
        double tamaio_centimetros = 0.0;
        int total_pasajeros_pasajeros = 0;
        int motores = "";
};

#endif // AEREONAVES_H
