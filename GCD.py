# euclidean methode

def gcd(x,y):
    if x== 0 :
        return y
    else :
        return gcd(y%x,x)
    
a,b = input('enter two  umber'). split()
print(f"GCD of {a},{b} = {gcd(int(a),int(b))}")



        