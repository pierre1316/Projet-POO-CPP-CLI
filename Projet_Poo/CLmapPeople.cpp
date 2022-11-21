#include "CLmapPeople.h"

using namespace NS_Mapping;

System::String^ CLmapPeople::GetAllPeople(void) {
	return "EXEC GetPeople";
}