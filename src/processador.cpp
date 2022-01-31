#include <iostream>
#include <sstream>
#include "ui.h"
#include "processador.h"
#include <vector>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int processador::findLowerBound(vector<pair<string, long int> >& arr,
                    pair<string,long int>& p){
    // Given iterator points to the
    // lower_bound() of given pair
    auto low = lower_bound(arr.begin(), arr.end(), p);
    inicio = low - arr.begin();
     return (low - arr.begin());

};

int processador::findUpperBound(vector<pair<string, long int> >& arr,
                    pair<string,long int>& p){
    // Given iterator points to the
    // lower_bound() of given pair
    auto up =  upper_bound(arr.begin(), arr.end(), p);
    fim = (up - arr.begin());
    return (up - arr.begin());

};



void processador::setPalavra( string palavra){
Palavra_digitada = palavra;
};

void processador::setPar(){
    par.first = Palavra_digitada;
}