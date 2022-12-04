CREATE PROCEDURE PS_STAFF_UPDATE (@idPeople int, @hiring_date date)
as
begin
update Staff
set hiring_date = @hiring_date
where idPeople = @idPeople
end