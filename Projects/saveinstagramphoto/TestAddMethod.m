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

@interface IGFeedItemPhotoCell : UIView
{
	IGFeedItemPhotoView *_photoView;
}

@property(retain, nonatomic) IGFeedItemPhotoView *photoView; // @synthesize photoView=_photoView;

@end

@implementation TestAddMethod

+ (void)addMethodForClass:(id)target
{
	Class cls = [self class];
    {
        SEL sel = @selector(longPressed:);
        Method method = class_getInstanceMethod(cls, sel);
        IMP imp = method_getImplementation(method);
        class_addMethod([target class], sel, imp, method_getTypeEncoding(method));
    }
    {
        SEL sel = @selector(alertView:clickedButtonAtIndex:);
        Method method = class_getInstanceMethod(cls, sel);
        IMP imp = method_getImplementation(method);
        class_addMethod([target class], sel, imp, method_getTypeEncoding(method));
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
        if ([NSStringFromClass([self class]) isEqualToString:@"IGFeedItemPhotoCell"]) {
            IGFeedItemPhotoCell *cell = (IGFeedItemPhotoCell *)self;
            UIImage *image = [[[cell photoView] photoImageView] photoImageView].image;
            UIImageWriteToSavedPhotosAlbum(image,nil, nil, nil);
        }
	}
}

@end
