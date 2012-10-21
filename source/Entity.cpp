#include<iostream>
#include"Entity.h"
using std::string;

Entity::Entity(){
  name = "N/A";
  description = "Not yet intialized";
  posX = 0;
  posY = 0;
  pic = 'o';
}

Entity::~Entity(){
}

string Entity::getName(){
  return name;
}

string Entity::getDesc(){
  return description;
}

int Entity::getPosX(){
  return posX;
}

int Entity::getPosY(){
  return posY;
}

char Entity::getPic(){
  return pic;
}

void Entity::setName(string n){
  name = n;
}

void Entity::setDesc(string d){
  description = d;
}

void Entity::setPos(int x, int y){
  posX = x;
  posY = y;
}

void Entity::setPic(char p){
  pic = p;
}

