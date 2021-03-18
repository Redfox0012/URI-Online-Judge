#include <iostream>
#include <cmath>
#include <iomanip>
//definindo n como uma constante com valor 3.14159
#define n 3.14159

using namespace std;
 
int main() {
 	
 	//Declarando variavel
    double raio, area;
    
    //Entrada do raio
    cin >> raio;
    
    //calculando a area (pow -> eleva raio^2 -> biblioteca cmath)
    area = n * pow(raio, 2);
    
    //utilizando biblioteca iomanip
    //Toda variavel de ponto flutuante abaixo da proxima linha irão ter
    //precisão de 4 casas decimais
    cout << fixed << setprecision(4);
    
    //Monstrando resultado
    cout << "A=" << area << endl;
 
    return 0;
}