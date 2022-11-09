## 1. 프로젝트명
      어렵게 만든 그냥 게시판

## 2. 프로젝트 설명
      TCP/IP 를 이용한 게시판-자료실-채팅방 올인원 프로그램 (C++, C를 곁들인)
      - Linux Ubuntu 20.04.01, GCC version 9.4.0

## 3. 프로젝트 설치 및 실행방법
      1. boost 라이브러리를 설치한다. (설치했으면 step 2번으로 건너뛰자)
         - 클래스 자료의 serialization 을 위한 목적임.
         - https://www.boost.org/users/download/ 에서 최신 압축파일 받기 (파일명 : boost_1_80_0.tar.gz)
         - ~에 압축파일 저장후 압축 해제 (tar -xvf boost_1_80_0.tar.gz)- 
         - 리눅스에서 sudo apt-get update 명령어 실행
         - 해당 폴더로 들어간후 ./bootstrap.sh 명령어 실행
         - 같은 위치에서 sudo ./b2 install 명령어 실행
         
      2. 저장된 소스를 로컬에 clone 한다. (ssh주소 : git@github.com:magicn05/kdh_final.git)
      
      3. 공유라이브러리 세팅을 위해 ~/.bashrc 파일의 제일 마지막줄에 아래 명령어를 추가해준다.
         export LD_LIBRARY_PATH=~/kdh_final/final_project/lib:$LD_LIBRARY_PATH
      
      3. 프로그램에 내장된 자료실 기능을 사용하기 위해서, (안할꺼면 step 4로 건너뛰자)
         ~/Public/ 폴더 아래에 Server 와 Client 폴더를 각각 만들어준다. (※ 대소문자 주의)
         Server 폴더에는 Server 에서 관리될 파일을 저장해준다.
         Client 폴더에는 Client 에서 관린될 파일을 저장해준다.
         
      4. clone 된 폴더에 들어간다. (~/kdh_final/final_project/)
      
      5. make clean 명령어로 혹시나 불필요한 파일이 있을수도 있으니 초기화 + 제거를 해준다.
      
      6. make 명령어로 실행파일을 만들어준다. (파일명 : server, client)
      
      7. 실행파일은 ~/kdh_final/final_project/bin/ 폴더안에 생성이 된다.
      
      8. ~/kdh_final/final_project/bin/ 폴더로 들어가서 ./server 명령어로 서버 프로그램을 실행한다.
      
      9. 8번과 같은 폴더내에서 ./client 127.0.0.1 명령어로 클라이언트 프로그램을 실행한다.
      
## 4. 프로젝트 사용 방법
      1. 클라이언트
         - 신규로 회원가입을 하여 사용한다.
         - 또는 기본 아이디 ( ID : apple / PIN : 1234 ) 로 로그인하여 프로그램을 사용한다.
               
      2. 서버
         - 서버시작은 프로그램을 시작하면 자동으로 시작된다.
         - 서버 종료는 CTRL + C를 누르면 현재 접속되어 있는 클라이언트에게 종료 예고를 보내고 3초후 종료된다.
      
      3. 관리자 계정은 따로 만들지 않았다.
      
      4. 게시판 내에 글,댓글 삭제는 작성자 본인만 할수 있다.
      
      5. 자료실로 파일을 전송하는 개념은 두가지 이다.
         서버 -> 클라이언트 파일 전송 (~/Public/Server/ 파일을, ~/Public/Client/ 폴더로..)
         클라이언트 -> 서버 파일 전송 (~/Public/Client / 파일을, ~/Public/Server/ 폴더로..)
      
      6. 채팅방은 전체 채팅방 한개만 있다. (여러사람들이 한번에 들어와서 다같이 채팅하는 방)
      
      7. ~/kdh_project/final_project/bin 폴더 아래에 board_contents.txt 와 userinfo.txt 는
         boost serialization 을 사용한 게시판 히스토리와 유저 정보 파일이다.
         지우면 프로그램 자체가 실행이 안되니 주의 할 것!
      
## 5. 참고자료


