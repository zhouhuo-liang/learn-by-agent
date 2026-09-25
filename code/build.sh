#!/usr/bin/env bash
# 编译并运行一个 .cpp 文件（Mac / Linux 用 clang++，没有 MSVC）
# 用法: ./build.sh 文件名       例如: ./build.sh hello   -> 编译 hello.cpp 并运行

set -e

NAME="$1"

if [ -z "$NAME" ]; then
    echo "用法: ./build.sh <文件名，不带 .cpp>"
    echo "例如: ./build.sh hello   （编译并运行 hello.cpp）"
    exit 1
fi

if [ ! -f "$NAME.cpp" ]; then
    echo "找不到文件: $NAME.cpp"
    exit 1
fi

clang++ -std=c++17 -Wall -Wextra -g -O0 -o "$NAME" "$NAME.cpp"
"./$NAME"