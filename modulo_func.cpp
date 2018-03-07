#include <iostream>
using namespace std;
#include "funcoes.h"
#include <sting>
#include <vector>

void funcAdd(vector<float> gastos1, vector<string> description1){
  int gastoAux;
  string descAux;

  cout << "Valor debitado: ";
  cin >> gastoAux;

  gastos1.push_back(gastoAux);

  cout << "Descrição debitado: ";
  cin >> descAux;

  description1.push_back(descAux);
}
