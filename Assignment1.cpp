#include <stdio.h>
#include <iostream>
int main(){
using namespace std;
int a = 1;
int b = 1;
while(b < 49)
{
  a += 1;
  b += a;
  cout<<"Hi";
}
}
//T(O)=n^1/2
