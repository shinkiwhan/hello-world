def is_prime(num):
	n = 2
	while num !=1:
		if num%n==0:
			print(num, n)
			num = num/n
		else:
			n+=1
	return n

print(is_prime(600851475143))
