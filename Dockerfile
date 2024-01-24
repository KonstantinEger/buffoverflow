FROM ubuntu:latest

WORKDIR /usr/src

RUN apt-get update -y && apt-get install -y build-essential gdb gcc-multilib g++-multilib

COPY . .

CMD ["/bin/bash"]