Program HelloWorld;
var
x: integer;
y: integer;
SuperVariableName: integer;
grade: integer;
Apple: integer;
Bannana: integer;
Cherry: integer;
i: integer;
myRecord: record
rval: integer;
end;

begin
(* Test variable declaration and assignment *)
x := 0;
y := 5;
SuperVariableName := -1;

(* Test repeat-until loop *)
repeat
x := 1;
y := 2;
until y = 2;

(* Test case statement *)
case grade of
1: Apple := 100;
2: Bannana := 200;
3, 4: Cherry := 300;
end;

(* Test while loop *)
while x < 10 do
begin
if x * 2 < 10 + 3 then
x := x + 1
else
x := x + 2;
y := y * 2;
end;

(* Test for loop *)
for i := 0 to 10 do
x := x * 10;

(* Test with statement *)
with myRecord do
begin
rval := 0;
end;

end.
