# Get the GCC preinstalled image from Docker Hub
FROM ubuntu:18.04

# Setup environment
ENV DEBIAN_FRONTEND noninteractive

RUN groupadd --gid 1000 codeadm && useradd --create-home -g 1000 --uid 1000 codeadm \
    && mkdir /code && chown codeadm:codeadm /code

RUN apt update && apt install -y \
    sudo \
    build-essential \
    manpages-dev \
    valgrind \
    curl \
    cmake \
    clang \
    clang-format \
    clang-tidy \
    cppcheck \
    ccache \
    python3-pip

RUN pip3 install cpplint

USER codeadm

WORKDIR /code

CMD ["/bin/bash"]
