static void Reboot(CFNotificationCenterRef center, void *observer, CFStringRef name, const void *object, CFDictionaryRef userInfo)
{
	NSLog(@"iOSRE: reboot");
	system("reboot");
}

int main(int argc, char **argv, char **envp)
{
	NSLog(@"iOSRE: rootdaemond is launched!");
	CFNotificationCenterAddObserver(CFNotificationCenterGetDarwinNotifyCenter(), NULL, Reboot, CFSTR("com.iosre.rootdaemon.reboot"), NULL, CFNotificationSuspensionBehaviorCoalesce);
	CFRunLoopRun(); // keep it running in background
	return 0;
}