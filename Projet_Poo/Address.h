#pragma once
#include "CLmapTB.h"
#include "CLcad.h"

namespace NS_Comp_Svc {
	ref class Address
	{
	private:
		System::Data::DataSet^ oDs;
		System::String^ sql;
		NS_Comp_Data::CLcad^ oCad;
	public:
		Address(void);
		System::Data::DataSet^ selectAddress(System::String^ dataTableName, int idAddress);
		System::Data::DataSet^ getStaffAddressNULL(System::String^ dataTableName, int idAddress);
		int createAddress(System::String^ last_name, System::String^ first_name, System::String^ text, System::String^ postal_code, System::String^ city_name);
		System::Void modifyAddress(int idAddress, System::String^ last_name, System::String^ first_name, System::String^ text, System::String^ postal_code, System::String^ city_name);
		System::Void deleteAddress(int idAddress);
		System::Void linkAddressCustomer(int idPeople, int idAddress, int billing, int delivery);
		System::Data::DataSet^ selectAddressBilling(System::String^ dataTableName, int idPeople);
		System::Data::DataSet^ selectAddressDelivery(System::String^ dataTableName, int idPeople);
		System::Data::DataSet^ getHaveForAddress(System::String^ dataTableName, int idAddress);
		System::Void modifyHave(int idAddress, int idPeople, int billing, int delivery);
		System::Void deleteHave(int idAddress, int idPeople);
	};
}
