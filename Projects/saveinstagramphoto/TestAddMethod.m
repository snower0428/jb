//
//  TestAddMethod.m
//  LHDemo
//
//  Created by leihui on 14-11-27.
//  Copyright (c) 2014年 ND WebSoft Inc. All rights reserved.
//

#import "TestAddMethod.h"

#import "Instagram/IGFeedItemPhotoView.h"
#import "Instagram/IGImageProgressView.h"
#import "Instagram/IGImageView.h"

#import <objc/runtime.h>

static UIImage *kImage = nil;

@interface IGFeedItemPhotoCell : UIView
{
	IGFeedItemPhotoView *_photoView;
}

@property(retain, nonatomic) IGFeedItemPhotoView *photoView; // @synthesize photoView=_photoView;

@end

@implementation TestAddMethod

+ (void)addMethodForClass:(id)target
{
	Class cls = [target class];
	
	SEL sel = @selector(longPressed:);
	Method method = class_getInstanceMethod(cls, sel);
	IMP imp = method_getImplementation(method);
	class_addMethod(cls, sel, imp, method_getTypeEncoding(method));
	
	sel = @selector(alertView:clickedButtonAtIndex:);
	method = class_getInstanceMethod(cls, sel);
	imp = method_getImplementation(method);
	class_addMethod(cls, sel, imp, method_getTypeEncoding(method));
	
	if (kImage == nil) {
		kImage = [[[target photoView] photoImageView] photoImageView].image;
	}
}

- (void)longPressed:(id)sender
{
	UILongPressGestureRecognizer *longPressGesture = (UILongPressGestureRecognizer *)sender;
	if (longPressGesture.state == UIGestureRecognizerStateBegan) {
		UIAlertView *alertView = [[UIAlertView alloc] initWithTitle:@"" message:@"Save image to album???" delegate:self cancelButtonTitle:@"Cancel" otherButtonTitles:@"OK", nil];
		[alertView show];
		[alertView release];
	}
}

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex
{
	if (buttonIndex == 1) {
		if (kImage != nil) {
			UIImageWriteToSavedPhotosAlbum(kImage,nil, nil, nil);
		}
	}
}

@end
