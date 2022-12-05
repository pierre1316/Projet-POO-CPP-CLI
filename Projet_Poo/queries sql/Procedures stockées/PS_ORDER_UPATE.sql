create procedure PS_ORDER_UPATE (@reference_order varchar(50), @delivery_date date, @issue_date date, @payment_date date, @id_payment_method int, @idBill int, @idDeli int)
as begin
update Orders
set 
	delivery_date = @delivery_date,
	issue_date = @issue_date,
	payment_date = @payment_date,
	id_payment_method = @id_payment_method,
	idBill = @idBill,
	idDeli = @idDeli
where reference_order = @reference_order
end