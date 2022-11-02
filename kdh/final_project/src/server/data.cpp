#include "data.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

data::data(){
  this->data_title = "";
  this->data_date = "";
  this->data_owner = "";
  this->data_passwd = "";
  this->contents = "";
}

data::~data(){
}

data::data(string data_title, string data_date, string data_owner, string data_passwd, string contents){
  this->data_title = data_title;
  this->data_date = data_date;
  this->data_owner = data_owner;
  this->data_passwd = data_passwd;
  this->contents = contents;
}

string data::get_title(){
  return this->data_title;
}

string data::get_date(){
  return this->data_date;
}

string data::get_owner(){
  return this->data_owner;
}

string data::get_passwd(){
  return this->data_passwd;
}

string data::get_contents(){
  return this->contents;
}