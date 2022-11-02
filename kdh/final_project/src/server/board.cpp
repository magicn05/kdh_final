#include <cstring>
#include <iostream>
#include <string>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
#include "data.h"
#include "user.h"
#include "manager.h"
using namespace std;

extern "C" {

int board(int sd, int& res) {
//s  d_manager
  //d_mam.get_data_title(0);
  char recv_buf[1024];

  while(1){
  int a, b, n;
  char buf[1024];
  sprintf(buf, "%s", "게시판 접속 테스트!\n\n");
  send(sd, buf, strlen(buf), 0);
  usleep(0.5);
  sprintf(buf, "%s", "입력을 해보세요.\n\n");
  send(sd, buf, strlen(buf), 0);
  usleep(0.5);
  n = recv(sd, recv_buf, sizeof(recv_buf), 0);
  memset(recv_buf, 0, sizeof(recv_buf));
  usleep(0.5);
  //a = d_manager
  
  res = res + 1;
  cout << "res : real" << res << endl;
  sprintf(buf, "%d", res);
  send(sd, buf, strlen(buf), 0);
  }

  return 0;
}

}