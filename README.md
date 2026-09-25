# 我的 CS 学习档案

> 用于 **C++ / 数据结构 / 算法 / 计算机图形学** 的个人学习仓库
> 支持 **Windows 与 Mac 双设备同步**

## 📂 目录结构

| 路径 | 内容 |
|---|---|
| `学习计划.md` | **主档案**：学习画像、课程表、进度日志、英语词汇本、错题本、考研与实习规划 |
| `图形学实习准备计划.md` | 图形学实习的路径、时间线与作品集标准 |
| `笔记/` | 每课详细笔记与错题分析 |
| `code/` | 每课 C++ 源码 |
| `code/build.bat` | Windows 编译脚本（MSVC） |
| `code/build.sh` | Mac / Linux 编译脚本（clang++） |

## 🚀 新电脑第一次使用

### 1. 克隆仓库

```bash
git clone <仓库地址>
cd <仓库目录>
```

### 2. 安装编译器

- **Windows**：Visual Studio 2022（勾选“使用 C++ 的桌面开发”）
- **Mac**：

```bash
xcode-select --install
```

### 3. 编译运行

先进入代码目录：

```bash
cd code
```

**Windows：**

```
.\build.bat 文件名
```

**Mac：**

```bash
chmod +x build.sh     # 只需第一次
./build.sh 文件名
```

> `文件名`不带 `.cpp`，例如 `.\build.bat L14_tree`

## 🔄 每天的学习流程（双设备同步）

```bash
git pull                                  # 1. 开始前先拉取最新版
# ...学习、写代码、更新笔记...
git add -A
git commit -m "L15: 二叉搜索树"
git push                                  # 2. 结束后推上去
```

> **顺序很重要**：先 `pull` 再动手，两台设备就不会冲突。

## 🤖 给 AI 助手（Codex）的说明

**每次开启新对话，请先读 `学习计划.md`**，特别是：

- `〇、我的画像` — 学习者的水平与偏好
- `二、上课规则` — 第 6/7/8 条（节奏制、结论留档、独立笔记）
- `三、主线课程表` — 当前进度与后续安排
- `五、学习日志` — **从最后一条继续**
- `六、英语词汇本` / `七、错题本与关键结论` — 复习材料

## ⚠️ 编码注意事项（重要）

本仓库所有文本文件为 **UTF-8 无 BOM**。

- 用 **VS Code** 等编辑器打开：正常
- 用 **Windows PowerShell** 读取时，请显式指定编码：

```powershell
Get-Content -Raw -Encoding UTF8 学习计划.md
```

否则 PowerShell 5.1 会按 GBK 解码，显示成乱码（**文件本身没坏，只是显示问题**）。

## 📝 仓库约定

- 文档用 Markdown，编码 UTF-8（无 BOM）
- 每课结束：更新 `学习计划.md`（日志 + 词汇）＋ 写 `笔记/Lxx-*.md`
- 编译产物（`.exe` / `.obj` / `.vs` 等）不入库，见 `.gitignore`
- 换行符由 `.gitattributes` 统一管理