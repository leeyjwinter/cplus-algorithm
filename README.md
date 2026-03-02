# 🚀 C++ Algorithm Study

![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Algorithm](https://img.shields.io/badge/Algorithm-FF6B6B?style=for-the-badge&logo=thealgorithms&logoColor=white)
![Status](https://img.shields.io/badge/Status-In_Progress-yellow?style=for-the-badge)

> **Inflearn - 10주완성 C++ 코딩테스트 | 알고리즘 코딩테스트** 학습 저장소

## 📚 About

이 저장소는 코딩테스트 대비를 위한 C++ 알고리즘 문제 풀이 모음입니다.
백준(BOJ)과 프로그래머스(PROG)의 다양한 문제들을 주제별로 분류하여 정리했습니다.

## 🗂️ Repository Structure

```
src/
├── 📁 backtracking/          # 백트래킹
├── 📁 binary_search/         # 이진 탐색
├── 📁 bruteforce/            # 완전 탐색
├── 📁 dfs/                   # 깊이 우선 탐색
├── 📁 dijkstra/              # 다익스트라
├── 📁 floyd_warshall/        # 플로이드-워셜
├── 📁 heap/                  # 힙/우선순위 큐
├── 📁 kruskal/               # 크루스칼 (MST)
├── 📁 linked_list/           # 연결 리스트
├── 📁 simulation/            # 시뮬레이션
├── 📁 sort/                  # 정렬
└── 📁 typeswitch/            # 타입 변환 (string, char)
```

## 🎯 Algorithm Categories

### 🔍 탐색 (Search)
- **DFS (Depth-First Search)** - 깊이 우선 탐색
- **Binary Search** - 이진 탐색
- **Bruteforce** - 완전 탐색

### 🔙 백트래킹 (Backtracking)
- 가지치기를 통한 최적화된 완전 탐색

### 📊 그래프 (Graph)
- **Dijkstra** - 최단 경로 알고리즘
- **Floyd-Warshall** - 모든 쌍 최단 경로
- **Kruskal** - 최소 신장 트리 (MST)

### 🗄️ 자료구조 (Data Structure)
- **Heap** - 힙 / 우선순위 큐
- **Linked List** - 연결 리스트

### 🔧 기타 (Others)
- **Sort** - 정렬 알고리즘
- **Simulation** - 시뮬레이션
- **Type Conversion** - 문자열/문자 변환

## 💻 How to Use

### Compile & Run
```bash
# 컴파일
g++ -std=c++14 -Wall src/<category>/<filename>.cpp -o test.out

# 실행
./test.out
```

### Example
```bash
# BOJ2309 일곱 난쟁이 문제 컴파일 및 실행
g++ -std=c++14 -Wall src/bruteforce/BOJ2309_일곱난쟁이.cpp -o test.out
./test.out
```

## 📝 Solved Problems

### Backtracking
- `BOJ10971` - 외판원 순회 2
- `PROG_가장큰수` - 가장 큰 수

### Binary Search
- `공유기설치` - 공유기 설치
- `PROG_징검다리건너기` - 징검다리 건너기

### Bruteforce
- `BOJ2309_일곱난쟁이` - 일곱 난쟁이

### DFS
- `불` - 불
- `PROG_여행경로` - 여행 경로
- `트리의지름` - 트리의 지름

### Dijkstra
- `PROG_배달` - 배달

### Heap
- `PROG_더맵게` - 더 맵게

### Kruskal
- `PROG_섬연결하기` - 섬 연결하기

### Linked List
- `PROG_표편집` - 표 편집

### Simulation
- `BOJ2979_트럭주차` - 트럭 주차

### Sort
- `BOJ11651` - 좌표 정렬하기 2
- `PROG_가장큰수` - 가장 큰 수

### Type Conversion
- `BOJ10808_알파벳개수` - 알파벳 개수
- `BOJ10988_펠린드롬인지확인하기` - 팰린드롬인지 확인하기
- `BOJ1159_농구경기` - 농구 경기

## 📖 Learning Resources

- 📚 **Course**: [Inflearn - 10주완성 C++ 코딩테스트](https://www.inflearn.com)
- 🏆 **BOJ**: [Baekjoon Online Judge](https://www.acmicpc.net)
- 💡 **Programmers**: [프로그래머스](https://programmers.co.kr)

## 🛠️ Environment

- **Language**: C++14
- **Compiler**: g++
- **OS**: macOS / Linux

## 📌 Notes

- `bits/stdc++.h` 헤더 사용 (경진 대회용)
- 표준 입출력 최적화 적용
- 문제별 주석과 설명 포함

## 🎓 Study Progress

```
[████████░░] 80% Complete
```

**목표**: 10주 완성
**현재**: 진행 중
**학습 방식**: 주제별 분류 + 문제 풀이 + 복습

---

⭐ **Keep Learning, Keep Growing!** ⭐