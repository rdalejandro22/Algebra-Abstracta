#ifndef PRNG_H
#define PRNG_H
#include <vector>
#include <NTL/ZZ.h>
using namespace NTL;
ZZ convertir_decimal(std::vector <int> a, int bits_num);
void rotar_derecha(std::vector <int> &vec, int indice, int elementos, int vueltas);
void rotar_izquierda(std::vector <int> &vec, int indice, int elementos, int vueltas);
void ga(int bits_seed, int bits_num, int particiones, int vueltas);

#endif // PRNG_H
