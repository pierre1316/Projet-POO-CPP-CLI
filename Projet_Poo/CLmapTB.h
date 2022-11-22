#pragma once

namespace NS_Comp_Mappage {
	ref class CLmapTB
	{
	private :

	public :
		CLmapTB(void);
		System::String^ GetAllPeople(System::Void);
		System::String^ GetAllStaff(System::Void);
		System::String^ GetAllCustomers(System::Void);
		System::String^ CLmapTB::createPeople(System::String^ first_name, System::String^ last_name);
		System::String^ CLmapTB::createStaff(int idPeople, System::String^ hiring_date);
		System::String^ CLmapTB::setSuperior(int idPeople, int idSuperior);
		System::String^ CLmapTB::createCustomer(int idPeople, System::String^ birth_date);
	};
}
