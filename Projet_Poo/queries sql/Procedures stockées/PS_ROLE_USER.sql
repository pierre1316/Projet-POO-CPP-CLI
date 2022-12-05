create procedure PS_ROLE_USER (@idstaff int)
as begin
select id_role from Staff
where idPeople = @idstaff
end