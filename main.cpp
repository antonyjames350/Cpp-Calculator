#include <iostream>
using namespace std;
int main (){
  int a,b,ans;
  char c;
  cin >>a>>c>>b;
  switch(c){
    case '+':
    ans=a+b;
    break;
    case '-':
    ans = a-b;
    break;
    case '/':
    ans = a/b;
    break;
    case '*':
    ans = a*b;
    break;
  }
  cout <<"Answer :"<<ans;
  return 0;
}
