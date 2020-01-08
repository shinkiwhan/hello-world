num = 1
fin = 0
while True:
	for i in range(1,21):
		if num % i  != 0:
			break
		if i == 20:
			print(num)
			fin = 1
			break
	if fin == 1:
		break
	num+=1
