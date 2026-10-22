#include <iostream>
#include <cmath>

using namespace std;

double kvadrat(int a){

    return a*a;

}

double udaljenost(double x1, double y1, double x2, double y2){

    return sqrt(kvadrat(x2-x1) + kvadrat(y2-y1));

}
void ispisiUdaljenost(double rezultat){
    cout << "udaljenost: " << rezultat ;
}

int main()
{
    double x1,x2,y1,y2,kvadrat;
    cout << "Unesi prve koordinate" << endl;
    cin >> x1 >> x2;
    cout << "Unesi druge koordinate" << endl;
    cin >> y1 >> y2;


    ispisiUdaljenost(udaljenost(x1,x2,y1,y2));

    return 0;
}
