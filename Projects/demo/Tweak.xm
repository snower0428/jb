/* How to Hook with Logos
Hooks are written with syntax similar to that of an Objective-C @implementation.
You don't need to #include <substrate.h>, it will be done automatically, as will
the generation of a class list and an automatic constructor.
*/

@interface GADBannerView : UIView

@end

%hook AppController

- (void)applicationWillEnterForeground:(id)arg1
{
	%orig;

	UIWindow *keyWindow = [[UIApplication sharedApplication] keyWindow];
	UIViewController *rootController = keyWindow.rootViewController;
	GADBannerView *bannerView = (GADBannerView *)[rootController.view.subviews objectAtIndex:0];
	bannerView.hidden = YES;

	NSString *str = [NSString stringWithFormat:@"%@", bannerView];

	UIAlertView *alerView = [[UIAlertView alloc] initWithTitle:@"GADBannerView" message:str delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil, nil];
	[alerView show];
	[alerView release];
}

%end

%hook EAGLView

- (id)initWithFrame:(struct CGRect)arg1 pixelFormat:(id)arg2 depthFormat:(unsigned int)arg3 preserveBackbuffer:(BOOL)arg4 sharegroup:(id)arg5 multiSampling:(BOOL)arg6 numberOfSamples:(unsigned int)arg7
{
	%orig;

	UIAlertView *alerView = [[UIAlertView alloc] initWithTitle:@"GADBannerView" message:@"" delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil, nil];
	[alerView show];
	[alerView release];

	return self;
}

%end

