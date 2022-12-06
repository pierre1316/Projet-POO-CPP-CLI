#pragma once
#include "CLcad.h"

namespace NS_Comp_Svc {
	ref class Customer
	{
	private:
		System::String^ sql;
		NS_Comp_Data::CLcad^ oCad;
	public:
		Customer(void);
		System::Data::DataSet^ selectAllCustomer(System::String^);
		System::Data::DataSet^ getTheCustomer(System::String^ dataTableName, int idPeople);
		System::Data::DataSet^ selectCustomerNoStaff(System::String^ dataTableName);
		System::Void createCustomer(int idPeople, System::String^ birth_date);
		System::Void modifyCustomer(int idPeople, System::String^ birth_date);
		System::Void deleteCustomer(int idPeople);
	};
}
