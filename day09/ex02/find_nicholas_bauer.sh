find $1 | grep -w Nicholas | grep -w Bauer | sed "s/[^0-9]//g" | sed "s|' '|''|g" | sed "s|'\n'|''|g" | cat
