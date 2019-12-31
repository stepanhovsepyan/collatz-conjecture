#include <string>
#include <iostream>
using namespace std;
int main(){
  char choice;
  int num;
  do{
    int tries = 0;
    cout << "Input number: ";
    cin >> num;
    while(num > 1){
      if(!(num % 2 == 0)){
        num = num * 3 + 1;
        cout << num << endl;
        tries++;
      }
      else{
        num = num/2;
        cout << num << endl;
        tries++;
      }
    }
    cout << tries << " tries" << endl;
    cout << "If you want to rerun type y/Y";
    cin >> choice;
  }while(tolower(choice) == 'y');
}
