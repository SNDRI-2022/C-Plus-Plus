# 项目介绍
学习和实践 c/c++的测试平台(远程仓库)

配置了makefile在windows下vscode的编译连接和运行(需要mingw64)
### 项目运行

- **代码环境**

  windows 11

- **编辑工具**

  vscode

- **编译器**

  gcc/g++


# 目录结构
```
C-Plus-Plus
├─ .vscode
│  ├─ c_cpp_properties.json
│  ├─ launch.json
│  ├─ settings.json
│  └─ tasks.json
├─ include
│  ├─ HeaderFile.hpp
│  ├─ MyArray.hpp
│  ├─ MySort.hpp
│  ├─ sort-BubbleSort.hpp
│  ├─ sort-InsertionSort.hpp
│  ├─ sort-SelectionSort.hpp
│  └─ sort-ShellSort.hpp
├─ lib
├─ Makefile
├─ output
│  └─ main.exe
├─ README.md
└─ src
   ├─ main.cpp
   └─ main.o

```
# 版本内容更新
###### v1.0.0: 
   1.实现冒泡排序(BubbleSort)

   2.实现选择排序(SelectionSort)

   3.添加插入排序(InsertionSort) **未实现**

   4.添加希尔排序(ShellSort) **未实现**

# vscode插件推荐
## 功能类
- [一键生成c/c++项目目录](https://github.com/danielpinto8zz6/c-cpp-project-generator#readme):非常好用,一键生成
- [一键生成注释](https://github.com/cschlosser/doxdocgen):懒得写注释,**注意:必须在配置文件中定义一个模板才能以能偷懒**
- [一键生成目录树到你的README文件中](https://github.com/zhucyi/project-tree):上面的目录结构根本不用再手打了,一键添加
- [更好的错误信息提示](https://github.com/usernamehw/vscode-error-lens):一些错误会让波浪线很短非常难找,这个插件能很直观的看到错误
- [Tab跳出函数](https://github.com/albertromkes/tabout):写完函数参数时按下tab可以转到函数的)后面方便直接;结束语句
- [markdown实时现示](markdown):在vscode中写README时用的到
- [显示git分支](https://github.com/mhutchie/vscode-git-graph):虽然这个小项目用不到,但值得下载
- [无聊时刷刷力扣](https://github.com/LeetCode-OpenSource/vscode-leetcode):**注意:在设置中改成力扣cn才能登录力扣中国站**
- [你的代码分析](https://github.com/wakatime/vscode-wakatime):**注意:需要注册账号并获取账号的id才能跟踪并分析你的数据**
## vscode美化类
- [github主题](https://github.com/primer/github-vscode-theme):黑色和白色都很好看
- [扁平化图标](https://github.com/PKief/vscode-material-icon-theme):还是喜欢扁平化图标
- [连体字](https://github.com/tonsky/FiraCode):很好的字体