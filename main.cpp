#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
#include <conio.h>

#define KEY_UP 72 // touches directionnelles pour la création de bateaux
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ENTER 13
#define KEY_r 114

using namespace std;
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
void Creation(int longueur, char Array[10][10]) // Génération par le joueur
{
    int coordx = 0;
    int coordy = 0;
    int dir = -1;
    int task = 1;
    int test = 1;
    int test2 = 1;
    for(int i=0;i<longueur;i++){
        Array[coordx+i][coordy]='1';
    }
    while(test == 1){
    switch(dir)
    {
        case -1: // vertical
            while(dir==-1 && test==1)
            {
                task = 0;
                system("cls");
                Affiche(Array);
                switch((task=getch())) {
                    case KEY_UP:
                        if(coordx > 0 && Array[coordx-1][coordy]=='~'){
                            coordx = coordx - 1;
                            Array[coordx][coordy]='1';
                            Array[coordx+longueur][coordy]='~';
                            break;
                        }
                        else
                        break;
                    case KEY_DOWN:
                        if(coordx < 10-longueur && Array[coordx+longueur][coordy]=='~'){
                            coordx = coordx + 1;
                            Array[coordx+longueur-1][coordy]='1';
                            Array[coordx-1][coordy]='~';
                            break;
                        }
                        else
                        break;
                    case KEY_LEFT:
                        for(int mov=coordx;mov<coordx+longueur;mov++){
                            if(Array[mov][coordy-1]=='1'){
                                test2=0;
                            }
                        }
                        if(coordy > 0 && test2==1){
                            coordy = coordy - 1;
                            for(int mov=coordx;mov<coordx+longueur;mov++){
                                Array[mov][coordy+1]='~';
                                Array[mov][coordy]='1';
                            }
                            break;
                        }
                        else
                        test2=1;
                        break;
                    case KEY_RIGHT:
                        for(int mov=coordx;mov<coordx+longueur;mov++){
                            if(Array[mov][coordy+1]=='1'){
                                test2=0;
                            }
                        }
                        if(coordy < 9 && test2==1){
                            coordy = coordy + 1;
                            for(int mov=coordx;mov<coordx+longueur;mov++){
                                Array[mov][coordy-1]='~';
                                Array[mov][coordy]='1';
                            }
                            break;
                        }
                        else
                            test2=1;
                        break;
                    case KEY_r:
                        for(int mov=1;mov<longueur;mov++){
                            if(Array[coordx][coordy+mov]=='1'){
                                test2=0;
                            }
                        }
                        if(coordy+longueur<11 && test2 == 1){
                            dir = 1;
                        for(int mov=1;mov<longueur;mov++){
                                Array[coordx+mov][coordy]='~';
                                Array[coordx][coordy+mov]='1';
                            }
                            break;
                        }
                        else
                        test2=1;
                        break;
                    case KEY_ENTER:
                        Array[coordx][coordy]='1';
                        test = 0;
                        break;
                    default:
                      //  cout << endl << "null" << endl;  // Autre touche
                        break;
                }
            }
        case 1: //horizontal
            while(dir==1 && test==1)
            {
                task = 0;
                system("cls");
                Affiche(Array);
                switch((task=getch())) {
                    case KEY_UP:
                        for(int mov=coordy;mov<coordy+longueur;mov++){
                            if(Array[coordx-1][mov]=='1'){
                                test2=0;
                            }
                        }
                        if(coordx > 0 && test2==1){
                            coordx = coordx - 1;
                            for(int mov=coordy;mov<coordy+longueur;mov++){
                                Array[coordx+1][mov]='~';
                                Array[coordx][mov]='1';
                            }
                            break;
                        }
                        else
                        test2=1;
                        break;
                    case KEY_DOWN:
                        for(int mov=coordy;mov<coordy+longueur;mov++){
                            if(Array[coordx+1][mov]=='1'){
                                test2=0;
                            }
                        }
                        if(coordx < 9 && test2==1){
                            coordx = coordx + 1;
                            for(int mov=coordy;mov<coordy+longueur;mov++){
                                Array[coordx-1][mov]='~';
                                Array[coordx][mov]='1';
                            }
                            break;
                        }
                        else
                        test2=1;
                        break;
                    case KEY_LEFT:
                        if(coordy > 0 && Array[coordx][coordy-1]=='~'){
                            coordy = coordy - 1;
                            Array[coordx][coordy]='1';
                            Array[coordx][coordy+longueur]='~';
                            break;
                        }
                        else
                        break;
                    case KEY_RIGHT:
                        if(coordy+longueur<10 && Array[coordx][coordy+longueur]=='~'){
                            coordy = coordy + 1;
                            Array[coordx][coordy+longueur-1]='1';
                            Array[coordx][coordy-1]='~';
                            break;
                        }
                        else
                        break;
                    case KEY_r:
                        for(int mov=1;mov<longueur;mov++){
                            if(Array[coordx+mov][coordy]=='1'){
                                test2=0;
                            }
                        }
                        if(coordx+longueur<11 && test2 == 1){
                            dir = -1;
                        for(int mov=1;mov<longueur;mov++){
                                Array[coordx+mov][coordy]='1';
                                Array[coordx][coordy+mov]='~';
                            }
                            break;
                        }
                        else
                        test2=1;
                        break;
                    case KEY_ENTER:
                        test = 0;
                        break;
                    default:
                      //  cout << endl << "null" << endl;  // Autre touche
                        break;
                }
            }
        }
    }
}

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
char RandLettre (){
    char l;
    switch(rand()%10){
        case 0:
            l = 'A';
            break;
        case 1:
            l = 'B';
            break;
        case 2:
            l = 'C';
            break;
        case 3:
            l = 'D';
            break;
        case 4:
            l = 'E';
            break;
        case 5:
            l = 'F';
            break;
        case 6:
            l = 'G';
            break;
        case 7:
            l = 'H';
            break;
        case 8:
            l = 'I';
            break;
        default:
            l = 'J';
            break;
    }
    return l;
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
    int touche;
    int task=1;
    while(task)
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
     if(Tire[y][n-1]=='X'||Tire[y][n-1]=='O')
   {
       cout<<"Vous avez deja tire a cet endroit veuillez changer"<<endl;
       cout<<"Ou voulez-vous tirer : "<<endl;
        l=Demandel();
        n=Demanden();
    }
   else if(Recu[y][n-1]=='~')
   {
       cout<<"Dans l'eau"<<endl;
       Tire[y][n-1]='O';
       Recu[y][n-1]='O';
      touche=nbtouche;
        task=0;
   }
   else if(Recu[y][n-1]=='1')
   {
       cout<<"Touche"<<endl;
       Tire[y][n-1]='X';
       Recu[y][n-1]='T';
       touche=nbtouche+1;
       task=0;
   }

    }

    return touche;

}
int TirIA(char l, int n,char Tire[10][10],char Recu[10][10],int nbtouche)
{
    int touche;
    int task=1;
    while(task)
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
     if(Tire[y][n-1]=='X'||Tire[y][n-1]=='O')
   {

        l=RandLettre();
        n=rand()%10+1;
    }
   else if(Recu[y][n-1]=='~')
   {

       Tire[y][n-1]='O';
       Recu[y][n-1]='O';
      touche=nbtouche;

        task=0;
   }
   else if(Recu[y][n-1]=='1')
   {

       Tire[y][n-1]='X';
       Recu[y][n-1]='T';
       touche=nbtouche+1;
       task=0;
   }

    }

    return touche;

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
    cout<<"1 : automatique, 2 : Manuelle , 3 : Manuelle clavier : ";
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
    if(choix==3)
    {
       Creation(2,Tab);
       Creation(3,Tab);
       Creation(3,Tab);
       Creation(4,Tab);
    }
    system("cls");
    cout<<"Joueur "<<n<<" voici votre plan : (entrer n'importe quoi pour quitter ce menu)"<<endl;

    Affiche(Tab);
     cin>>Lettre;
}
int main()
{
    char wait;
    int tour=1;
    int nbtouchej1=0;
    int nbtouchej2=0;
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
            TirJoueur1[i][j]='~';
            TirJoueur2[i][j]='~';
            Joueur1[i][j]='~';
            Joueur2[i][j]='~';
        }

    }
    if(nbjoueur==1)
    {

        InitJoueur(Joueur1,1);
        Generation(2,Joueur2);
        Generation(3,Joueur2);
        Generation(3,Joueur2);
        Generation(4,Joueur2);
       while(nbtouchej1<12 && nbtouchej2<12)
       {
        system("cls");
        if(tour>1)
        {
            cout<<"Le joueur precedent a tire en "<<Lettre<<numero<<endl;
        }

         cout<<"Tir Joueur 1 : "<<endl;
         Affiche(TirJoueur1);
         cout<<"Bateau Joueur 1 : "<<endl;
         Affiche(Joueur1);
         cout<<"Ou voulez-vous tirer : "<<endl;
         Lettre=Demandel();
         numero=Demanden();
         nbtouchej1=Tir(Lettre,numero,TirJoueur1,Joueur2,nbtouchej1);
         cout<<"Joueur 1 voici vos Tirs : (entrer n'importe quoi pour quitter ce menu)"<<endl;
         Affiche(TirJoueur1);
         cin>>wait;
         system("cls");
         Lettre=RandLettre();
         numero=rand()%10+1;
         nbtouchej2=TirIA(Lettre,numero,TirJoueur2,Joueur1,nbtouchej2);
         tour=tour+1;
       }
        if(nbtouchej1<nbtouchej2)
    {
        cout<<"Tu as perdu contre l'ordinateur (pour quitter le jeu rentre n'importe quoi) "<<endl;
        cin>>wait;

    }
     if(nbtouchej2<nbtouchej1)
    {
        cout<<"Bravo Joueur 1 tu as gagne contre l'ordinateur (pour quitter le jeu rentre n'importe quoi) "<<endl;
        cin>>wait;

    }
    }
    if(nbjoueur==2){

    cout<<"Joueur 1 : ";
    InitJoueur(Joueur1,1);

    system("cls");
     cout<<"Joueur 2 : ";
      system("cls");
    InitJoueur(Joueur2,2);
    while(nbtouchej1<12 && nbtouchej2<12)
    {
        system("cls");
        if(tour>1)
        {
            cout<<"Le joueur precedent a tire en "<<Lettre<<numero<<endl;
        }
         cout<<"Tir Joueur 1 : "<<endl;
         Affiche(TirJoueur1);
         cout<<"Bateau Joueur 1 : "<<endl;
         Affiche(Joueur1);
         cout<<"Ou voulez-vous tirer : "<<endl;
         Lettre=Demandel();
         numero=Demanden();
         nbtouchej1=Tir(Lettre,numero,TirJoueur1,Joueur2,nbtouchej1);
        cout<<"Joueur 1 voici vos Tirs : (entrer n'importe quoi pour quitter ce menu)"<<endl;
        Affiche(TirJoueur1);
        cin>>wait;

        system("cls");
        cout<<"Le joueur precedent a tire en"<<Lettre<<numero<<endl;
         cout<<"Tir Joueur 2 : "<<endl;
         Affiche(TirJoueur2);
         cout<<"Bateau Joueur 2 : "<<endl;
         Affiche(Joueur2);
         cout<<"Ou voulez-vous tirer : "<<endl;
         Lettre=Demandel();
         numero=Demanden();
         nbtouchej2=Tir(Lettre,numero,TirJoueur2,Joueur1,nbtouchej2);
        cout<<"Joueur 1 voici vos Tirs : (entrer n'importe quoi pour quitter ce menu)"<<endl;
        Affiche(TirJoueur2);
        cin>>wait;

    }
    system("cls");
    if(nbtouchej1<nbtouchej2)
    {
        cout<<"Bravo Joueur 2 tu as gagne (pour quitter le jeu rentre n'importe quoi) "<<endl;
        cin>>wait;

    }
     if(nbtouchej2<nbtouchej1)
    {
        cout<<"Bravo Joueur 1 tu as gagne (pour quitter le jeu rentre n'importe quoi) "<<endl;
        cin>>wait;

    }
    }


    return 0;
}
