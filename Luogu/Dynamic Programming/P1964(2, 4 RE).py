# 2,4 RE
maxSpace = 21
usedSpace, saleNum = map(int, input().split())
saleDic = {}
for i in range(saleNum):
    elementList = list(input().split())
    name = elementList[-1]
    valueList = list(map(int, elementList[:-1]))
    if name in saleDic.keys():
        saleDic[name][0] += valueList[0]
    else:
        saleDic[name] = valueList
resultList = []
for j in range(maxSpace - usedSpace):
    maxValue = 0
    initValue = 0
    flagDic = {}
    for key in saleDic.keys():
        objNum, objValue, objMaxNum = saleDic[key]
        if objNum >= objMaxNum:
            maxValue = max(initValue, objMaxNum * objValue)
            if maxValue == objMaxNum * objValue and maxValue != 0:
                flagDic.clear()
                flagDic[key] = objMaxNum
            initValue = maxValue
        else:
            maxValue = max(initValue, objValue * objNum)
            if maxValue == objNum * objValue and maxValue != 0:
                flagDic.clear()
                flagDic[key] = objNum
            initValue = maxValue
    saleDic[list(flagDic.keys())[0]][0] -= list(flagDic.values())[0]
    resultList.append(maxValue)
result = 0
for num in resultList:
    result += num
print(result)
