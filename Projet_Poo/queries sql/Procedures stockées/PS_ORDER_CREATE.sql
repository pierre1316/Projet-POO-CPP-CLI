Create procedure PS_ORDER_CREATE (@reference_order varchar(50), @delivery_date date, @issue_date date, @payment_date date, @id_payment_method int, @idPeople int, @idBill int, @idDeli int)
as begin
insert into Orders
values (@reference_order, @delivery_date, @issue_date, @payment_date, @id_payment_method, @idPeople, @idBill, @idDeli)
end