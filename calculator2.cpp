#include<iostream>
#include<string>
using namespace std;

int add(int a, int b);
int sub(int a, int b);
int division(int a, int b);
int multi(int a, int b);

int main(){
  do{
  string user_input;
  cout<<"please enter a response: ";
  getline(cin, n);
  int num;
  int arr[num];
  if(user_input == "add"){
    int a, b;
    //cout<<"please enter first number: ";
    //cin>>a;

    //cout<<"please enter second number: ";
    //cin>>b;
    cout<<"please enter numbers to add: ";
    for(int i = 1; i<n; i++){
      cin>>arr[i];
    }
    add(a, b);
  }

  return 0;
}

int add(int arr[]){
  
  cout<<"addition of a+b = "<<a+b<<endl;
  return a+b;
}
