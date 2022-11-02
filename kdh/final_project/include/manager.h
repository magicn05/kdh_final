#ifndef _MANAGERS_H
#define _MANAGERS_H

#include "user.h"
#include "data.h"
#include <string>
#include <vector>
using namespace std;

//////////////////////////////////////////////////////////////////////////////////

class user_Manager {
private:
  vector<user *> user_list;
  int user_cnt;

public:
  user_Manager();
  ~user_Manager();
  void add_user(user *new_user);
  void get_user_id(int n);
  void get_user_pin(int n);
  void get_user_name(int n);
  void get_user_phoneNum(int n);
  int get_user_cnt();
  int check_login(string id, string pin);
};

//////////////////////////////////////////////////////////////////////////////////


class data_Manager{
private:
  vector<data*> data_list;
  int data_cnt;
public:
  data_Manager();
  ~data_Manager();
  void add_data(data *new_data);
  void get_data_title(int n);
  void get_data_owner(int n);
  void get_data_passwd(int n);
  void get_data_date(int n);
};

#endif