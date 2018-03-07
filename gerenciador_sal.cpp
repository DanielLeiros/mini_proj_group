#include <iostream>
using namespace std;
#include <string>
#include <vector>

int main(){
  int select;
  float salario;
  vector<string> description;
  vector<float> gastos;
  //Inicio do prog
  cout << " ---------------- ";
  cout << "| Adm. sal. proj.|";
  cout << " ---------------- ";
  //Colocando salário
  cout << "Insira o seu salário: ";
  cin >> salario;
  //escolhendo opção do sistema
  do{
    cout << "1 - Adicionar dispesa" << endl;
    cout << "2 - Remover despesa" << endl;
    cout << "3 - Exibir balanço" << endl;
    cout << "0 - Sair do programa" << endl;
    cin >> select;

    switch (select) {
      case 1:
        funcAdd(&gastos,&description);
      case 2:
        funcRem(&gastos,&description);
      case 3:
        funcShow(&gastos,&description);
    }
  }while(select != 0);

return 0;
}
