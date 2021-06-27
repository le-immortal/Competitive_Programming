# k = int(input())

# while k:
# 	n = int(input())
# 	x = int(input())
# 	t = int(input())
# 	count = 0
# 	z = n - int((t/x))
# 	y = int(n-z-1)
# 	count = z * int(t/x) + y*(y+1)/2
# 	print(int(count))

def main():
	k = int(input())	

	while k:
		n , x, t = [int(c) for c in input().split()]
		if n == 1:
			print(0)
			k = k-1
			continue
		b = int(t/x)
		# print(b, 'value')
		if b <= 0:
			print(0)
			k = k-1
			continue
		count = 0
		z = n - b
		y = (n-z-1)
		count = z * b + y*(y+1)/2
		print(int(count))
		k = k-1

if __name__ == "__main__":
   main()