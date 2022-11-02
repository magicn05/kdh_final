#ifndef _DATA_H_
#define _DATA_H_
#include <string>
#include <iostream>

using namespace std;

class data{
  private:
  string data_title;
  string data_date;
  string data_owner;
  string data_passwd;
  string contents;

  public:
  data();
  data(string data_title, string data_date, string data_owner, string data_passwd, string contents);
  ~data();
  string get_title();
  string get_date();
  string get_owner();
  string get_passwd();
  string get_contents();  
};

#endif