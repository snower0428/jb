//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UIFont, UILabel, UPLineView;

@interface UPUnderLineButton : UIView
{
    UILabel *_label;
    NSString *_title;
    UPLineView *_lineView;
    UIColor *_normalColor;
    UIColor *_highLightColor;
    UIFont *_font;
    id mTarget;
    SEL mSelector;
}

@property(nonatomic) SEL mSelector; // @synthesize mSelector;
@property(nonatomic) id mTarget; // @synthesize mTarget;
- (void)setTitleHighLightColor:(id)arg1;
- (void)setTitleNormalColor:(id)arg1;
- (void)touchUpInside:(id)arg1;
- (void)colorBack:(id)arg1;
- (void)colorChange:(id)arg1;
- (void)addSubViews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 font:(id)arg3;

@end

