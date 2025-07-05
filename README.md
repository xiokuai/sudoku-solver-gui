# Sudoku Solver GUI | 数独求解器图形界面版


## 🧩 Introduction | 项目简介

A beautiful and interactive Sudoku solver written in Python, featuring a user-friendly GUI built with PyQt5.  
本项目是一个用 Python 编写的漂亮数独求解器，拥有基于 PyQt5 的图形化用户界面，支持用户交互与自动求解。

---

## ✨ Features | 功能特性

- 🖱️ 点击格子 + 键盘输入数独数字
- 💡 实时输入高亮与错误提示
- 🔧 一键使用 [DLX 精确覆盖算法](https://en.wikipedia.org/wiki/Algorithm_X) 自动求解
- 🔄 导入 / 导出数独（支持 JSON / 文本）
- 🎲 自动生成可解的数独题目
- 🧠 求解结果数字用不同颜色显示
- 🌈 美化 UI，支持九宫格边界美化

---

## 🖼️ Screenshot | 截图

> 放置你的 `resources/screenshot.png` 或运行界面图。

---

## 📦 Installation | 安装方式

### 使用 pip 安装依赖：

```bash
pip install -r requirements.txt
```

> 如果你还没有 `requirements.txt`，内容可如下：

```txt
PyQt5>=5.15
pygame>=2.0
```

---

## 🚀 Usage | 使用方法

```bash
python main.py
```

你可以在界面上：

- 点击某个方格
- 使用键盘输入数字（1~9）
- 使用菜单进行“导入 / 导出 / 自动求解 / 随机生成”等操作

---

## 📁 Project Structure | 项目结构说明

```
sudoku_solver/
├── main.py               # 启动入口
├── ui_main.py            # 主 UI 逻辑
├── solver.py             # DLX 求解算法
├── generator.py          # 随机生成器
├── utils.py              # 工具函数
├── resources/            # 图片、图标等资源
├── board_logic.py        # 棋盘操作逻辑（可选）
└── README.md             # 项目说明文件
```

---

## 🧱 技术栈 | Tech Stack

- Python 3.8+
- PyQt5
- Pygame
- DLX（Dancing Links X 精确覆盖算法）

---

## 📃 License | 开源协议

本项目采用 [MIT License](LICENSE)，可自由使用、修改、分发。

---

## 🙌 Contributors | 贡献者

- **@Xiokuai** - 项目开发者 / UI 设计 / 求解逻辑
- ChatGPT - PRD 规划、代码辅助、说明文档

欢迎 PR、Fork、Star ⭐！
