star = ""
n = int(input())
for i in range(n):
  for j in range(i+1): 
    star += "*"
  star += "\n"
print(star)