FROM ubuntu:latest

WORKDIR /usr/src

RUN apt-get update -y && apt-get install -y build-essential nano vim gdb gcc-multilib g++-multilib

COPY . .

CMD ["/bin/bash"]