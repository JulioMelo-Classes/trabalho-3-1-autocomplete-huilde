#ifndef DADOS_H
#define DADOS_H
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
class dados
{
private:

string nome; // string  usada para ler os nomes das palavras
long int peso; // long int usado para ler o peso das palavras
int total; // inteiro contendo o total de palavras no arquivo
//função que recebe o caminho do arquivo de texto e retorna as palavras
public:

vector <pair<string, long int>> vec1; // vetor de pares contendo os dados do arquivo de texto, sendo formado por varios pares o primeiro elemento
 // a palavra em forma de string e o segundo o long int contendo o peso.

void ReadData();
/*! 
    Lê os dados da base de dados e armazena em um array que é ordenado através da função auxiliar sortedInsert
*/


void sortedInsert(vector<pair<string, long int>>& vec, string value ,long int numero);

/*! adiciona um participante ao vetor Participantes
	@param vec é o vetor que está sendo lindo
    @param value  é o valor da string que será armazenada
    @param numero é o valor numero que será armazenado no array
    
    essa função tem como objetivo inserir os valores já em sua posição ornedada alfabeticamente
*/
};

#endif