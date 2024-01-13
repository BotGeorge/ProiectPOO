#include <iostream>
#include <vector>
#include <algorithm>
/*
// Singleton pentru operatii pe vector
template <typename T>
class SingletonOperatiiVector {
private:
    std::vector<T> vec;

    // Constructor privat pentru a împiedica crearea directă a instanței
    SingletonOperatiiVector() {}

public:
    // Metoda statică pentru a obține instanța singleton
    static SingletonOperatiiVector& getInstance() {
        static SingletonOperatiiVector instance;
        return instance;
    }

    // Metoda pentru afișarea vectorului
    void afiseazaVector() const {
        std::cout << "Vector: ";
        for (const T& value : vec) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }

    // Metoda pentru adaugarea unei valori la sfarsitul vectorului
    void adaugaLaSfarsit(const T& value) {
        vec.push_back(value);
    }

    // Metoda pentru calcularea sumei elementelor vectorului
    T calculeazaSuma() const {
        T suma = 0;
        for (const T& value : vec) {
            suma += value;
        }
        return suma;
    }

    // Metoda pentru sortarea crescatoare a vectorului
    void sorteazaVector() {
        std::sort(vec.begin(), vec.end());
    }

    // Metoda pentru gasirea celui mai mare element din vector
    T gasesteMaxim() const {
        if (vec.empty()) {
            std::cerr << "Vectorul este gol!" << std::endl;
            return T(); // Intoarce o valoare implicita pentru tipul T
        }
        return *std::max_element(vec.begin(), vec.end());
    }
};

// Functie sablon pentru efectuarea unei operatii pe vector folosind Singleton
template <typename T>
T efectueazaOperatiePeVectorCuSingleton() {
    // Obține instanța SingletonOperatiiVector
    auto& singletonOperatii = SingletonOperatiiVector<T>::getInstance();

    // Apelarea metodelor
    singletonOperatii.afiseazaVector();
    return singletonOperatii.calculeazaSuma();
}

int main() {
    // Adaugăm elemente utilizând Singleton
    SingletonOperatiiVector<int>::getInstance().adaugaLaSfarsit(1);
    SingletonOperatiiVector<int>::getInstance().adaugaLaSfarsit(2);
    SingletonOperatiiVector<int>::getInstance().adaugaLaSfarsit(3);

    // Apelarea metodelor
    std::cout << "Suma: " << efectueazaOperatiePeVectorCuSingleton<int>() << std::endl;

    return 0;
}
*/