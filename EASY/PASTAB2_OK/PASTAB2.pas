var 
	tab:array[1..1000] of longint;
  i,ile:integer;
  c:char;
  x: longint;
begin
    readln(ile);
    for i:=1 to ile do
        readln(tab[i]);

    readln(c, x);
    if (c = '>') then
		begin
			for i:=1 to ile do
        if tab[i] > x then
					writeln(tab[i]);
		end
    else begin
			for i:=1 to ile do
        if tab[i] < x then
					writeln(tab[i]);
		end;
end.
