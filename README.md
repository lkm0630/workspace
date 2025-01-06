## 1. 마크다운(MD)
  - README.md는 프로젝트 설명서와 비슷
  - md는 MarkDown 언어의 약자
  - MarkDown 언어는 문서를 생성할 때 많이 사용
  - 사용하기 매우 쉬움 (15분)
  - 이모지(Emoji)와 함께 많이 사용


## 2. 프로그래밍 언어
  - 컴퓨터와 대화를 하기 위해 필요한 언어
    + 자연어(Natural Language): 인간이 사용하는 언어(한국어, 영어, 일어, ...)
    + 프로그래밍 언어(Programming Language): 
    + 기계어(Machine Language): 컴퓨터가 사용하는 언어(이진법, 0과 1로만 구성성)
  - 자연어("Hello 출력하는 코드 작성해줘") → 컴퓨터(못 알아먹음) (X)
  - 개발자(기계어로 코드 작성) → 컴퓨터(알아먹음)               (X)
  - 자연어 → "프로그래밍 언어" 탄생 → 기계어
  -          printf("Hello") → 컴파일러(번역) → 기계어         (O)
  -          VSCode 코딩       MinGW or MSYS
  
### 2-1. 프로그래밍 언어 종류
  - 자연어
  -   ↑ High-Level Language(인간 친화적인 언어)
  -     (JAVA, PYTHON, JAVASCRIPT)
  - 프로그래밍언어
  -   ↓ Low-Level Language(기계 친화적인 언어)
  -     (어셈블리, C)
  - 기계어

### 2-2. 프로그래밍 언어 역사
  1. C언어(절차지향언어): UNIX에서 사용하기 위해 개발된 언어
  2. C++언어(절차지향언어 + 객체지향 추가)
  3. JAVA언어(100% 객체지향언어)
  4. C#언어(100% 객체지향언어)

### 2-3. 프로그래밍 언어 사용
  1. C언어 계열: 임베디드. 기계(로봇, 공장, 드론, ...), 계임, 복잡한 수식계산
  2. JAVA: 서비스(WEB, APP)
  3. PYTHON: 서비스(인공지능, WEB, 데이터분석)
  4. JAVASCRIPT: 서비스(WEB)
  * 어떤 언어를 주력으로 사용하든 꼭 C언어는 공부를 해야함
  * High-Level 언어들은 메모리 관리를 언어가 자동으로 해줌
  * Low-Level 언어들은 메모리 관리 등을 전부 개발자가 직접 해줌

### 2-4. 프로그래밍 언어 타입
  1. 절차지향:
    - 순서: 절차(위에서 아래로) 개발하고 실행
    - 간단하고 명료함
    - 재사용성 X, 유지보수 X 
    - 간단한 구조의 프로그램을 만들 때 많이 사용
  2. 객체지향:
    - 모든 걸 객체 사용
    - 재사용성 O, 유지보수 O
    - 복잡한 구조 개발
    - 현재 대부분의 서비스 또는 프로그램을 객체지향으로 개발

### 2-5. 운영체제(OS)
  - PC 4대 운영체제(Windows, MacOS, UNIX, LINUX)

### 2-6. C언어 실행 과정
  1. hello.c(소스 파일): 코드 작성
  2. 컴파일러(gcc)     : 소스 파일을 기계어로 번역
  3. hello.exe
  * 인터프리터: 코드라인 1줄 번역(Python)


## 3. 버전관리도구
  - 버전관리 목적
  - 협업을 위한 목적
  - 종류(SVN, GIT, 비트버킷)
  - git → 버전관리도구
  - github → git을 웹 클라우드 기반에서 동작 서비스
  - gitlab → git을 (회사)서버 기반으로 동작(회사서버를 회사에서만 접속하도록 막음)
  - 아틀라시안 회사(비트버킷 + 소스트리)

### 3-1. 초기 git 프로젝트 생성
  + Github(웹 클라우드: Global)
  + PC or 노트북(Local)
  + Global → Remote(원격) → Local

  + COMMIT: 로컬 버전 생성
  + PUSH: 로컬에서 생성된 버전을 원격 저장소(Github)에 업로드
  + PULL: 원격 저장소(Github)로 부터 파일을 다운로드
  

  1. 로컬: git 설치
  2. GITHUB: github rppository 생성
  3. 로컬: git config --global user.email and user.name 설정정
  4. 로컬: git init
  5. 로컬: git add [파일]
  6. 로컬: git commit -m "init project"
  7. 로컬: git remote add [repository 주소]
  8. 로컬: git remote -v
  9. 로컬: git push -u origin master

