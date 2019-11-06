import random
arr = [[random.randint(0,255) for i in range(0, 5)] for j in range(0,15)]
reps = {}
print("arr:")
print(arr)

print("repeats: ")
for row in arr:
	for num in row:
		if num not in reps:
			reps[num] = 1
		else:
			reps[num] += 1
for item in reps:
	if reps.get(item) is not 1:
		print(item ,reps[item])