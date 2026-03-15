/* Write your PL/SQL query statement below */
SELECT id 
FROM 
(SELECT id, 
temperature,recordDate,
 LAG(recordDate,1,NULL) OVER(ORDER BY recordDate) AS dat,
 LAG(temperature,1,100000) OVER(ORDER BY recordDate) AS temp 
 FROM Weather)
WHERE
temperature>temp AND recordDate-dat=1;
