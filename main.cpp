#include <iostream>
#include <string>
using namespace std;


char Demandel()
{ char l;
    cout<<"Quel lettre voulez vous ? : ";
    cin>>l;
    while((((l!='A')&(l!='B'))&((l!='C')&(l!='D')))&(((l!='E')&(l!='F'))&((l!='G')&(l!='=H')))&((l!='I')&(l!='J')))
    {
        cout<<"Invalide"<<endl;
        cout<<"Quel lettre voulez vous ? : ";
        cin>>l;
    }
    return l;
}
int Demanden()
{
    int n;
    cout<<"Quel numero voulez vous ? : ";
    cin>>n;
    return n;
}
void Tir(char l, int n,char Tire[10][10])
{
    int y=0;
    if(l=='A')
    {
        y=0;
    }
     if(l=='B')
    {
        y=1;
    }
    if(l=='C')
    {
        y=2;
    }
    if(l=='D')
    {
        y=3;
    }
    if(l=='E')
    {
        y=4;
    }
     if(l=='F')
    {
        y=5;
    }
     if(l=='G')
    {
        y=6;
    }
    if(l=='H')
    {
        y=7;
    }
    if(l=='I')
    {
        y=8;
    }
     if(l=='J')
    {
        y=9;
    }
    Tire[y][n-1]='X';
}

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
    char Lettre;
    int numero;
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
            TirJoueur1[i][j]='-';
            TirJoueur2[i][j]='-';
        }

    }
    Affiche(TirJoueur1,10);
    Lettre=Demandel();
    numero=Demanden();
    Tir(Lettre,numero,TirJoueur1);
    Affiche(TirJoueur1,10);
    if (nbjoueur==2)
    {

    }

    return 0;
}
