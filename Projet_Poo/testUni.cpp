#pragma once
#include <iostream>
#include "testUni.h"
using namespace std;
using namespace System;
using namespace System::Data;


ProjetPoo::testUni::testUni() {

}

ProjetPoo::testUni::testUni(char t_first_name, char t_last_name, int t_sup, string t_hire_date, char t_adress, int t_CP, char t_city) 
{
	for (int i = 0; i < 10; i++)
	{
		CreateStaff(t_first_name, t_last_name, t_sup, t_hire_date, t_adress, t_CP, t_city);
	}
	cout << selectTheStaff << endl;
	bool x;
	cout << "Voulez vous passer à la suppression des données ?" << endl;
	cin >> x;
	if (x == true)
	{
		for (int j = 0; j < i; j++)
		{
			DeleteStaff();
		}
		
	}
}

ProjetPoo::testUni::CreateStaff(char t_first_name, char t_last_name,int t_sup,string t_hire_date,char t_address, int t_address, int t_CP, char t_city)
{
	// Créer People
	System::Data::DataRow^ row;
	int idPeople;
	row = this->oPeople->createPeople(t_first_name, t_last_name);
	idPeople = System::Convert::ToInt32(row->ItemArray[0]);

	System::Data::DataRow^ row;
	// Créer un staff
	int indexStaff;
	if (this->combo_superior->SelectedIndex != -1) {
		this->oDs = this->oStaff->selectAllStaff("staff");
		indexStaff = this->combo_superior->SelectedIndex;
		sup = System::Convert::ToInt32(this->oDs->Tables["staff"]->Rows[indexStaff]->ItemArray[0]);
	}

	System::DateTime^ date = t_hire_date;
	System::String^ dateString = System::Convert::ToString(date->Month) + "/";
	dateString += System::Convert::ToString(date->Day) + "/";
	dateString += System::Convert::ToString(date->Year);
	this->oStaff->createStaff(idPeople, dateString, sup, "");
	int idAddress = this->oAddress->createAddress("", "", t_address, t_CP, t_city);
	this->oStaff->updateStaffAddress(idPeople, idAddress);
}

ProjetPoo::testUni::DeleteStaff()
{
	// Delete Staff
	this->oStaff->deleteStaff(-1);
	this->oPeo->deletePeople(-1);
}
