//Завдання 2

#include <iostream>
using namespace std;


int main() {
    int z = 0;
    int n = 0;
    char str[100];


    cout << "Enter a sentence " << endl;

    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {
        n++;
        if (str[i] == ' ') {
            n--;
        }
    }

    z = 100 - n;

    cout << "All space " << 100 << endl;
    cout << "Occupied space " << n << endl;
    cout << "Empty space " << z << endl;

    return 0;

}