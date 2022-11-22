#pragma once
#include "CLmapTB.h"
#include "CLcad.h"
#include "CLservPeople.h"

namespace NS_Comp_Svc {
	ref class CLservStaff
	{
	private:
		System::Data::DataSet^ oDs;
		NS_Comp_Svc::CLservPeople^ cPeo;
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
	public:
		CLservStaff(void);
		System::Data::DataSet^ selectAllStaff(System::String^);
		System::Void createStaff(int idPeople, System::String^ hiring_date, int idSuperior, System::String^ password);
	};
}

