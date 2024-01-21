FROM ubuntu:latest

WORKDIR /usr/src

RUN apt-get update -y && apt-get install -y build-essential nano vim gdb

COPY . .

CMD ["/bin/bash"]