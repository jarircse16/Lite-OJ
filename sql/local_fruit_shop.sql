SELECT item, LAST_DAY(DATE_FORMAT(date, '%Y-%m-01')) AS date, SUM(count) AS count
FROM product
GROUP BY item, LAST_DAY(DATE_FORMAT(date, '%Y-%m-01'))
ORDER BY item ASC, date ASC;
