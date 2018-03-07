#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "modulo_func.h"
#include <cstdlib>

int main(){
  int select;
  float salario;
  string confirma;
  vector<string> description;
  vector<float> gastos;
  //Inicio do prog
  cout << " ---------------- " << endl;
  cout << "| Adm. sal. proj.|" << endl;
  cout << " ---------------- " << endl;
  //Colocando salário
  cout << "Insira o seu salário: ";
  cin >> salario;
  //escolhendo opção do sistema
  do{
    system("clear");
    select = 0;
    cout << "1 - Adicionar dispesa" << endl;
    cout << "2 - Remover despesa" << endl;
    cout << "3 - Exibir balanço" << endl;
    cout << "0 - Sair do programa" << endl;
    cin >> select;


      if(select == 1)
        funcAdd(gastos,description);
      if(select == 2)
        funcRem(gastos,description);
      if(select == 3){
        funcShow(gastos,description, salario);
        cout << "--- Digite 4 para continuar ---" << endl;
        cin >> confirma;
      }
  }while(select != 0);

return 0;
}
