def step(num):
	a = 1
	b = 1
	for i in range(1,num):
		c = a
		a = b
		b += c
	return b

def main():
	data = input().split()
	person = 0
	road = 1
	for i in range(int(data[1])):
		a = int(input())
		if a - person == 0:
			print(0)
			return
		length = a - 1 - person
		road_1 = step(length)
		road *= (road_1 % 1000000007)
		person = a + 1
	length = int(data[0]) - person
	road_1 = step(length)
	road *= (road_1 % 1000000007)
	print(road % 1000000007)
	return

if __name__ == "__main__":
	main()
