#include <iostream>
using namespace std;
int main() {
    int vett1[10] = {1, 5, 432, 800, 12567, 15, 118, 30, 229, 50};
    int massimo = vett1[0];
    for (int i = 1; i < 10; i++) { 
        
        if (vett1[i] > massimo) {
            massimo = vett1[i];
        }
    }
    cout << "Il valore massimo nel vettore e': " << massimo << endl;

    return 0;
}
