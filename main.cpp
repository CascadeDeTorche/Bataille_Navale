#include <iostream>
#include <string>
#include <cstdlib>
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


int creationbat(char casedepl, int casedepn,char Tab[10][10],int taille)
{
    int cbon=1;
  int marche=0;
    int y=0;
    if(casedepl=='A')
    {
        y=0;
    }
     if(casedepl=='B')
    {
        y=1;
    }
    if(casedepl=='C')
    {
        y=2;
    }
    if(casedepl=='D')
    {
        y=3;
    }
    if(casedepl=='E')
    {
        y=4;
    }
     if(casedepl=='F')
    {
        y=5;
    }
     if(casedepl=='G')
    {
        y=6;
    }
    if(casedepl=='H')
    {
        y=7;
    }
    if(casedepl=='I')
    {
        y=8;
    }
     if(casedepl=='J')
    {
        y=9;
    }
    char direction;

    cout<<"D = droite, G = Gauche, H = Haut, B=Bas  :";
    cin>>direction;
    while(((direction!='D')&(direction!='G'))&(direction!='H')&(direction!='B'))
    {
        cout<<"Invalide petit garnement"<<endl;
        cout<<"D = droite, G = Gauche, H = Haut, B=Bas  :";
        cin>>direction;
    }
    if(direction=='G')
    {
        for(int i=0;i<taille-1;i++){
        if(casedepn-1<(0+taille-1)||(Tab[y][casedepn-1-i]=='1'))
        {
            if((Tab[y][casedepn-1+i])=='1')
            {
                cout<<"impossible de poser le bateau changez de direction"<<endl;
                cbon=0;
            }
            else if(cbon==0)
            {

            }
            else
                {

                cbon=2;
            }

        }
        else{

        }
        }
        if(cbon==1)
        {
            for(int i =0;i<taille;i++)
            {
                Tab[y][casedepn-1-i]='1';
            }
        }
        if(cbon==2)
        {
             cout<<"Direction impossible nous avons mis dans la direction oposee"<<endl;
            for(int i =0;i<taille;i++)
            {
                Tab[y][casedepn-1-i]='1';
            }
        }
        else
        {

        }
    }
       if(direction=='D')
    {
        for(int i=0;i<taille-1;i++){
        if(casedepn-1>(9-taille-1)||(Tab[y][casedepn-1+i]=='1'))
        {
            if((Tab[y][casedepn-1-i])=='1')
            {
                cout<<"impossible de poser le bateau changez de direction"<<endl;
                cbon=0;
            }
            else if(cbon==0)
            {

            }
            else
                {

                cbon=2;
            }

        }
        else{

        }
        }
        if(cbon==1)
        {
            for(int i =0;i<taille;i++)
            {
                Tab[y][casedepn-1+i]='1';
            }
        }
        if(cbon==2)
        {
             cout<<"Direction impossible nous avons mis dans la direction oposee"<<endl;
            for(int i =0;i<taille;i++)
            {
                Tab[y][casedepn-1-i]='1';
            }
        }
        else
        {

        }
    }
if(direction=='H')
    {
        for(int i=0;i<taille-1;i++){
        if(y<(0+taille-1)||(Tab[y-i][casedepn-1]=='1'))
        {
            if((Tab[y+i][casedepn-1])=='1')
            {
                cout<<"impossible de poser le bateau changez de direction"<<endl;
                cbon=0;
            }
            else if(cbon==0)
            {

            }
            else
                {

                cbon=2;
            }

        }
        else{

        }
        }
        if(cbon==1)
        {
            for(int i =0;i<taille;i++)
            {
                Tab[y-i][casedepn-1]='1';
            }
        }
        if(cbon==2)
        {
            cout<<"Direction impossible nous avons mis dans la direction oposee"<<endl;
            for(int i =0;i<taille;i++)
            {
                Tab[y+i][casedepn-1]='1';
            }
        }
        else
        {

        }
    }
    if(direction=='B')
    {
        for(int i=0;i<taille-1;i++){
        if(y>(9-taille-1)||(Tab[y+i][casedepn-1]=='1'))
        {
            if((Tab[y-i][casedepn-1])=='1')
            {
                cout<<"impossible de poser le bateau changez de direction"<<endl;
                cbon=0;
            }
            else if(cbon==0)
            {

            }
            else
                {

                cbon=2;
            }

        }
        else{

        }
        }
        if(cbon==1)
        {
            for(int i =0;i<taille;i++)
            {

                Tab[y+i][casedepn-1]='1';
            }
        }
        if(cbon==2)
        {
            cout<<"Direction impossible nous avons mis dans la direction oposee"<<endl;
            for(int i =0;i<taille;i++)
            {
                Tab[y-i][casedepn-1]='1';
            }
        }
        else
        {

        }
    }
    return cbon;
}

int main()
{
    int bat1j1=0;
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
            Joueur1[i][j]='0';
            Joueur2[i][j]='0';
        }

    }

    system("cls");
    while(bat1j1<1)
    {
         cout<<"Création du bateau taille 2 case de départ"<<endl;
    Lettre=Demandel();
    numero=Demanden();
    bat1j1=creationbat(Lettre,numero,Joueur1,3);
    }
    Affiche(Joueur1,10);

    if (nbjoueur==2)
    {

    }

    return 0;
}
