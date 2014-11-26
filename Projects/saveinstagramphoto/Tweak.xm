/* How to Hook with Logos
Hooks are written with syntax similar to that of an Objective-C @implementation.
You don't need to #include <substrate.h>, it will be done automatically, as will
the generation of a class list and an automatic constructor.
*/

@class IGImageProgressView;

%hook IGImageProgressView

- (void)imageViewFailedToLoadImage:(id)arg1 error:(id)arg2
{
	%orig;
	UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:@"" message:@"imageViewFailedToLoadImage" delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil, nil];
    	[alertView show];
    	[alertView release];
}

- (void)imageViewLoadedImage:(id)arg1
{
	%orig;

UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:@"" message:@"imageViewLoadedImage" delegate:nil cancelButtonTitle:@"OK" otherButtonTitles:nil, nil];
    [alertView show];
    [alertView release];
}

%end
