//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface BaiduMobAdSpamViewValidator : NSObject
{
    UIView *view_;
    int depth;
}

- (BOOL)isInvalidAlpha;
- (BOOL)isHidden;
- (BOOL)isInvalidRect;
- (void)recursiveLoopViews:(id)arg1 indent:(id)arg2;
- (int)validate;
- (BOOL)isVisible;
- (id)initWithTarget:(id)arg1;

@end

