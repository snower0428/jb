#import "RootViewController.h"
#import <unistd.h>

@implementation RootViewController

- (void)reboot
{
	NSLog(@"iOSREDebug: %d, %d, %d", getuid(), geteuid(), system("reboot"));
}

- (void)loadView
{
	self.view = [[[UIView alloc] initWithFrame:[[UIScreen mainScreen] applicationFrame]] autorelease];
	self.view.backgroundColor = [UIColor redColor];
	
	UIButton *btnReboot = [UIButton buttonWithType:UIButtonTypeCustom];
	btnReboot.frame = CGRectMake(10, 10, self.view.frame.size.width - 10*2, 50);
	btnReboot.backgroundColor = [UIColor orangeColor];
	btnReboot.center = self.view.center;
	btnReboot.layer.cornerRadius = 10.f;
	btnReboot.layer.borderWidth = 1.f;
	btnReboot.layer.borderColor = [UIColor orangeColor].CGColor;
	[btnReboot addTarget:self action:@selector(reboot) forControlEvents:UIControlEventTouchUpInside];
	[self.view addSubview:btnReboot];
}

@end
