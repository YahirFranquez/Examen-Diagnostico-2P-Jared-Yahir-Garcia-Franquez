#include <iostream>

class Animal {
public:
    Animal(const std::string& nombre) : nombre_(nombre) {}

    void comer() {
        std::cout << nombre_ << " está comiendo." << std::endl;
    }

    void dormir() {
        std::cout << nombre_ << " está durmiendo." << std::endl;
    }

private:
    std::string nombre_;
};

class Perro : public Animal {
public:
    Perro(const std::string& nombre, const std::string& raza) : Animal(nombre), raza_(raza) {}

    void ladrar() {
        std::cout << "Soy un perro de raza " << raza_ << "." << std::endl;
    }

private:
    std::string raza_;
};

int main() {

    Perro miPerro("Fido", "Labrador");

 
    miPerro.comer();
    miPerro.dormir();
    miPerro.ladrar();

    return 0;
}
