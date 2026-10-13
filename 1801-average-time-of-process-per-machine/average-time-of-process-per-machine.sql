select a.machine_id , round(avg(b.timestamp-a.timestamp),3) as processing_time
from Activity a
join Activity b
on a.Activity_type = 'start' and b.activity_type='end' AND a.machine_id = b.machine_id
group by a.machine_id
order by a.machine_id asc