#pragma once
#include "CLmapTB.h"
#include "CLcad.h"

namespace NS_Comp_Svc {
	ref class CLservAddress
	{
	private:
		System::Data::DataSet^ oDs;
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
	public:
		CLservAddress(void);
		System::Data::DataSet^ selectAddress(System::String^ dataTableName, int idAddress);
		System::Data::DataSet^ getStaffAddressNULL(System::String^ dataTableName, int idAddress);
		int createAddress(System::String^ last_name, System::String^ first_name, System::String^ text, System::String^ postal_code, System::String^ city_name);
		System::Void modifyAddress(int idAddress, System::String^ last_name, System::String^ first_name, System::String^ text, System::String^ postal_code, System::String^ city_name);
		System::Void deleteAddress(int idAddress);
	};
}
