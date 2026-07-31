num1 = int(input("enter a number : "))
num2 = int(input("enter a number : "))
num3 = int(input("enter a number : "))

greater = (num1 if(num1 > num3) else num3) if(num1 > num2) else (num1 if(num2 > num3) else num3)

smaller = (num1 if(num1 < num3) else num3) if(num1 < num2) else (num1 if(num2 < num3) else num3)

print(f"smallest number {smaller} \n greatest number {greater}")