//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface WQWelcomeDotView : UIView
{
    int _currentIndex;
    int _dotsCount;
    float _dotWidth;
}

@property(nonatomic) float dotWidth; // @synthesize dotWidth=_dotWidth;
@property(nonatomic) int dotsCount; // @synthesize dotsCount=_dotsCount;
@property(nonatomic) int currentIndex; // @synthesize currentIndex=_currentIndex;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithDotWidth:(float)arg1 dotsCount:(int)arg2;

@end
