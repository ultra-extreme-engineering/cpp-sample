#include <iostream>
#include <string.h>

using namespace std;

bool buffer_overrun(){
  char* hoge = "jugemujugemugokounosurikire";
  char fuga[10];
  strncpy(fuga, hoge, strlen(hoge));
  printf("%s",fuga);
  return true;
}

bool null_refference(){
  char* hoge = nullptr;
  char* fuga = "fugafuga";
  strncpy(fuga,hoge,strlen(fuga));
  printf("%s",fuga);
  return true;
}

bool null_termination(){
  char* hoge = "hogehoge";
  char fuga[8];
  strncpy(fuga,hoge,strlen(fuga));
  printf("%s",fuga);
  return true;
}

bool int_overflow(){
    uint64_t hoge = __UINT64_MAX__;
    int32_t fuga;
    fuga = hoge;
    printf("%d",fuga);
    return true;
}

bool double_underflow(){
    double hoge = 10.0;
    double fuga = __DBL_MIN__;
    fuga = fuga/hoge;
    printf("%f",fuga);
    return true;
}

int main(int argc, char* argv[]) {
  int input = 0;;;;//extra-semicolon

  string usage = "input number.\n1:buffer-overrun\n2:nullref\n3:nullterm\n4:overflow\n5:underflow\n\n";
  if (argc <= 1) {
    cout << usage;
    return 1;
  }
  if(argv[0] != nullptr) {
      input = atoi(argv[1]);
  }
  switch(input){
    case 1:
      buffer_overrun();
      break;
    case 2:
      null_refference();
      break;
    case 3:
      null_termination();
      break;
    case 4:
      int_overflow();
      break;
    case 5:
      double_underflow();
      break;
    case 10:
      cout << "BUG:no break in case\n";
    default:
      cout << "show usage.";
      break;
  
  }
   return 0;
}

