#pragma once

namespace NS_Comp_Mappage {
	ref class CLmapTB
	{
	private :

	public :
		CLmapTB(void);
		System::String^ GetAllPeople(System::Void);
		System::String^ GetAllStaff(System::Void);
		System::String^ getStaffNoCustomer(System::Void);
		System::String^ GetAllCustomers(System::Void);
		System::String^ getCustomerNoStaff(System::Void);
		System::String^ createPeople(System::String^ first_name, System::String^ last_name);
		System::String^ createStaff(int idPeople, System::String^ hiring_date);
		System::String^ setSuperior(int idPeople, int idSuperior);
		System::String^ createCustomer(int idPeople, System::String^ birth_date);
		System::String^ updatePeople(int idPeople, System::String^ last_name, System::String^ first_name);
	};
}
