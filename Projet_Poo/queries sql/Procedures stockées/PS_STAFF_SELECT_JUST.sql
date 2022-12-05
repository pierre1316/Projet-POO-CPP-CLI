CREATE Procedure PS_STAFF_SELECT_JUST (@idPeople int)
as
begin
SELECT * FROM Staff WHERE idPeople = @idPeople
end