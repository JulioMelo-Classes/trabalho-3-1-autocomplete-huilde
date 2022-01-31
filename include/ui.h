#ifndef UI_H
#define UI_H
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <string.h>
#include <bits/stdc++.h>
#include "dados.h"
#include "processador.h"
using namespace std;

class ui
{
private: 
int inicio;
int fim;
string palavra_digitada; //string par ler o conteúdo que o usuário digita
//dados dataBase; // objeto que contém os dados
processador executa;
// objeto resonsável por executar as requisiçoes
std::string Palavra_digitada;

public:
dados dataBase; // objeto que contém os dados
void showData();

void getPalavra();

};

#endif