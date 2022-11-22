#pragma once
#include "CLmapTB.h"
#include "CLcad.h"

namespace NS_Comp_Svc {
	ref class CLpeople
	{
	private :
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
	public :
		CLpeople(void);
		System::Data::DataSet^ selectAllPeople(System::String^);

	};
}

