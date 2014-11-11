//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSString, ThemeManager, UIColor, UIFont, UITrendHistogramBarScroll;

__attribute__((visibility("hidden")))
@interface UITrendHistogram : UIView
{
    int hisType;
    NSString *sDataTime;
    NSMutableArray *aryTrendValue;
    BOOL bShowFace;
    UIColor *clrBkgnd;
    UIColor *clrBkAxle;
    UIColor *clrFont;
    UIColor *clrBar;
    UIColor *curclrBar;
    UIColor *clrGridLine;
    float fntSize;
    UIFont *ctrFont;
    UIView *vew4DateLable;
    NSString *sRangeTime;
    UITrendHistogramBarScroll *trendScroll;
    ThemeManager *themeManager;
    id <UITrendHistogramDelegate> delegate;
}

+ (id)addToParentWnd:(id)arg1 Position:(struct CGRect)arg2;
@property(nonatomic) id <UITrendHistogramDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UIView *vew4DateLable; // @synthesize vew4DateLable;
@property(retain, nonatomic) UITrendHistogramBarScroll *trendScroll; // @synthesize trendScroll;
@property(retain, nonatomic) UIFont *ctrFont; // @synthesize ctrFont;
@property(retain, nonatomic) UIColor *clrGridLine; // @synthesize clrGridLine;
@property(retain, nonatomic) UIColor *curclrBar; // @synthesize curclrBar;
@property(retain, nonatomic) UIColor *clrBar; // @synthesize clrBar;
@property(retain, nonatomic) UIColor *clrFont; // @synthesize clrFont;
@property(retain, nonatomic) UIColor *clrBkAxle; // @synthesize clrBkAxle;
@property(retain, nonatomic) UIColor *clrBkgnd; // @synthesize clrBkgnd;
@property(nonatomic) float fntSize; // @synthesize fntSize;
@property(nonatomic) BOOL bShowFace; // @synthesize bShowFace;
@property(retain, nonatomic) NSMutableArray *aryTrendValue; // @synthesize aryTrendValue;
@property(retain, nonatomic) NSString *sRangeTime; // @synthesize sRangeTime;
@property(retain, nonatomic) NSString *sDataTime; // @synthesize sDataTime;
@property(nonatomic) int hisType; // @synthesize hisType;
- (void)Refresh;
- (void)SetFontColor:(int)arg1 Green:(int)arg2 Blue:(int)arg3 Alpha:(float)arg4;
- (void)RemoveAllTemptData;
- (int)AppendJxData:(id)arg1;
- (void)setRangeTime:(id)arg1;
- (void)setDataType:(int)arg1 DateTime:(id)arg2;
- (void)DrawXAxleTitle:(struct CGContext *)arg1;
- (void)DrawYAxleTitle:(struct CGContext *)arg1;
- (void)DrawBkGrnd:(struct CGContext *)arg1;
- (void)drawTopTitle;
- (float)calcHorizeAreaHight:(BOOL)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setScrollViewSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
