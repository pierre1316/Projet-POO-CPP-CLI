CREATE PROCEDURE PS_STAFF_DELETE (@idPeople int)
as
begin
DELETE FROM Staff where idPeople = @idPeople
end