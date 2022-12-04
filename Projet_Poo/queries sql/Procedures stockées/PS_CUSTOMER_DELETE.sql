CREATE PROCEDURE PS_CUSTOMER_DELETE (@idPeople int)
as
begin
DELETE FROM Customers where idPeople = @idPeople
end