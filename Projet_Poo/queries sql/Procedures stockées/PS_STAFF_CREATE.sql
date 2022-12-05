CREATE PROCEDURE PS_STAFF_CREATE (@idPeople int, @hiring_date date)
as begin
INSERT INTO Staff (idPeople, hiring_date)
values (@idPeople, @hiring_date)
end