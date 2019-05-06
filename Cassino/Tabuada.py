# 5
print([x * 5 for x in range(0, 11)])
# 7
print([x * 7 for x in range(0, 11)])
# 9
print([x * 9 for x in range(0, 11)])
# 100-200, passo 2
print(list(filter(lambda x: x % 2 == 0, list(range(100,201)))))
# A L L  O F  T H E M
print([[x*i for i in range(0, 11)] for x in range(0,11)])