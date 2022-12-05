CREATE PROCEDURE PS_CUSTOMER_SELECT
as
begin
SELECT Customers.idPeople, last_name, first_name, birth_date from Customers
join People on Customers.idPeople = People.idPeople
end