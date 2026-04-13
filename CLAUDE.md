# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Build & Run

**컴파일러**: `C:\msys64\ucrt64\bin\g++.exe` (MSYS2 UCRT64)

```bash
# 단일 파일 컴파일
g++ -std=c++17 -Wall src/<category>/<filename>.cpp -o test.out

# 실행
./test.out
```

VSCode에서는 `Ctrl+Shift+B`로 현재 활성 파일을 빌드할 수 있습니다 (`.vscode/tasks.json` 기준).

## Repository Structure

```
src/
├── backtracking/       # 백트래킹
├── binary_search/      # 이진 탐색
├── bruteforce/         # 완전 탐색
├── dfs/                # DFS/BFS
├── dijkstra/           # 다익스트라 최단 경로
├── floyd_warshall/     # 플로이드-워셜
├── greedy/             # 그리디
├── heap/               # 힙/우선순위 큐
├── kruskal/            # 크루스칼 MST
├── linked_list/        # 연결 리스트
├── simulation/         # 시뮬레이션
├── sort/               # 정렬
├── test/               # 임시 테스트 파일
├── typeswitch (string,char)/  # 문자열/문자 변환
└── Solution.cpp        # 작업 중인 임시 파일
```

## File Naming Convention

- 백준: `BOJ<문제번호>[_문제이름].cpp` (예: `BOJ10971.cpp`)
- 프로그래머스: `PROG_<문제이름>.cpp` (예: `PROG_가장큰수.cpp`)
- 각 카테고리 폴더에 문제 유형별로 분류

## Code Style

- `#include <bits/stdc++.h>` 또는 필요한 헤더만 개별 포함
- `using namespace std;` 사용
- C++17 표준 기준
