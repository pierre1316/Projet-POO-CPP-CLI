CREATE procedure PS_STAFF_SET_PASSWORD (@idstaff int, @password varchar(50))
as begin
update Staff
set password = @password
where idPeople = @idstaff
end