#include <iostream>

using namespace std;

double zbrajanje(double a, double b){

    return a+b;

}
double oduzmi(double a, double b){

    return a-b;
}
double pomnozi(double a, double b){

    return a*b;
}
double podjeli(double a, double b){

     return a/b;
}
void ispisiRezultat(double rezultat){

    cout << rezultat << endl;
}

int main()
{
    double a;
    double b;

    cin >> a; cin >> b;


    cout << "Zbroj: "; ispisiRezultat(zbrajanje(a,b)) ;
    cout << "Razlika: ";  ispisiRezultat(oduzmi(a,b));
    cout << "Umnozak: ";  ispisiRezultat(pomnozi(a,b));
    if(b != 0){
        cout << "Kolicnik: ";  ispisiRezultat(podjeli(a,b));
    }
    else cout << "dijeljenje nije moguce" << endl;



    return 0;
}
