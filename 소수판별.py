a = int(input())
count = 0
for i in range(1,a+1):
    if a%i==0:
        count += 1
if (count==2):
    print("소수")
else:
    print("소수가 아니다.")
