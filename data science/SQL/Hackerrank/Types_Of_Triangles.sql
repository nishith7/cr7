SELECT  CASE WHEN A+B <= C or A+C <= B or B+C <= A THEN "Not A Triangle"
             WHEN A = B AND B = C THEN "Equilateral"
             WHEN A = B or A = C or B = C THEN "Isosceles"  ELSE "Scalene" END AS triangles_type
FROM TRIANGLES;
        