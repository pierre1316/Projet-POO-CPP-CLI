create procedure PS_INVOICE_SELECT_JUST (@reference_order varchar(50))
as begin
select * from Invoice
where reference_order = @reference_order
end