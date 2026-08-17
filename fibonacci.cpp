#include <iostream>
using namespace std;
int fib(int n){
//if(n==0){
  //  return 0;
  //}
  //else if(n==1){
   // return 1;
  //}
  // dono looop samwe work krenege ok
  if(n==0||n==1){
   return n;}
  
 return fib(n-2)+fib(n-1);

}
int main()
{
    cout<<fib(4)<<endl; 

    return 0;
}


/*

// series print hogi puri essa
int main()
{
    for(int i=0;i<4;i++){
    cout<<fib(i)<<endl; 
    }

    return 0;
}

*/

