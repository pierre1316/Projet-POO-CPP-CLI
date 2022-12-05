CREATE PROCEDURE PS_ADDRESS_SELECT
as
begin
select Address.idAddress, last_name, first_name, text, City.postal_code, City.city_name, City.id_city from Address
join City on Address.id_city = City.id_city
end