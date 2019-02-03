#include <stdio.h>

int main(int argc, char const *argv[]) {
  readJSON(argv[1]);
  return 0;
}


int readJSON(char *nomeFile){
    FILE *fp = fopen(nomeFile,"r");
    if (fp == NULL) return printf("No file.\n");

}
