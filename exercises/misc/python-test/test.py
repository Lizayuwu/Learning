from time import sleep
max = 6
spaces = max-1 
print(f"{'#' * max} ")
for i in range(0, max):
    if i < max/2:
        print(f"#{' ' * (i%int(max/2))}#{' ' * (i+max/2)}#")
    else:
        print(f"#{' ' * (max-i-1)}#")

print(f"{'#' * max} ")