#include "CLmapTB.h"

using namespace NS_Comp_Mappage;

CLmapTB::CLmapTB(void) {

}

System::String^ CLmapTB::GetAllPeople(System::Void) {
	return "EXEC GetPeople";
}

System::String^ CLmapTB::GetAllStaff(System::Void) {
	return "EXEC getAllStaff";
}

System::String^ CLmapTB::GetAllStaffForStaff(int idPeople) {
	return "EXEC getAllStaffForStaff @idPeople = '" + idPeople + "'";
}

System::String^ CLmapTB::getStaffNoCustomer(System::Void) {
	return "EXEC getStaffNoCustomer";
}

System::String^ CLmapTB::GetAllCustomers(System::Void) {
	return "EXEC getAllCustomers";
}

System::String^ CLmapTB::getCustomerNoStaff(System::Void) {
	return "EXEC getCustomerNoStaff";
}


System::String^ CLmapTB::createPeople(System::String^ first_name, System::String^ last_name) {
	return "EXEC createPeople @first_name = N'" + first_name + "', @last_name = N'" + last_name + "'";
}

System::String^ CLmapTB::createStaff(int idPeople, System::String^ hiring_date) {
	return "EXEC createStaff @idPeople = '" + idPeople + "', @date = '" + hiring_date + "'";
}
System::String^ CLmapTB::setSuperior(int idPeople, int idSuperior) {
	return "EXEC setSuperior @idPeople = '" + idPeople + "', @idSuperior = '" + idSuperior + "'";
}

System::String^ CLmapTB::setSuperiorNULL(int idPeople) {
	return "EXEC setSuperiorNULL @idPeople = '" + idPeople + "'";
}

System::String^ CLmapTB::createCustomer(int idPeople, System::String^ birth_date) {
	return "EXEC createCustomer @idPeople = '" + idPeople + "', @date_birthday = '" + birth_date + "'";
}

System::String^ CLmapTB::updatePeople(int idPeople, System::String^ last_name, System::String^ first_name) {
	return "EXEC updatePeople @idPeople = '" + idPeople + "', @last_name = '" + last_name + "', @first_name = '" + first_name + "'";
}

System::String^ CLmapTB::updateCustomer(int idPeople, System::String^ date_birth) {
	return "EXEC updateCustomer @idPeople = '" + idPeople + "', @birthday = '" + date_birth + "'";
}

System::String^ CLmapTB::updateStaff(int idPeople, System::String^ date_hiring) {
	return "EXEC updateStaff @idPeople = '" + idPeople + "', @hiring_date = '" + date_hiring + "'";
}

System::String^ CLmapTB::selectTheStaff(int idPeople) {
	return "EXEC selectTheStaff @idPeople = '" + idPeople + "'";
}

System::String^ CLmapTB::selectTheCustomer(int idPeople) {
	return "EXEC selectTheCustomer @idPeople = '" + idPeople + "'";
}

System::String^ CLmapTB::deletePeople(int idPeople) {
	return "EXEC deletePeople @idPeople = '" + idPeople + "'";
}

System::String^ CLmapTB::deleteStaff(int idPeople) {
	return "EXEC deleteStaff @idPeople = '" + idPeople + "'";
}

System::String^ CLmapTB::deleteCustomer(int idPeople) {
	return "EXEC deleteCustomer @idPeople = '" + idPeople + "'";
}

System::String^ CLmapTB::selectAddress(int idAddress) {
	return "EXEC selectAddress @idAddress = '" + idAddress + "'";
}

System::String^ CLmapTB::createAddress(System::String^ last_name, System::String^ first_name, System::String^ text, System::String^ postal_code,System::String^ city_name) {
	return "EXEC createAddress @last_name = '" + last_name + "', @first_name = '" + first_name + "', @text = '" + text + "', @postal_code = '" + postal_code + "', @city_name = '" + city_name + "'";

}

System::String^ CLmapTB::updateAddress(int idAddress, System::String^ last_name, System::String^ first_name, System::String^ text, System::String^ postal_code,System::String^ city_name) {
	return "EXEC updateAddress @idAddress = '" + idAddress + "', @last_name = '" + last_name + "', @first_name = '" + first_name + "', @text = '" + text + "', @postal_code = '" + postal_code + "', @city_name = '" + city_name + "'";

}

System::String^ CLmapTB::getStaffAddressNULL(int idPeople) {
	return "EXEC getStaffAddressNULL @idPeople = '" + idPeople + "'";
}

System::String^ CLmapTB::getAllAddress() {
	return "EXEC getAllAddress";
}

System::String^ CLmapTB::setStaffAddressToNULL(int idPeople) {
	return "EXEC setStaffAddressToNULL @idStaff = '" + idPeople + "'";
}

System::String^ CLmapTB::deleteAddress(int idAddress) {
	return "EXEC deleteAddress @idAddress = '" + idAddress + "'";
}

System::String^ CLmapTB::updateStaffAddress(int idPeople, int idAddress) {
	return "EXEC updateStaffAddress @idPeople = '" + idPeople + "', @idAddress = '" + idAddress + "'";
}
