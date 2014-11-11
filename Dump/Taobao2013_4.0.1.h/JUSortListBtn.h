//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UILabel;

@interface JUSortListBtn : UIView
{
    UIColor *_upColor;
    UIColor *_downColor;
    BOOL _isShowArrow;
    UIColor *_btnColor;
    NSString *_paramHandstand;
    NSString *_param;
    NSString *_needPos;
    UILabel *_titleLabel;
    UILabel *_arrowLabel;
    UILabel *_image;
    int _iType;
    int _iPosition;
    NSString *_originalShow;
    int _btnId;
}

+ (void)setChoiseBtn:(int)arg1;
+ (int)getChoiseBtn;
@property(nonatomic) BOOL isShowArrow; // @synthesize isShowArrow=_isShowArrow;
@property(nonatomic) int btnId; // @synthesize btnId=_btnId;
@property(retain, nonatomic) NSString *originalShow; // @synthesize originalShow=_originalShow;
@property(nonatomic) int iPosition; // @synthesize iPosition=_iPosition;
@property(nonatomic) int iType; // @synthesize iType=_iType;
@property(retain, nonatomic) UILabel *image; // @synthesize image=_image;
@property(retain, nonatomic) UILabel *arrowLabel; // @synthesize arrowLabel=_arrowLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *needPos; // @synthesize needPos=_needPos;
@property(retain, nonatomic) NSString *param; // @synthesize param=_param;
@property(retain, nonatomic) NSString *paramHandstand; // @synthesize paramHandstand=_paramHandstand;
@property(retain, nonatomic) UIColor *btnColor; // @synthesize btnColor=_btnColor;
- (void)hideArrowByAppendWith;
- (void)showArrowByAppendWith;
- (void)swapUpAndDownColor;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)otherButtonDidSelect:(id)arg1;
- (void)dealloc;
- (id)initWithDefaultFrameWithType:(int)arg1 Position:(int)arg2;

@end

