//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBCityTakeoutRefundItem, UIButton;

@interface TBCityTakeoutRefundItemView : UIView
{
    BOOL _isAll;
    TBCityTakeoutRefundItem *_userInfo;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) TBCityTakeoutRefundItem *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) BOOL isAll; // @synthesize isAll=_isAll;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 andItem:(id)arg2;

@end

