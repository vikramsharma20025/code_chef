t = int(input())
for i in range(t):
    a = int(input())
    b = int(input())
    c = int(input())
    if(a>b and a>c and a>50):
        print("a")
    elif(b>a and b>c and b>50):
        print("b")
    elif(c>a and c>b and c>50):
        print("c")
    else:
        print("nota")
    
