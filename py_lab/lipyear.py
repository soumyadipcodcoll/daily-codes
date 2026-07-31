year = int(input("enter year : "))

print(f"year is {"leapyear" if(year % 4 == 0 or year % 400 == 0) else " not leapyear"}")