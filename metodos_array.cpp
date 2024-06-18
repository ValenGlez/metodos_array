#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> array = {7, 51, 2, 85, 9};


    cout << "Array sin modificar: " << endl;
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;

    array.push_back(10);
    array.push_back(1);

    cout << "Array modificado despues de 2 elementos nuevos: " << endl;
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;

    int elementoEliminar;

    cout << "Elija un elemento para eliminar segun su posicion real: ";
    cin >> elementoEliminar;
    elementoEliminar -= 1;

    if (array.size() > elementoEliminar) {
        array.erase(array.begin() + elementoEliminar);
    }

    cout << "Array modificado despues de eliminar el elemento:" << endl;
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
