//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActionSheet.h"

@class UIViewController;

@interface TTActionSheet : UIActionSheet
{
    UIViewController *_popupViewController;
}

@property(retain, nonatomic) UIViewController *popupViewController; // @synthesize popupViewController=_popupViewController;
- (void)didMoveToSuperview;
- (void)dealloc;

@end

