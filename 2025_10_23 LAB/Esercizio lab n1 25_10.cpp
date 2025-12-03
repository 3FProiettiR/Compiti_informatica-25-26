#include <iostream>
using namespace std;
int main() {
    int vett1[10] = {1, 3, 4, 8, 12, 15, 22, 30, 29, 50};
    int ordinato = 1;
    for (int i = 0; i < 9; i++) { 
        if (vett1[i] > vett1[i + 1]) {
            ordinato = 2;
            break;
        }
    }
    if (ordinato== 1)
        cout << "Il vettore e' ordinato in ordine crescente." << endl;
    else
        cout << "Il vettore NON e' ordinato in ordine crescente." << endl;

    return 0;
}
