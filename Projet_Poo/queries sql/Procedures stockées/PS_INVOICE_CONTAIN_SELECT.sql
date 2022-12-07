create procedure PS_INVOICE_CONTAIN_SELECT (@reference_order varchar(50))
as begin
Select * from Invoice_Contain
where reference_order = @reference_order
order by name_category , name_item 
end