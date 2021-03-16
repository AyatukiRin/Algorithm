# Python算法中的一些笔记和知识补全

## 1.Python使用遍历列表删除元素

```python
a = [1, 1, 1, 3]
a = a * 2
a = set(a)	# 乱序存储不重复的元素
a = list(filter(lambda x: x != 1, a))   # 使用过滤器删除指定条件的元素

a = [x for x in a if x != 1]    # 利用列表解析来删除

for item in a[:]:
    if item == 1:
        a.remove(item)  # 遍历拷贝的list来操作原始的list

while 1 in a:
    a.remove(1)     # 利用while循环判断

for item in range(len(a) - 1, -1, -1):
    if a[item] == 1:
        del a[item]     # 倒序是最geek的解决办法，但是倒序的代码可读性差，推荐用filter
```

## 2.位运算符

```python
a = 5   # 101
b = 2   # 010
print(a | b)	# 输出7	"0111" 按位或，集合并集
print(a ^ b)	# 输出7	各个位置相比，只要相异，返回1,否则返回1 按位异或、集合对称差集
print(a ^ a)	# 输出0
print(a & b)	# 输出0	按位与，集合交集
print(a << 2)	# 输出20	a左移两位"10100" 即20
print(a >> 2)	# 输出1	a右移两位"1" 即1
```

### 3.各种类型的内置方法

- ```python
  print(int('101', 2))	# 输出5，int()	第一参数接受字符串，第二参数接受第一参数的进制数，						   输出10进制数字
  hex(1033)	# 输出'0x409' 十进制转换成十六进制
  bin(10) 	# 输出'0b01010'
  ```

  