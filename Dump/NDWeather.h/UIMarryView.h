//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface UIMarryView : UIView
{
    UILabel *_lbl4Male;
    UILabel *_lbl4Female;
    UILabel *_lbl4Month;
    UIButton *_btn4Month;
    UIButton *_btn4Search;
    UIButton *_btn4Male;
    UIButton *_btn4Female;
    UIImageView *_img4MaleSX;
    UIImageView *img4FemaleSX;
    id <UIMarryViewDelegate> marryViewDelegate;
    UIImageView *_img4FemaleSX;
}

@property(nonatomic) id <UIMarryViewDelegate> marryViewDelegate; // @synthesize marryViewDelegate;
@property(retain, nonatomic) UIImageView *img4FemaleSX; // @synthesize img4FemaleSX=_img4FemaleSX;
@property(retain, nonatomic) UIImageView *img4MaleSX; // @synthesize img4MaleSX=_img4MaleSX;
@property(retain, nonatomic) UIButton *btn4Female; // @synthesize btn4Female=_btn4Female;
@property(retain, nonatomic) UIButton *btn4Male; // @synthesize btn4Male=_btn4Male;
@property(retain, nonatomic) UIButton *btn4Search; // @synthesize btn4Search=_btn4Search;
@property(retain, nonatomic) UIButton *btn4Month; // @synthesize btn4Month=_btn4Month;
@property(retain, nonatomic) UILabel *lbl4Month; // @synthesize lbl4Month=_lbl4Month;
@property(retain, nonatomic) UILabel *lbl4Female; // @synthesize lbl4Female=_lbl4Female;
@property(retain, nonatomic) UILabel *lbl4Male; // @synthesize lbl4Male=_lbl4Male;
- (void)onClickSearch:(id)arg1;
- (void)onClickMonth:(id)arg1;
- (void)onClickShenxiao:(id)arg1;
- (void)updateTheme;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

