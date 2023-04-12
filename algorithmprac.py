def recursive(n):
    print(n)
    if n == 1:
        return
    if n % 2 == 0:
        n //= 2
        recursive(n)   
    else:
        n = (n*3) + 1
        recursive(n)
        
    
num = int(input("Enter number: "))
recursive(num)
    
