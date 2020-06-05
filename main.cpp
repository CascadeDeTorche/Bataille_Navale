#include <iostream>
#include <string>
using namespace std;




void Affiche(char Tab[10][10], int n)
{
    cout<<"  1 2 3 4 5 6 7 8 9 10"<<endl;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            cout<<"A";
        }
        if(i==1)
        {
            cout<<"B";
        }
        if(i==2)
        {
            cout<<"C";
        }
        if(i==3)
        {
            cout<<"D";
        }
        if(i==4)
        {
            cout<<"E";
        }
        if(i==5)
        {
            cout<<"F";
        }
        if(i==6)
        {
            cout<<"G";
        }
        if(i==7)
        {
            cout<<"H";
        }
        if(i==8)
        {
            cout<<"I";
        }
        if(i==9)
        {
            cout<<"J";
        }
        for(int j=0;j<10;j++)
        {
            cout<<" "<<Tab[i][j];
        }
        cout<<" "<<endl;
    }
}


int main()
{
    char Joueur1[10][10];
    char Joueur2[10][10];
    char TirJoueur1[10][10];
    char TirJoueur2[10][10];
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

    for(int i=0;i<10;i++)
    {

        for(int j=0;j<10;j++)
        {
            Joueur1[i][j]='-';
            Joueur2[i][j]='-';
        }

    }
    Affiche(Joueur1,10);
    if (nbjoueur==2)
    {

    }

    return 0;
}
