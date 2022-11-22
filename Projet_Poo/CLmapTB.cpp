#include "CLmapTB.h"

using namespace NS_Comp_Mappage;

CLmapTB::CLmapTB(void) {

}

System::String^ CLmapTB::GetAllPeople(System::Void) {
	return "EXEC GetPeople";
}

System::String^ CLmapTB::GetAllStaff(System::Void) {
	return "EXEC GetAllStaff";
}


System::String^ CLmapTB::createPeople(System::String^ first_name, System::String^ last_name) {
	return "EXEC createPeople @first_name = N'" + first_name + "', @last_name = N'" + last_name + "' GO";
}

System::String^ CLmapTB::createStaff(int idPeople, System::DateTime^ hiring_date) {
	return "EXEC createStaff @idPeople = '" + idPeople + "', @date = '" + hiring_date + "' GO";
}
