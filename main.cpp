// Disciplina: Arquitetura de Computadores
// Atividade: Avaliação 01 – Programação em Linguagem de Montagem e de Alto Nível
// Programa 01
// Aluno: Teddy Ordoñez

#include <iostream>
using namespace std;

int main() {
  int vect[] = {8, 2, 1, 0, 9};
  int arraySize = sizeof(vect)/sizeof(vect[0]);
  int temp;

  cout << "Original Array: ";
  for(int i = 0; i < arraySize; i++)
    {
      cout << vect[i] << ' ';
    }
  
  for(int i = 0; i < arraySize - 1; i++)
    {
      for(int j = 0; j < arraySize - i - 1; j++)
        {
          if(vect[j] > vect[j+1])
          {
            temp = vect[j+1];
            vect[j+1] = vect[j];
            vect[j] = temp;
          }
        }
    }

  cout << "\nSorted Array: ";
  for(int i = 0; i < arraySize; i++)
    {
      cout << vect[i] << ' ';
    }

  return 0;
}