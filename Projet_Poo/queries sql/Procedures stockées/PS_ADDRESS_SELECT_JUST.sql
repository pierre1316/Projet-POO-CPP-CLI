CREATE PROCEDURE PS_ADDRESS_SELECT_JUST (@idAddress int)
as
begin

select Address.idAddress, last_name, first_name, text, City.postal_code, City.city_name, City.id_city from Address
join City on City.id_city = Address.id_city
where idAddress = @idAddress
end