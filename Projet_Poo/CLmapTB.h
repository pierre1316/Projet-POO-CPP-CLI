#pragma once

namespace NS_Comp_Mappage {
	ref class CLmapTB
	{
	private :

	public :
		CLmapTB(void);
		System::String^ GetAllPeople(System::Void);
<<<<<<< Updated upstream
=======
		System::String^ GetAllStaff(System::Void);
		System::String^ GetAllStaffForStaff(int idPeople);
		System::String^ getStaffNoCustomer(System::Void);
		System::String^ GetAllCustomers(System::Void);
		System::String^ getCustomerNoStaff(System::Void);
		System::String^ createPeople(System::String^ first_name, System::String^ last_name);
		System::String^ createStaff(int idPeople, System::String^ hiring_date);
		System::String^ setSuperior(int idPeople, int idSuperior);
		System::String^ setSuperiorNULL(int idPeople);
		System::String^ createCustomer(int idPeople, System::String^ birth_date);
		System::String^ updatePeople(int idPeople, System::String^ last_name, System::String^ first_name);
		System::String^ updateCustomer(int idPeople, System::String^ date_birth);
		System::String^ updateStaff(int idPeople, System::String^ date_hiring);
		System::String^ selectTheStaff(int idPeople);
		System::String^ selectTheCustomer(int idPeople);
		System::String^ deletePeople(int idPeople);
		System::String^ deleteStaff(int idPeople);
		System::String^ deleteCustomer(int idPeople);
		System::String^ setStaffAddressToNULL(int idPeople);
		System::String^ selectAddress(int idAddress);
		System::String^ updateAddress(int idAddress, System::String^ last_name, System::String^ first_name, System::String^ text, System::String^ postal_code, System::String^ city_name);
		System::String^ createAddress(System::String^ last_name, System::String^ first_name, System::String^ text, System::String^ postal_code, System::String^ city_name);
		System::String^ getStaffAddressNULL(int idPeople);
		System::String^ getAllAddress();
		System::String^ updateStaffAddress(int idPeople, int idAddress);
		System::String^ deleteAddress(int idAddress);
		System::String^ linkAddressCustomer(int idPeople, int idAddress, int billing, int delivery);
		System::String^ selectAddressDelivery(int idPeople);
		System::String^ selectAddressBilling(int idPeople);
		System::String^ getHaveForAddress(int idAddress);
		System::String^ modifyHave(int idAddress, int idPeople, int billing, int delivery);
		System::String^ deleteHave(int idAddress, int idPeople);
>>>>>>> Stashed changes
	};
}
