#include<iostream>
using namespace std;

int add(int a, int b);
int sub(int a, int b);
int division(int a, int b);
int multi(int a, int b);


int main(){
  char n;
  cout<<"please enter a response: ";
  cin>>n;
  if(n == "add"){
    int a, b;
    cout<<"please enter first number: ";
    cin>>a;

    cout<<"please enter second number: ";
    cin>>b;
    add(a, b);
  }

  return 0;
}

int add(int a, int b){
  cout<<"addition of a+b = ";
  return a+b; 
}
