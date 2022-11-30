SELECT *, 
(
  CASE 
  WHEN 90 <= score THEN '秀'
  WHEN 80 <= score THEN '優'
  WHEN 65 <= score THEN '良'
  WHEN 50 <= score THEN '可'
  ELSE '不可'
  END
) AS 評価
FROM grades;
