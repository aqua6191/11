#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 300; //300ver, 4verµµ ÇØº½  
    
    int *pi = &i;
    char *pc = &i;
    
    printf("%i,%i,&i\n",i,*pi,*pc);
    

  system("PAUSE");	
  return 0;
}
