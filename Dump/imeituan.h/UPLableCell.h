//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface UPLableCell : UIView
{
    UILabel *label;
}

@property(retain, nonatomic) UILabel *label; // @synthesize label;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)dealloc;
- (void)setLabelFont:(id)arg1;
- (void)setLabelColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 label:(id)arg2 font:(id)arg3 color:(id)arg4 aligment:(int)arg5;

@end
