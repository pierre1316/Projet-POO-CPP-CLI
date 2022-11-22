#pragma once

namespace NS_Comp_Mappage {
	ref class CLmapTB
	{
	private :

	public :
		CLmapTB(void);
		System::String^ GetAllPeople(System::Void);
		System::String^ GetAllStaff(System::Void);
		System::String^ CLmapTB::createPeople(System::String^ first_name, System::String^ last_name);
		System::String^ CLmapTB::createStaff(int idPeople, System::DateTime^ hiring_date);
	};
}
