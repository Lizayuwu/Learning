import functools
# -*- encoding:utf-8 -*-
numbers = []
for i in range(0, int(input("Dititate quandos numbers eh pra tu digitatear\n"))):
    numbers.append(int(input("Qual number?\t")))
par = list(filter(lambda x: x % 2 == 0, numbers)) or [0]
impar = list(filter(lambda x: x % 2, numbers)) or [0]
print("A media dos pares eh: ", functools.reduce(int.__add__,par)/len(par))
print("A media dos impares eh: ", functools.reduce(int.__add__,impar)/len(impar))
print("A soma dos numeros eh: ", functools.reduce(int.__add__, par) + functools.reduce(int.__add__, impar))