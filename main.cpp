#include <iostream>
#include <NTL/ZZ.h>
#include <string>
#include <Cesar.h>
#include <Afin.h>
#include <Rail Fence.h>
#include "RSA.h"
#include "PRNG.h"
#include <time.h>
#include "BBS.h"
using namespace std;
using namespace NTL;
int main()
{
    //RSA
    srand(time(NULL));
    string texto_plano = "Esta prueba deberia funcionar, ojala.; Mayusculas";
    RSA Receptor;
    ZZ e, n;
    e = Receptor.get_clave_publica();
    n = Receptor.get_N();
    RSA Emisor(e, n); //Juan
    vector <ZZ> texto_cifrado = Emisor.cifrar(texto_plano);
    for(int i = 0; i < texto_cifrado.size(); i++)
    {
        cout << texto_cifrado[i] << ",";
    }
    cout << Receptor.descifrar(texto_cifrado);

    /*vector <ZZ> texto_cifrado_usario;
    int cifrado[45] = {2667,395,2990,1529,292,3788,4490,3788,4303,2990,3365,3788,3788,1558,2990,3788,4303,3683,1794,656,2990,3683,292,2990,0,3365,1025,1794,1558,395,3683,3684,1794,2990,1277,292,3349,4087,395,1794,3349,0,2990,3813,1529};
    for(int i = 0; i < 45; i++)
    {
        texto_cifrado_usario.push_back(to_ZZ(cifrado[i]));
    }
    string texto_descifrado = Receptor.descifrar(texto_cifrado_usario);
    cout << texto_descifrado;*/

    //BLUM BLUM SHUB

    /*ZZ p = to_ZZ(103);
    ZZ q = to_ZZ(197);
    ZZ s = to_ZZ(23);
    BBS b(p, q, s);
    int n = 1000;
    cout << n << endl;
    for(int i = 0; i < n; ++i)
    {
        cout << b.getrandom() << endl;
    }*/

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

    string texto_cifrado_receptor = texto_cifrado_emisor;
    string texto_plano_receptor;
    ZZ clave_publica_receptor, clave_b_receptor;
    clave_publica_receptor = Emisor.get_clave_publica();
    clave_b_receptor = Emisor.get_clave_b();
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
