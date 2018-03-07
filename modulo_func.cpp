#include <iostream>
using namespace std;
#include "modulo_func.h"
#include <string>
#include <vector>

void funcAdd(vector<float> & gastos1, vector<string> & description1){
  int gastoAux;
  string descAux;

  cout << "Valor debitado: ";
  cin >> gastoAux;

  gastos1.push_back(gastoAux);

  cout << "Descrição debitado: ";
  cin >> descAux;

  description1.push_back(descAux);

}

void funcRem(vector<float>& gastos1, vector<string>& description1){
  int indiceItem;
  for(int i = 0; i < gastos1.size(); i++){
    cout << i << " - " << description1[i] << " " << gastos1[i] << endl;
  }
  cout << "--------------------------------------------------------" << endl;
  cout << "Insira o índice do item que será removido do balanço: ";
  cin >> indiceItem;
  if(indiceItem <= gastos1.size()){
  gastos1.erase(gastos1.begin() + indiceItem);
  description1.erase(description1.begin() + indiceItem);
  } else {
    cout << "Não existe item com esse índice, tente novamente" << endl;
  }

}

void funcShow(vector<float>& gastos1, vector<string>& description1, float salario1){
  int i;
  float balance, payments, acumulado;
  balance = salario1;
  payments = 0;
  for(i = 0; i < gastos1.size(); i++){
    cout << i << " - " << description1[i] << " " << gastos1[i] << endl;
    payments += gastos1[i];
  }
  cout << "--------------------------------------------------------" << endl;
  cout << "Sobram R$ " << balance - payments << endl;
  cout << "Nesse ritmo, faltam " << (1000000/((balance - payments)*12));
  cout << " anos para você se tornar milhonário"<< endl;
}
