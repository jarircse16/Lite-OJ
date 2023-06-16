SELECT *
FROM Goals AS g
WHERE goals_scored = (
    SELECT MAX(goals_scored)
    FROM Goals
    WHERE team = g.team
)
ORDER BY team ASC, player ASC;
