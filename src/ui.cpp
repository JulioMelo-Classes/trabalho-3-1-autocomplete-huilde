#include <iostream>
#include <sstream>
#include "ui.h"
#include "processador.h"
using namespace std;

void ui::showData(){
    cout<<"Usage: autocomplete wiktionary.txt"<<endl
    <<"Where <database_file> is the ascii file that contains the query terms and weights."<<endl;

};


void ui::getPalavra(){
string palavra =" ";

    
    do
    {
        cout<<"Escreva uma palavra e pressione e pressione ENTER ou <ctrl> +d para sair:  ";
        
            pair<string, long int> teste = {palavra,99999999}; 
            if(palavra != " "){
            inicio = executa.findLowerBound(dataBase.vec1,teste);
            fim = executa.findUpperBound(dataBase.vec1,teste);
        
            int i = 0;
            
            for (int i = 0 ; i <3 ; i++)
            {
                cout<<dataBase.vec1[inicio+i].first<<endl;
            }
            cout<<"Escreva uma palavra e pressione e pressione ENTER ou <ctrl> +d para sair:  ";
            }
   }while(getline(cin,palavra));
cout<<endl;
};