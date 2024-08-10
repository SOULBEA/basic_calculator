#include<iostream>
#include<string>
using namespace std;

int add(int n);
int sub(int n);
int division(int a, int b);
int multi(int a, int b);

int main(){
  string user_input;
  cout<<"please enter a response: ";
  getline(cin, user_input);
  if(user_input == "add"){
    int num;
    add(num);
  }
  else if(user_input == "sub"){
    int num;
    sub(num);
  }
  return 0;
}

int add(int n){
  int sum = 0; 
  int x;
  cout<<"please enter total number you want to add: ";
  cin>>x;
  int arr[x];
  for(int i = 0; i<=x; i++){
    cin>>arr[i];
    sum = sum+arr[i];
  }
  cout<<"sum = "<<sum<<endl;
  return sum;
}

int sub(int n){
  int sub = 0;
  int x;
  cout<<"please enter total number : ";
  cin>>x;
  int arr[x];
  for(int i = 0; i<x; i++){
    cin>>arr[i];
    sub = sub-arr[i];
  }
  cout<<"subtraction = "<<sub<<endl;
  return sub;
}
