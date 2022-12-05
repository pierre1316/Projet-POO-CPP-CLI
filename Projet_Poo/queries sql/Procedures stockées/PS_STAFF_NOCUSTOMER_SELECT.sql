CREATE PROCEDURE PS_STAFF_NOCUSTOMER_SELECT
as
begin
SELECT Staff.idPeople, last_name, first_name from Staff
LEFT JOIN Customers on Staff.idPeople = Customers.idPeople
INNER JOIN People on People.idPeople = Staff.idPeople
WHERE Customers.idPeople is null
end