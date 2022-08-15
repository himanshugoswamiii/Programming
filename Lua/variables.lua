Var = 20;
print(Var) -- Printing global variable
do
  local Var=100
  print(Var) -- Printing the local variabe
end
print(Var) -- Local variable still exists
