//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface BothColumnsView : UIView
{
    UIView *_leftView;
    UIView *_rightView;
    float _leftViewWidth;
    BOOL _showSeparatorLine;
    UIColor *_separatorLineColor;
}

@property(nonatomic) float leftViewWidth; // @synthesize leftViewWidth=_leftViewWidth;
@property(retain, nonatomic) UIColor *separatorLineColor; // @synthesize separatorLineColor=_separatorLineColor;
@property(nonatomic) BOOL showSeparatorLine; // @synthesize showSeparatorLine=_showSeparatorLine;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
