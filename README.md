<div align="center">

# 🧩 LeetCode em C++

**Minhas soluções para problemas do [LeetCode](https://leetcode.com/), escritas em C++17.**

![C++](https://img.shields.io/badge/C++17-00599C?logo=cplusplus&logoColor=white)
![Resolvidos](https://img.shields.io/badge/resolvidos-10-2ea44f)
![Easy](https://img.shields.io/badge/Easy-3-00b8a3)
![Medium](https://img.shields.io/badge/Medium-6-ffc01e)
![Hard](https://img.shields.io/badge/Hard-1-ff375f)

</div>

---

## 📋 Problemas

| # | Problema | Dificuldade | Abordagem | Tempo | Espaço | Solução |
|:---:|---|:---:|---|:---:|:---:|:---:|
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | 🟢 Easy | Força bruta com dois loops | O(n²) | O(1) | [01](01-two-sum.cpp) |
| 2 | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | 🟡 Medium | Soma dígito a dígito com "vai um" | O(max(m,n)) | O(max(m,n)) | [02](02-add-two-numbers.cpp) |
| 3 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | 🟡 Medium | Janela deslizante | O(n·k) | O(k) | [03](03-longest-substring.cpp) |
| 4 | [Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) | 🔴 Hard | Merge dos dois arrays + mediana | O(m+n) | O(m+n) | [04](04-median-of-two-sorted-arrays.cpp) |
| 5 | [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/) | 🟡 Medium | Testa substrings da maior para a menor | O(n³) | O(n) | [05](05-longest-palindromic-substring.cpp) |
| 6 | [Zigzag Conversion](https://leetcode.com/problems/zigzag-conversion/) | 🟡 Medium | Simula as linhas descendo e subindo | O(n) | O(n) | [06](06-zigzag-conversion.cpp) |
| 7 | [Reverse Integer](https://leetcode.com/problems/reverse-integer/) | 🟡 Medium | Inverte a string e checa overflow antes de cada dígito | O(d) | O(d) | [07](07-reverse-integer.cpp) |
| 8 | [String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/) | 🟡 Medium | Parsing caractere a caractere + limite de 32 bits | O(n) | O(n) | [08](08-string-to-integer-atoi.cpp) |
| 9 | [Palindrome Number](https://leetcode.com/problems/palindrome-number/) | 🟢 Easy | Compara o número com a string invertida | O(d²) | O(d) | [09](09-palindrome-number.cpp) |
| 13 | [Roman to Integer](https://leetcode.com/problems/roman-to-integer/) | 🟢 Easy | Subtrai quando o símbolo é menor que o próximo | O(n) | O(1) | [13](13-roman-to-integer.cpp) |

> `n` e `m`: tamanho da entrada · `k`: tamanho da janela · `d`: número de dígitos

## 📂 Estrutura

Cada arquivo segue o padrão `NN-nome-do-problema.cpp` e traz:

- o **enunciado** do problema num comentário no topo;
- a **classe `Solution`** com a assinatura usada no LeetCode;
- um **`main`** com um exemplo para testar localmente.

## 🚀 Como executar

```bash
g++ -std=c++17 01-two-sum.cpp -o exec
./exec
```

## 🎯 Objetivo

Praticar algoritmos e estruturas de dados, ganhar fluência em C++ e registrar a evolução das soluções ao longo do tempo.
