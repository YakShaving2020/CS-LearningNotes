/*
 * Exercise 4: Introducing Valgrind
 * 
 * 1. 安装 Valgrind
 *   下载 Valgrind
 *   验证 MD5: md5sum valgrind-3.6.1.tar.bz2
 *   解压：tar -xjvf valgrind-3.6.1.tar.bz2
 *   进入解压文件：cd valgrind-3.6.1.tar.bz2
 *   运行配置文件：./configure
 *   构建程序：make
 *   安装： sudo make install
 */

#include <stdio.h>

/* Warning: This program is wrong on purpose. */
int main(int argc, char* argv[])
{
    int age = 10;
    int height;

    printf("I am %d years old.\n");
    printf("I am %d inches tall.\n", height);

    return 0;
}