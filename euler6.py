n=0
a=0
b=0
c=0
k=0
for i in range(1,101):
	n+=1
	b = b+n

c = b*b
print(c)

for i in range(1,101):
	k+=1
	a = a+(k*k)
print(a)
print(c-a)
