#include<stdio.h>
/*
指针的学习笔记和代码理解
*/

//1.指针，引用和取值
int main()
{
	int  *ptr;//声明一个名叫ptr的int指针
	int val = 1;
	ptr = &val;//将val的内存地址赋值给ptr
	int deref = *ptr;
	/*
		1.声明一个叫deref的int类型变量
		2.取出指针ptr的地址的值并赋值给deref
	*/
	printf("%d\n", deref);
	//输出为1,及指针ptr所指的内存地址->&val上的储存的值
	return 0;
}

//2.void指针，NULL指针和未初始化的指针

//void 是无类型指针，及可以用任意类型的指针对void指针赋值
//未初始化指针:一个声明后但没有被赋值的指针

	int *uninit;
	int *nullptr = NULL;
	void *vptr;
	int val = 1;
	int *iptr;
	int *castptr;

	iptr = &val;//将变量val的地址赋值给指针iptr
	vptr = iptr;//将指针iptr的地址赋值给void指针vptr
	printf("iptr=%p,vptr=%p\n", iptr,vptr);
	//	%p用来输出指针~

	castptr = (int *)vptr;//强制类型转换，将void指针转换成int指针
	printf("*castptr=%d\n", *castptr);

	printf("uninit=%p,nullptr=%p\n", uninit,nullptr);


//3.指针和数组

/*
C语言的数组表示一个连续的内存结构，用来储存多个特定类型的对象
指针用来储存单个内存地址。数组变量指向了数组的第一个元素的内存地址

*/
	int myarray[4] = {1,2,3,0};
	int *ptr = myarray;
	printf("*ptr=%d\n", *ptr);
	/*
	不能把指针赋值给数组
	但可以把数组赋值各指针，即把数组第一个元素的地址赋给指针
	*/
//指针和结构体
	//未完，待补


	//指向结构体的指针储存了结构体第一个元素的内存地址
	struct person{
		int age;
		char *name;
	};
	struct person first;
	struct person *ptr;
	first.age = 20;
	char *fullname = "full name";
	printf("%p , %s\n", &fullname,fullname);
	first.name = fullname;
	ptr = &first;
	printf("age = %d,name = %s\n", first.age,ptr->name);
	return 0;
