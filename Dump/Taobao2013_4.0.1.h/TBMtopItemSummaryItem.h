//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIView;

@interface TBMtopItemSummaryItem : UIButton
{
    NSString *_title;
    NSString *_value;
    NSString *_rightStringLower;
    UIView *_customValueView;
}

@property(retain, nonatomic) UIView *customValueView; // @synthesize customValueView=_customValueView;
@property(retain, nonatomic) NSString *rightStringLower; // @synthesize rightStringLower=_rightStringLower;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)btClick:(id)arg1;
- (void)rightClick;
- (void)rebuildButton;

@end

