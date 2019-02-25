# Linux C++ 实现线程池

locker.h：将Linux下线程同步的三个方法(互斥量、信号量、条件变量)封装成了三个类，方便线程池调用

pthreadpool.h：封装了一个线程池类，是一个模板类

test.cpp：一个测试代码，测试该线程池能否正常使用

使用：g++ test.cpp -o test -lpthread