#include <stdio.h>

int vl1;
int vl2;
int main() {
  int opc;
  printf("***CALCULADORA***\n");
  printf("1- Multiplicação \n");
  printf("2- Divisão \n");
  printf("3- Adição \n");
  printf("4- Subtração \n");
  
  printf("Opção: ");
  scanf("%d", &opc);

  if (opc < 1 || opc > 4){
    printf("ERRO, OPÇÃO INVÁIDA. \n");
  }
  else{
    printf("Entre com o 1º valor: ");
    scanf("%d", &vl1);
    printf("Entre com o  2º valor: ");
    scanf("%d", &vl2);
  }

  switch(opc){
    case 1:
    printf("O resultado da multiplicação entre %d e %d é %d \n", vl1, vl2, multi(vl1,vl2));
    break;

    case 2:
    printf("O resultado da divisão entre %d e %d é %d \n", vl1, vl2, div(vl1,vl2));
    break;

    case 3:
    printf("O resultado da adição entre %d e %d é %d \n", vl1, vl2, adi(vl1,vl2));
    break;

    case 4:
    printf("O resultado da subtração entre %d e %d é %d \n", vl1, vl2, sub(vl1,vl2));
    break;
  }


  
  return 0;
}

  int multi(int x, int y){
    int result;
    result = x * y;
    return result;
  }
  
  int div(int x, int y){
    int result;
    result = x / y;
    return result;
  }

  int adi(int x, int y){
    int result;
    result = x + y;
    return result;
  }

  int sub(int x, int y){
    int result;
    result = x - y;
    return result;
  }