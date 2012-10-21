#include<iostream>
#include"Entity.h"

int main(){
  int vertLines = 24;
  int horzLines = 80;
  for(int i = 0; i < vertLines; i++){
    for(int j = 0; j < horzLines; j++){
      std::cout << "#";
    }
    std::cout<<"\n";
  }
  Entity* e = new Entity();
  std::cout << e->getName() << "\n";
  return 0;
}
