#pragma once
#include "CLmapTB.h"
#include "CLcad.h"

namespace NS_Comp_Svc {
	ref class CLservPeople
	{
	private:
		System::Data::DataSet^ oDs;
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
	public:
		CLservPeople(void);
		System::Data::DataSet^ selectAllPeople(System::String^);
		System::Data::DataRow^ createPeople(System::String^ first_name, System::String^ last_name);
	};
}


