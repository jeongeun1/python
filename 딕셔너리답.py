our_club={}
print("몇명 입력")
n = int(input())
for i in range(0,n):
    print("딕셔러니 키와 값을 입력하세요")
    key, value = input().split()
    our_club[key] = value
print(our_club)
