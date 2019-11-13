#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

int obliczanie(int x,int y,int z){
    int komb2[z];
for(int i=0;i<z;i++){
    komb2[i]=0;}
for(int i=0;i<x;i++){
        cout<<" - "<<i<<" - "<<endl;
  for(int i=0;i<z;i++){
    cout<<komb2[i];}
    komb2[z-1]++;
   for(int i=0;i<z;i++){
    if(komb2[z-i]==y){
        komb2[z-i]=0;
        komb2[z-1-i]++;}
 cout<<endl;}}}

 string skracaniestring(string x){
     string y;
        y=x;
       x='/0';
 for(int i=1;i<x.length();i++){
    y[i]=x[i-1];
 }
 return x;



 }
 int dodawanie(int x,int y){
     x+=y;
     return x;

 }
 int odejmowanie(int x,int y){
 x-=y;
 return x;

 }
 int mnozenie(int x,int y){
 x*=y;
 return x;


 }
 int dzielenie(int x ,int y){
 x/=y;
 return x;

 }
 int potega(int x,int y){
 x=pow(x,y);
 return x;

 }
 int pierwiastek(float x,float y){
 x=pow(x,(y/2));
 return x;
 }

 /*void sprdzialan(int x,string y[10]){
     for(int i=0;i<x;i++){
        if(string y[i][0]=='+')
        int z=y[i].length();
int b = atoi(y[i].c_str());






     }

 }*/
int main()
{
    int komb,perm,start,koniec;
    string wyrazeniei[10];
    string wyrazenie[10];
    int wyrazenie1[10];
    int wyrazenie2[10];
    cout<<"podaj liczbe startowa"<<endl;
    cin>>start;
    int x=start;
    cout<<"podaj liczbe koncowa"<<endl;
    cin>>koniec;
    cout<<"podaj ilosc ruchow"<<endl;
    cin>>perm;
    cout<<"podaj ilosc dzialan"<<endl;
    cin>>komb;
        for(int i=0;i<komb;i++){
            cout<<"podaj "<<i+1<<" dzialanie :"<<endl;
            cin>>wyrazenie[i];

            if(wyrazenie[i][0]=='+'){
                wyrazenie1[i]=0;
                wyrazeniei[i]=skracaniestring(wyrazenie[i]);
                cout<<"to jest to czego szukacie "<<wyrazeniei[i]<<endl;
                wyrazenie2[i] = atoi(wyrazeniei[i].c_str());
            }
            if(wyrazenie[i][0]=='-'){
                wyrazenie1[i]=1;
            }
             if(wyrazenie[i][0]=='*'){
                wyrazenie1[i]=2;
            }
             if(wyrazenie[i][0]=='/'){
                wyrazenie1[i]=3;
            }
             if(wyrazenie[i][0]=='R' &&wyrazenie[i][1]=='E' && wyrazenie[i][2]=='V'){
                wyrazenie1[i]=4;
            }
             if(wyrazenie[i][0]=='R' &&wyrazenie[i][1]=='E' && wyrazenie[i][2]=='M' && wyrazenie[i][2]=='B'){
                wyrazenie1[i]=5;
            }
             if(wyrazenie[i][0]=='R' &&wyrazenie[i][1]=='E' && wyrazenie[i][2]=='M' && wyrazenie[i][2]=='E'){
                wyrazenie1[i]=6;
            }





            }
           int ilosckomb=pow(komb,perm);
            cout<<"ilosc kombinacji to : "<<ilosckomb<<endl;
            obliczanie(ilosckomb,komb,perm);
            cout<<wyrazenie2<<endl;
    return 0;
}
