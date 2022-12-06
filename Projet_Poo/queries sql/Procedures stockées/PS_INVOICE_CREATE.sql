create procedure PS_INVOICE_CREATE (@reference_order varchar(100),
									@payment_date date,
									@payment_method varchar(100),
									@price_total_ht float,
									@price_total_ttc float,
									@invoice_date date,
									@deli_address varchar(100),
									@bill_address varchar(100),
									@customer_name varchar(100))
as begin
INSERT INTO Invoice
Values (@reference_order,
		@payment_date,
		@payment_method,
		@price_total_ht,
		@price_total_ttc,
		@invoice_date,
		@deli_address,
		@bill_address,
		@customer_name)
END