CREATE PROCEDURE PS_STAFF_ADDRESS_NULL (@idPeople int)
as
begin
SELECT idPeople from Staff
where idPeople = @idPeople and idAddress is NULL
end