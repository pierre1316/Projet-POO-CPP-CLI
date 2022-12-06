#pragma once
#include "CLcad.h"

namespace NS_Comp_Svc {
	ref class Address
	{
	private:
		System::Data::DataSet^ oDs;
		System::String^ sql;
		NS_Comp_Data::CLcad^ oCad;
	public: // Address :
		Address(void);
		System::Data::DataSet^ selectAddress(System::String^ dataTableName, int idAddress);
		System::Data::DataSet^ getStaffAddressNULL(System::String^ dataTableName, int idAddress);
		int Address::createAddress(System::String^ last_name, System::String^ first_name, System::String^ text, int id_city);
		System::Void Address::modifyAddress(int idAddress, System::String^ last_name, System::String^ first_name, System::String^ text, int id_city);
		System::Void deleteAddress(int idAddress);
		System::Data::DataSet^ selectAddressBilling(System::String^ dataTableName, int idPeople);
		System::Data::DataSet^ selectAddressDelivery(System::String^ dataTableName, int idPeople);
	public: // Have :
		System::Void linkAddressCustomer(int idPeople, int idAddress, int billing, int delivery);
		System::Data::DataSet^ getHaveForAddress(System::String^ dataTableName, int idAddress);
		System::Void modifyHave(int idAddress, int idPeople, int billing, int delivery);
		System::Void deleteHave(int idAddress, int idPeople);
	public: // City
		System::Data::DataSet^ Address::selectCityFromPostalcode(System::String^ dataTableName, System::String^ postal_code);
	};
}
