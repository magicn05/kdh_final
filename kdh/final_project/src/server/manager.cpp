#include "manager.h"
#include "user.h"
#include <iostream>
#include <string>
using namespace std;

user_Manager::user_Manager(){
  user_cnt = 0;  
}

user_Manager::~user_Manager(){
}

void user_Manager::add_user(user* new_user){
  user_list.push_back(new_user);
  user_cnt++;
}

void user_Manager::get_user_id(int n){
    cout << user_list[n]->get_userid() << endl;
}

void user_Manager::get_user_name(int n){
    cout << user_list[n]->get_userName() << endl;
}

void user_Manager::get_user_pin(int n){
    cout << user_list[n]->get_userpin() << endl;
}

void user_Manager::get_user_phoneNum(int n){
    cout << user_list[n]->get_userPhone() << endl;
}

int user_Manager::get_user_cnt(){
  return user_cnt;
}

int user_Manager::check_login(string id, string pin){
  //cout << "check point " << endl;
  //cout << "input id : " << id << endl;
  //cout << "input pin : " << pin << endl;
  int check_flag = 0;
  for (int i=0; i<this->user_cnt; i++){
    if((user_list[i]->get_userid()) == id){
      if ((user_list[i]->get_userpin()) == pin){
        check_flag = 1;
      }
    }
  }
  if (check_flag == 1)
    return 0; //성공
  else
    return 1; //실패

}

data_Manager::data_Manager(){
   int data_cnt = 0;
}

data_Manager::~data_Manager(){
  
}

void data_Manager::add_data(data *new_data){
  data_list.push_back(new_data);
}

void data_Manager::get_data_title(int n){
  cout << data_list[n]->get_title() << endl;
}

void data_Manager::get_data_owner(int n){
  
}

void data_Manager::get_data_passwd(int n){
  
}

void data_Manager::get_data_date(int n){
  
}