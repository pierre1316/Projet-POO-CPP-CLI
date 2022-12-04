CREATE PROCEDURE PS_CUSTOMER_UPDATE (@idPeople int, @birthday date)
as
begin
update Customers 
set birth_date = @birthday
where idPeople = @idPeople
end