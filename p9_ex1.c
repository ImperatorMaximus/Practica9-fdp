#include <stdio.h>

int main(){
  int cont;
  while(true){
          printf("ciclo infinito\n");
          break;
  }

  for (int i=0; i<100000; i++){
        printf("ciclo infinito\n);
        break;
  }
  cont=0;
  while(cont<15);
          if(cont==3){
          cont++;
          continue;
  }
          printf("%d ", cont++);
  }
  return0;
}
