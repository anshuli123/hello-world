language: c 
dist: bionic 
sudo: required 
install: 
  - sudo apt update 
  - sudo apt-get install -y libcurl4-openssl-dev 
script:  
  - gcc hello.c -o hello -lcurl 
  - ./hello
