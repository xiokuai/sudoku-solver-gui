@echo off
REM 进入当前批处理脚本所在目录
cd /d %~dp0

REM 设置 PyQt5 插件路径环境变量，替换为你的实际路径
set QT_PLUGIN_PATH=C:\Users\米\AppData\Local\Programs\Python\Python38\Lib\site-packages\PyQt5\Qt\plugins

REM 删除旧的 dist 和 build 目录（如果存在）
if exist dist (
    echo 删除旧的 dist 目录...
    rmdir /s /q dist
)
if exist build (
    echo 删除旧的 build 目录...
    rmdir /s /q build
)
if exist sudoku_solver.spec (
    echo 删除旧的 spec 文件...
    del sudoku_solver.spec
)

REM 使用 PyInstaller 打包为单文件 exe，去控制台窗口，命名为 sudoku_solver.exe
echo 开始打包...
pyinstaller --noconsole --onefile --name sudoku_solver main.py

echo.
echo 打包完成！可执行文件位于 dist 目录下：dist\sudoku_solver.exe
pause
