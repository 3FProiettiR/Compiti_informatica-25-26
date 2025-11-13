#include <iostream>
using namespace std;
int main() {
    int vett1[10] = {1, 5, 432, 800, 12567, 15, 118, 30, 229, 50};
    int minimo = vett1[0];
    for (int i = 1; i < 10; i++) { 
        
        if (vett1[i] < minimo) {
            minimo = vett1[i];
        }
    }
    cout << "Il valore minimo nel vettore e': " << minimo << endl;

    return 0;
}
