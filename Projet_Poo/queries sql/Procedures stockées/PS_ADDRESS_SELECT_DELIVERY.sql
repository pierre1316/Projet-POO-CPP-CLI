CREATE procedure PS_ADDRESS_SELECT_DELIVERY (@idPeople int)
as
begin
select Address.idAddress, last_name, first_name, text, City.postal_code, City.city_name, City.id_city from Address
join Have on Address.idAddress = Have.idAddress
join City on Address.id_city = City.id_city
where delivery = 1 and Have.idPeople = @idPeople
end