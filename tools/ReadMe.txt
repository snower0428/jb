============================================================

usbmuxd-1.0.8:

用于能过USB连线ssh到iOS中
用到的只有python-client目录下的tcprelay.py和usbmux.py两个文件，
把它们拷贝出来放到同一个目录下，如：
/Users/leihui/Desktop/jbRelate/tools/USBSSH

用法：
1.在Terminal中先：
chmod +x /Users/leihui/Desktop/jbRelate/tools/USBSSH/tcprelay.py
/Users/leihui/Desktop/jbRelate/tools/USBSSH/tcprelay.py -t 远程ios上的端口:本地OSX/Windows上的端口

如：
/Users/leihui/Desktop/jbRelate/tools/USBSSH/tcprelay.py -t 22:2222
当屏幕显示：”Forwarding local port 2222 to remote port 22”表示成功了
意思是把本地的2222端口转发到ios上的22端口

2.然后另起一个Terminal，输入：
ssh root@localhost -p 2222
这样就OK了，速度比连WIFI快多了

============================================================

fauxsu:

用来将所属用户改为root:wheel

把fauxsu和libfauxsu.dylib复制到$THEOS/bin下，然后运行”chmod a+x”。

============================================================

Symbolicate:

——————————————————————————————
symbolicate.sh

使用该脚本可直接根据崩溃地址和 dSYM 解析出崩溃地址对应的代码行，用法如下：
./symbolicate.sh MyApp armv7 0x11800
第一个参数为 dSYM 文件，注：非 .dSYM 文件，而是 .dSYM 包里面的文件，右键 .dSYM 可看到 "Show Package Contents", 相应文件在 ”Contents/Resources/DWARF“ 目录下。
第二个参数是 App 在相应崩溃设备中的 arm，如 iPhone4S 是 armv7，iPhone5 是 armv7s，iPhone5s 是 arm64
第三个参数是崩溃地址

——————————————————————————————
CrashSymbolizer.app

usage:
1. Fill the dSYM path
2. Choose an Architecture: armv7/armv7s/arm64
3. Copy crash info into left text view, the carsh info like this: 6 MyApp 0x000f8f5c 0x26000 + 864092
4. (Default no choose) Choose the left corner to show all info or no (some infos don't related to MyApp, like Apple API below. 17 UIKit 0x30022c42 -[UITableView _updateVisibleCellsNow:] + 1802
5. Click Transfer Button

============================================================

keychain_dumper:

用来导出keychain中的数据。
1. 把 keychain_dumper 放到设备/tmp目录下；
2. 输入 chmod a+x keychain_dumper 确保它可执行；
3. 输入 chmod +r /private/var/Keychains/keychain-2.db 使keychain文件可被读取；
4. 进入/tmp目录，运行 ./keychain_dumper

Note:
使用 keychain_dumper 不带参数，默认只会导出能用和网络密码。
可以通过 -h 命令查看它的用法。

keychain_dumper -h

============================================================
