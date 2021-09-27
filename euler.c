#include <stdio.h>

long pb5(){
  long x;
  for(x = 20; x < (2432902008176640000); x += 20){
    if(x%9 == 0 &&
       x%7 == 0 &&
       x%16 == 0 &&
       x%11 == 0 &&
       x%13 == 0 &&
       x%17 == 0 &&
       x%19 == 0){
      printf("here is the answer for 5: %ld\n", x);
      return x;
    }
  }
  printf("here is the answer for 5: %ld\n", x);
  return 2432902008176640000;
}

int pb1(){
  int final = 0;
  int x;
  for(x = 0; x < 1000; x++){
    if(x % 3 == 0 || x % 5 == 0){
      final += x;
    }
  }
  printf("here is the answer for 1: %d\n", final);
  return final;
}

long pb6(){
  long first = 0;
  long second = 0;
  int x;
  for(x = 0; x < 1000; x++){
    first += x*x;
  }
  for(x = 0; x < 1000; x++){
    second += x;
  }
  second *= second;
  long final = second - first;
  printf("here is the answer for 6: %ld\n", final);
  return final;
}
