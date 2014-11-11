// compile: clang -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS7.0.sdk -o iOSRERootDaemonTester -arch armv7 /Users/snakeninny/main.mm

#include <notify.h>

int main(int argc, char **argv)
{
	notify_post("com.iosre.rootdaemon.reboot");
	return 0;
}