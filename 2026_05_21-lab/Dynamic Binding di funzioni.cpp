#include <iostream>
using namespace std;

class Animale {
public:
    void eseguiRoutine() {
        cout << "--- Inizio Routine Animale ---" << endl;
        faiVerso();
        muoviti();
        cout << "--- Fine Routine ---" << endl << endl;
    }

    virtual void faiVerso() {}
    virtual void muoviti() {}
};

class Cane : public Animale {
public:
    void faiVerso() override {
        cout << "Il Cane fa: Bau Bau!" << endl;
    }
    void muoviti() override {
        cout << "Il Cane corre a quattro zampe." << endl;
    }
};


class Gatto : public Animale {
public:
    void faiVerso() override {
        cout << "Il Gatto fa: Miao!" << endl;
    }
    void muoviti() override {
        cout << "Il Gatto fa un salto felino." << endl;
    }
};


int main() {
    
    Cane mioCane;
    Gatto mioGatto;

    mioCane.eseguiRoutine();
    mioGatto.eseguiRoutine();

    return 0;
}