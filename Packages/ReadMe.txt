============================================================

Run an App as root:

1. In the main() function, add setuid(0); and setgid(0);
(经过测试，其实只要add setuid(0); 就可以了)
2. Build the app normally;
3. Create a copy of the executable file in the bundle;
4. Open the original executable file and replace its content with this script:
#!/bin/bash
dir=$(dirname “$0”)
exec “${dir}”/COPIED_EXECUTALBE_NAME “$@”

(使用Hex Fiend来打开编辑executable file)

Directly launching a root app fails on iOS. Therefore we replace the app’s main executable with a scrip that launches the root executable.

5. In terminal, navigate to the app bundle.
6. chmod 0775 the original executable file and chmod 6775 the copied executable file.
7. Copy the app bundle to /Applications to a device. Restart SpringBoard and you should be good to go. If the app doesn’t launch then repeat step 5 & 6 on the device.
(打包并且安装app后，重起设备; 打包：dpkg -b App; 查看权限：dpkg -c App; 安装：dpkg -i App)

============================================================
