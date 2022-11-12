SELECT *
FROM prefectures
WHERE name IN (
    SELECT *
    FROM kanto_regions
);
