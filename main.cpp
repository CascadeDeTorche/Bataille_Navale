#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void Generation(int longueur, char Array[10][10]) // Génération des bateaux par l'ordinateur
{
    int coordx;
    int coordy;
    int dir;
    int task = 1;
    while(task)
    {
        switch(longueur)
        {
            case 2:
                dir = rand()%2; // aléatoire entre 0 et 1
                switch(dir)
                {
                    case 0:
                        coordx = rand()%10; // aléatoire entre 0 et 9
                        coordy = rand()%9; // aléatoire entre 0 et 8
                        if(Array[coordx][coordy]=='1' || Array[coordx][coordy+1]=='1')
                        {
                            break;
                        }
                        else
                        Array[coordx][coordy] = '1';
                        Array[coordx][coordy+1] = '1';
                        task = 0;
                        break;
                    case 1:
                        coordx = rand()%9; // aléatoire entre 0 et 8
                        coordy = rand()%10; // aléatoire entre 0 et 9
                        if(Array[coordx][coordy]=='1' || Array[coordx+1][coordy]=='1')
                        {
                            break;
                        }
                        else
                        Array[coordx][coordy] = '1';
                        Array[coordx+1][coordy] = '1';
                        task = 0;
                        break;
                    default:
                        break;
                }
                break;
            case 3:
                dir = rand()%2; // aléatoire entre 0 et 1
                switch(dir)
                {
                    case 0:
                        coordx = rand()%10; // aléatoire entre 0 et 9
                        coordy = rand()%8; // aléatoire entre 0 et 7
                        if(Array[coordx][coordy]=='1' || Array[coordx][coordy+1]=='1' || Array[coordx][coordy+2]=='1')
                        {
                            break;
                        }
                        else
                        Array[coordx][coordy] = '1';
                        Array[coordx][coordy+1] = '1';
                        Array[coordx][coordy+2] = '1';
                        task = 0;
                        break;
                    case 1:
                        coordx = rand()%8; // aléatoire entre 0 et 7
                        coordy = rand()%10; // aléatoire entre 0 et 9
                        if(Array[coordx][coordy]=='1' || Array[coordx+1][coordy]=='1' || Array[coordx+2][coordy])
                        {
                            break;
                        }
                        else
                        Array[coordx][coordy] = '1';
                        Array[coordx+1][coordy] = '1';
                        Array[coordx+2][coordy] = '1';
                        task = 0;
                        break;
                    default:
                        break;
                }
                break;
            case 4:
                dir = rand()%2; // aléatoire entre 0 et 1
                switch(dir)
                {
                    case 0:
                        coordx = rand()%10; // aléatoire entre 0 et 9
                        coordy = rand()%7; // aléatoire entre 0 et 6
                        if(Array[coordx][coordy]=='1' || Array[coordx][coordy+1]=='1' || Array[coordx][coordy+2]=='1' || Array[coordx][coordy+3]=='1')
                        {
                            break;
                        }
                        else
                        Array[coordx][coordy] = '1';
                        Array[coordx][coordy+1] = '1';
                        Array[coordx][coordy+2] = '1';
                        Array[coordx][coordy+3] = '1';
                        task = 0;
                        break;
                    case 1:
                        coordx = rand()%7; // aléatoire entre 0 et 6
                        coordy = rand()%10; // aléatoire entre 0 et 9
                        if(Array[coordx][coordy]=='1' || Array[coordx+1][coordy]=='1' || Array[coordx+2][coordy]=='1' || Array[coordx+3][coordy]=='1')
                        {
                            break;
                        }
                        else
                        Array[coordx][coordy] = '1';
                        Array[coordx+1][coordy] = '1';
                        Array[coordx+2][coordy] = '1';
                        Array[coordx+3][coordy] = '1';
                        task = 0;
                        break;
                    default:
                        break;
                }
                break;
            default:
                break;
        }
    }
}

char Demandel()
{ char l;
    cout<<"Quel lettre voulez vous ? : ";
    cin>>l;
    while((((l!='A')&(l!='B'))&((l!='C')&(l!='D')))&(((l!='E')&(l!='F'))&((l!='G')&(l!='H')))&((l!='I')&(l!='J')))
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
int Tir(char l, int n,char Tire[10][10],char Recu[10][10],int nbtouche)
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
   if(Recu[y][n-1]=='0')
   {
       cout<<"Dans l'eau"<<endl;
       Tire[y][n-1]='O';
       return nbtouche;

   }
   if(Recu[y][n-1]=='1')
   {
       cout<<"Touché"<<endl;
       Tire[y][n-1]='X';
       Recu[y][n-1]='T';
       return nbtouche+1;
   }
}

void Affiche(char Tab[10][10])
{
    cout<<"  1 2 3 4 5 6 7 8 9 10"<<endl;
    for(int i=0;i<10;i++)
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

void InitJoueur(char Tab[10][10],int n)
{
    int choix;
    char Lettre;
    int numero;
    int bat1=0;
    int bat2=0;
    int bat3=0;
    int bat4=0;
    cout<<"1 : automatique, 2 : Manuelle";
    cin>>choix;
    if(choix==1)
    {
        Generation(2,Tab);
        Generation(3,Tab);
        Generation(3,Tab);
        Generation(4,Tab);
    }
    else if(choix==2){
    while(bat1<1)
    {
        cout<<"Joueur "<<n<<" Creation du bateau taille 2, case de depart :"<<endl;
        Lettre=Demandel();
        numero=Demanden();
        bat1=creationbat(Lettre,numero,Tab,2);
    }
    system("cls");
    Affiche(Tab);

    while(bat2<1)
    {
        cout<<"Joueur "<<n<<" Creation du premier bateau de taille 3, case de depart:"<<endl;
        Lettre=Demandel();
        numero=Demanden();
        bat2=creationbat(Lettre,numero,Tab,3);
    }
    system("cls");
    Affiche(Tab);
    while(bat3<1)
    {
        cout<<"Joueur "<<n<<" Creation du deuxieme bateau de taille 3, case de depart:"<<endl;
        Lettre=Demandel();
        numero=Demanden();
        bat3=creationbat(Lettre,numero,Tab,3);
    }
    system("cls");
    Affiche(Tab);
        while(bat4<1)
    {
        cout<<"Joueur "<<n<<" Creation du bateau de taille 4, case de depart:"<<endl;
        Lettre=Demandel();
        numero=Demanden();
        bat4=creationbat(Lettre,numero,Tab,4);
    }
    }
    system("cls");
    cout<<"Joueur "<<n<<" voici votre plan : (entrer n'importe quoi pour quitter ce menu)"<<endl;

    Affiche(Tab);
     cin>>Lettre;
}
int main()
{
    int nbtouchej1;
    int nbtouchej2;
    srand((time(0)));
    char Lettre;
    int numero;
    char Joueur1[10][10];
    char Joueur2[10][10];
    char TirJoueur1[10][10];
    char TirJoueur2[10][10];
    int nbjoueur=0;
    cout <<"Bonjour et bievenue dans la bataille navale" << endl;
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
    if(nbjoueur==1)
    {
        Generation(2,Joueur2);
        Generation(3,Joueur2);
        Generation(3,Joueur2);
        Generation(4,Joueur2);
        Affiche(Joueur2);
          //InitJoueur(Joueur1,1);

    }
    if(nbjoueur==2){
    InitJoueur(Joueur1,1);
    InitJoueur(Joueur2,2);
    while(nbtouchej1<12 && nbtouchej2<12)
    {
         system("cls");
         cout<<"Tir Joueur 1 : "<<endl;
         Affiche(TirJoueur1);
         cout<<"Bateau Joueur 1 : "<<endl;
         Affiche(Joueur1);
         cout<<"Ou voulez-vous tirer : "<<endl;
         Lettre=Demandel();
         numero=Demanden();
         nbtouchej1=Tir(Lettre,numero,TirJoueur1,Joueur2,nbtouchej1);
         Affiche(TirJoueur1);
    }
    }


    return 0;
}
