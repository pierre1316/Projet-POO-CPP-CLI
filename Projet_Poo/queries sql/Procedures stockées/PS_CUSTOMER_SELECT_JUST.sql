CREATE Procedure PS_CUSTOMER_SELECT_JUST (@idPeople int)
as
begin
SELECT * FROM Customer WHERE idPeople = @idPeople
end