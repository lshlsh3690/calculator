/*****************************************
-v1.0
-2022-10-07
*****************************************/

#include<stdio.h>

int add<int, int>
int sub<int, int>
int div<int, int>
int multi<int, int>

int main(int argc, char* argv[]){
  int number1, number2, result;
  char operator;
  //1
  //2

  printf("please enter a expression : (ex>1,2)");
  printf("please enter a expression : ");
  scanf("%d %c %d", &number1 &operator, &number2);

  switch(operator){
    case '+':
    result = add(number1, number2);
    break;
    case '-':
    result = sub(number1, number2);
    break;
    case '*':
    result = multi(number1, number2);
    break;
    case '/':
    result = div(number1, number2);
    break;
  }

  printf("result is : %d.\n",result);
}
int add(int number1, int number2){
  return number1+number2;
}
int sub(int number1, int number2){
  return number1-number2;
}

int multi(int number1, int number2){
  return number1*number2;
}
int div(int number1, int number2){
  return number1/number2 + number1%number2;
}
