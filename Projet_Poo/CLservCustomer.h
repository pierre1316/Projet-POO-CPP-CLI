#pragma once
#include "CLmapTB.h"
#include "CLcad.h"

namespace NS_Comp_Svc {
	ref class CLservCustomer
	{
	private:
		System::Data::DataSet^ oDs;
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
	public:
		CLservCustomer(void);
		System::Data::DataSet^ selectAllCustomer(System::String^);
		System::Data::DataSet^ selectCustomerNoStaff(System::String^ dataTableName);
		System::Void createCustomer(int idPeople, System::String^ birth_date);
		System::Void modifyCustomer(int idPeople, System::String^ birth_date);
	};
}
