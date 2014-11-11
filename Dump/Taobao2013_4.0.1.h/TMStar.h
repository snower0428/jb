//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSInvocation, UIImage;

@interface TMStar : UIView
{
    NSInvocation *_onTouchCallback;
    UIImage *_emptyImage;
    UIImage *_fullImage;
    int _maxStarCount;
    float _selectedCount;
    float _space;
}

@property(nonatomic) float space; // @synthesize space=_space;
@property(nonatomic) float selectedCount; // @synthesize selectedCount=_selectedCount;
@property(nonatomic) int maxStarCount; // @synthesize maxStarCount=_maxStarCount;
@property(retain, nonatomic) UIImage *fullImage; // @synthesize fullImage=_fullImage;
@property(retain, nonatomic) UIImage *emptyImage; // @synthesize emptyImage=_emptyImage;
- (void).cxx_destruct;
- (void)addResponse:(id)arg1 select:(SEL)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

