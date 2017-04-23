#include <iostream>
#include <NTL/ZZ.h>
#include <string>
#include <Cesar.h>
#include <Afin.h>
#include <Rail Fence.h>
#include <time.h>
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <math.h>
using namespace std;
using namespace NTL;
/*void rotar_derecha(vector <int> &vec, int indice, int elementos, int vueltas)
{
    for(int j = vueltas; j > 0; j--)
    {
        for(int i = elementos + indice - 1; i > indice; i--)
        {
            int temp = vec[i];
            vec[i] = vec[i - 1];
            vec[i - 1] = temp;
        }
    }
}
void rotar_izquierda(vector <int> &vec, int indice, int elementos, int vueltas)
{
    for(int j = vueltas; j > 0; j--)
    {
        for(int i = indice; i < indice + elementos - 1; i++)
        {
            int temp = vec[i];
            vec[i] = vec[i + 1];
            vec[i + 1] = temp;
        }
    }
}
int ga(int bits_seed, int bits_num, int particiones, int vueltas)
{
    srand(time(NULL));
    vector <int> a;
    for(int i = 0; i < bits_num; i++)
    {
        a.push_back(0);
    }
    for(int i = 0; i < bits_seed; i++)
    {
        a[i] = rand()%2;
    }
    int s = 0;
    for(int i = bits_seed; i < bits_num; i++)
    {
        a[i] = a[s] ^ a[s+1];
        s++;
    }
    for(int i = 0; i < bits_num; i++)
    {
        cout << a[i];
    }
    cout << " " << endl;

    int elementos_pedazo = bits_num/particiones;
    int residuo_elementos = bits_num%particiones;
    int indice = 0;
    while(indice < bits_num)
    {
        rotar_izquierda(a, indice, elementos_pedazo, vueltas);
        indice += elementos_pedazo;
        rotar_derecha(a, indice, elementos_pedazo, vueltas);
        indice += elementos_pedazo;
    }
    for(int i = 0; i < bits_num; i++)
    {
        cout << a[i];
    }
    cout << " " << endl;
    int num = 0;
    int e = 0;
    for(int i = bits_num - 1; i >= 0; i--)
    {
        if(a[i]==1)
        {
            num += pow(2,e);
        }
        else
            num +=0;
        e += 1;
    }
    cout << num;

}*/

int main()
{
    int * p;

    while (p == p){
    (*p++)+1;}
    //ga(5,16,4,2);

    //Cesar

    /*Cesar cesar(4);
    string texto2 = "neo mango wango";
    cout << cesar.cifrar(texto2);*/

    //Afin

    /*string texto_plano_emisor = "Hola como estas";
    string texto_cifrado_emisor;
    Afin Emisor;
    texto_cifrado_emisor = Emisor.cifrar(texto_plano_emisor);
    cout << texto_cifrado_emisor << endl;

    string texto_cifrado_receptor = "MFfYdBLYdBqudUwfom,qudwfuqLFuqdUfbLfodfumYWiBduqmFfQfbqUuqWoqFdUfkLoduqmFdbdUwfiFfdo,mkqBYmfLUfiFfumF iFBmfWkLUukqBmfbLfqFUBkiuuqmFLUfmfkL,odUfNqLFfbLsqFqbdUwfmkbLFdbdUfQfsqFqBdUfDiLfWLkYqBLfooLSdkfdfudNmfiFdfduBqSqbdbfYLbqdFBLfWdUmUfUiuLUqSmUfDiLfFmf,LFLkLFfbibdUfdfDiqLFfbLNdfJduLkfbquJdfduBqSqbdbPfcdbmUfiFfLUBdbmfqFquqdofQfiFdfLFBkdbdwfUq,iqLFbmfomUfWdUmUfUiuLUqSmUfULfooL,dfdfiFfLUBdbmfsqFdofQfULfmNBqLFLfiFdfUmoiuqmF"";
    string texto_plano_receptor;
    long long clave_publica_receptor, clave_b_receptor;
    clave_publica_receptor = 9;
    clave_b_receptor = 74;
    Afin Receptor(clave_publica_receptor, clave_b_receptor);
    texto_plano_receptor = Receptor.descifrar(texto_cifrado_receptor);
    cout << texto_plano_receptor << endl;*/

    //Rail Fence

    /*string texto1 = "holacomoestas";
    int clave;
    cout << "Ingrese la clave mayor a 1: " << endl;
    cin >> clave;
    cout << cifrar_railfence(clave, texto1);
    string texto2 = "hmsoooalcetas";
    cout << descifrar_railfence(4,texto2);*/
    //cout << inversa(23,256);

}
