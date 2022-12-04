CREATE PROCEDURE PS_STAFF_ADDRESS_UPDATE (@idPeople int, @idAddress int)
as
begin
update Staff
set idAddress = @idAddress
where idPeople = @idPeople
end