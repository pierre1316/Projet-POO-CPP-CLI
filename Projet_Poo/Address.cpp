#include "Address.h"

using namespace NS_Comp_Svc;

NS_Comp_Svc::Address::Address(void)
{
	this->oDs = gcnew System::Data::DataSet();
	this->oCad = gcnew NS_Comp_Data::CLcad();
}


System::Data::DataSet^ Address::selectAddress(System::String^ dataTableName, int idAddress)
{
	this->sql = "EXEC PS_ADDRESS_SELECT_JUST @idAddress = '" + idAddress + "'";
	return this->oCad->getRows(this->sql, dataTableName);
}

System::Data::DataSet^ Address::getStaffAddressNULL(System::String^ dataTableName, int idPeople)
{
	this->sql = "EXEC PS_STAFF_ADDRESS_NULL @idPeople = '" + idPeople + "'";
	return this->oCad->getRows(this->sql, dataTableName);
}

int Address::createAddress(System::String^ last_name, System::String^ first_name, System::String^ text, int id_city)
{
	this->sql = "EXEC PS_ADDRESS_CREATE @last_name = '" + last_name + "', @first_name = '" + first_name + "', @text = '" + text + "', @id_city = '" + id_city + "'";
	this->oCad->actionRows(this->sql);
	this->sql = "EXEC PS_ADDRESS_SELECT";
	this->oDs = this->oCad->getRows(this->sql, "rsl");
	return System::Convert::ToInt32(this->oDs->Tables["rsl"]->Rows[this->oDs->Tables["rsl"]->Rows->Count-1]->ItemArray[0]);
}

System::Void Address::modifyAddress(int idAddress, System::String^ last_name, System::String^ first_name, System::String^ text, int id_city)
{
	this->sql = "EXEC PS_ADDRESS_UPDATE @idAddress = '" + idAddress + "', @last_name = '" + last_name + "', @first_name = '" + first_name + "', @text = '" + text + "', @id_city = '" + id_city + "'";
	this->oCad->actionRows(this->sql);
}

System::Void Address::deleteAddress(int idAddress)
{
	this->sql = "EXEC PS_ADDRESS_DELETE @idAddress = '" + idAddress + "'";
	this->oCad->actionRows(this->sql);
}

System::Void Address::linkAddressCustomer(int idPeople, int idAddress, int billing, int delivery) 
{
	this->sql = "EXEC PS_HAVE_CREATE @idPeople = '" + idPeople + "', @idAddress = '" + idAddress + "', @billing = '" + billing + "', @delivery = '" + delivery + "'";
	this->oCad->actionRows(this->sql);
}


System::Data::DataSet^ Address::selectAddressBilling(System::String^ dataTableName, int idPeople)
{
	this->sql = "EXEC PS_ADDRESS_SELECT_BILLING @idPeople = '" + idPeople + "'";
	return this->oCad->getRows(this->sql, dataTableName);
}

System::Data::DataSet^ Address::selectAddressDelivery(System::String^ dataTableName, int idPeople)
{
	this->sql = "EXEC PS_ADDRESS_SELECT_DELIVERY @idPeople = '" + idPeople + "'";
	return this->oCad->getRows(this->sql, dataTableName);
}

System::Data::DataSet^ Address::getHaveForAddress(System::String^ dataTableName, int idAddress)
{
	this->sql = "EXEC PS_HAVE_ADDRESS_SELECT @idAddress = '" + idAddress + "'";
	return this->oCad->getRows(this->sql, dataTableName);
}

System::Data::DataSet^ Address::selectCityFromPostalcode(System::String^ dataTableName, System::String^ postal_code)
{
	this->sql = "EXEC PS_CITY_SELECT_POSTALCODE @postal_code = '" + postal_code + "'";
	return this->oCad->getRows(this->sql, dataTableName);
}

System::Void Address::modifyHave(int idAddress, int idPeople, int billing, int delivery) 
{
	this->sql = "EXEC PS_HAVE_UPDATE @idAddress = '" + idAddress + "', @idPeople = '" + idPeople + "', @billing = '" + billing + "', @delivery = '" + delivery + "'";
	this->oCad->actionRows(this->sql);
}

System::Void Address::deleteHave(int idAddress, int idPeople) 
{
	this->sql = "EXEC PS_HAVE_DELETE @idAddress = '" + idAddress + "', @idPeople = '" + idPeople + "'";
	this->oCad->actionRows(this->sql);
}
