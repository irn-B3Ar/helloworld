#include <stdio.h>

void wrong(){
  printf("wrong..");
  exit();
}
int main(int argc, char* argv[]){
  char c;
  if (argc != 2) {
    printf("./s5_crackme [key]\n");
    return 0;
  }
  if (strlen(argv[1]) != 4) wrong();
  if (argv[1][3] != 68) wrong();
  if (argv[1][2] != argv[1][1]) wrong();
  if (argv[1][1] != 48) wrong();
  c = argv[1][0];
  if (c*2 != 204) wrong();
  printf("Congratulations!!\n");
}
