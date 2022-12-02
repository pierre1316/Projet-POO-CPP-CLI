#pragma once
#include<string>
#include <iostream>
using namespace std;

using namespace System;
using namespace System::Data;

private: System::Data::DataSet^ oDs;
private: NS_Comp_Svc::CLservPeople^ oPeople;
private: NS_Comp_Svc::CLservStaff^ oStaff;
private: NS_Comp_Svc::CLservAddress^ oAddress;

	   namespace ProjetPoo {
	   private:
		   char first_name;
		   char last_name;
		   int sup;
		   char t_address;
		   int CP;
		   char city;
	   public:
		   testUni();
		   testUni(char t_first_name, char t_last_name, int t_sup, string t_hire_date, char t_adress, int t_CP, char t_city);
		   CreateStaff(char t_first_name, char t_last_name, int t_sup, string t_hire_date, char t_address, int t_CP, char t_city);
		   DeleteStaff();
		   ~testUni();
	   //private:
		  // System::Data::DataRow^ row;
		  // int idPeople;
		  // row = this->oPeople->createPeople(t_first_name, t_last_name);
		  // idPeople = System::Convert::ToInt32(row->ItemArray[0]);

		  // System::Data::DataRow^ row;
		  // // Créer un staff
		  // int indexStaff;
		  // if (this->combo_superior->SelectedIndex != -1) {
			 //  this->oDs = this->oStaff->selectAllStaff("staff");
			 //  indexStaff = this->combo_superior->SelectedIndex;
			 //  sup = System::Convert::ToInt32(this->oDs->Tables["staff"]->Rows[indexStaff]->ItemArray[0]);
		  // }

		  // System::DateTime^ date = t_hire_date;
		  // System::String^ dateString = System::Convert::ToString(date->Month) + "/";
		  // dateString += System::Convert::ToString(date->Day) + "/";
		  // dateString += System::Convert::ToString(date->Year);
		  // this->oStaff->createStaff(idPeople, dateString, sup, "");
		  // int idAddress = this->oAddress->createAddress("", "", t_address, t_CP, t_city);
		  // this->oStaff->updateStaffAddress(idPeople, idAddress);

		  // this->oStaff->deleteStaff(-1);
		  // this->oPeo->deletePeople(-1);

	   }