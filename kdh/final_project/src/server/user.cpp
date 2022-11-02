#include <iostream>
#include <string>
#include <vector>
#include "user.h"

using namespace std;

user::user() {
  this->user_id = "";
  this->user_pin = "";
  this->user_name = "";
  this->phone_number = "";
}

user::user(string user_id, string user_pin, string user_name,
           string phone_number) {
  this->user_id = user_id;
  this->user_pin = user_pin;
  this->user_name = user_name;
  this->phone_number = phone_number;
}

user::~user() {
  cout << "check" << endl;
}

string user::get_userid() { return this->user_id; }
string user::get_userpin() { return this->user_pin; }
string user::get_userName() { return this->user_name; }
string user::get_userPhone() { return this->phone_number; }
