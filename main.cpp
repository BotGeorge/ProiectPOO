#include <iostream>
#include <vector>

using namespace std;

class Piesa {
private:
    vector<vector<int>> forma;
    int culoare;

public:
    Piesa(const vector<vector<int>>& forma, int culoare) : forma(forma), culoare(culoare) {}

    // Constructor de copiere
    Piesa(const Piesa& obiect)  {
        this->forma=obiect.forma;
        this->culoare=obiect.culoare;
    }

    // Operator= de copiere
    Piesa& operator=(const Piesa& other) {
        if (this != &other) {
            forma = other.forma;
            culoare = other.culoare;
        }
        return *this;
    }

    // Destructor
    ~Piesa()=default;
    // Potențial, eliberarea resurselor alocate dinamic

    friend ostream& operator<<(ostream& os, const Piesa& piesa) {
        os << "Piesa de culoare " << piesa.culoare;
        return os;
    }

    // Funcționalități specifice temei
    //  void rotirePiesa() {
    //      // Implementarea rotației piesei
    //  }
};

class TablaJoc {
private:
    vector<vector<int>> tabla;

public:

    TablaJoc(int rows, int cols) : tabla(rows, vector<int>(cols, 0)) {}

    // Constructor de copiere
    //TablaJoc(const TablaJoc& other)  {
    // this->tabla=other.tabla;
    //}

    // Operator= de copiere
    TablaJoc& operator=(const TablaJoc& other) {
        if (this != &other) {
            tabla = other.tabla;
        }
        return *this;
    }

    // Destructor
    ~TablaJoc() =default;
    // Potențial, eliberarea resurselor alocate dinamic

    friend ostream& operator<<(ostream& os, const TablaJoc& tablaJoc) {
        os << "Tabla de joc:";
        for (const auto& row : tablaJoc.tabla) {
            os << "\n";
            for (int cell : row) {
                os << cell << " ";
            }
        }
        return os;
    }

    // Funcționalități specifice temei
    // bool piesaIntraInTabla(const Piesa& piesa, int pozitieX, int pozitieY) {
    //     // Implementarea verificării dacă piesa poate intra în tabla de joc la poziția specificată
    //      return true;
    //  }

    //   void fixeazaPiesaInTabla(const Piesa& piesa, int pozitieX, int pozitieY) {
    //       // Implementarea fixării piesei în tabla de joc
    //   }

    //   void stergeLiniiComplete() {
    //       // Implementarea ștergerii liniilor complete din tabla de joc
    //   }
};

class JocTetris {
private:
    TablaJoc tabla;
    Piesa piesaCurenta;

public:
    JocTetris(int rows, int cols) : tabla(rows, cols), piesaCurenta({{1, 1, 1, 1}}, 1) {}

    // Constructor de copiere


    // Operator= de copiere
    JocTetris& operator=(const JocTetris& other) {
        if (this != &other) {
            tabla = other.tabla;
            piesaCurenta = other.piesaCurenta;
        }
        return *this;
    }

    // Destructor
    ~JocTetris() = default;
    // Potențial, eliberarea resurselor alocate dinamic

    friend ostream& operator<<(ostream& os, const JocTetris& joc) {
        os << "Jocul Tetris\n" << joc.tabla << "\nPiesa curenta: " << joc.piesaCurenta;
        return os;
    }

    // Funcționalități specifice temei
    void mutaPiesaInJos() {
        // Implementarea mișcării piesei în jos
    }

    // void mutaPiesaInStanga() {
    // Implementarea mișcării piesei la stânga
    //  }

    //  void mutaPiesaInDreapta() {
    // Implementarea mișcării piesei la dreapta
    // }

    void rotestePiesa() {
        // Implementarea rotației piesei
    }

    //  bool jocTerminat() {
    // Implementarea verificării dacă jocul s-a încheiat
    //     return false;
    // }
};

int main() {
    // Testarea jocului Tetris
    JocTetris tetris(10, 10);
    cout << tetris << endl;

    tetris.mutaPiesaInJos();
    cout << tetris << endl;

    tetris.rotestePiesa();
    cout << tetris << endl;

    // Alte operații de testare...
    TablaJoc t2(10, 10);
    cout << "Urmeaza t2" << endl;
    cout << t2 << endl;
    return 0;
}