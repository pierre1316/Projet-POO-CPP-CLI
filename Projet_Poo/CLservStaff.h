#pragma once
#include "CLmapTB.h"
#include "CLcad.h"
#include "CLservPeople.h"

namespace NS_Comp_Svc {
	ref class CLservStaff
	{
	private:
		System::Data::DataSet^ oDs;
		NS_Comp_Data::CLcad^ oCad;
		NS_Comp_Mappage::CLmapTB^ oMappTB;
	public:
		CLservStaff(void);
		System::Data::DataSet^ selectAllStaff(System::String^);
		System::Data::DataSet^ getTheStaff(System::String^ dataTableName, int idPeople);
		System::Data::DataSet^ selectAllStaffForStaff(System::String^ dataTableName, int idPeople);
		System::Data::DataSet^ selectStaffNoCust(System::String^ dataTableName);
		System::Void createStaff(int idPeople, System::String^ hiring_date, int idSuperior, System::String^ password);
		System::Void modifyStaff(int idPeople, System::String^ hiring_date, int idSuperior);
		System::Void setSuperiorNULL(int idPeople);
		System::Void deleteStaff(int idPeople);
	};
}

