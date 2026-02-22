/* Write your PL/SQL query statement below */
WITH cte AS 
(SELECT email, COUNT(*) AS ct FROM Person GROUP BY email)
SELECT email FROM cte WHERE ct>1;