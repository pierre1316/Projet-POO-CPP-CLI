create procedure PS_STAFF_SELECT_CONNEXION (@username varchar(50), @password varchar(50))
as begin
SELECT idPeople from Staff
where username = @username and password = @password
end