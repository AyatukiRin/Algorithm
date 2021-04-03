# lt = [1, 2, 3, 4, 5]
# print(list(filter(lambda x : x < 4, lt)))
#
# dic = {}
# dic.update({1: 2})
# print(dic)

#
# lt1 = [1, ['2', '3']]
# print(lt1[1].index('2'))

# from decimal import Decimal
# a = 12.345
# print(Decimal(a).quantize(Decimal("0.00")))
#
# import re
# a = 12.345
# print(re.findall(r"\d+?\.\d{2}", str(a)))
from symbol import decorator

lt = [1, 2, 3]
lt = list(map((lambda x: x**2), lt))
print(lt)