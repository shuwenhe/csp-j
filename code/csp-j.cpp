#include <iostream>

using namespace std;

// 高斯求和公式求和1+2+3+...+100
int gauss() {
    int sum = 0;
    sum = (1+100)*100/2;
    cout << "gauss sum=" << sum << endl;
    return 0;
}

// for循环求和1+2+3+...+100
int forSum(){
    int sum = 0;
    for (int i = 1; i <= 100; i++) {
        sum += i;
    }
    cout << "for sum=" << sum << endl;
    return 0;
}
// linux命令
// 文件命令

// C++
// 数据类型
int intType(){
	// int 整型
	int num = 10;
	cout<<"num = "<<num<<endl;
	return 0;
}

int shortType(){
	short short_num = 20;
	cout<<"short_num = "<<short_num<<endl;
	return 0;
}

int longType(){
	long long_num = 1234567890;
	cout<<"long_num = "<<long_num<<endl;
	return 0;
}

int longLongType(){
	long long long_long_num =9876543210;
	cout<<"longLong_num ="<<long_long_num<<endl;
	return 0;
}	

// 浮点型
int floatType(){
	float pi = 3.14;
	cout<<"pi ="<<pi<<endl;
	return 0;
}


// 二进制


// 哈希表

// 图

// 树
// 二叉树
// 二叉树：前序、中序、后续遍历

// 字符串的操作

// 递归

// 时间复杂度

// algorithm

// sort 排序
// 插入排序
// 冒泡排序
// 堆排序
// 归并排序

// 分治算法

// 2022CSP-S-1 假期计划（holiday）
// 小熊的地图上有n个点，其中编号为l的是它的家、编号为 2,3,…,n的都是景点。部分点对之间有双向直达的公交线路。如果点 x与 z1、z1 与 z2、……、zk−1 与 zk、zk 与y之间均有直达的线路，那么我们称 x与 y之间的行程可转车 k次通达；特别地，如果点 x与 y之间有直达的线路，则称可转车 0次通达。
// 很快就要放假了，小熊计划从家出发去 4个不同的景点游玩，完成 5 段行程后回家：家 →→ 景点 A →→ 景点 B →→ 景点 C →→ 景点 D →→ 家且每段行程最多转车 k次。转车时经过的点没有任何限制，既可以是家、也可以是景点，还可以重复经过相同的点。例如，在景点 A →→ 景点 B 的这段行程中，转车时经过的点可以是家、也可以是景点 C，还可以是景点 D →→ 家这段行程转车时经过的点。
// 假设每个景点都有一个分数，请帮小熊规划一个行程，使得小熊访问的四个不同景点的分数之和最大。
int holiday(){
	cout<<"holiday"<<endl;
	return 0;
}

int hello(){
	cout<<"hello"<<endl;
	return 0;
}

// localVariable局部变量
int localVariable(){
	int a,b,sum; // 局部变量声明
	a = 1,b = 2; // 实际初始化
	sum = a + b;
	cout<<"sum = "<<sum<<endl;
	return 0;
}

// globalVariable 全局变量
int i = 3;
int globalVariable(){
	int i = 5;
	cout<<"i = "<<i<<endl;
	return 0;
}

// blockScope块作用域
int blockScope(){
	int i = 1;
	{
		int i = 2; // 块作用域变量
		cout<<"i = "<<i<<endl;
	}
	cout<<"i = "<<i<<endl;
	return 0;
}

// #define 预处理器定义常量
#define LENGTH 3
#define WIDTH 2

int areaDefine(){
	int area;
	area = LENGTH * WIDTH;
	cout<<"area = "<<area<<endl;
	return 0;
}


// 使用 const 前缀声明指定类型的常量
int constConstant(){
	const int LENGTH_ = 3;
	const int WIDTH_ = 2;
	int area;
	area = LENGTH_ * WIDTH_;
	cout<<"area = "<<area<<endl; 
	return 0;
}

int modifier(){
	short int i; // 有符号短整数
	short unsigned int j;
	j = 50000;
	i = j;
	cout<<"j = "<<j<<endl;	
	cout<<"i = "<<i<<endl;	
	return 0;
}

// 算术运算符
int arithmeticOperator(){
	int a = 5;
	int b = 3;
	int c;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	c = a + b;
	cout<<"c = a + b = "<<c<<endl;
	c = a - b;
	cout<<"c = a - b = "<<c<<endl;
	c = a * b;
	cout<<"c = a * b = "<<c<<endl;
	c = a / b;
	cout<<"c = a / b = "<<c<<endl;
	c = a % b;
	cout<<"c = a % b = "<<c<<endl;
	int d = 7;
	cout<<"d = "<<d<<endl;
	c = d++;
	cout<<"c = d++ = "<<c<<endl;
	c = d--;
	cout<<"c = d-- = "<<c<<endl;
	return 0;
}

// 关系运算符
int relationalOperator(){
	int a = 5;
	int b = 3;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	int c;
	if (a == b){
		cout<<"a 等于 b"<<endl;
	}else{
		cout<<"a 不等于 b"<<endl;
	}
	if(a < b){
		cout<<"a 小于 b"<<endl;
	}else{
		cout<<"a 不小于 b"<<endl;
	}
	if(a > b){
		cout<<"a 大于 b"<<endl;
	}else{
		cout<<"a 不大于 b"<<endl;
	}
	return 0;
}

// 逻辑运算符
int logicalOperator(){
	int a = 3,b = 5,c;
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	if (a&&b){
		cout<<"a&&b条件为 true"<<endl;
	}
	if (a || b){
		cout<<"a||b条件为 true"<<endl;
	}
	// 改变a和b的值
	a = 0;
	b = 5;
	if (a && b){
		cout<<"a&&b条件为 true"<<endl;
	}else{
		cout<<"a&&b条件为 false"<<endl;
	}
	if (!(a&&b)){
		cout<<"!(a&&b)条件为 true"<<endl;
	}
	return 0;
}


int main() {
	logicalOperator();
}

