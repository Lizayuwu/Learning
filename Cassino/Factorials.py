import functools
print(functools.reduce(int.__mul__, list(range(1, (int(input("digitate:\n"))+1)))))
