# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

#1
print("Hello Python")

#2
num = 1
Num = 10
print(num, Num)

#3
binary = 0b10
octal = 0o10
hexa = 0x10

print(binary, octal, hexa)

#4
binary = bin(38)
octal = oct(38)
hexa = hex(38)

print(binary, octal, hexa)

#5
z = 3 - 4j

print(type(z))  #complex class
print(z.imag)   #복소수의 허수파트
print(z.real)   #복소수의 실수파트
print(z.conjugate())    #켤례 복소수


#6
big = 1.2e30
small = 1.57e-20
test = 2**10

print(big)
print(small)
print(test)

print(type(big))
print(type(small))
print(type(test))

#7
num1 = 3 // 7       #나는 몫만 구하고 싶어~
num2 = 3333 // 10

print(num1)
print(num2)

num3 = 3 / 7        #알아서 type casting 하므로
num4 = 3333 / 10    #float으로 처리

print(num3)
print(num4)

#8
str1 = "string type"
str2 = "string type too"
str3 = "Test string"

print(str1)
print(str2)
print(str3)

print(type(str1))
print(type(str2))
print(type(str3))

fixStr = """
    여기에 이런식으로 적으면
            여기 적은 형태로
            출력되게 된다.
"""

print(fixStr)

print("\tTab\n다음줄")
print("NULL = " + "\0")
print("Won = " + "\\")
print("홑 따옴표 = " + "\'")
print("쌍 따옴표 = " + "\"")


#9
testStr = 'test' + 'python'  #문자열 붙이기
print(testStr)

str1 = "pointer"
print(str1)
print(str1[0])          #배열과 동일
print(str1[3])

print(str1[0:1])        #0~1 전까지의 값
print(str1[1:4])        #1~4 전까지의 값
print(str1[:2])         #0~1 까지를 의 값
print(str1[-2:])        #끝에서 2개를 가져옴
print(str1[:])          #그대로 출력
print(str1[::2])        #2칸씩 건너뛰어라


#10
#str()을 통해 숫자를 문자열로 만듬
makeStr = str(3.14) + "33"
#문자열을 숫자로 바꿈(int)
intStr = int("77") + 33
#문자열을 숫자로 바꿈(float)
floatStr = float("33") + 33

print(makeStr)
print(intStr)
print(floatStr)

#11
#Python 리스트 만들기
#리스트의 시작 또한 0 부터 시작한다.
colors = ['red', 'green', 'blue']

print(colors)
print(type(colors)) #type()은 type을 검사한다.

#append()는 리스트 끝에 값을 추가한다.
colors.append('gold')
print(colors)

#insert()는 원하는 위치에 값을 추가한다.
#insert(위치, 넣을값)
colors.insert(1, 'black')
print(colors)

#extend()는 리스트에 리스트를 추가한다.
colors.extend(['white', 'gray'])
print(colors)

#아래와 같이 덧셈을 통해서 원소를 추가할 수 있다.
colors += ['purple']
colors += ['red']
print(colors)

#index()는 원소의 위치를 파악한다.
print(colors.index('red'))
#index(찾는 원소, 시작 위치)
print(colors.index('red', 1))
#index(찾는 원소, 시작 위치, 어디서 끝낼지)
print(colors.index('purple', 4, 8))
#count()는 원소의 개수를 얻어옴
print(colors.count('red'))
#stack은 후입선출 구조를 가지고 있다.
#나중에 들어온 놈이 제일 먼저 나간다.
#pop()은 스택에서 빠져나가는 것과 동일하다.
#포인트: 그래서 가장 끝에 값부터 빠져나간다.
#실제로 pop()을 하면 데이터가 사라진다.
print(colors.pop())
print(colors.pop())
print(colors.pop())
print(colors)


#12
colors = ['red', 'green', 'blue']
colors.append('gold')
colors.insert(1, 'black')
colors.extend(['white', 'gray'])
colors += ['purple']
colors += ['red']
print(colors)

#remove()를 사용하여 특정 원소를 제거할 수 있다.
#단 맨 앞에서 가장 근거리 원소 한 개를 제거한다.
colors.remove('green')
print(colors)

#sort()의 사전적 의미는 정렬로
#알파벳 순서로 정렬되는 것을 볼 수 있다.
colors.sort()
print("origin sort: ", colors)

#reverse()는 정렬을 하는데 거꾸로 정렬한다.
#즉 z에 가까운 녀석이 앞으로 온다.
colors.reverse()
print("origin reverse: ", colors)

#파이썬 함수는 def를 통해 선언할 수 있다.
#현재 mysort라는 함수를 만들었고
#입력은 x에 해당한다.
#주의점: 함수 선언시 C 언어는 중괄호를 열고 닫지만
#파이썬은 단순히 ':'을 찍어서 표현한다.
#return x[-1]의 의미는
#맨 마지막 원소를 기준으로 하라는 의미가 된다.
def mysort(x):
    return x[-1]

#sort()의 기능중엔
#우리가 만든 소팅 함수를 사용할 수 있게
#해주는 특별한 기능이 있다.
#key=우리가만든함수 형태로
#우리의 정렬 함수를 사용할 수 있다.
print(colors)
#a b c d e f g h i j k l m 
#n o p q r s t u v w x y z
#이게 왜 결과 이렇게 나올까 ?
colors.sort(key=mysort)
print(colors)

colors.sort(key=mysort, reverse=True)
print(colors)









