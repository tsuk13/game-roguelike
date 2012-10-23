#ifndef __ENTITY_H__
#define __ENTITY_H_

#include<iostream>
#include<string>
using std::string;

class Entity{
  private:
    string name;
    string description;
    int posX;
    int posY;
    char pic;
  public:
    Entity();
    ~Entity();
    void setName(string n);
    void setDesc(string d);
    void setPos(int x, int y);
    void setPic(char p);
    string getName();
    string getDesc();
    int getPosX();
    int getPosY();
    char getPic();
};

#endif
