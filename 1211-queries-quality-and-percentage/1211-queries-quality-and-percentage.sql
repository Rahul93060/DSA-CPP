# Write your MySQL query statement below
select q.query_name,
Round(avg(q.rating / q.position ),2) as quality, 
Round(sum(q.rating<3) / count(*) * 100,2) as poor_query_percentage 
from Queries q group by q.query_name;