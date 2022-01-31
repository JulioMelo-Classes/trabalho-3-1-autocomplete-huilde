#ifndef PROCESSADOR_H
#define PROCESSADOR_H
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <string.h>
#include <bits/stdc++.h>
#include "processador.h"
using namespace std;
class processador
{
private: 
int inicio;
int fim;
std::string Palavra_digitada;
pair<string, long int> par = {"theor", 0 };

public:

void setPalavra(string palavra);

void setPar();

int findLowerBound(vector<pair<string, long int> >& arr,
                    pair<string,long int>& p);

int findUpperBound(vector<pair<string, long int> >& arr,
                    pair<string,long int>& p);
};
#endif