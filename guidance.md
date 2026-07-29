# 將函數轉換為類別方法

類別方法接收類別作為隱式的第一個參數 就像實例方法接收實例作為第一個參數
若要宣告類別方法 使用下列慣用寫入：
```py=
class C:
    @classmethod
        def f(cls, arg1, arg2, ...):
```
既可以透過類別（例如 C.f()）調用 也可以透過實例（例如 C().f()）呼叫
除了確定其所屬類別之外 實例本身會被忽略
如果透過衍生類別呼叫類別方法 則衍生類別對象
會作為隱式的第一個參數被傳入

---
## 建立類別的實例:
```py=
class C:
    def f(cls, arg1, arg2, ...):
c = C()  # 建立 C 類別的一個實例（instance) 如果是一般方法（instance method） 就一定需要建立類別的實例
```
---
## 定義動態方法:
```py=
def  __get__(self, instance, owner, /):  # 傳回 instance 的屬性，該屬性屬於 owner 類型。

def __init__(self, /, *args, **kwargs):  # 初始化 self
```
---
## 定義靜態方法：
```py=
def __new__(*args, **kwargs) from builtins.type:  # 建立並傳回一個新物件
```
---
## 操作範例:
```py=
class Solution:  # 建立類Solution
    def sum_two_nums(self,x,y):  # 定義成員函數sum_two_nums 接收參數x及y
        return x + y  # 回傳x及y的相加結果
```
---
