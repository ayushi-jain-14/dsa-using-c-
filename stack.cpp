#include <iostream>
using namespace std;
# define max 5

class stack{
  private: 
  int arr[max];
  int top;
  public:
  stack (){
    top=-1;
  }
  void push(int x){
    if(top==max-1){
      cout<<"stack is full"<<endl;
      return;
    }
      top++;
      arr[top]=x;
      cout<<"push in stack"<<endl;
    
  }
  void pop(){
    if(top==-1){
      cout<<"stack is empty"<<endl;
    }
    else{
      cout<<"the popped element is : "<< arr[top]<<endl;
      top--;
    }
  }
  void display(){
    if(top<0){
      cout<<"stack is empty"<<endl;
    
    }
    else{
      for(int i=0;i<=top;i++){
        cout<<arr[i]<<" ";
      }
      
    }
  }
  
};
int main(){
  stack s;
 s. push(10);
 s.push(20);
 s.push(30);
 s.push(1);
 
 s.display();
s. pop();
s. pop();
s. pop();
s.pop();
s.pop();

 return 0;
}
