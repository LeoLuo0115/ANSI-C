#include <stdio.h>

int main(){
  int ireturn;
  FILE *fout;

  fout=fopen ("myfile.txt","w");
  c = 'a';
  ireturn = fprintf ("%c",c);
  printf("ireturn  = %d\n",ireturn);
  c = 'b'
  ireturn =  fprintf ("%c",b);
  printf("ireturn  = %d\n",ireturn);
  c = 'c'
  ireturn = fprintf ("%c",c);
  printf("ireturn  = %d\n",ireturn);

  fclose(fout);

}