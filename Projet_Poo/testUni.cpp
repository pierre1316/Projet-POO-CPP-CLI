#pragma once
#include <iostream>
#include "testUni.h"
using namespace std;
using namespace System;
using namespace System::Data;
testUni::testUni() {
	this->first_name = "";
	this->last_name = "";
	this->sup = NULL;
	this->adress = "";
	this->CP = NULL;
	this->city = "";
}

testUni::testUni(char t_first_name, char t_last_name, int t_sup, string t_hire_date, char t_adress, int t_CP, char t_city) {
	this->first_name = t_first_name;
	this->last_name = t_last_name;
	this->sup = t_sup;
	this->adress = t_adress;
	this->CP = t_CP;
	this->city = t_city;
}

