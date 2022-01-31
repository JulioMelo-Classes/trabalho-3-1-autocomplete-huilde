#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <bits/stdc++.h>
#include "dados.h"
using namespace std;
//pertencerá a outra classe - a classe que faz a parte de mostrar as interações
/*int dados::findLowerBound(vector<pair<string, long int> >& arr,
                    pair<string,long int>& p)
{
    // Given iterator points to the
    // lower_bound() of given pair
    auto low = lower_bound(arr.begin(), arr.end(), p);

     return (low - arr.begin());
}
*/
 


void dados::sortedInsert(vector<pair<string, long int>>& vec, string value ,long int numero) {
    auto it = lower_bound(vec.begin(), vec.end(), make_pair(value,numero));
    transform(value.begin(), value.end(), value.begin(), ::tolower);
    vec.insert(it, make_pair(value,numero));
}


//função que recebe o caminho do arquivo de texto e retorna as palavras
void dados::ReadData(){
    ifstream palavras;
    palavras.open("../data/wiktionary.txt");
    palavras>>total;
    while(palavras >> peso>>nome){   
        transform(nome.begin(), nome.end(), nome.begin(), ::tolower);
        sortedInsert(vec1,nome ,peso);
    }
}
// parte importante
/*
pair<string, long int> cidade = {"theor", 0 }
int i = findLowerBound(vec1 ,cidade);
cout<<vec1[i].first;
//auto id = nomes.lower_bound("São");
*/