/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/
#include <iostream>
#include<string>

//using namespace std;

class Arbol{
private:
  std::string especie;
  int edad;
  float tam;
  int anch;

public:
  Arbol();
  Arbol(std::string esp, int ed, float ta, float anch): especie(esp), edad(ed), tam(ta), anch(anch){};

  std::string get_especie();
  int get_edad();
  float get_tam();
  int get_anch();

  void set_especie(std::string );
  void set_edad(int edad );
  void set_tam(float ta );
  void set_anch(int anch);

  //void crece(int );

};

std::string Arbol::get_especie(){
  return especie;
}

int Arbol::get_edad() {
    return edad;
}

float Arbol::get_tam(){
    return tam;
}
    
int Arbol::get_anch(){
    return anch;
}

void Arbol::set_especie(std::string esp){
  especie = esp;
}

void Arbol::set_edad(int ed){
    edad = ed;
}

void Arbol::set_tam(float ta){
    tam = ta;
}

void Arbol::set_anch(int anch){
    anch = anch;
}

int main(){
  Arbol arbol_1("abedul", 12, 187.5, 697849);
  std::cout << arbol_1.get_especie()<<std::endl;
  std::cout<<arbol_1.get_edad()<<std::endl;
  std::cout<<arbol_1.get_tam()<<std::endl;
  std::cout<<arbol_1.get_anch()<<std::endl;


}