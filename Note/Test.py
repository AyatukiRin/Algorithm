lt = [1, 2, 3]
index = lt.index(2)
print(index)


for i in range(1, 2):
    print(i)

def foo1():
    a = 1
    b = 2
    return a,b
a = [1,2]
for j in range(3):
    for i in a:
        print(i, end=' ')
    print('')

if 6 in range(5,6):
    print('zai')

dic = {'a': [1, 2]}
print(dic['a'][0])