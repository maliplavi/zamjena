#include <iostream>

using namespace std;

bool ispravanUnos(int bodovi, int maksimalnoBodova){
    if (maksimalnoBodova > 0 && bodovi <= maksimalnoBodova){
        return true;
    }
     else return false;
}

double izracunajPostotak(int bodovi, int maksimalnoBodova){
    return 100.0 * bodovi / maksimalnoBodova;
}

int odrediOcjenu(double postotak){
    if(postotak < 50) return 1;
    else if(postotak < 65) return 2;
    else if(postotak < 80) return 3;
    else if(postotak < 90) return 4;
    return 5;
}

void ispisiIzvjestaj(int bodovi, int maksimalnoBodova,double postotak, int ocjena){

    cout << "Bodovi: "<<bodovi <<"/"<< maksimalnoBodova << endl;
    cout << "Postotak: "<< izracunajPostotak(bodovi, maksimalnoBodova)<< "%"<< endl;
    cout << "Ocjena: " << odrediOcjenu(ocjena) << endl;
}



int main()
{
    int bodovi,maksimalnoBodova, ocjena;
    double postotak;
    cin >> bodovi >> maksimalnoBodova;

    if(ispravanUnos(bodovi, maksimalnoBodova) == false) cout << "greška";

    else{
        double postotak = izracunajPostotak(bodovi,maksimalnoBodova);
        int ocjena = odrediOcjenu(postotak);

        ispisiIzvjestaj(bodovi, maksimalnoBodova,ocjena,postotak);
    }




    return 0;
}
