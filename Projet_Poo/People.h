#pragma once
#include "CLcad.h"

namespace NS_Comp_Svc {
	ref class People
	{
	private:
		System::String^ sql;
		System::Data::DataSet^ oDs;
		NS_Comp_Data::CLcad^ oCad;
	public:
		People(void);
		System::Data::DataSet^ selectAllPeople(System::String^);
		System::Data::DataRow^ createPeople(System::String^ first_name, System::String^ last_name);
		System::Void modifyPeople(int idPeople, System::String^ first_name, System::String^ last_name);
		System::Void deletePeople(int idPeople);
	};
}


