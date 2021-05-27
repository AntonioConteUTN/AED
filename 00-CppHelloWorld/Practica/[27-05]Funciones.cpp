#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main(); // Definimos main, Por que? No hay Porque.

string DoubleToString (double x);

double StringToDouble (string s);

float StringToFloat (string s);

int main() 
{
    // main
    // main();               // Rompe la matrix, no descomentar! 
    cout << "Separar main funciono"<<  "\n\n" ;

    // DoubleToString.
    double d = 42.00;
    cout << "Double to String: " << DoubleToString(d) << endl;

    // StringToDouble
    // Case 1: El string es un número.
     string edad = "23";
     double YoB = 2021 - StringToDouble(edad); // YoB = (Y)ear (o)f (B)irth.

    cout << "El año de nacimiento es: " << YoB <<  "\n\n\n\n" ; 

    
    // Case 2: El string NO es un número.
     string name = "Antonio Conte";
     //double error = StringToDouble(name); // El programa para despues de recibir una string con caracteres que no puede pasar a double (=/= 0-9). 
     //cout << "Mi nombre es: " << error; 
 
   
    return 0; 



}



string DoubleToString (double d)
{
    // Forma Incorrecta.
    // return x;              

    // Forma Correcta.
    // Short Way.
    return to_string(d);

    // Long Way.
    string s;
    s = to_string(d);
    return s;
}

double StringToDouble (string s)
{
  return stod(s); // STOD = (s)tring (to) (d)ouble.
}

float StringToFloat (string s)
{
  return stof(s); // STOF = (s)tring (to) (f)loat.
}

