CREATE PROCEDURE PS_ADDRESS_UPDATE (@idAddress int, @last_name varchar(100), @first_name varchar(100), @text varchar(225), @id_city int)
as
begin
update Address
set last_name = @last_name, first_name = @first_name, text = @text, id_city = @id_city
where idAddress = @idAddress
end