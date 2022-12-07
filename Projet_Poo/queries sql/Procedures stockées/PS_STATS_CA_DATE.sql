CREATE procedure PS_STATS_CA_DATE
as begin
SELECT month(invoice_date), year(invoice_date), SUM(price_total_ht) FROM Invoice 
group by month(invoice_date), year(invoice_date)
end