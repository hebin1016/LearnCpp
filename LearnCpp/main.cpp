//
//  main.cpp
//  LearnCpp
//
//  Created by hebin on 2017/2/4.
//  Copyright © 2017年 hebin. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

//std:标准命名空间（包含很多标准的定义）
//standard
using namespace std;
//命名空间类似于Java中的包

/*

//自定义命名空间
namespace NSP_A {
    int a=10;
    //命名空间中结构体
    struct Teacher{
        char *name;
        int age;
    };
}

namespace NSP_B {
    int a=25;
    //命名空间嵌套
    namespace NSP_C{
        int c=30;
    }
}

int main(int argc, const char * argv[]) {
    // <<运算符重载
    cout << "Hello, World!\n"<<endl;
    
    // ::访问修饰符
    cout<<NSP_A::a<<endl;
    
    cout<<NSP_B::a<<endl;
    
    cout<<NSP_B::NSP_C::c<<endl;
    
    //使用命名空间中的结构体
    using NSP_A::Teacher;
    struct Teacher t;
    t.age=35;
    cout<<t.age<<endl;
    
    
    return 0;
}
 
*/

/*
#define PI 3.14
//类
class MyCircle{
    //属性(共用权限访问修饰符)
private:
    double s;
    double r;
public:
    void setR(double r){
        this->r=r;
    }
    
    double getS(){
        return PI*r*r;
    }
};

int main(){
    
    MyCircle circle;
    circle.setR(5);
    cout<<"圆的面积:"<<circle.getS()<<endl;
    return 0;
}
 */

/*
//结构体
struct Teacher{
public:
    char *name;
    int age;
    void say(){
        cout<<this->age<<"岁"<<endl;
    }
};

int main(){
    Teacher t;
    t.age=88;
    t.say();
    
    return 0;
}
*/

/*
//布尔类型
int main(){
    bool isSingle=true;//等于true或者大于0的数都表示true
    //bool占一个字节
    
    if(isSingle){
        //if里大于0，即条件成立
        cout<<"单身"<<endl;
    }else{
        cout<<"有对象"<<endl;
    }
    
    return 0;
}
*/


/*
//三元表达式
int main(){
    
    int a=70;
    int b=20;
    (a>b?a:b)=30;//(可以为左值)
    cout<<a<<endl;
    cout<<b<<endl;

    
    return 0;
}
*/

/*
void swap1(int *a,int *b){
    int c=0;
    c=*a;
    *a=*b;
    *b=c;
}
void swap2(int &a,int &b){
    int c=0;
    c=a;
    a=b;
    b=c;
}
//引用
int main(){
    //变量名-门牌号(内存空间0x00001的别名,可不可以有多个名字？)
    int a=10;
    //b是这个a内存空间的别名
    int &b=a;//& c++中的引用
    
    cout<<a<<"\n"<<endl;

    b=30;
    
    cout<<a<<"\n"<<endl;
    
    cout<<"-----------交换值-------------"<<endl;

    int x=10;
    int y=35;
    swap2(x, y);
    cout<<x<<";"<<y<<endl;

    
    return 0;
}
*/

/*
struct Teacher{
    char* name;
    int age;
};

void myprint(Teacher &t){
    cout<<t.name<<endl;
}

//引用的主要功能：作为函数的参数或返回值
int main(){
    Teacher t;
    t.name="hank";
    t.age=18;
    myprint(t);
    
    return 0;
}
*/

/*
//指针引用代替二级指针
struct Teacher{
    char* name;
    int age;
};

void myprint1(Teacher **t){
    Teacher *teacher=(Teacher *)malloc(sizeof(Teacher));
    teacher->age=300;
    t=&teacher;
}

void myprint2(Teacher* &t){
    t=(Teacher *)malloc(sizeof(Teacher));}
}
int main(){
    Teacher t;
    t.age=100;
    myprint1(&t);
    myprint2(t);
    return 0;
}
 */

/*
//指针常量和常量指针
int main(){
    
    int a,b;
    
    int* const p=&a;//指针常量，指针的常量，不可以改变地址的指针，但是可以修改它指向的内容
    *p=25;
    
    const int* p1=&a;//常量指针,指向常量的指针，值不能修改
    p1=&b;
    
    return 0;
}
*/

/*
//单纯给变量取别名没有任何意义，作为函数参数传递，能保证参数传递过程中（不产生副本）
//引用可以直接操作变量，指针要通过取值（*p)间接操作变量，指针的可读性差（可读性更好）
int main(){
    
    //const int i;
    //引用必须要有值，不能为空
    //int &a=NULL;
    
    return 0;
}
*/

/*
//常引用,不能改变值的引用

int main(){
    
//    int a,b;
//    const int &c=a;
//    c=b;
    
    return 0;
}
*/

/*
//引用的大小
struct Teacher{
    char *name[20];
    int age;
};

int main(){
    
    Teacher t;
    Teacher &t1=t;
    
    cout<<sizeof(t)<<endl;
    
    return 0;
}
*/

/*
//函数可以有默认值,多个参数必须同时有或没有默认值
int add(int x=10){
    return x+20;
}
int main(){
    cout<<add(40)<<endl;
    return 0;
}
*/

/*
//可变参数
#include <stdarg.h>

void func(int i,...){
    //可变参数指针
    va_list args_p;
    //开始读取可变参数，是最后一个固定参数
    va_start(args_p, i);
    int a=va_arg(args_p, int);
    char b=va_arg(args_p, char);
    int c=va_arg(args_p, int);
    
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    
    //结束
    va_end(args_p);
}

int main(){
    func(9,30,'c',33);
    return 0;
}
*/

/*
#include "MyTeacher.h"
//c++实现头文件函数
int main(){
    MyTeacher myTeacher;
    myTeacher.age=20;
    cout<<myTeacher.getAge()<<endl;
    return 0;
}
*/

/*
//构造函数，析构函数，拷贝构造函数
class Teacher{
public:
    char *name;
    int age;
public:
    //无参构造函数(对象声明就会调用)
    Teacher(){
        cout<<"无参构造函数"<<endl;
    }
    //有参构造函数
    Teacher(char *name,int age){
        this->name=name;
        this->age=age;
        cout<<"有参构造函数"<<endl;
    }
};
int main(){
    Teacher t;//无参构造函数调用
    
    //有参构造函数调用
    Teacher t2("hank",28);
    Teacher t3=Teacher("hank",28);
    
    return 0;
}
*/

/*
//析构函数：善后处理
//当对象要被系统释放时，析构函数被调用
class Teacher{
public:
    char *name;
    int age;
public:
    Teacher(){
        this->name=(char*)malloc(100);
        strcpy(name, "abcde");
        age=20;
        cout<<"无参构造函数"<<endl;
    }
    //析构函数
    ~Teacher(){
        free(name);
        cout<<"析构函数"<<endl;
    }
};

void func(){
    Teacher t;
}

int main(){
    func();//函数执行完，t对象被释放出发析构函数
    return 0;
}
*/

/*
//浅拷贝(默认拷贝方式)(值拷贝)的问题：（同一内存区域释放多次）
class Teacher{
public:
    char *name;
    int age;
public:
    //有参构造函数
    Teacher(char *name,int age){
        this->name=(char *)malloc(100);
        this->name=name;
        this->age=age;
        cout<<"有参构造函数"<<endl;
    }
    
    ~Teacher(){
        free(name);
    }
    
    void myprint(){
        cout<<name<<","<<age<<endl;
    }
};

int main(){
    Teacher teacher("abc",28);//当有有参构造函数，默认的无参构造函数被覆盖
    teacher.myprint();
    teacher.age=20;
    teacher.myprint();
    Teacher t2=teacher;
    t2.myprint();
    return 0;
}
 */

/*
//深拷贝,拷贝的是指针指向的数据内容
class Teacher{
public:
    char *name;
    int age;
public:
    //有参构造函数
    Teacher(char *name,int age){
        this->name=(char *)malloc(strlen(name)+1);
        strcpy(this->name, name);
        this->age=age;
        cout<<"有参构造函数"<<endl;
    }
    
    ~Teacher(){
        cout<<"析构"<<endl;
        free(this->name);
    }
    Teacher(const Teacher &obj){
        int len=strlen(obj.name);
        this->name=(char*)malloc(len+1);
        strcpy(this->name, obj.name);
        this->age=obj.age;
    }
    void myprint(){
        cout<<name<<","<<age<<endl;
    }
};

void func(){
    Teacher t("12331",38);
    Teacher t1=t;
}

Teacher func1(Teacher t){
    return t;
}

int main(){
    
    //func();
    Teacher t("12331",38);
    func1(t);
    
    //拷贝构造函数被调用的场景
    //1，声明时赋值
    //2.作为参数传入函数,实参给形参赋值
    //3.作为函数返回值返回，给变量初始化赋值
    
    //这里不会被调用
    //Teacher t1;
    //Teacher t2;
    //t1=t2;
    
    return 0;
}
*/


//构造函数属性初始化列表
int main(){
    
    return 0;
}

