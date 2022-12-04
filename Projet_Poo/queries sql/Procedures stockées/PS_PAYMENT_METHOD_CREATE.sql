CREATE PROCEDURE PS_PAYMENT_METHOD_CREATE (@name_method varchar(50))
as begin
INSERT INTO Payment_Method (name_method)
values (@name_method)
END