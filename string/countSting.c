#include <string.h>
#include <stdio.h>

int main () {
  char str[100];
  int alphabets, digits, others, i;

  printf("Enter a string:\n");
  gets(str);

  while(str[i]!='\0'){
    if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphabets++;
        }
    else if(str[i]>'0' && str[i]<'9'){
          digits++;
    }
    else others++;
    i++;


}
    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);

    return 0;
}