#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>

using namespace std;

string *mensagem = new string();
string *nova_mensagem = new string();
int troca;
char caracter_antigo;
char novo_caracter;

int replaceCaracter(string *msg, char old_char, char new_char, string *new_msg){
  int aux = 0;
  *new_msg = *msg;

  for(int i=0; i<msg->length(); i++){
    if(msg->at(i) == old_char){
      replace(new_msg->begin(), new_msg->end(), old_char, new_char);
      aux++;
    }
  }

  return aux;
}

int main() {

  cout << "Digite uma mensagem:\n";
  getline(cin, *mensagem);

  cout << "Digite um caracter a ser substituido:\n";
  cin >> caracter_antigo;

  cout << "Digite um caracter que substituira o caracter anterior:\n";
  cin >> novo_caracter;

  cout << "\n";

  troca = replaceCaracter(mensagem, caracter_antigo, novo_caracter, nova_mensagem);

  cout << "A mensagem inserido era:\n";
  cout << *mensagem << "\n";

  if(troca > 0){
    cout << "A mensagem alterada é:\n";
    cout << *nova_mensagem << "\n";
  } else{
    
    cout << "Não houve alteração.\n";
  }
  cout << "Foi (Foram) realizada(s) " << troca << " troca(s)." << "\n";
  

 return 0;

}
