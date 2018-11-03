#include <stdio.h>
#include <string.h>

bool areAll9s(char k[]) {
  for (int i = 0; i < strlen(k); i++)
    if (k[i] != '9')
      return false;
  return true;
}

int main(){
  char k[1000002];
  int t;
  scanf("%d", &t);

  while (t--){
    scanf("%s", k);
    int lenght = strlen(k);
    if (areAll9s(k)) {
      printf("1");
       for (int i = 0; i < lenght - 1; i++)
        printf("0");
      printf("1\n");
    }
    else {
      int i, j, check = 0;
      for (i = 0; i < lenght / 2; i++) {
        if (k[i] < k[lenght - 1 - i]) {
          check = -1;
        }
        else if (k[i] > k[lenght - 1 - i]) {
          check = 1;
        }
        k[lenght - 1 - i] = k[i];
      }

      if(lenght % 2 == 0) {
        j = lenght / 2 - 1;
      }
      else {
        j = lenght / 2;
      }

      if (check == 0 || check == -1) {
        i=0;
        while(k[j - i] == '9') {
          k[j - i] = '0';
          k[lenght - 1 - j + i] = '0';
          i++;
        }

        k[j - i]++;
        k[lenght - 1 - j + i] = k[j - i];
        }
      printf("%s\n", k);
    }
  }

  return 0;
}
