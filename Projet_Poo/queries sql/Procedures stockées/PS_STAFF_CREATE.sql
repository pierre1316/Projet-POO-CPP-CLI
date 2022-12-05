CREATE PROCEDURE PS_STAFF_CREATE (@idPeople int, @hiring_date date, @username varchar(50), @password varchar(50))
as begin
INSERT INTO Staff (idPeople, hiring_date, username, password)
values (@idPeople, @hiring_date, @username, @password)
end