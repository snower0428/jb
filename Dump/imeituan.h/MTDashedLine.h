//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSValue, UIColor;

@interface MTDashedLine : UIView
{
    NSArray *_pattern;
    UIColor *_dashedColor;
    NSValue *_endPoint;
    float _lineWidth;
}

@property(nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
@property(retain, nonatomic) NSValue *endPoint; // @synthesize endPoint=_endPoint;
@property(retain, nonatomic) UIColor *dashedColor; // @synthesize dashedColor=_dashedColor;
@property(retain, nonatomic) NSArray *pattern; // @synthesize pattern=_pattern;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

