//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSString, UILabel;

@interface GameRechargeMainViewCell : UIControl
{
    int _type;
    NSString *_title;
    UILabel *_contentLable;
}

@property(retain, nonatomic) UILabel *contentLable; // @synthesize contentLable=_contentLable;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)content;
- (void)setContent:(id)arg1;
- (void)setupView;
- (id)initWithTitle:(id)arg1 Frame:(struct CGRect)arg2 Type:(int)arg3;

@end

