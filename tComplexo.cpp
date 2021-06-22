#include <iostream>

using namespace std;

struct Complexos {
  // Coletando informações para realizar as operações

    int a;
    int b;
    int c;
    int d;

    void Valores (){
      cout << "Para a impedância Z1, indique a parte real: ";
      cin>> a;
      cout << "Para a impedância Z1, indique a parte imaginária: ";
      cin>> b;
      cout << "Z1 = " << a << "+" << b <<"i"<< endl;

      cout << "Para a impedância Z2, indique a parte real: ";
      cin>> c;
      cout << "Para a impedância Z2, indique a parte imaginária: ";
      cin>> d;
      cout << "Z2 = " << c << "+" << d <<"i"<< endl;
      }

    void Contas(){

      int SomaReal = (a+c);
      int SomaIm = (b+d);
      cout << "Soma Z1 + Z2: " << SomaReal << " + " << SomaIm << "i"<< endl;
      
      int SubReal = (a-c);
      int SubIm = (b-d);
      cout << "Subtração Z1 - Z2: " << SubReal <<" + " << SubIm << "i"<< endl;

      int MultReal = (a*c)-(b*d);
      int MultIm =(a*d)+(c*b);
      cout << "Multiplicação Z1 * Z2: " << MultReal <<" + " << MultIm << "i"<< endl;


}

};