create procedure PS_ORDER_SET_ISSUE_DATE (@reference_order varchar(50), @issue_date date)
as begin
update Orders set
issue_date = @issue_date
where reference_order = @reference_order
end