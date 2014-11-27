/* How to Hook with Logos
Hooks are written with syntax similar to that of an Objective-C @implementation.
You don't need to #include <substrate.h>, it will be done automatically, as will
the generation of a class list and an automatic constructor.
*/

#import "TestAddMethod.h"

%hook IGFeedItemPhotoCell

- (id)initWithReuseIdentifier:(id)arg1
{
	id cell = %orig;
	{
		[TestAddMethod addMethodForClass:self];

		UILongPressGestureRecognizer *longPressed = [[[UILongPressGestureRecognizer alloc] initWithTarget:self action:@selector(longPressed:)] autorelease];
		[self addGestureRecognizer:longPressed];
	}
	return cell;
}

%end
