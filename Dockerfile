FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

# 安裝 Python 環境與基本工具
RUN apt-get update && apt-get install -y \
    python3 python3-pip python-is-python3 \
    vim \
    wget curl git \
    && apt-get clean && rm -rf /var/lib/apt/lists/*

# 預設使用 root + 進入 bash
WORKDIR /home/apcs-folder
CMD ["/bin/bash"]
