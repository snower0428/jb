//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIColor;

@interface DDPageControl : UIControl
{
    int numberOfPages;
    int currentPage;
    BOOL hidesForSinglePage;
    BOOL defersCurrentPageDisplay;
    int type;
    UIColor *onColor;
    UIColor *offColor;
    float indicatorDiameter;
    float indicatorSpace;
}

@property(nonatomic) float indicatorSpace; // @synthesize indicatorSpace;
@property(nonatomic) float indicatorDiameter; // @synthesize indicatorDiameter;
@property(retain, nonatomic) UIColor *offColor; // @synthesize offColor;
@property(retain, nonatomic) UIColor *onColor; // @synthesize onColor;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) BOOL defersCurrentPageDisplay; // @synthesize defersCurrentPageDisplay;
@property(nonatomic) BOOL hidesForSinglePage; // @synthesize hidesForSinglePage;
@property(nonatomic) int currentPage; // @synthesize currentPage;
@property(nonatomic) int numberOfPages; // @synthesize numberOfPages;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeForNumberOfPages:(int)arg1;
- (void)updateCurrentPageDisplay;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithType:(int)arg1;

@end
