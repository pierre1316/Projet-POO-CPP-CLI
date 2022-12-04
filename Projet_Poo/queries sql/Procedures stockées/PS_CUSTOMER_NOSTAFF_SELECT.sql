CREATE PROCEDURE PS_CUSTOMER_NOSTAFF_SELECT
as
begin

SELECT Customers.idPeople, last_name, first_name from Customers
LEFT JOIN Staff on Staff.idPeople = Customers.idPeople
INNER JOIN People on People.idPeople = Customers.idPeople
WHERE Staff.idPeople is null

end