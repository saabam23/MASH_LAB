#include <iostream>
#include <string>
#include "life.h"

using namespace std;

// implementation of class Life

Life::Life(){ // default constructor
  num_kids = 0;
  job = "";
  city = "";
  pet = "";
  salary = 1;
  honeymoon = "";
}

void Life::set_num_kids(int k){
  num_kids = k;
}

void Life::set_job(string j){
  job = j;
}

void Life::set_city(string c){
  city = c;
}

void Life::set_pet(string p){
  pet = p;
}

void Life::set_salary(int s){
  salary = s;
}

void Life::set_honeymoon(string h){
  honeymoon = h;
}

int Life::get_num_kids(){
  return num_kids;
}

string Life::get_job(){
  return job;
}

string Life::get_city(){
  return city;
}

string Life::get_pet(){
  return pet;
}

int Life::get_salary(){
  return salary;
}

string Life::get_honeymoon(){
  return honeymoon;
}