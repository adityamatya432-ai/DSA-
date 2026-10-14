select s.student_id , s.student_name ,t.subject_name , count(e.subject_name) as attended_exams
from students s
cross join subjects t
left join examinations e
on s.student_id = e.student_id and e.subject_name = t.subject_name
group by s.student_id , s.student_name ,t.subject_name 
order by s.student_id asc 