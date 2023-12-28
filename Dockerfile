FROM --platform=linux/amd64 ubuntu:20.04

# Mount volume
RUN mkdir /volume
WORKDIR /volume 

# Requirements
RUN apt-get -qq update \
&& apt-get -qq install -y g++ cmake \
&& apt-get clean

EXPOSE 8000
ENTRYPOINT ["/bin/bash"]

# > docker build --platform linux/md
# > docker run -it --rm -v path/to/directory:/volume baekjoon
# > g++ 10100.cpp -o 10100
# > ./10100