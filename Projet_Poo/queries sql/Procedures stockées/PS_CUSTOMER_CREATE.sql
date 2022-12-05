CREATE PROCEDURE PS_CUSTOMER_CREATE (@idPeople int, @date_birthday date)
as
begin
INSERT into Customers values (@idPeople, @date_birthday)
end