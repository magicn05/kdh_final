## 1. 프로젝트명
      그냥 게시판

## 2. 프로젝트 설명
      TCP/IP 를 이용한 게시판, 자료실, 채팅방 (C++, C를 곁들인)
      - Linux Ubuntu 20.04.01, GCC version 9.4.0

## 3. 프로젝트 설치 및 실행방법
      1. boost 라이브러리를 설치한다. (설치했으면 step 2번으로 건너뛰자)
         - https://www.boost.org/users/download/ 에서 최신 압축파일 받기 (파일명 : boost_1_80_0.tar.gz)
         - ~에 압축파일 저장후 압축 해제 (tar -xvf boost_1_80_0.tar.gz)- 
         - 리눅스에서 sudo apt-get update 명령어 실행
         - 해당 폴더로 들어간후 ./bootstrap.sh 명령어 실행
         - 같은 위치에서 sudo ./b2 install 명령어 실행
         
      2. 저장된 소스를 로컬에 clone 한다. (ssh주소 : git@github.com:magicn05/kdh_final.git)
      
      3. 공유라이브러리 세팅을 위해 ~/.bashrc 파일의 제일 마지막줄에 아래 명령어를 추가해준다.
         export LD_LIBRARY_PATH=~/kdh_final/final_project/lib:$LD_LIBRARY_PATH
         
      4. clone 된 폴더에 들어간다. (~/kdh_final/final_project/)
      
      5. make clean 명령어로 혹시나 불필요한 파일이 있을수도 있으니 초기화 + 제거를 해준다.
      
      6. make 명령어로 실행파일을 만들어준다. (파일명 : server, client)
      
      7. 실행파일은 ~/kdh_final/final_project/bin/ 폴더안에 생성이 된다.
      
      8. bin 폴더로 들어가서 ./server 명령어로 서버 프로그램을 실행한다.
      
      9. 같은 폴더내에서 ./client 127.0.0.1 명령어로 클라이언트 프로그램을 실행한다.
      
      10. 클라이언트 사용 : 회원가입을 하거나 기본 아이디 ( ID : apple / PIN : 1234 ) 로 로그인하여 프로그램을 사용한다.
      
      11. 서버 사용 : 서버 종료는 CTRL + C를 누르면 3초후 종료된다.

## 4. 프로젝트 사용 방법
      1. 로그인 아이디를 입력해서 프로그램에 로그인 한다.
         -> 로그인 아이디가 없으면 회원가입을 통해 로그인 한다.
      2. 

## 5. 참고자료
      1. https://www.boost.org/users/download/

