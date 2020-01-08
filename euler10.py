def is_prime(n):
	for i in range(2,n):
		if n%i == 0:
			return 0
	return 1

sum = 0
for i in range(2,2000001):
	if is_prime(i):
		sum = sum + i
		if i == 2000000:
			print(sum)
