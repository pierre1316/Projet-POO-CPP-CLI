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

System::String^ CLmapTB::createCustomer(int idPeople, System::String^ birth_date) {
	return "EXEC createCustomer @idPeople = '" + idPeople + "', @date_birthday = '" + birth_date + "'";
}

System::String^ CLmapTB::updatePeople(int idPeople, System::String^ last_name, System::String^ first_name) {
	return "EXEC updatePeople @idPeople = '" + idPeople + "', @last_name = '" + last_name + "', @first_name = '" + first_name + "'";
}