#include <iostream>
#include <array>
#include <cmath>

using namespace std;
int main() {
    int i; double v1, v2, freqRel, n, h, Count = 0;
    double myArray[] = {34.5, 64.6, 32.5, 44.1, 10.4, 17.3, 47.5,
                     52.2, 44.3, 32.3, 37.0, 44.8, 60.7, 54.8, 
                     30.0, 53.3, 50.7};
    cout << "Digite o intervalo na sequência\nMaior que e Menor que: \n";
    cin >> v1; cin >> v2;
    
    //cout << "Qtde de variáveis: " << size(myArray) << endl;
    for (i=0; i<size(myArray); i++) {
        if (myArray[i]>=v1 && myArray[i]<=v2) {
            Count += 1;   
        }
    }
    n = size(myArray);
    freqRel = Count/n;
    h = freqRel/(v2-v1);
    cout << "Qtde = " << Count << endl;
    cout << "Freq = " << freqRel << endl;
    cout << "Altura = " << h << endl;

    return 0;
}