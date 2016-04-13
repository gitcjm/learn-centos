#include <stdio.h>
#include "me.h"

int main(){
  // printf("Hello cjm\n");

  // float age = get_age();
  // printf("my age is %f\n", age);
  
  // char ch[] = "崔军明";
  // printf("my name is %s\n", ch);
  
  char * ch = "CuiJunming";
  int i;
  for(i=0; i<10; i++) {
	printf("my name is %c \n", *ch);
	ch++;
  }

  return 0;
}
