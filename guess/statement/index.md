# 猜數字 (guess)

## 題目描述
tw87 心中想了一個介於 $l$ 到 $r$ 之間的正整數，你可以問他心中想的數字和某個數字之間的大小關係，但 tw87 只想讓你問最多 $\lfloor \log_2(r - l + 1) \rfloor$ 次，請猜出 tw87 心中在想什麼。


## 實作細節
你必須實作以下函式
```cpp
int game(int l, int r);
```
* 代表tw87所想的數字在 $l$ 到 $r$ 之間。
* 你必須回傳一個整數，代表 tw87 心中所想的數字

在實作此函數的過程中，你可以呼叫以下函式最多 $\lfloor \log_2(r - l + 1) \rfloor$ 次

```cpp
int ask(int x);
```
* 代表你想問此數字和 $x$ 之間的關係
* 假設 tw87 心中所想的數字是 $t$
    * 如果 $x < t$，回傳 $1$
    * 如果 $x > t$，回傳 $-1$
    * 如果 $x = t$，回傳 $0$


## 限制
* $1 \le l \le r \le 2147483647$
* judge 是 adaptive 的

<div style="page-break-after: always"></div>


<div style="page-break-after: always"></div>

## 範例評分程式
範例評分程式採用以下格式輸入

----

$l$ $r$  
$tar$

----

$tar$ 代表目標的數字，介於 $l$ $r$ 之間