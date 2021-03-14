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

## 2.