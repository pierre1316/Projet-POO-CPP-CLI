CREATE PROCEDURE PS_STAFF_UPDATE (@idPeople int, @hiring_date date, @id_role int)
as
begin
update Staff
set hiring_date = @hiring_date, id_role = @id_role
where idPeople = @idPeople
end