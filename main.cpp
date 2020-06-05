#include <iostream>

using namespace std;

int main()
{
    int nbjoueur=0;
    cout << "Bonjour et bievenue dans la bataille navale" << endl;
    cout <<"Voulez-vous jouer a 1 ou 2 joueurs :";
    cin >>nbjoueur;
    while(nbjoueur>2 ||nbjoueur<1)
    {
        cout<<"Nombre de joueurs invalide"<<endl;
        cout <<"Voulez-vous jouer a 1 ou 2 joueurs :";
        cin >>nbjoueur;
    }



    return 0;
}
