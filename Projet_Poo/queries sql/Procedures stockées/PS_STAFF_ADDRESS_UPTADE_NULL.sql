CREATE PROCEDURE PS_STAFF_ADDRESS_UPTADE_NULL (@idStaff int)
as
begin
update Staff
set idAddress = NULL
where idPeople = @idStaff
end