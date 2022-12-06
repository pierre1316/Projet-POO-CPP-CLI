/*REQUETE 1:*/

SELECT SUM(price_total_ttc)/COUNT(price_total_ttc) AS Prix_Moyen_Panier
FROM Invoice

/*REQUETE 2:*/

SELECT SUM(price_total_ht) FROM Invoice WHERE invoice_date >= DATEADD(day,-30, getdate()) and invoice_date <= getdate()

/*REQUETE 3:*/

SELECT Items.name, Color.name, Color.quantity_in_stock
FROM Items, Color
WHERE quantity_in_stock<25

/*REQUETE 4:*/

SELECT customer_name, SUM(price_total_ttc) as prix_total
FROM Invoice
GROUP BY customer_name

/*REQUETE 5:*/

Select name_item, COUNT(item_quantity) as quantity
FROM Invoice_Contain
GROUP BY name_item
ORDER BY name_item

/*REQUETE 6:*/

Select name_item, COUNT(item_quantity) as quantity
FROM Invoice_Contain
GROUP BY name_item
ORDER BY name_item DESC

/*REQUETE 7:*/



/*REQUETE 8:*/



/*REQUETE 9:*/
/*SOUS-REQUETE TVA 1:*/

SELECT price_ht*(1.1) as price_tva1
FROM Items

/*SOUS-REQUETE TVA 2:*/

SELECT price_ht*(1.2) as price_tva2
FROM Items

/*SOUS-REQUETE TVA 3:*/

SELECT price_ht*(1.3) as price_tva3
FROM Items

/*SOUS-REQUETE MARGE 5%:*/

SELECT price_ttc_over_level*(0.95) as price_marge5
FROM Items

/*SOUS-REQUETE MARGE 10%:*/

SELECT price_ttc_over_level*(0.9) as price_marge10
FROM Items

/*SOUS-REQUETE MARGE 15%:*/

SELECT price_ttc_over_level*(0.85) as price_marge15
FROM Items

/*SOUS-REQUETE REMISE 5%:*/

SELECT price_ttc_over_level*(0.95) as price_remise5
FROM Items

/*SOUS-REQUETE REMISE 6%:*/

SELECT price_ttc_over_level*(0.94) as price_remise6
FROM Items

/*SOUS-REQUETE DEMARQUE 2%:*/

SELECT price_ttc_over_level*(0.98) as price_demarque2
FROM Items

/*SOUS-REQUETE DEMARQUE 3%:*/

SELECT price_ttc_over_level*(0.97) as price_demarque3
FROM Items

/*SOUS-REQUETE DEMARQUE 5%:*/

SELECT price_ttc_over_level*(0.95) as price_demarque5
FROM Items
