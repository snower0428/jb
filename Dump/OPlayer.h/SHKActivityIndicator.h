//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView, UILabel;

@interface SHKActivityIndicator : UIView
{
    UILabel *centerMessageLabel;
    UILabel *subMessageLabel;
    UIActivityIndicatorView *spinner;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)currentIndicator;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner;
@property(retain, nonatomic) UILabel *subMessageLabel; // @synthesize subMessageLabel;
@property(retain, nonatomic) UILabel *centerMessageLabel; // @synthesize centerMessageLabel;
- (id)autorelease;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setProperRotation:(BOOL)arg1;
- (void)setProperRotation;
- (void)hideSpinner;
- (void)showSpinner;
- (void)setSubMessage:(id)arg1;
- (void)setCenterMessage:(id)arg1;
- (void)displayCompleted:(id)arg1;
- (void)displayActivity:(id)arg1;
- (void)hidden;
- (void)persist;
- (void)hide;
- (void)hideAfterDelay;
- (void)show;
- (void)dealloc;

@end
