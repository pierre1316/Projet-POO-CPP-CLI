#include "CLmapTB.h"

using namespace NS_Comp_Mappage;

CLmapTB::CLmapTB(void) {

}

System::String^ CLmapTB::GetAllPeople(System::Void) {
	return "EXEC PS_PEOPLE_SELECT";
}

System::String^ CLmapTB::GetAllStaff(System::Void) {
	return "EXEC PS_STAFF_PEOPLE_SELECT";
}

System::String^ CLmapTB::GetAllStaffForStaff(int idPeople) {
	return "EXEC PS_STAFF_NOSTAFF_SELECT @idPeople = '" + idPeople + "'";
}

System::String^ CLmapTB::getStaffNoCustomer(System::Void) {
	return "EXEC PS_STAFF_NOCUSTOMER_SELECT";
}

System::String^ CLmapTB::GetAllCustomers(System::Void) {
	return "EXEC PS_CUSTOMER_SELECT";
}

System::String^ CLmapTB::getCustomerNoStaff(System::Void) {
	return "EXEC PS_CUSTOMER_NOSTAFF_SELECT";
}


System::String^ CLmapTB::createPeople(System::String^ first_name, System::String^ last_name) {
	return "EXEC PS_PEOPLE_CREATE @first_name = '" + first_name + "', @last_name = '" + last_name + "'";
}

System::String^ CLmapTB::createStaff(int idPeople, System::String^ hiring_date) {
	return "EXEC PS_STAFF_CREATE @idPeople = '" + idPeople + "', @date = '" + hiring_date + "'";
}
System::String^ CLmapTB::setSuperior(int idPeople, int idSuperior) {
	return "EXEC PS_SUPERIOR_UPDATE @idPeople = '" + idPeople + "', @idSuperior = '" + idSuperior + "'";
}

System::String^ CLmapTB::setSuperiorNULL(int idPeople) {
	return "EXEC PS_SUPERIOR_UPDATENULL @idPeople = '" + idPeople + "'";
}

System::String^ CLmapTB::createCustomer(int idPeople, System::String^ birth_date) {
	return "EXEC PS_CUSTOMER_CREATE @idPeople = '" + idPeople + "', @date_birthday = '" + birth_date + "'";
}

System::String^ CLmapTB::updatePeople(int idPeople, System::String^ last_name, System::String^ first_name) {
	return "EXEC PS_PEOPLE_UPDATE @idPeople = '" + idPeople + "', @last_name = '" + last_name + "', @first_name = '" + first_name + "'";
}

System::String^ CLmapTB::updateCustomer(int idPeople, System::String^ date_birth) {
	return "EXEC PS_CUSTOMER_UPDATE @idPeople = '" + idPeople + "', @birthday = '" + date_birth + "'";
}

System::String^ CLmapTB::updateStaff(int idPeople, System::String^ date_hiring) {
	return "EXEC PS_STAFF_UPDATE @idPeople = '" + idPeople + "', @hiring_date = '" + date_hiring + "'";
}

System::String^ CLmapTB::selectTheStaff(int idPeople) {
	return "EXEC PS_STAFF_SELECT_JUST @idPeople = '" + idPeople + "'";
}

System::String^ CLmapTB::selectTheCustomer(int idPeople) {
	return "EXEC PS_CUSTOMER_SELECT_JUST @idPeople = '" + idPeople + "'";
}

System::String^ CLmapTB::deletePeople(int idPeople) {
	return "EXEC PS_PEOPLE_DELETE @idPeople = '" + idPeople + "'";
}

System::String^ CLmapTB::deleteStaff(int idPeople) {
	return "EXEC PS_STAFF_DELETE @idPeople = '" + idPeople + "'";
}

System::String^ CLmapTB::deleteCustomer(int idPeople) {
	return "EXEC PS_CUSTOMER_DELETE @idPeople = '" + idPeople + "'";
}

System::String^ CLmapTB::selectAddress(int idAddress) {
	return "EXEC PS_ADDRESS_SELECT_JUST @idAddress = '" + idAddress + "'";
}

System::String^ CLmapTB::createAddress(System::String^ last_name, System::String^ first_name, System::String^ text, System::String^ postal_code,System::String^ city_name) {
	return "EXEC PS_ADDRESS_CREATE @last_name = '" + last_name + "', @first_name = '" + first_name + "', @text = '" + text + "', @postal_code = '" + postal_code + "', @city_name = '" + city_name + "'";
}

System::String^ CLmapTB::updateAddress(int idAddress, System::String^ last_name, System::String^ first_name, System::String^ text, System::String^ postal_code,System::String^ city_name) {
	return "EXEC PS_ADDRESS_UPDATE @idAddress = '" + idAddress + "', @last_name = '" + last_name + "', @first_name = '" + first_name + "', @text = '" + text + "', @postal_code = '" + postal_code + "', @city_name = '" + city_name + "'";
}

System::String^ CLmapTB::getStaffAddressNULL(int idPeople) {
	return "EXEC PS_STAFF_ADDRESS_NULL @idPeople = '" + idPeople + "'";
}

System::String^ CLmapTB::getAllAddress() {
	return "EXEC PS_ADDRESS_SELECT";
}

System::String^ CLmapTB::setStaffAddressToNULL(int idPeople) {
	return "EXEC PS_STAFF_ADDRESS_UPTADE_NULL @idStaff = '" + idPeople + "'";
}

System::String^ CLmapTB::deleteAddress(int idAddress) {
	return "EXEC PS_ADDRESS_DELETE @idAddress = '" + idAddress + "'";
}

System::String^ CLmapTB::updateStaffAddress(int idPeople, int idAddress) {
	return "EXEC PS_STAFF_ADDRESS_UPDATE @idPeople = '" + idPeople + "', @idAddress = '" + idAddress + "'";
}

System::String^ CLmapTB::linkAddressCustomer(int idPeople, int idAddress, int billing, int delivery) {
	return "EXEC PS_HAVE_CREATE @idPeople = '" + idPeople + "', @idAddress = '" + idAddress + "', @billing = '" + billing + "', @delivery = '" + delivery + "'";
}

System::String^ CLmapTB::selectAddressDelivery(int idPeople) {
	return "EXEC PS_ADDRESS_SELECT_DELIVERY @idPeople = '" + idPeople + "'";
}

System::String^ CLmapTB::selectAddressBilling(int idPeople) {
	return "EXEC PS_ADDRESS_SELECT_BILLING @idPeople = '" + idPeople + "'";
}

System::String^ CLmapTB::getHaveForAddress(int idAddress) {
	return "EXEC PS_HAVE_ADDRESS_SELECT @idAddress = '" + idAddress + "'";
}

System::String^ CLmapTB::modifyHave(int idAddress, int idPeople, int billing, int delivery) {
	return "EXEC PS_HAVE_UPDATE @idAddress = '" + idAddress + "', @idPeople = '" + idPeople + "', @billing = '" + billing + "', @delivery = '" + delivery + "'";
}

System::String^ CLmapTB::deleteHave(int idAddress, int idPeople) {
	return "EXEC PS_HAVE_DELETE @idAddress = '" + idAddress + "', @idPeople = '" + idPeople + "'";
}
