a = int(input())
for i in range(2,a+1):
    print("{}단".format(i))
    print("*"*10)
    for j in range(1,10):
    
       print("{}x{}={}".format(i,j,i*j))
    print("-"*25)
