/*
 * 练习2：Make Is Your Python Now
 * 
 * 1.使用 Make
 *  使用默认的方式构建：make file_name
 *  向make命令传递“修改器”的途径
 *    CFLAGS="-Wall" make file_name // 这个参数的作用是：报告所有的警告
 *    将环境变量放到你想执行的命令前面，环境变量只会在程序运行时生效	
 * 2.Makefile
 *    CFLAGS=-Wall -g
 *    clean:
 *      rm -f ex1
 *    all:ex1
 */