# Sum of First N Numbers

a = int(input("Enter the value for N : ")) # 5 
# The Answer should be 1 + 2 + 3 + 4 + 5 = 15 
result = 0
for i in range(1,a+1) : 
    result = result + i
    
print(result)