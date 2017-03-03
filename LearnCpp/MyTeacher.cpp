//
//  MyTeacher.cpp
//  LearnCpp
//
//  Created by hebin on 2017/2/6.
//  Copyright © 2017年 hebin. All rights reserved.
//

#include "MyTeacher.h"

char* MyTeacher::getName(){
    return this->name;
}
void MyTeacher::setName(char* name){
    this->name=name;
}
int MyTeacher::getAge(){
    return this->age;
}
void MyTeacher::setAge(int age){
    this->age=age;
}
