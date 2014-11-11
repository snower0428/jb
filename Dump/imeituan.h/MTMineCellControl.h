//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseCellControl.h"

@class NSString, UIImage, UIImageView, UILabel;

@interface MTMineCellControl : MTBaseCellControl
{
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_tipLabel;
    UIImage *_icon;
    NSString *_title;
    NSString *_tip;
}

@property(retain, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1;

@end

