#pragma once
#include "CLcad.h"

namespace NS_Comp_Svc {
	ref class Staff
	{
	private:
		System::String^ sql;
		System::Data::DataSet^ oDs;
		NS_Comp_Data::CLcad^ oCad;
	public:
		Staff(void);
		System::Data::DataSet^ selectAllStaff(System::String^);
		System::Data::DataSet^ getTheStaff(System::String^ dataTableName, int idPeople);
		System::Data::DataSet^ selectAllStaffForStaff(System::String^ dataTableName, int idPeople);
		System::Data::DataSet^ selectStaffNoCust(System::String^ dataTableName);
		System::Void createStaff(int idPeople, System::String^ hiring_date, int idSuperior, System::String^ username, System::String^ password, int id_role);
		System::Void modifyStaff(int idPeople, System::String^ hiring_date, int idSuperior, int id_role);
		System::Void updateStaffAddress(int idPeople, int idAddress);
		System::Void setSuperiorNULL(int idPeople);
		System::Void deleteStaff(int idPeople);
		System::Void setStaffAddressToNULL(int idPeople);
		System::Data::DataSet^ Staff::getConnexion(System::String^ dataTableName, System::String^ username, System::String^ password);
		System::Data::DataSet^ Staff::selectRoles(System::String^ dataTableName);
		int Staff::getRole(int idStaff);
		System::Void Staff::setStaffPassword(int idStaff, System::String^ password);
	};
}

