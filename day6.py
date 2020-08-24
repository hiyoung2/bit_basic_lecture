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
#??? 이게 왜 결과 이렇게 나올까 ?
#x[-1]을 기준으로 정렬하는 것은
#결국 원소의 맨 마지막 값을 보고 결정하겠다는 의미
colors.sort(key=mysort)
print(colors)

colors.sort(key=mysort, reverse=True)
print(colors)


#13
a = {1, 2, 3}
b = {3, 4, 5}

print(a)
print(b)
print(type(a))      #집합을 다루므로 set이 나옴

print(a.union(a))           #합집합
print(a.intersection(b))    #교집합

print(a - b)    #차집합
print(a | b)    #합집합
print(a & b)    #교집합
print(a ^ b)    #교집합만 제외


#14
val = 10
if val > 5:     #val이 5 보다 크면
    print("val is bigger than 5")
    
money = 10
if money > 100: #money가 100보다 크면
    item = "apple"
else:           #그렇지 않다면
    item = "banana"

print(item)


#15
#int(input())을 통해 정수형 입력을 받는다.
#추가적으로 아래와 같이 적어서
#입력을 요청하는 문자열을 출력한다.
#Python은 else if를 elif로 표현한다.
score = int(input(('Input Score: ')))

#파이썬은 문법 구조가 들여쓰기를 중요시함
if 90 <= score <= 100:
    grade = 'A'
elif 80 <= score < 90:
    grade = 'B'
elif 70 <= score < 80:
    grade = 'C'
elif 60 <= score < 70:
    grade = 'D'
else:
    grade = 'F'
    
print("Grade is " + grade)


#16
#bool은 boolean을 의미하는 것으로
#참과 거짓을 판별해준다.
print(bool(True))   #참
print(bool(False))  #거짓
print(bool(13))     #값이 있으니 참
print(bool(0.0))    #값이 0이므로 거짓
print(bool('apple'))    #값이 있으니 참
print(bool(''))         #텅 비었으므로 거짓
print(bool([10, 20, "Apple"]))  #있어서 참
print(bool({}))         #텅 비어서 거짓
print(bool(None))       #None은 아무것도 없다는 뜻


#17
val = 5
while val > 0:
    print(val)
    val -= 1
    
    
#18
list = ['Apple', 100, 15.33]
#Python은 모든 데이터 타입이 클래스로 잡혀 있다.
#클래스는 C언어 구조체의 확장된 좀 더 상위 버전
#구조체는 커스텀 데이터 타입을 나타냈었다.
#클래스 역시도 마찬가지로 커스텀 데이터 타입이다.
#for i in list가 동작하는 과정
#1. list에 있는 정보를 하나씩 i로 가져온다.
#2. i로 가져오면 for문 내부로 진입한다.
#3. for문 내부 작업이 끝나면
#   list에서 다시 값을 가져온다.
#4. 가져올것이 없을때까지 반복한다.
for i in list:
    print(i, type(i))


#19
#자료구조의 Hash 맵을 만들었다고 보면 된다.
#key값과 value값이 한 쌍으로 묶여 있다.
#key가 "Apple", "Orange", "Banana"
#value는 100, 200, 300
d = {"Apple":100, "Orange":200, "Banana":300}
for k, v in d.items():
    print(k, v)


#20
l = [3, 33, 333]
#for i in l:
#   print(i)
#강제로 iterator에게 반복하게 만들어줌
iterator = iter(l)
for i in iterator:
    print(i)


#21
seriesList = [10, 12, 14, 16, 18]
for i in seriesList:
    print(i)
    
#0 ~ 9까지 10개를 만든다.
print(list(range(10)))
#5 ~ 10전까지 5개를 만든다.
print(list(range(5, 10)))
#10 ~ 0전까지 가는데 그 사이의 갭을 -1씩 준다.
print(list(range(10, 0, -1)))
#10 ~ 20전까지 가는데 그 사이 갭이 +2씩 증가
print(list(range(10, 20, 2)))

for i in range(10, 20, 2):
    print(i)


#22
strList = ['Apple', 'Orange', 'Banana']
#우리가 C언어에서 프로그래밍을 할 때는
#%d, %f, %c 등으로 출력 포맷을 결정한데 비해
#Python에서는 {0}, {n} 등으로 출력할 요소를 결정한다.
for i in range(len(strList)):
    print("idx: {0}, val: {1}".format(i, strList[i]))
    
#strList에 몇 개의 요소가 있는지 파악한다.
#len()을 활용해서 알아내는 것임
print(len(strList))


#23
import time
l = range(300000)   #30만개의 데이터

#현재 시점(출력전)의 시간을 저장
t = time.mktime(time.localtime())

#30만개의 데이터를 출력한다.
for i in l:
    print(i, )
    
#출력후의 시간을 저장
t1 = time.mktime(time.localtime()) - t

#다시 현재 시간(join 출력전)의 시간 저장
t = time.mktime(time.localtime())
#join을 통해 30만개의 데이터를 고속으로 출력
print(", ".join(str(i) for i in l))
#출력후의 시간을 저장
t2 = time.mktime(time.localtime()) - t

#그냥 print했을때의 걸린 시간
print("Take {0} seconds".format(t1))
#join을 통해 고속으로 처리했을때 걸린 시간
print("Take {0} seconds".format(t2))

#메모리 계층 구조(Memory Hierarchy)
#1. 레지스터
#2. 캐시 메모리(SRAM)
#3. 메모리(DRAM)
#4. I/O(입출력 장치)
#한 번에 묶어서 블록 단위로 처리하자!
#이것을 해주는 작업이 join이라고 봐도 무방하다.


#24
import numpy as np
import matplotlib.pyplot as plt

#linspace - Linear Space으로
#0 ~ 5까지의 값들을 1001개로 쪼개겠다는 의미
#0 ~ 5까지 1000개로 쪼갠다. + 1
#시작값을 포함해야하기 때문에 + 1을 반드시 해줘야한다.
#파악해야할것: 여기서 1001은 결국 샘플의 개수
#샘플의 개수가 많고 시간 간격이 작아야 정밀도가 높아짐
#미분의 정확성과도 연관이 있다.
t = np.linspace(0, 5, 1001)
#진폭이 2인 sin(10 * t)를 x1에 저장한다.
#주의할점은 numpy 사용했으므로 데이터가 배열 형태로 존재
#이와 같은 신호 처리를 할 때는 중요한 것이
#샘플 데이터를 안정적으로 확보하는 것이 중요하다.
#샘플이 안정적이라면 그때 각종 수학 연산을 사용한다.
x1 = 2 * np.cos(10 * t)
#그래프를 그리는 기능
fig, ax = plt.subplots(figsize=(6, 2.5))
#시간축을 x로 놓고 계산된 2 * cos(10 * t)는 y
ax.plot(t, x1)
#표시할 범위를 지정(0 ~ 5까지)
ax.set_xlim(0, 5)
#x축 레이블을 지정함(시간축 명시)
ax.set_xlabel('t(sec)')
#그래프의 제목 지정
ax.set_title('$x_1(t) = 2\cos(10t)$')
print(t)
print(x1)
#우리가 만든 내용물을 그래프로 보여준다.
fig.show()


#25
#Python 함수 만들기
#1. def를 적고 함수명을 적는다.
#2. 괄호 열고 인자가 있다면 적는다.
#3. ':'을 찍어서 함수 내용을 작성한다.
def times(a, b):
    return a * b

print(times)
print(times(10, 10))
#print(globals())

#Python에는 포인터가 없다.
#그러나 아래 globals()의 결과를 보면
#times와 pointerOfFunction의 주소가 같은것을 볼 수 있다.
#두 개의 주소가 같다는 것은 함수 포인터로서
#주소값을 받았다는 의미가 되므로
#Python에 포인터가 없지만 컴퓨터 내부 동작은
#C에서 동작하는것에서 전혀 달라지는 것이 없다.
pointerOfFunction = times
res = pointerOfFunction(10, 10)
print(res)
print(globals())


#26
#파이썬 다중 리턴이 가능하다.
#내부적으로 클래스나 구조체에 넣어서 처리하는 것인데
#언어 자체적으로 이와 같은 기능을 지원해주는 것이다.
def swap(x, y):
    return y, x

print(swap(3, 7))

a, b = swap(33, 77)
print(a)
print(b)

x = swap(333, 777)
print(x)
print(type(x))



#27
#1. 1 ~ 100까지의 정수에서 짝수를 모두 뽑아내시오.

print(list(range(2, 101, 2)))

#2. x^2을 0 ~ 3까지 적분하는 프로그램을 작성해보시오.
import numpy as np

#x = np.linspace(0, 3, 31)
#0 ~ 3 까지 3001개로 쪼갠다.
#즉 0.001 단위로 쪼갠다.
x = np.linspace(0, 3, 3001)
#y = x^2이므로 각 점의 y값을 구한다.
y = np.power(x, 2)

#각각의 사각형들을 구하기 위해
#밑변 0.001을 고정하고 y값을 곱한다.
area = 0.001 * y
#print(area)

#np.sum은 Sigma와 동일하다.
res = np.sum(area)
print(res)


#Fast Fourier Transform(고속 푸리에 변환)
import numpy as np
import matplotlib.pyplot as plt

from numpy.fft import fft, fftshift
from IPython.display import (Audio, display)

#주파수 = 주기의 역수
#주기 = 주파수의 역수
def beat(A, B, fc, df, dur, fs=11025):
    #0 ~ 3까지 1 / fs의 단위로 t값을 쪼갠다.
    #np.arange, np.linspace 두 개가 서로 비슷해보임
    #그러나 linspace는 쪼개는 개수를 선택
    #arange는 쪼갠 길이값을 선택
    #linspace(0, 3, 3001) == arange(0, 3, 0.001)
    t = np.arange(0, dur, 1 / fs)
    print(t)
    #fc = 440, df = 5 -> 435 Hz
    x1 = A * np.cos(2 * np.pi * (fc - df) * t)
    #445 Hz
    x2 = B * np.cos(2 * np.pi * (fc + df) * t)
    #두 주파수의 차이가 많이 나지 않으면 맥놀이가 발생
    #그래서 우우웅 우웅 하는 소리가 나게 된다.
    x = x1 + x2
    return x, t

fc, delf, fs, dur = 440, 5, 11025, 3
#맥놀이가 발생하는 소리를 만든다.
x, t = beat(1, 0.5, fc, delf, dur)
#해당 파형(시간)을 그래프로 그린다.
#x축(시간), y축(진폭)
fig, axes = plt.subplots(2, 1, figsize=(6, 3.5))
axes[0].plot(t * 1000, x)
axes[0].set_xlim(0, 200)
axes[0].set_ylim(-2, 2)

display(Audio(data=x, rate=fs, autoplay=True))

#푸리에 변환을 수행한 결과를 보여준다.
#푸리에 변환은 x축(주파수), y축(진폭)
Nfft = 2048
#푸리에 변환을 하는 구간
X = fftshift(fft(x)) / fs
f = np.linspace(-fs / 2, fs / 2, len(X), endpoint=False)
#np.abs()는 절대값을 만들어줌
axes[1].plot(f, np.abs(X))
axes[1].set_xlim(-500, 500)
fig.show()
