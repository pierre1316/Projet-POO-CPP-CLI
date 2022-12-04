CREATE PROCEDURE PS_PEOPLE_DELETE (@idPeople int)
as
begin
DELETE FROM People where idPeople = @idPeople
end