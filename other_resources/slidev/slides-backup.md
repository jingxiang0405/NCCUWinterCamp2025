---
# You can also start simply with 'default'
theme: dracula
# random image from a curated Unsplash collection by Anthony
# like them? see https://unsplash.com/collections/94734566/slidev
# background: https://cover.sli.dev
# some information about your slides (markdown enabled)
title: 5. 陣列＆字串
info: |
  ## Slidev Starter Template
  Presentation slides for developers.

  Learn more at [Sli.dev](https://sli.dev)
# apply unocss classes to the current slide
class: text-center
# https://sli.dev/features/drawing
drawings:
  persist: false
# slide transition: https://sli.dev/guide/animations.html#slide-transitions
transition: slide-left
# enable MDC Syntax: https://sli.dev/features/mdc
mdc: true
# take snapshot for each slide in the overview
overviewSnapshots: true

download: true

export:
  format: pdf
  timeout: 30000
  dark: true
  withClicks: true
  withToc: false


---


# 5. 陣列＆字串 

<div class="fixed bottom-0 left-1/2 transform -translate-x-1/2 mb-4 p-4 rounded" style="color: slategray;">
</div>


---
layout: center
---

### 想像一個場景

---
title: 如果要宣告5個整數
---

<h3 style="color:white; max-width: fit-content; margin-inline: auto;padding-top: 10px"> 如果要宣告5個整數：</h3>
<br>
<v-click>
<div class="chart1" style="width:300px;  margin-inline: auto; font-size: 30px">
    <style>
        .chart1 table, 
        .chart1 td, 
        .chart1 tr,
        .chart1 th {
          border: none!important;
          border-collapse: collapse;
          text-align: center;
        }
        /* .chart1 td {
          background:  red
        }
        text-align: center; */
    </style>
    <table><tbody>
      <tr>
        <td>int a1;</td>
      </tr>
      <tr>
        <td>int a2;</td>
      </tr>
      <tr>
        <td>int a3;</td>
      </tr>
      <tr>
        <td>int a4;</td>
      </tr>
      <tr>
        <td>int a5;</td>
      </tr>
    </tbody></table>
</div>
</v-click>

---
title: 如果要記錄10個整數
class: text-center
---

<h3 style="color:white; max-width: fit-content; margin-inline: auto;padding-top: 10px">10個呢？</h3>

<br>
<v-click>
<div class="chart1" style="width:300px;  margin-inline: auto; font-size: 30px">
    <style>
        .chart1 table, 
        .chart1 td, 
        .chart1 tr,
        .chart1 th {
          border: none!important;
          border-collapse: collapse;
        }
    </style>
    <table><tbody>
      <tr>
        <td>int a1;</td>
        <td>int a6;</td>
      </tr>
      <tr>
        <td>int a2;</td>
        <td>int a7;</td>
      </tr>
      <tr>
        <td>int a3;</td>
        <td>int a8;</td>
      </tr>
      <tr>
        <td>int a4;</td>
        <td>int a9;</td>
      </tr>
      <tr>
        <td>int a5;</td>
        <td>int a10;</td>
      </tr>
    </tbody></table>
</div>
</v-click> 

---
title: 如果要記錄200個整數
class: text-center
---

<h3 style="color:white; max-width: fit-content; margin-inline: auto;padding-top: 10px">200個呢？</h3>

<br>
<v-click>
<div class="chart2">
    <style>
        .chart2 table, 
        .chart2 td,
        .chart2 tr,
        .chart2 th {
          border: none!important;
          border-collapse: collapse;
          padding: 0px;
          /* border-spacing: 50px; */
          font-size: 14px;
        }
    </style>
    <table>
    <tbody>
      <tr>
        <td>int a1;</td> <td>int a21;</td> <td>int a41;</td> <td>int a61;</td> <td>int a81;</td> <td>int a101;</td> <td>int a121;</td> <td>int a141;</td> <td>int a161;</td> <td>int a181;</td>
      </tr>
      <tr>
        <td>int a2;</td> <td>int a22;</td> <td>int a42;</td> <td>int a62;</td> <td>int a82;</td> <td>int a102;</td> <td>int a122;</td> <td>int a142;</td> <td>int a162;</td> <td>int a182;</td>
      </tr>
      <tr>
        <td>int a3;</td> <td>int a23;</td> <td>int a43;</td> <td>int a63;</td> <td>int a83;</td> <td>int a103;</td> <td>int a123;</td> <td>int a143;</td> <td>int a163;</td> <td>int a183;</td>
      </tr>
      <tr>
        <td>int a4;</td> <td>int a24;</td> <td>int a44;</td> <td>int a64;</td> <td>int a84;</td> <td>int a104;</td> <td>int a124;</td> <td>int a144;</td> <td>int a164;</td> <td>int a184;</td>
      </tr>
      <tr>
        <td>int a5;</td> <td>int a25;</td> <td>int a45;</td> <td>int a65;</td> <td>int a85;</td> <td>int a105;</td> <td>int a125;</td> <td>int a145;</td> <td>int a165;</td> <td>int a185;</td>
      </tr>
      <tr>
        <td>int a6;</td> <td>int a26;</td> <td>int a46;</td> <td>int a66;</td> <td>int a86;</td> <td>int a106;</td> <td>int a126;</td> <td>int a146;</td> <td>int a166;</td> <td>int a186;</td>
      </tr>
      <tr>
        <td>int a7;</td> <td>int a27;</td> <td>int a47;</td> <td>int a67;</td> <td>int a87;</td> <td>int a107;</td> <td>int a127;</td> <td>int a147;</td> <td>int a167;</td> <td>int a187;</td>
      </tr>
      <tr>
        <td>int a8;</td> <td>int a28;</td> <td>int a48;</td> <td>int a68;</td> <td>int a88;</td> <td>int a108;</td> <td>int a128;</td> <td>int a148;</td> <td>int a168;</td> <td>int a188;</td>
      </tr>
      <tr>
        <td>int a9;</td> <td>int a29;</td> <td>int a49;</td> <td>int a69;</td> <td>int a89;</td> <td>int a109;</td> <td>int a129;</td> <td>int a149;</td> <td>int a169;</td> <td>int a189;</td>
      </tr>
      <tr>
        <td>int a10;</td> <td>int a30;</td> <td>int a50;</td> <td>int a70;</td> <td>int a90;</td> <td>int a110;</td> <td>int a130;</td> <td>int a150;</td> <td>int a170;</td> <td>int a190;</td>
      </tr>
      <tr>
        <td>int a11;</td> <td>int a31;</td> <td>int a51;</td> <td>int a71;</td> <td>int a91;</td> <td>int a111;</td> <td>int a131;</td> <td>int a151;</td> <td>int a171;</td> <td>int a191;</td>
      </tr>
      <tr>
        <td>int a12;</td> <td>int a32;</td> <td>int a52;</td> <td>int a72;</td> <td>int a92;</td> <td>int a112;</td> <td>int a132;</td> <td>int a152;</td> <td>int a172;</td> <td>int a192;</td>
      </tr>
      <tr>
        <td>int a13;</td> <td>int a33;</td> <td>int a53;</td> <td>int a73;</td> <td>int a93;</td> <td>int a113;</td> <td>int a133;</td> <td>int a153;</td> <td>int a173;</td> <td>int a193;</td>
      </tr>
      <tr>
        <td>int a14;</td> <td>int a34;</td> <td>int a54;</td> <td>int a74;</td> <td>int a94;</td> <td>int a114;</td> <td>int a134;</td> <td>int a154;</td> <td>int a174;</td> <td>int a194;</td>
      </tr>
      <tr>
        <td>int a15;</td> <td>int a35;</td> <td>int a55;</td> <td>int a75;</td> <td>int a95;</td> <td>int a115;</td> <td>int a135;</td> <td>int a155;</td> <td>int a175;</td> <td>int a195;</td>
      </tr>
      <tr>
        <td>int a16;</td> <td>int a36;</td> <td>int a56;</td> <td>int a76;</td> <td>int a96;</td> <td>int a116;</td> <td>int a136;</td> <td>int a156;</td> <td>int a176;</td> <td>int a196;</td>
      </tr>
      <tr>
        <td>int a17;</td> <td>int a37;</td> <td>int a57;</td> <td>int a77;</td> <td>int a97;</td> <td>int a117;</td> <td>int a137;</td> <td>int a157;</td> <td>int a177;</td> <td>int a197;</td>
      </tr>
      <tr>
        <td>int a18;</td> <td>int a38;</td> <td>int a58;</td> <td>int a78;</td> <td>int a98;</td> <td>int a118;</td> <td>int a138;</td> <td>int a158;</td> <td>int a178;</td> <td>int a198;</td>
      </tr>
      <tr>
        <td>int a19;</td> <td>int a39;</td> <td>int a59;</td> <td>int a79;</td> <td>int a99;</td> <td>int a119;</td> <td>int a139;</td> <td>int a159;</td> <td>int a179;</td> <td>int a199;</td>
      </tr>
      <tr>
        <td>int a20;</td> <td>int a40;</td> <td>int a60;</td> <td>int a80;</td> <td>int a100;</td> <td>int a120;</td> <td>int a140;</td> <td>int a160;</td> <td>int a180;</td> <td>int a200;</td>
      </tr>
    </tbody></table>
</div>
</v-click>
<v-click>
<div class="absolute inset-0 flex justify-center items-center">
  <div class="text-center leading-tight" style="padding-top:130px">
  <strong><span style="font-size: 155px; color: white;">當然<br>不是</span></strong>
  </div>
</div>
</v-click>

---
title: 所以我們需要陣列
layout: center
---

<div class="grid grid-cols-1 gap-6 ...">
<div class="place-self-center">
  <h4 style="color:white; font-size:38px!important;">所以我們需要</h4>
</div>
  <div class="place-self-center">

<h2 style="color:white;">陣列</h2></div>
</div>

---
layout: center
class: text-3xl space-y
font_adjustment: 1
---

### 何謂陣列？

<br />
<v-click>

**陣列(array)** 是一種用來儲存資料的資料結構

陣列中的每個元素都是<u>相同</u>的資料型態

利用 **索引(index)** 就可以找出對應的元素(element)

</v-click>


---
title: 陣列圖
---

![](https://i.imgur.com/vxepSiL.png)

- 因此一個長度為5的陣列就有索引為0, 1, 2, 3, 4的五個元素


<div class="text-align-right">
    
<span style="font-size:30px;"><span color="#f00">*</span>陣列的第一個元素是從0開始的</span>
    
</div>

<!-- 
記憶體 \
陣列是一段記憶體空間 -->

---

### 陣列的特性：

<div class="smaller">
<v-clicks>

- **相同類型的元素** \
  所有元素都是相同類型的，例如整數、浮點數、字元等。

- **連續的記憶體空間** \
  陣列的元素在記憶體中是連續存放的。

- **索引訪問** \
  每個元素都有一個唯一的索引，可以使用索引來訪問和修改特定位置的元素。
  <br>
  例如：`arr[3]`, `arr[0]`
  <br>
  <div style="font-size:1.3rem"><span style="color:#f00">*</span>索引值必 >= 0</div>

- **固定大小** \
  陣列在創建時需要指定大小，且一旦分配了大小，通常不能動態改變。

</v-clicks>

</div>


---
title: 陣列的宣告
class: text-2xl space-y-5
md: leading-loose
---

<h3 style="font-size: 40px">陣列的宣告：</h3>


<div class="smaller">

* 創建一個整數(int)陣列

```c{*}{lines:false, class:'!children:text-0.95rem no-ligatures'}
// 給定數值編譯器自動判斷陣列大小
int integerArray[] = {2,7,6,8,3};

// 創建一個長度5的int陣列，不給定初始值
int integerArray2[5];

// 創建一個長度5的int陣列，給定預設初始值(0)
int integerArray3[5]={};

// 創建一個長度5的int陣列，給定某些初始值，其它為0
int integerArray3[5]={2,3}; // 2,3,0,0,0
```

* 創建一個浮點(float/double)陣列
```c{*}{lines:false, class:'!children:text-0.95rem no-ligatures'}
float arr1[] = {2.3, 5.4, 9.3, 8.03};
double arr2[] = {8.3, 2.7, 3.6};
```

</div>

---
title: Array 範例1(0)
transition: fade
---

Array 範例1

```c {*}{lines:true, class:'!children:text-1.1rem no-ligatures'}
#include <stdio.h>
int main(){
    int arr[5] = {2,4,7,8,3};
    for (int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
```

---
title: Array 範例1(1)
---

Array 範例1

```c {*}{lines:true, class:'!children:text-1.1rem no-ligatures'}
#include <stdio.h>
int main(){
    int arr[5] = {2,4,7,8,3};
    for (int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
```

印出：

```plaintext {*}{lines:false, class:'!children:text-1.1rem no-ligatures'}
2 4 7 8 3 
```

---
title: Array 範例2.1(0)
transition: fade
---

Array 範例2.1

<div class="flex flex-row" style="width:870px;">
  <div class="basis-68/100" style="padding: 0px 50px 0px 10px; ">

```c{*}{lines:true, class:'!children:text-1.05rem no-ligatures'}
#include <stdio.h>
int main(){
    int arr[4];
    for (int i=0; i<4; i++){
        scanf("%d", &arr[i]);
    }
    
    int sum = 0;
    for (int i=0; i<4; i++){
        sum += arr[i];
    }

    printf("sum = %d\n", sum);
    printf("avg = %d\n", sum/4);
    return 0;
}
```
</div>
<div class="basis-32/100">
<p>輸入：</p>

```plaintext {*}{lines:false, class:'!children:text-1.1rem no-ligatures'}
5 13 4 9
```

<br>

  </div>
</div>

---
title: Array 範例2.1(1)
---

Array 範例2.1

<div class="flex flex-row" style="width:100%;">
  <div class="basis-68/100" style="padding: 0px 50px 0px 10px; ">

```c{*}{lines:true, class:'!children:text-1.05rem no-ligatures'}
#include <stdio.h>
int main(){
    int arr[4];
    for (int i=0; i<4; i++){
        scanf("%d", &arr[i]);
    }
    
    int sum = 0;
    for (int i=0; i<4; i++){
        sum += arr[i];
    }

    printf("sum = %d\n", sum);
    printf("avg = %d\n", sum/4);
    return 0;
}
```
  </div>
  <div class="basis-32/100">
  <p>輸入：</p>

```plaintext {*}{lines:false, class:'!children:text-1.1rem no-ligatures'}
5 13 4 9
```

<br>


<p>輸出：</p>
```plaintext {*}{lines:false, class:'!children:text-1.1rem no-ligatures'}
sum = 31
avg = 7
```

  </div>
</div>

<!-- 搶答\
sum = 31\
avg = 7\
"avg = %f\n", (float)sum/4 -->

---
title: Array 範例2.2(0)
transition: fade
---

Array 範例2.2

<div class="flex flex-row" style="width:100%;">
  <div class="basis-70/100" style="padding: 0px 50px 0px 10px; ">
```c{*}{lines:true, class:'!children:text-1.05rem no-ligatures'}
#include <stdio.h>
int main(){
    int arr[4];
    for (int i=0; i<4; i++){
        scanf("%d", &arr[i]);
    }
    
    int sum = 0;
    for (int i=0; i<4; i++){
        sum += arr[i];
    }

    printf("sum = %d\n", sum);
    printf("avg = %.1lf\n", (double)sum/4);
    return 0;
}
```
  </div>
  <div class="basis-30/100">
  <p>輸入：</p>

```plaintext {*}{lines:false, class:'!children:text-1.1rem no-ligatures'}
5 13 4 9
```

<br>

  </div>
</div>

---
title: Array 範例2.2(1)
---

Array 範例2.2

<div class="flex flex-row" style="width:100%;">
  <div class="basis-70/100" style="padding: 0px 50px 0px 10px; ">

```c{*}{lines:true, class:'!children:text-1.05rem no-ligatures'}
#include <stdio.h>
int main(){
    int arr[4];
    for (int i=0; i<4; i++){
        scanf("%d", &arr[i]);
    }
    
    int sum = 0;
    for (int i=0; i<4; i++){
        sum += arr[i];
    }

    printf("sum = %d\n", sum);
    printf("avg = %.2lf\n", (double)sum/4);
    return 0;
}
```
  </div>
  <div class="basis-30/100">
  <p>輸入：</p>

```plaintext {*}{lines:false, class:'!children:text-1.1rem no-ligatures'}
5 13 4 9
```

<br>

<p>輸出：</p>
```plaintext {*}{lines:false, class:'!children:text-1.1rem no-ligatures'}
sum = 31
avg = 7.75
```
  </div>
</div>

---
title: Array 範例3(0)
transition: fade
---

Array 範例3

<div class="flex flex-row" style="width:100%;">
  <div class="basis-70/100" style="padding: 0px 50px 0px 10px; ">

```c{*}{lines:true, class:'!children:text-1.05rem no-ligatures'}
#include <stdio.h>
int main(){
    int arr[4];
    for (int i=0; i<4; i++){
        scanf("%d", &arr[i]);
    }
    
    for (int i=0; i<4; i++){
        arr[i]+=3;
    }

    for (int i=0; i<4; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
```
  </div>
  <div class="basis-30/100">
  <p>輸入：</p>

```plaintext {*}{lines:false, class:'!children:text-1.1rem no-ligatures'}
5 13 4 9
```

<br>

  </div>
</div>

---
title: Array 範例3(1)
---

Array 範例3

<div class="flex flex-row" style="width:100%;">
  <div class="basis-70/100" style="padding: 0px 50px 0px 10px; ">

```c{*}{lines:true, class:'!children:text-1.05rem no-ligatures'}
#include <stdio.h>
int main(){
    int arr[4];
    for (int i=0; i<4; i++){
        scanf("%d", &arr[i]);
    }
    
    for (int i=0; i<4; i++){
        arr[i]+=3;
    }

    for (int i=0; i<4; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
```
  </div>
  <div class="basis-30/100">
  <p>輸入：</p>

```plaintext {*}{lines:false, class:'!children:text-1.1rem no-ligatures'}
5 13 4 9
```

<br>

<p>輸出：</p>
```plaintext {*}{lines:false, class:'!children:text-1.1rem no-ligatures'}
8 16 7 12
```
  </div>
</div>

---
layout: center
---

# 字串

---
title: 字串是什麼？
layout: center
class: text-center
---

<div class="grid grid-cols-1 gap-6">
    
<h2>字串是什麼？</h2>

<div v-click> 

其實字串就是一種字元陣列

</div>

</div>

---
layout: center
title: 字串是由字元組成
---

電腦本身沒有「字串」，

**字串** 是由一個一個 **字元(char)** 拼成的概念

---

### 字串的宣告


<div style="padding-top: 30px">
```c{*}{lines:false, class:'!children:text-1.8rem no-ligatures'}
char s[] = {'a', 'p', 'p', 'l', 'e', '\0'};
```

`\0` 是結束字元，代表字串結尾。

<div style="padding-top: 30px"></div>

```c{*}{lines:false, class:'!children:text-1.8rem no-ligatures'}
char s[] = "apple";
```

與上面相同效果

</div>

---
title: 字串範例1(0)
transition: fade
---

字串範例1：

<div class="flex flex-row" style="width:100%;">
    <div class="basis-76/100" style="padding: 0px 50px 0px 10px; ">
```c{*}{lines:true, class:'!children:text-1.2rem no-ligatures'}
#include <stdio.h>
int main(){
    char s1[] = "Hello, World";
    char s2[] = {'H', 'E', 'L', 'L', 'O', '\0'};

    printf("%c %c\n", s1[4], s2[1]);
    printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;
}
```


</div>
</div>

---
title: 字串範例1(1)
---

字串範例1：

<div class="flex flex-row" style="width:100%;">
<div class="basis-76/100" style="padding: 0px 50px 0px 10px; ">
```c{*}{lines:true, class:'!children:text-1.2rem no-ligatures'}
#include <stdio.h>
int main(){
    char s1[] = "Hello, World";
    char s2[] = {'H', 'E', 'L', 'L', 'O', '\0'};

    printf("%c %c\n", s1[4], s2[1]);
    printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;
}
```

</div>
<div class="basis-24/100">
<p>輸出：</p>

```plaintext{*}{class:'!children:text-1.2rem no-ligatures'}
o E
Hello, World
HELLO
```

</div>
</div>

---
title: 字串範例2(1)
transition: fade
---

字串範例2：

<div class="flex flex-row" style="width:100%;">
    <div class="basis-60/100" style="padding: 0px 50px 0px 10px; ">
```c{*}{lines:true, class:'!children:text-1.2rem no-ligatures'}
#include <stdio.h>
int main(){
    char myStr[20];
    scanf("%s", myStr);
    printf("Hi, %s\n", myStr);
    return 0;
}
```

</div>
    <div class="basis-40/100">
    <p>輸入：</p>
```plaintext{*}{class:'!children:text-1.2rem no-ligatures'}
C_String
```
<div style="visibility: hidden">
    <p>輸出：</p>
```plaintext{*}{class:'!children:text-1.2rem no-ligatures'}
Hi, C_String
```
</div>
</div>
</div>

<v-click at="1">
<div class="chart3" style="margin-inline: auto; padding-top:35px; font-size: 21px">
    <style>
        .chart3 table, 
        .chart3 td, 
        .chart3 tr,
        .chart3 th {
          border: 1px solid #d3d3d390!important;
          border-collapse: collapse;
        }
    </style>
    <table><tbody>
     <tr>
            <th>index</th>
            <th>0</th><th>1</th><th>2</th><th>3</th><th>4</th><th>5</th><th>6</th><th>7</th><th>8</th><th>9</th><th>10</th><th>...</th><th>19</th>
        </tr>
        <tr style="color: orange;">
            <td >內容</td>
            <td>'C'</td><td>'_'</td><td>'S'</td><td>'t'</td><td>'r'</td><td>'i'</td><td>'n'</td><td>'g'</td><td>'\0'</td><td>undefined</td><td>undefined</td><td>...</td><td>undefined</td>
        </tr>
    </tbody></table>
</div>
</v-click>

---
title: 字串範例2(2)
---

字串範例2：

<div class="flex flex-row" style="width:100%;">
    <div class="basis-60/100" style="padding: 0px 50px 0px 10px; ">
```c{*}{lines:true, class:'!children:text-1.2rem no-ligatures'}
#include <stdio.h>
int main(){
    char myStr[20];
    scanf("%s", myStr);
    printf("Hi, %s\n", myStr);
    return 0;
}
```

</div>
    <div class="basis-40/100">
    <p>輸入：</p>
```plaintext{*}{class:'!children:text-1.2rem no-ligatures'}
C_String
```
    <p>輸出：</p>
```plaintext{*}{class:'!children:text-1.2rem no-ligatures'}
Hi, C_String
```
</div>
</div>

<div class="chart3" style="margin-inline: auto; padding-top:35px; font-size: 21px">
    <style>
        .chart3 table, 
        .chart3 td, 
        .chart3 tr,
        .chart3 th {
          border: 1px solid #d3d3d390!important;
          border-collapse: collapse;
        }
    </style>
    <table><tbody>
     <tr>
            <th>index</th>
            <th>0</th><th>1</th><th>2</th><th>3</th><th>4</th><th>5</th><th>6</th><th>7</th><th>8</th><th>9</th><th>10</th><th>...</th><th>19</th>
        </tr>
        <tr style="color: orange;">
            <td >內容</td>
            <td>'C'</td><td>'_'</td><td>'S'</td><td>'t'</td><td>'r'</td><td>'i'</td><td>'n'</td><td>'g'</td><td>'\0'</td><td>undefined</td><td>undefined</td><td>...</td><td>undefined</td>
        </tr>
    </tbody></table>
</div>

---
title: 字串長度
---

### 字串的長度

<div style="background-color:rgb(71, 69, 99); padding: 10px; border-radius: 10px; width:550px" class="absolute top-56px right-35px">

需要引入函式庫`<string.h>`
```c{*}{lines:false, class:'!children:text-1.9rem no-ligatures'}
#include <string.h>
```
</div>

使用函式`strlen()`

<div style="margin-top: 80px"></div>





<div class="flex flex-row" style="width:100%;">
<div class="basis-73/100" style="padding: 0px 50px 0px 10px; ">
```c{*}{lines:true, class:'!children:text-1.2rem no-ligatures'}
#include <stdio.h>
#include <string.h>

int main(){
    char myStr[20];
    scanf("%s", myStr);
    printf("length: %d\n", strlen(myStr));
    return 0;
}
```

</div>
<div class="basis-27/100">
<p>輸入：</p>

```plaintext{*}{class:'!children:text-1.2rem no-ligatures'}
Hello
```

<p>輸出：</p>

```plaintext{*}{class:'!children:text-1.2rem no-ligatures'}
length: 5
```

</div>
</div>


---
title: 補充：其它字串相關函式
layout: center
---

<div style="width: 400px">

補充：其它字串相關函式


```c{*}{lines:false, class:'!children:text-1.1rem no-ligatures'}
// 使用以下函式皆需引入此標頭檔
#include <string.h>
```

<br>

```c{*}{lines:false, class:'!children:text-1.1rem no-ligatures'}
// 將一字串之內容複製到另一字串
strcpy(destination, source);

// 比較字串之字典序
strcmp(s1, s2)

// 將s2的內容加到s1之後
strcat(s1, s2);
```
</div>

<a href="http://tw.gitbook.net/c_standard_library/string_h.html">string.h</a>

---
title: 數字和練習
---

### 自行練習：數字和

輸入一個大數字，將各個數字加總後輸出總和。

<div class="flex flex-row" style="width:100%; margin: auto">
<div class="basis-40/100" style="margin-right: 20px">

範例輸入：

```plaintext{*}{class:'!children:text-1.8rem no-ligatures'}
14567
```


範例輸出:

```plaintext{*}{class:'!children:text-1.8rem no-ligatures'}
23
```

<div style="margin-top: 30px">

1 + 4 + 5 + 6 + 7 = 23

</div>
</div>
<div class="basis-60/100" style="margin-left: 30px">
<v-click at="1">
<div class="rounded-lg" style="padding:5px 5px 5px 15px; background-color:rgb(93, 63, 63); display: flex; width: fit-content; margin: 5px">

字元(char)轉整數(int)的方法：<br>
`k - '0'`
<span style="color:rgb(190, 190, 190);">&nbsp;&nbsp;(k = '0' ~ '9')</span>

</div>


$\text{int 範圍為 }-2^{31} \sim 2^{31} - 1$

<span style="color: rgb(190, 190, 190);">(-2147483648 ~ 2147483647)</span>
</v-click>

<div style="margin-top: 30px">
</div>

<v-click at="2">

<span style="font-size: 1.6rem">
提示：用字串輸入後每個字元轉成整數
</span>


</v-click>

</div>
</div>


---
title: 二維陣列
---

### 二維陣列

<br>
```c{*}{lines:false, class:'!children:text-1.5rem no-ligatures'}
int arr[3][4]; // 3x4 2d array. (3 rows, 4 columns)
```

<Arrow x1="134" y1="194" x2="183" y2="163" color="#3ce489"/>
<span class="absolute left-123px top-208px transform -translate-x-1/2 -translate-y-1/2" font-size="1.75rem" style="color: #3ce489">row</span>
<Arrow x1="130" y1="225" x2="174" y2="320" color="#3ce489"/>
<span class="absolute left-98px top-394.5px transform -translate-x-1/2 -translate-y-1/2" font-size="1.3rem" style="color: white; background-color:#3ce489; border-radius: 8px; padding: 4px 6px 2.2px 6px;">3 rows</span>

<Arrow x1="220" y1="193" x2="228" y2="164" color="#e4bb4f"/>
<span class="absolute left-225px top-208px transform -translate-x-1/2 -translate-y-1/2" font-size="1.75rem" style="color: #e4bb4f">column</span>
<Arrow x1="200" y1="225" x2="237" y2="287" color="#e4bb4f"/>
<span class="absolute left-481px top-243px transform -translate-x-1/2 -translate-y-1/2" font-size="1.3rem" style="color: white; background-color:#e4bb4f; border-radius: 8px; padding: 4.1px 6px 2px 6px;">4 columns</span>

<svg width="68" height="149" class="absolute left-159px top-320px">
  <rect width="100%" height="100%" style="fill:transparent; stroke:#3ce489; stroke-width:5;"/>
</svg>
<svg width="486" height="31" class="absolute left-238px top-277px">
  <rect width="100%" height="100%" style="fill:transparent; stroke:#e4bb4f; stroke-width:5;"/>
</svg>
<img src="https://imgur.com/N9kpxUz.png" class="object-contain h-60 rounded-lg" style="margin-top:82px; margin-left:80px;"></img>


---
title: 二維陣列宣告舉例
---

### 二維陣列

<div style="margin-top: 18px"></div>

```c{*}{lines:false, class:'!children:text-1.5rem no-ligatures'}
int mtx[2][3] = { {1, 4, 2}, {3, 6, 8} };
```

<div class="rounded-lg" style="padding:17px; background-color: #e9fef2; display: flex; width: fit-content; margin-top: 10px; margin-left: auto; margin-right: auto">
<table style="width: 650px; border-collapse: collapse; text-align: center;  ">
  <tbody>
    <tr style="border: none;">
        <td style="border: 1.5px solid black; padding: 5px; background-color: #fae5cf; color: black; font-size: 22px;"></td>
        <td style="border: 1.5px solid black; padding: 5px; background-color: #fae5cf; color: black; font-size: 22px;">COLUMN 0</td>
        <td style="border: 1.5px solid black; padding: 5px; background-color: #fae5cf; color: black; font-size: 22px;">COLUMN 1</td>
        <td style="border: 1.5px solid black; padding: 5px; background-color: #fae5cf; color: black; font-size: 22px;">COLUMN 2</td>
    </tr>
    <tr style="border: none;">
      <td style="border: 1.5px solid black; padding: 5px; background-color: #dbead5; color: black; font-size: 22px;">ROW 0</td>
        <td style="border: 1.5px solid black; padding: 5px; background-color: #dbead5; color: black; font-size: 22px;">1</td>
        <td style="border: 1.5px solid black; padding: 5px; background-color: #dbead5; color: black; font-size: 22px;">4</td>
        <td style="border: 1.5px solid black; padding: 5px; background-color: #dbead5; color: black; font-size: 22px;">2</td>
    </tr>
    <tr style="border: none;">
      <td style="border: 1.5px solid black; padding: 5px; background-color: #d1e2f2; color: black; font-size: 22px;">ROW 1</td>
        <td style="border: 1.5px solid black; padding: 5px; background-color: #d1e2f2; color: black; font-size: 22px;">3</td>
        <td style="border: 1.5px solid black; padding: 5px; background-color: #d1e2f2; color: black; font-size: 22px;">6</td>
        <td style="border: 1.5px solid black; padding: 5px; background-color: #d1e2f2; color: black; font-size: 22px;">8</td>
    </tr>
  </tbody>
</table>
</div>
<div style="background-color: #fff8ef; padding: 5px 20px 10px 60px; margin-top: 15px; margin-left: 0px; border-radius: 5px; width: fit-content; margin-left: auto; margin-right: auto">
<span font-size="1.75rem" style="color: red; margin-left: -50px">在記憶體中的排列方式：</span>
<table style="width: 650px; border-collapse: collapse; text-align: center;  ">
  <tbody>
    <tr style="border: none;">
        <td style="border: 0px; padding: 0px 0px; background-color: #dbead500; color: black; font-size: 20px;">mtx[0][0]</td>
        <td style="border: 0px; padding: 0px 0px; background-color: #dbead500; color: black; font-size: 20px;">mtx[0][1]</td>
        <td style="border: 0px; padding: 0px 0px; background-color: #dbead500; color: black; font-size: 20px;">mtx[0][2]</td>
        <td style="border: 0px; padding: 0px 0px; background-color: #d1e2f200; color: black; font-size: 20px;">mtx[1][0]</td>
        <td style="border: 0px; padding: 0px 0px; background-color: #d1e2f200; color: black; font-size: 20px;">mtx[1][1]</td>
        <td style="border: 0px; padding: 0px 0px; background-color: #d1e2f200; color: black; font-size: 20px;">mtx[1][2]</td>
    </tr>
  </tbody>
</table>
<table style="width: 650px; border-collapse: collapse; text-align: center;  ">
  <tbody>
    <tr style="border: none;">
        <td style="border: 1px solid black; padding: 10px; background-color: #dbead5; color: black; font-size: 24px;">1</td>
        <td style="border: 1px solid black; padding: 10px; background-color: #dbead5; color: black; font-size: 24px;">4</td>
        <td style="border: 1px solid black; padding: 10px; background-color: #dbead5; color: black; font-size: 24px;">2</td>
        <td style="border: 1px solid black; padding: 10px; background-color: #d1e2f2; color: black; font-size: 24px;">3</td>
        <td style="border: 1px solid black; padding: 10px; background-color: #d1e2f2; color: black; font-size: 24px;">6</td>
        <td style="border: 1px solid black; padding: 10px; background-color: #d1e2f2; color: black; font-size: 24px;">8</td>
    </tr>
  </tbody>
</table>
</div>

<v-click>

<Arrow x1="355" y1="254" x2="125" y2="215" color="#ff7771"/>
<span class="absolute left-25px top-184px" style="font-size:1.4rem; color: #ff7771">mtx\[0\]\[0\]=1</span>

</v-click>

<v-click>

<Arrow x1="745" y1="254" x2="853" y2="232" color="#ff7771"/>
<span class="absolute left-855px top-216px" style="font-size:1.4rem; color: #ff7771">mtx\[0\]\[2\]=2</span>

</v-click>

<!--
初始化\
兩個橫排\
每個橫排有三個元素
-->

---
title: 二維陣列 範例1(0)
transition: fade
---

二維陣列 範例1


<div class="flex flex-row" style="width:100%;">
<div class="basis-60/100" style="padding: 0px 10px 0px 0px;">

```c{*}{lines:true, class:'!children:text-1.2rem no-ligatures'}
#include <stdio.h>
int main(){
    int A[2][3] = { 
        {0, 1, 2}, 
        {3, 4, 5} 
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}

```

</div>
<div class="basis-40/100" style="padding: 0px 0px 0px 20px;">



</div>
</div>


---
title: 二維陣列 範例1(1)
---

二維陣列 範例1


<div class="flex flex-row" style="width:100%;">
<div class="basis-60/100" style="padding: 0px 10px 0px 0px;">

```c{*}{lines:true, class:'!children:text-1.2rem no-ligatures'}
#include <stdio.h>
int main(){
    int A[2][3] = { 
        {0, 1, 2}, 
        {3, 4, 5} 
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}

```

</div>
<div class="basis-40/100" style="padding: 0px 0px 0px 20px;">

輸出：

```plaintext{*}{lines:false, class:'!children:text-1.2rem no-ligatures'}
0 1 2
3 4 5
```

</div>
</div>

---
title: 二維陣列 範例2(0)
transition: none
---
二維陣列 範例2：印出每橫排及每直排的加總


<div class="flex flex-row" style="width:100%;">
<div class="basis-60/100" style="padding: 0px 10px 0px 0px;">

````md magic-move {at: 1, class: '!children:text-1.1rem !children:leading-26.9px no-ligatures', maxHeight: '428px'}
```c{*}{lines:true, class:'!children:text-1.1rem no-ligatures', maxHeight:'428px'}
#include <stdio.h>
int main(){
    int N, M;
    scanf("%d%d", &N, &M);
    int A[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // ...

    return 0;
}

```
```c{*}{lines:true, class:'!children:text-1.1rem no-ligatures', maxHeight:'428px'}
#include <stdio.h>
int main(){
    int N, M;
    scanf("%d%d", &N, &M);
    int A[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // 印出每橫排的加總
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = 0; j < M; j++)
            sum += arr[i][j];
        printf("row %d: %d\n", i, sum);
    }

    printf("--\n");

    // 印出每直排的加總
    for (int j = 0; j < M; j++) {
        int sum = 0;
        for (int i = 0; i < N; i++)
            sum += arr[i][j];
        printf("col %d: %d\n", j, sum);
    }

    return 0;
}

```
````

</div>
<div class="basis-40/100" style="padding: 0px 0px 0px 20px;">

輸入：

```plaintext{*}{lines:false, class:'!children:text-1.2rem no-ligatures'}
2 3
0 1 2
3 4 5
```

輸出：

```plaintext{*}{lines:false, class:'!children:text-1.2rem no-ligatures'}
row 0: 3
row 1: 12
--
col 0: 3
col 1: 5
col 2: 7
```

</div>
</div>

---
title: 二維陣列 範例2
---

二維陣列 範例2：印出每橫排及每直排的加總


<div class="flex flex-row" style="width:100%;">
<div class="basis-60/100" style="padding: 0px 10px 0px 0px;">

```c{*|12-18|20|22-28}{lines:true, class:'!children:text-1.1rem no-ligatures', maxHeight:'428px'}
#include <stdio.h>
int main(){
    int N, M;
    scanf("%d%d", &N, &M);
    int arr[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // 印出每橫排的加總
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = 0; j < M; j++)
            sum += arr[i][j];
        printf("row %d: %d\n", i, sum);
    }

    printf("--\n");

    // 印出每直排的加總
    for (int j = 0; j < M; j++) {
        int sum = 0;
        for (int i = 0; i < N; i++)
            sum += arr[i][j];
        printf("col %d: %d\n", j, sum);
    }

    return 0;
}

```


</div>
<div class="basis-40/100" style="padding: 0px 0px 0px 20px;">

輸入：

```plaintext{*}{lines:false, class:'!children:text-1.2rem no-ligatures'}
2 3
0 1 2
3 4 5
```

輸出：

```plaintext{*}{lines:false, class:'!children:text-1.2rem no-ligatures'}
row 0: 3
row 1: 12
--
col 0: 3
col 1: 5
col 2: 7
```

</div>
</div>

---
title: 二維陣列 練習(0)
---

二維陣列 練習

給定由 `0` 與 `1` 組成的 $N\times N$ 矩陣，\
判斷`1`有幾條長度為 $N$ 的連線，並輸出連線的數量。





<div class="flex flex-row" style="width:100%;">
<div class="basis-45/100" style="padding: 0px 10px 0px 0px;">

輸入共有 $N+1$ 行\
第一行給定 $N$\
第 $2$ 行到第 $N+1$ 行\
給定由 `0` 與 `1` 組成的 $N\times N$ 矩陣


</div>
<div class="basis-30/100" style="padding: 0px 10px 0px 20px;">

範例輸入：
```plaintext{*}{lines:false, class:'!children:text-1.6rem no-ligatures'}
5
1 0 1 0 1
1 1 1 1 1
1 0 1 0 0
1 1 0 1 1
1 0 0 0 1
```

</div>
<div class="basis-25/100" style="padding: 0px 0px 0px 20px;">

範例輸出：
```plaintext{*}{lines:false, class:'!children:text-1.6rem no-ligatures'}
4
```

</div>
</div>

---
title: 二維陣列 練習(1)
---

```c{*|3-10|12|14-23|25-34|36-51|53|*}{lines:true, class:'!children:text-1.1rem no-ligatures', maxHeight:'100%'}
#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int A[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    int count = 0;

    // 判斷橫向
    for (int row=0; row<N; row++) {
        int len = 0;
        for (int col=0; col<N; col++) {
            if (A[row][col] == 1)
                len++;
        }
        if (len == N)
            count++;
    }

    // 判斷直向
    for (int col=0; col<N; col++) {
        int len = 0;
        for (int row=0; row<N; row++) {
            if (A[row][col] == 1)
                len++;
        }
        if (len == N)
            count++;
    }

    // 判斷對角
    int len = 0;
    for (int i=0; i<N; i++) {
        if (A[i][i] == 1)
            len++;
    }
    if (len == N)
        count++;

    len = 0;
    for (int i=0; i<N; i++) {
        if (A[i][N-1-i] == 1)
            len++;
    }
    if (len == N)
        count++;
    
    printf("%d\n", count);

    return 0;
}
```

---
title: 函式
layout: cover
class: text-center
---

# 6. 函式
## Functions 

<div class="fixed bottom-0 left-1/2 transform -translate-x-1/2 mb-4 p-4 rounded" style="color: slategray;">
  作者：劉宸均
</div>

---
title: 函式介紹
layout: center
---
### 為什麼需要函式？

<br>

- 減少撰寫重覆的程式碼

- 將程式碼以有意義的方式組織起來

- 在相同的流程下，可藉由參數調整程式的行為

- 在呼叫函式不變的狀況下，可以直接修改程式。

---
title: 函式的宣告與定義
---

### 函式的宣告與定義


<span style="font-size: 35px;">回傳值型態 函式名稱 (參數)</span>

<div style="margin-bottom: 20px;"></div>

<div class="flex flex-row" style="width:100%; background-color: #4b4b33; padding: 5px; border-radius: 10px;">
<div class="basis-38/100 content-center" style="padding: 0px 0px 0px 20px;">

有回傳值：

回傳一個int的型態

</div>
<div class="basis-62/100" style="padding: 0px 5px 0px 20px;">

```c{*}{lines:false, class:'!children:text-1.7rem no-ligatures'}
int add(int a, int b){
    return a + b;
}
```

</div>
</div>


<div style="margin-bottom: 13px;"></div>

<div class="flex flex-row" style="width:100%; background-color: #4b4b33; padding: 5px; border-radius: 10px;">
<div class="basis-38/100 content-center" style="padding: 0px 0px 0px 20px;">

無回傳值

</div>
<div class="basis-62/100" style="padding: 0px 5px 0px 20px;">
```c{*}{lines:false, class:'!children:text-1.7rem no-ligatures'}
void printSquare(int x){
    printf("%d\n", x*x);
    return; // return 可加可不加
}
```
</div>
</div>

---
title: 函式宣告範例
---

<div style="margin-bottom: 5px;"></div>

<div class="flex flex-row" style="width:108%; margin-left: -33px;">
<div class="basis-45/100" style="padding: 0px 0px 0px 0px;">

<div style="font-size: 27px; margin-bottom: 10px;margin-left: 3px;">可以直接將函式加在主程式前面</div>

```c{*|2-4}{lines:true, class:'!children:text-1.35rem no-ligatures'}
#include <stdio.h>
int add(int a, int b){
    return a + b;
}

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", add(x, y));
    return 0;
}
```

</div>
<div class="basis-55/100" style="padding: 0px 0px 0px 20px;">

<div style="font-size: 27px; margin-bottom: 10px; margin-left: 3px; width: 110%;">將函式在主程式前先宣告，在尾端定義</div>

```c{*|2,11-13}{at: 1, lines:true, class:'!children:text-1.35rem no-ligatures'}
#include <stdio.h>
int add(int, int);

int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", add(x, y));
    return 0;
}

int add(int a, int b){
    return a + b;
}
```

</div>
</div>

<!--
宣告\
完整在做什麼寫出來
-->

---
title: 函式範例1
---

函式範例

<div class="flex flex-row">
<div class="basis-50/100" style="padding: 0px 10px 0px 0px;">


<div style="margin-top:-8px;"></div>
```c{*|2-4,14|5-8,15|16,9-12|*}{lines:true, class:'!children:text-0.9rem no-ligatures'}
#include <stdio.h>
void A(){
    printf("You called A()\n");
}
int B(){
    printf("You called B()\n");
    return 3;
}
float C(){
    printf("You called C()\n");
    return 5.6;
}
int main(){
    A();
    printf("%d\n", B());
    printf("%f\n", C());
    return 0;
}
```

</div>
<div class="basis-50/100" style="padding: 0px 0px 0px 10px;">

<div style="margin-top:-20px;"></div>

輸出：

````md magic-move {at: 1, class: '!children:text-1.3rem !children:leading-1.7rem no-ligatures'}
```plaintext
‎
```
```plaintext
You called A()
```
```plaintext{2-3}
You called A()
You called B()
3
```
```plaintext{4-5}
You called A()
You called B()
3
You called C()
5.6
```
```plaintext
You called A()
You called B()
3
You called C()
5.6
```
````

</div>
</div>

---
title: 變數範圍 Variable scope
layout: center
text-align: center
---

## 變數範圍

<div style="text-align: center; width: 100%; font-size: 30px;">Variable scope</div>

---
title: 全域變數與區域變數
layout: center
---

### 全域變數與區域變數

---
title: 區域變數(0)
transition: fade
---

### 區域變數

<div style="margin-top: 10px"></div>
```c{*}{lines:false, class:'!children:text-1.7rem no-ligatures'}
#include <stdio.h>
void fun(){
    int x = 10;
    printf("%d\n", x);
}
int main(){
    fun();
    printf("%d\n", x);
    return 0;
}
```

---
title: 區域變數(1)
---

### 區域變數

<div style="margin-top: 10px"></div>
```c{*}{lines:false, class:'!children:text-1.7rem no-ligatures'}
#include <stdio.h>
void fun(){
    int x = 10;
    printf("%d\n", x);
}
int main(){
    fun();
    printf("%d\n", x); // error (x is not defined)
    return 0;
}
```

---
title: 全域變數
---

### 全域變數

<div style="margin-top: 10px"></div>
```c{*}{lines:false, class:'!children:text-1.6rem no-ligatures'}
#include <stdio.h>
int k = 5;
void fun(){
    printf("%d\n", ++k);
}
int main(){
    int x = 10;
    fun();
    printf("%d %d\n", x, k);
    return 0;
}
```


---
title: 全域變數與區域變數
---

### 全域變數與區域變數

<div style="margin-bottom: 20px;"></div>

<div class="flex flex-row" style="width:108%; margin-left: -33px;">
<div class="basis-33/100" style="padding: 0px 0px 0px 0px;">

- **Global variable**: 

可以在任何地方存取

<div style="margin-bottom: 10px;"></div>

- **Local variable**: 

只能在函式內存取

<div style="margin-right: 10px; margin-top: 20px">

<span style="font-size: 25px;">輸出：</span>
````md magic-move {at: 1, class: '!children:text-1.3rem !children:leading-1.7rem no-ligatures'}
```plaintext
‎
```
```plaintext{*}{lines:false, class:'!children:text-1.4rem no-ligatures'}
globalVar = 10
```
```plaintext{*}{lines:false, class:'!children:text-1.4rem no-ligatures'}
globalVar = 10
localVar = 30
```
```plaintext{*}{lines:false, class:'!children:text-1.4rem no-ligatures'}
globalVar = 10
localVar = 30
globalVar = 11
```
```plaintext{*}{lines:false, class:'!children:text-1.4rem no-ligatures'}
globalVar = 10
localVar = 30
globalVar = 11
localVar = 20
```
````
</div>

</div>

<div class="basis-67/100">

<div style="margin-bottom: -19px;"></div>

```c{*}{lines:true, class:'!children:text-1.13rem no-ligatures'}
#include <stdio.h>
int globalVar = 10;
void func();
int main(){
    int localVar = 20;
    func();
    printf("globalVar = %d\n", globalVar++);
    printf("localVar = %d\n", localVar);
    return 0;
}
void func(){
    int localVar = 30;
    printf("globalVar = %d\n", globalVar++);
    printf("localVar = %d\n", localVar);
    return;
}
```

</div>
</div>

<!--
最外層\
全域變數：\
沒有包在任何函式裡面
-->

---
title: 全域變數、區域變數範例
---

<div style="margin-bottom: -30px;"></div>

全域變數、區域變數範例

<div class="flex flex-row">
<div class="basis-50/100" style="padding: 0px 10px 0px 0px;">


<div style="margin-top:-8px;"></div>
```c{*|2|14-21|15|16,3-8|16,4|16,5|16,6|16,7|17|18,9-13|18,10|18,11|18,12|19|20|*}{lines:true, class:'!children:text-0.9rem no-ligatures'}
#include <stdio.h>
int s = 1;
void fun1(){
    int s = 2;
    s++;
    printf("in fun1(): s = %d\n", s);
    return;
}
void fun2(){
    printf("in fun2(): s = %d\n", s++);
    printf("in fun2(): s = %d\n", s);
    return;
}
int main(){
    printf("s = %d\n", s);
    fun1();
    printf("s = %d\n", s);
    fun2();
    printf("s = %d\n", s);
    return 0;
}
```

</div>
<div class="basis-50/100" style="padding: 0px 0px 0px 10px;">

<div style="margin-top:-20px;"></div>

輸出：

````md magic-move {at: 3, class: '!children:text-1.3rem !children:leading-1.7rem no-ligatures'}
```plaintext
‎
```
```plaintext
s = 1
```
```plaintext
s = 1
```
```plaintext
s = 1
```
```plaintext
s = 1
```
```plaintext{2}
s = 1
in fun1(): s = 3
```
```plaintext{,}
s = 1
in fun1(): s = 3
```
```plaintext{3}
s = 1
in fun1(): s = 3
s = 1
```
```plaintext{,}
s = 1
in fun1(): s = 3
s = 1
```
```plaintext{4}
s = 1
in fun1(): s = 3
s = 1
in fun2(): s = 1
```
```plaintext{5}
s = 1
in fun1(): s = 3
s = 1
in fun2(): s = 1
in fun2(): s = 2
```
```plaintext{,}
s = 1
in fun1(): s = 3
s = 1
in fun2(): s = 1
in fun2(): s = 2
```
```plaintext{6}
s = 1
in fun1(): s = 3
s = 1
in fun2(): s = 1
in fun2(): s = 2
s = 2
```
```plaintext{,}
s = 1
in fun1(): s = 3
s = 1
in fun2(): s = 1
in fun2(): s = 2
s = 2
```
```plaintext
s = 1
in fun1(): s = 3
s = 1
in fun2(): s = 1
in fun2(): s = 2
s = 2
```
````

</div>
</div>


---
title: 用函式傳遞變數
---

用函式傳遞變數（找最大公因數）

<div class="flex flex-row">
<div class="basis-50/100" style="padding: 0px 10px 0px 0px;">

```c{*}{lines:true, class:'!children:text-1.2rem no-ligatures'}
#include <stdio.h>
// 輸入整數a, b 回傳最大公因數
int gcd(int a, int b){ 
    while (b != 0){
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main(){
    int a = 30, b = 18;
    printf("%d\n", gcd(a, b));
    return 0;
}
```

</div>
<div class="basis-50/100" style="padding: 0px 0px 0px 30px;margin-top: 0px;">

輸出：

```plaintext{*}{lines:false, class:'!children:text-1.2rem no-ligatures'}
6
```

</div>
</div>

---
title: 用函式傳遞變數
transition: fade
---

用函式傳遞變數

<div class="flex flex-row">
<div class="basis-50/100" style="padding: 0px 10px 0px 0px;">

```c{*}{lines:true, class:'!children:text-1.1rem no-ligatures'}
#include <stdio.h>
int gcd(int a, int b){
    while (b != 0){
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main(){
    int a = 30, b = 18;
    printf("%d\n", gcd(a, b));
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
```

</div>
<div class="basis-50/100" style="padding: 0px 0px 0px 30px;margin-top: 0px;">


</div>
</div>

---
title: 用函式傳遞變數
---

用函式傳遞變數

<div class="flex flex-row">
<div class="basis-50/100" style="padding: 0px 10px 0px 0px;">

```c{*}{lines:true, class:'!children:text-1.1rem no-ligatures'}
#include <stdio.h>
int gcd(int a, int b){
    while (b != 0){
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int main(){
    int a = 30, b = 18;
    printf("%d\n", gcd(a, b));
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
```

</div>
<div class="basis-50/100" style="padding: 0px 0px 0px 30px;margin-top: 0px;">

輸出：

```plaintext{*}{lines:false, class:'!children:text-1.2rem no-ligatures'}
6
a=30, b=18
```

</div>
</div>

---
title: 用函式傳遞變數
---

用函式傳遞變數

<div class="flex flex-row">
<div class="basis-50/100" style="padding: 0px 10px 0px 0px;">

```c{*}{lines:true, class:'!children:text-1.15rem no-ligatures'}
#include <stdio.h>
int a = 10, b = 6;
int myfun(int b){
    int c = a * a + b;
    a = c - 2;
    printf("a=%d, b=%d, c=%d\n", a, b, c);
    return c;
}
int main(){
    int a = 3;
    b = 8;
    printf("%d\n", myfun(a));
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
```

</div>
<div class="basis-50/100" style="padding: 0px 0px 0px 30px;margin-top: 0px;">

輸出：

````md magic-move {at: 1, class: '!children:text-1.3rem !children:leading-1.7rem no-ligatures'}
```plaintext
‎
```
```plaintext{*}{lines:false, class:'!children:text-1.2rem no-ligatures'}
a=101, b=3, c=103
```
```plaintext{*}{lines:false, class:'!children:text-1.2rem no-ligatures'}
a=101, b=3, c=103
103
```
```plaintext{*}{lines:false, class:'!children:text-1.2rem no-ligatures'}
a=101, b=3, c=103
103
a=3, b=8
```
````

</div>
</div>

---
title: 指標
layout: cover
class: text-center
---

# 7. 指標
## Pointers 

<div class="fixed bottom-0 left-1/2 transform -translate-x-1/2 mb-4 p-4 rounded" style="color: slategray;">
  作者：劉宸均
</div>

---
title: 一般變數
---
<div style="margin: auto; width: 100%; padding-left: 100px; padding-right: 100px">


<span style="font-size: 2.5rem">一般變數</span>
<div class="flex flex-row" style="width:100%; padding-left: 40px">
<div class="basis-60/100" style="padding: 0px 10px 0px 0px;">

<div style="width: 260px; padding-left:">
```c{*}{lines:false, class:'!children:text-2.1rem no-ligatures'}
<type> name;
```
</div>
</div>
<div class="basis-40/100" style="padding: 0px 0px 0px 20px;">
<div style="width: 140px;">
```c{*}{lines:false, class:'!children:text-2.1rem no-ligatures'}
int x;
```
</div>
</div>
</div>

<div style="margin-top: 40px" ></div>

</div>

<v-click>
<div style="margin-top: 10px"></div>

<img src="https://i.imgur.com/2TP9GP1.png"></img>
<!-- <img src="https://i.imgur.com/lhWwySA.png" style="border-radius: 7px"/> -->

每個變數都有自己的記憶體位址。
</v-click>

<v-click at="2">
<svg height="140" width="500" class="absolute left-28 top-76">
  <ellipse rx="40" ry="13" cx="220" cy="80"
  style="fill:transparent;stroke:#dd5c5c;stroke-width:2" />
</svg>
<Arrow x1="347" y1="341" x2="340" y2="375" color="#dd5c5c"/>
<span class="absolute left-88 top-87.5" style="color: #dd5c5c; font-size:1.4rem">&x</span>
</v-click>

<!-- 在講指標之前我們先來看看一般的變數是怎麼樣\
路牌\
記憶體位置：指標 -->

---
title: 印指標
---

<div style="margin-top: 20px"></div>

### 印出指標變數位址

<div style="margin-top: 60px"></div>
<div class="flex flex-row" style="width:100%;">
<div class="basis-55/100" style="padding: 0px 10px 0px 0px;">

```c{*}{lines:true, class:'!children:text-1.7rem no-ligatures', maxHeight:'428px'}
#include <stdio.h>
int main(){
    int x;
    printf("%p", &x);
    
    return 0;
}
```


</div>
<div class="basis-45/100" style="padding: 0px 0px 0px 30px;">

`%p` <span style="line-height: 1.7;">是printf用來印出指標變數位址的格式指令字(format specifier)</span>

</div>
</div>


---

### 指標變數

<div style="margin-left: 30px">

<span style="font-size: 2.3rem">一種特殊的變數，它存儲的是一個記憶體位址</span>

</div>

<div style="margin: auto; width: 100%; padding-left: 100px; padding-right: 100px; margin-top: 30px">

<span style="font-size: 2.5rem">指標變數</span>
<div class="flex flex-row" style="width:100%; padding-left: 40px">
<div class="basis-60/100" style="padding: 0px 10px 0px 0px;">

<div style="width: 280px; padding-left:">
```c{*}{lines:false, class:'!children:text-2.1rem no-ligatures'}
<type>* name;
```
```c{*}{lines:false, class:'!children:text-2.1rem no-ligatures'}
<type> *name;
```
</div>
</div>
<div class="basis-40/100" style="padding: 0px 0px 0px 20px;">
<div style="width: 160px;">
```c{*}{lines:false, class:'!children:text-2.1rem no-ligatures'}
int* p;
```
```c{*}{lines:false, class:'!children:text-2.1rem no-ligatures'}
int *p;
```
</div>
</div>
</div>

<v-click>
<div style="margin-top: 15px" ></div>
<span style="font-size: 2.5rem">一般變數</span>
<div class="flex flex-row" style="width:100%; padding-left: 40px">
<div class="basis-60/100" style="padding: 0px 10px 0px 0px;">

<div style="width: 260px; padding-left:">
```c{*}{lines:false, class:'!children:text-2.1rem no-ligatures'}
<type> name;
```
</div>
</div>
<div class="basis-40/100" style="padding: 0px 0px 0px 20px;">
<div style="width: 140px;">
```c{*}{lines:false, class:'!children:text-2.1rem no-ligatures'}
int x;
```
</div>
</div>
</div>
</v-click>

</div>

<!--
指標變數可以存放一個位址\
宣告方式 變數名稱\
type是什麼type：\
路牌主人/指標主人 是什麼型態\
就打什麼型態
-->

---
hide: true
---

### 何謂指標變數(hidden)

一種特殊的變數，它存儲的是一個記憶體位址

<v-click>
<div style="margin-top: 40px;">
<img src="https://i.imgur.com/lhWwySA.png" style="border-radius: 7px"/>
</div>


<div style="margin-top: 10px">
<span style="font-size:1.6rem">
每個盒子都有自己的位址。<br>
每個盒子，都放了一個值。<br>
盒子有大有小。<br>
可以給盒子命名。
</span>
</div>
</v-click>

<!--
存在記憶體裡面\
地址，在記憶體的哪裡\
變數名稱
-->

---
title: 指標說明舉例
---

### 指標

<div class="flex flex-row" style="width:100%;">
  <div class="basis-55/100">


```c{*|3|4|5|*}{at:1, lines:true, startLine: 1,class:'!children:text-1.4rem no-ligatures'}
#include <stdio.h>
int main(){
    int A = 25;
    int *ptrA; // 宣告一個int* 指標變數
    ptrA = &A; //A在記憶體中的位址
    return 0;
}
```

<div class="absolute left-568px top-125px">



</div>

<v-click at="1">
<img src="https://i.imgur.com/okoaKB3.png" class="object-contain h-42 w-50 absolute left-225px bottom-24px" style="z-index: 0;"/>
<span class="absolute left-323px bottom-129px transform -translate-x-1/2 -translate-y-1/2" font-size="1.2rem" style="color: black; z-index: 1;">25</span>
</v-click>

<v-click at="2">
<img src="https://i.imgur.com/4lTXz6t.png" class="object-contain h-42 w-50 absolute left-70px bottom-24px"/>
</v-click>
<v-click at="3">
<span class="absolute left-168px bottom-137px transform -translate-x-1/2 -translate-y-1/2" font-size="1rem" style="color: black; z-index: 1;">0x00120</span>
</v-click>
</div>


<div class="basis-45/100"  style="padding: 0px 0px 0px 0px;">

`&`: 取址運算子

<v-click at="4">
<div style="font-size: 27px!important; line-height: 5px!importnat;">
<div style="border: 0px solid #dae4ff59; padding: 10px 10px 10px 13px; margin-left: 10px; border-radius: 10px; background: #383838;">
<div style="margin-bottom: 15px;">由於指標本身也是資料的一種，因此他也具有一般資料所有的資訊：</div>
<ul>
    <li style="font-size: 27px!important; line-height: 5px!importnat; margin-bottom: 7px;">
        名稱：<span style="color: #6094ff">ptrA</span>
    </li>
    <li style="font-size: 27px!important; line-height: 5px!importnat;margin-bottom: 7px;">
        資料型態：<span style="color: #d27eff">int *</span>
    </li>
    <li style="font-size: 27px!important; line-height: 5px!importnat;margin-bottom: 7px;">
        資料內容：<span style="color: #dfdfdf">0x00120</span>
    </li>
    <li style="font-size: 27px!important; line-height: 5px!importnat;margin-bottom: 7px;">
        ptrA本身記憶體位置：<span style="color: #dfdfdf">0x00174</span>
    </li>
</ul>

</div>
</div>

</v-click>
  </div>
</div>

<!--
也是一種變數
特殊的資料型態\
空間
-->

---
title: 指標範例1(0)
transition: fade
---

<div class="flex flex-row" style="width:100%;">
<div class="basis-55/100" style="padding: 0px 40px 0px 10px;">

指標範例1

```c{*|6|7|7|*}{lines:true, class:'!children:text-1.4rem no-ligatures'}
#include <stdio.h>
int main(){
    int A = 3;
    int *ptrA = &A;

    printf("%d\n", *ptrA);
    *ptrA = 50;
    printf("%d\n", A);
}
```

<img src="https://i.imgur.com/okoaKB3.png" class="object-contain h-42 w-50 absolute left-705px bottom-274px" style="z-index: 0;"/>
<v-click hide at="3">
<span class="absolute left-803px bottom-381px transform -translate-x-1/2 -translate-y-1/2" font-size="1.2rem" style="color: black; z-index: 1;">3</span>
</v-click>
<v-click at="3">
<span class="absolute left-803px bottom-381px transform -translate-x-1/2 -translate-y-1/2" font-size="1.2rem" style="color: #dd5c5c; z-index: 1;">50</span>
</v-click>

<img src="https://i.imgur.com/4lTXz6t.png" class="object-contain h-42 w-50 absolute left-550px bottom-274px"/>
<span class="absolute left-648px bottom-387px transform -translate-x-1/2 -translate-y-1/2" font-size="1rem" style="color: black; z-index: 1;">0x00120</span>

`*` 取值運算子

</div>
<div class="basis-45/100" style="padding: 0px 0px 0px 10px;">

`*ptrA` 就是 A

<div style="margin-top: 170px"></div>

<v-click at="2">
<div style="font-size: 1.9rem; padding: 30px 0px 10px 0px">
<code>*ptrA = 50</code><br>
<div style="padding-left: 14px">
透過(*ptrA)去更動A的值。</div>
</div>
</v-click>

</div>
</div>

<!-- int* ptrA vs *ptrA -->

---
title: 指標範例1(1)
---
  
<div class="flex flex-row" style="width:100%;">
<div class="basis-55/100" style="padding: 0px 40px 0px 10px;">

指標範例1

```c{*}{lines:true, class:'!children:text-1.4rem no-ligatures'}
#include <stdio.h>
int main(){
    int A = 3;
    int *ptrA = &A;

    printf("%d\n", *ptrA);
    *ptrA = 50;
    printf("%d\n", A);
}
```

<img src="https://i.imgur.com/okoaKB3.png" class="object-contain h-42 w-50 absolute left-705px bottom-274px" style="z-index: 0;"/>
<span class="absolute left-803px bottom-381px transform -translate-x-1/2 -translate-y-1/2" font-size="1.2rem" style="color: black; z-index: 1;">3</span>

<img src="https://i.imgur.com/4lTXz6t.png" class="object-contain h-42 w-50 absolute left-550px bottom-274px"/>
<span class="absolute left-648px bottom-387px transform -translate-x-1/2 -translate-y-1/2" font-size="1rem" style="color: black; z-index: 1;">0x00120</span>

`*` 取值運算子

</div>
<div class="basis-45/100" style="padding: 0px 0px 0px 10px;">

`*ptrA` 就是 A

<div style="margin-top: 170px"></div>

<div style="font-size: 1.9rem; padding: 30px 0px 10px 0px">
<code>*ptrA = 50</code><br>
<div style="padding-left: 14px">
透過(*ptrA)去更動A的值。</div>
</div>
<div style="margin-top: -10px"></div>

輸出：

```plaintext{*}{lines:false, class:'!children:text-1.4rem no-ligatures'}
3
50
```

</div>
</div>

---
layout: center
text-align: center
title: ＆似曾相似
---


<div style="font-size: 3rem">
<code>&</code> 符號
</div>
<div style="font-size: 3rem">
是不是似曾相似呢？
</div>

---
title: scanf複習
---

<div style="margin-top: 20px"></div>

### scanf 複習

<div style="margin-top: 60px"></div>
<div style="width: 400px; margin: auto" class="flex-grow flex items-center justify-center">

</div>

<div style="width: 400px; margin: auto" class="flex-grow flex items-center justify-center">

```c{*}{lines:false, class:'!children:text-1.9rem no-ligatures'}
scanf("%d", &x);
```

</div>
<v-click>
<Arrow x1="597" y1="221" x2="624" y2="279" color="#3ce489"/>
<svg height="140" width="500" class="absolute left-90 top-32">
  <ellipse rx="24" ry="22" cx="220" cy="80"
  style="fill:transparent;stroke:#3ce489;stroke-width:2" />
</svg>
<span class="absolute left-144 top-74" style="color: #3ce489; font-size:2rem">取出x的位址</span>
</v-click>

<!-- 輸入的值放到變數x中。\
介紹一種特殊的變數用來存這種位址的 -->

---

<div class="flex-grow flex items-center justify-center">        

### 陣列的運作原理

</div>
<br>
<div class="flex-grow flex items-center justify-center">

```c{*}{lines:false, class:'!children:text-1.6rem no-ligatures'}
int arr[10];
```

</div>
<div class="flex-grow flex items-center justify-center">

`arr`是一個指標，指向陣列頭所在位址

</div>

<div class="flex flex-row" style="width:100%; font-size: 1.9rem;  margin-top: 1.5rem">
<div class="basis-53/100" style="padding: 0px 10px 0px 0px; text-align: right;">
<code>arr</code>是<code>arr[0]</code>的所在位址<br>
<code>arr+1</code>是<code>arr[1]</code>的所在位址<br>
<code>arr+2</code>是<code>arr[2]</code>的所在位址<br>
</div>
<div class="basis-47/100" style="padding: 0px 3px 0px 0px; text-align: right; ">
<code>*arr</code>就是<code>arr[0]</code><br>
<code>*(arr+1)</code>就是<code>arr[1]</code><br>
<code>*(arr+2)</code>就是<code>arr[2]</code><br>
</div>
</div>

---
title: 指摽與陣列 範例1(0)
transition: fade
---

指摽與陣列 範例1


<div class="flex flex-row" style="width:100%;">
<div class="basis-75/100" style="padding: 0px 10px 0px 0px;">

```c{*|4-5|6-7|*}{lines:true, class:'!children:text-1.2rem no-ligatures'}
#include <stdio.h>
int main(){
    int arr[5];
    for (int i=0; i<5; i++)
        scanf("%d", arr+i); // 和 &arr[i] 一樣
    for (int i=0; i<5; i++)
        printf("%d ", *(arr+i)); // 和 arr[i] 一樣
    printf("\n");
    return 0;
}
```

</div>
<div class="basis-25/100" style="padding: 0px 0px 0px 20px;">

輸入：

```plaintext{*}{lines:false, class:'!children:text-1.2rem no-ligatures'}
3 7 2 9 4
```

</div>
</div>

---
title: 指摽與陣列 範例1(1)
---

指摽與陣列 範例1


<div class="flex flex-row" style="width:100%;">
<div class="basis-75/100" style="padding: 0px 10px 0px 0px;">

```c{*}{lines:true, class:'!children:text-1.2rem no-ligatures'}
#include <stdio.h>
int main(){
    int arr[5];
    for (int i=0; i<5; i++)
        scanf("%d", arr+i); // 和 &arr[i] 一樣
    for (int i=0; i<5; i++)
        printf("%d ", *(arr+i)); // 和 arr[i] 一樣
    printf("\n");
    return 0;
}
```

</div>
<div class="basis-25/100" style="padding: 0px 0px 0px 20px;">

輸入：

```plaintext{*}{lines:false, class:'!children:text-1.2rem no-ligatures'}
3 7 2 9 4
```

<br>

輸出：

```plaintext{*}{lines:false, class:'!children:text-1.2rem no-ligatures'}
3 7 2 9 4 
```

</div>
</div>


---
title: 指摽與陣列 範例2(0)
transition: fade
---

指摽與陣列 範例2


<div class="flex flex-row" style="width:100%;">
<div class="basis-3/5" style="padding: 0px 10px 0px 0px;">

```c{*}{lines:true, class:'!children:text-1.2rem no-ligatures'}
#include <stdio.h>
int main(){
    int arr[5] = {9, 3, 1, 0, 8};
    printf("%d\n", *(arr+1));
    printf("%d\n", *arr+1); // (*arr)+1

    return 0;
}
```

</div>
<div class="basis-2/5" style="padding: 0px 0px 0px 28px;">

</div>
</div>

---
title: 指摽與陣列 範例2(1)
---

指摽與陣列 範例2


<div class="flex flex-row" style="width:100%;">
<div class="basis-3/5" style="padding: 0px 10px 0px 0px;">

```c{*}{lines:true, class:'!children:text-1.2rem no-ligatures'}
#include <stdio.h>
int main(){
    int arr[5] = {9, 3, 1, 0, 8};
    printf("%d\n", *(arr+1));
    printf("%d\n", *arr+1); // (*arr)+1

    return 0;
}
```

</div>
<div class="basis-2/5" style="padding: 0px 0px 0px 28px;">

輸出：

```plaintext{*}{lines:false, class:'!children:text-1.2rem no-ligatures'}
3
10
```

</div>
</div>

---
title: 指摽與陣列 範例3 (進階)(0)
transition: fade
hide: true
---

指摽與陣列 範例3 (進階)


<div class="flex flex-row" style="width:100%;">
<div class="basis-3/5" style="padding: 0px 10px 0px 0px;">

```c{*}{lines:true, class:'!children:text-1.1rem no-ligatures'}
#include <stdio.h>
int main(){
    int arr[5] = {9, 3, 1, 0, 8};
    int *ptr = arr;
    printf("%d\n", *ptr);
    printf("%d\n", *ptr+1);
    printf("%d\n", *ptr++);
    printf("%d\n", *ptr);
    printf("%d\n", ++*ptr);
    printf("%d\n", *++ptr);
    for (int i=0; i<5; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
```

</div>
<div class="basis-2/5" style="padding: 0px 0px 0px 28px;">

</div>
</div>

---
title: 指摽與陣列 範例3 (進階)(1)
hide: true
---

指摽與陣列 範例3 (進階)


<div class="flex flex-row" style="width:100%;">
<div class="basis-3/5" style="padding: 0px 10px 0px 0px;">

```c{*}{lines:true, class:'!children:text-1.1rem no-ligatures'}
#include <stdio.h>
int main(){
    int arr[5] = {9, 3, 1, 0, 8};
    int *ptr = arr;
    printf("%d\n", *ptr);
    printf("%d\n", *ptr+1); // (*ptr)+1
    printf("%d\n", *ptr++);
    printf("%d\n", *ptr);
    printf("%d\n", ++*ptr);
    printf("%d\n", *++ptr);
    for (int i=0; i<5; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
```

</div>
<div class="basis-2/5" style="padding: 0px 0px 0px 28px;">

輸出：

```plaintext{*}{lines:false, class:'!children:text-1.1rem no-ligatures'}
9
10
9
3
4
1
9 4 1 0 8
```

</div>
</div>

---
title: 用函式傳遞指標
---

用函式傳遞指標

<div class="flex flex-row">
<div class="basis-50/100" style="padding: 0px 10px 0px 0px;">

```c{*}{lines:true, class:'!children:text-1.2rem no-ligatures'}
#include <stdio.h>
void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
    return;
}
int main(){
    int x = 3, y = 5;
    swap(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}
```
</div>
<div class="basis-50/100"style="padding: 0px 0px 0px 30px; margin-top: 0px;">

輸出：

```plaintext{*}{lines:false, class:'!children:text-1.2rem no-ligatures'}
5 3
```

</div>
</div>

---
title: 用函式傳遞指標練習
---

用函式傳遞指標練習

<div class="flex flex-row">
<div class="basis-50/100" style="padding: 0px 10px 0px 0px;">

```c{*}{lines:true, class:'!children:text-1.1rem no-ligatures'}
#include <stdio.h>
int x = 3, y = 5;
void func(int *a, int *b){
    a = &x;
    b = &y;
    printf("%d %d\n", *a, *b);
}

int main(){
    int *a = &x, *b = &y;
    func(a, b);
    printf("%d %d\n", *a, *b);
    
    return 0;
}
```
</div>
<div class="basis-50/100"style="padding: 0px 0px 0px 30px; margin-top: 0px;">

輸出：

````md magic-move {at: 1, class: '!children:text-1.2rem !children:leading-26.9px no-ligatures', maxHeight: '428px'}
```plaintext
‎
```
```plaintext
5 3
```
```plaintext
5 3
3 5
```
````

</div>
</div>

---
title: 用函式傳遞陣列
---

用函式傳遞陣列

<div class="flex flex-row">
<div class="basis-50/100" style="padding: 0px 10px 0px 0px;">

```c{*}{lines:true, class:'!children:text-1.2rem no-ligatures'}
#include <stdio.h>
void printArr(int a[]){
    for(int i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return;
}

int main(){
    int arr[5] = {2, 1, 7, 4, 5};
    printArr(arr);
    return 0;
}
```

</div>
<div class="basis-50/100" style="padding: 0px 0px 0px 10px;">

```c{*}{lines:true, class:'!children:text-1.2rem no-ligatures'}
#include <stdio.h>
void printArr(int* a){
    for(int i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    return;
}

int main(){
    int arr[5] = {2, 1, 7, 4, 5};
    printArr(arr);
    return 0;
}
```
</div>
</div>

---
title: 用函式傳遞字串
---

用函式傳遞字串


```c{*}{lines:true, class:'!children:text-1.2rem no-ligatures'}
#include <stdio.h>
void printStr(char* s){
    printf("%s\n", s);
    return;
}

int main(){
    char s[] = "Hello, World";
    printStr(s);
    return 0;
}
```

---
title: 用函式傳遞二維陣列
---

用函式傳遞二維陣列

```c{*}{lines:true, class:'!children:text-1.2rem no-ligatures'}
#include <stdio.h>
void printArr(int a[][3]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return;
}
int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printArr(arr);
    return 0;
}
```

---
title: The End
layout: cover
---

<h3 style="font-size:10px">Thanks for Listening</h3>
