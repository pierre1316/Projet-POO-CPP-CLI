#pragma once
#include "CLmapTB.h"
#include "CLcad.h"

namespace NS_Comp_People {
	ref class CLpeople
	{
	private :
		int id;
		System::String^ first_name;
		System::String^ last_name;
	public :
		CLpeople(int id);
		CLpeople(System::String^ first_name, System::String^ last_name);
		System::Data::DataSet^ selectAllPeople(System::String^);

	};
}

