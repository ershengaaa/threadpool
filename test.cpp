/*************************************************************************
      > File Name: test.cpp
      > Author: ersheng
      > Mail: ershengaaa@163.com 
      > Created Time: Mon 25 Feb 2019 05:48:44 PM CST
 ************************************************************************/

#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include "pthreadpool.h"

class task {
private:
	int number;
public:
	task(int num) : number(num) {
		
	}
	~task() {}
	void doit() {
		printf("this is the %d task\n", number);
	}
};

int main() {
	task *tsk;
	threadpool<task> pool(10);
	for (int i = 0; i < 20; ++i) {
		tsk = new task(i);
		pool.append_task(tsk);
	}
	pool.start();
	sleep(10);
	printf("close the thread pool\n");
	pool.stop();
	return 0;
}



