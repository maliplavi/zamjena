#include <iostream>
#include <cmath>

using namespace std;
bool jeParan(int broj){
    if(broj%2==0){
        return true;
    }
     else return false;


}

int apsolutnaVrijednost(int broj){

    return abs(broj);

}
int kvadrat(int broj){

    return broj*broj;
}
void ispisiAnalizu(int broj){
    if(jeParan(broj) == true) cout << "broj je paran" << endl;
    else cout << "broj je neparan" << endl;
    cout << "apsolutna vrijednos: " << apsolutnaVrijednost(broj) << endl;
    cout << "kvadrat broja: " << kvadrat(broj) << endl;

}

int main()
{
    int broj;
    cout << "rokni broj" << endl;
    cin >> broj;

    if(broj<-100 || broj>100){
        cout << "rokni broj veci od -100 i manji od 100" << endl;
        cin >> broj;
    }


    ispisiAnalizu(broj);

    return 0;
}
