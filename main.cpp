#include <iostream>
using namespace std;

int main() {
    int N, i;
    cout<<"Quanti giri ci sono nella gara?"<<endl;
    cin>>N;
    float tempoH[N], tempoV[N];
    float sommaH, sommaV;
    i=0;
    sommaH=0;
    while(i<N)
    {
        cout<<"Quanti secondi ha compiuto il "<<i+1<<"° giro Hamilton?"<<endl;
        tempoH[i]=(rand()%321)/100;
        cout<<tempoH[i]<<endl;
        sommaH=sommaH+tempoH[i];
        i=i+1;
    }
    cout<<"La somma dei tempi di Hamilton è "<<sommaH<<"s"<<endl;
    i=0;
    sommaV=0;
    while(i<N)
    {
        cout<<"Quanti secondi ha compiuto il "<<i+1<<"° giro Verstappen?"<<endl;
        tempoV[i]=(rand()%321)/100;
        cout<<tempoV[i]<<endl;
        sommaV=sommaV+tempoV[i];
        i=i+1;
    }
    cout<<"La somma dei tempi di Verstappen è "<<sommaV<<"s"<<endl;
    if(sommaH=sommaV)
    {
        cout<<"Hamilton e Verstappen hanno pareggiato!"<<endl;
    }
    else
    {
        if(sommaH<sommaV)
        {
            cout<<"Hamilton ha vinto la gara!"<<endl;
        }
        else
        {
            cout<<"Verstappen ha vinto la gara!"<<endl;
        }
    }
    int imin;
    float tempominH, tempominV;
    imin=0;
    tempominH=tempoH[imin];
    i=0;
    while(i<N)
    {
        if(tempoH[i]<tempominH)
        {
            tempominH=tempoH[i];
            imin=i;
        }
        i=i+1;
    }
    imin=0;
    tempominV=tempoV[imin];
    i=0;
    while(i<N)
    {
        if(tempoV[i]<tempominV)
        {
            tempominV=tempoV[i];
            imin=i;
        }
        i=i+1;
    }
    if(tempominH<tempominV)
    {
        cout<<"Il giro più veloce è stato "<<tempominH<<"s, stabilito da Hamilton";
    }
    else
    {
        cout<<"Il giro più veloce è stato "<<tempominV<<"s, stabilito da Verstappen";
    }
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
