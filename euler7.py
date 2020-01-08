def is_prime(n):
	for i in range(2,n):
		if n%i == 0:
			return 0
	return 1

count = 0
for i in range(2,1000000):
	if is_prime(i):
		count+=1
		if count == 10001:
			print(i)
