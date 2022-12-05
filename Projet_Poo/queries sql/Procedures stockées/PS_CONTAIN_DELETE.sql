create procedure PS_CONTAIN_DELETE (@reference_order varchar(50))
as begin
DELETE from Contain where reference_order = @reference_order
end