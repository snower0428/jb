//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBTouchLabel, UIImageView;

@interface TBDialCallView : UIView
{
    TBTouchLabel *touchLabel;
    UIImageView *phoneIcon;
}

@property(retain, nonatomic) UIImageView *phoneIcon; // @synthesize phoneIcon;
@property(retain, nonatomic) TBTouchLabel *touchLabel; // @synthesize touchLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)layoutTouchLabel;
- (void)layoutPhoneIcon;
- (void)setTouchValueLabelText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

