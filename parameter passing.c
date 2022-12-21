#include <stdio.h>


////// Single parameter is passing//////
void myFun(char name[]) {
  printf("Hello, I am %s\n", name);
}

int main() {
  myFun("Saurabh");
  myFun("Suhani");
  myFun("Surya");
  return 0;
}

/////Multiple patrameters are passing////////

/*void myFunction(char name[], int age) {
  printf("Hello %s. You are %d years old\n", name, age);
}

int main() {
  myFunction("Saurabh", 30);
  myFunction("Suhani", 24);
  myFunction("Surya", 35);
  return 0;
}*/
