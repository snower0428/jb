//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface WQCircleDot : UIView
{
    UIColor *mainColor;
    BOOL _isHaveContent;
}

+ (id)dotWithTag:(int)arg1 withCount:(unsigned int)arg2;
+ (id)dotArrayWithCount:(unsigned int)arg1;
@property BOOL isHaveContent; // @synthesize isHaveContent=_isHaveContent;
- (void).cxx_destruct;
- (void)drawCircleContent:(struct CGRect)arg1 withColor:(id)arg2;
- (void)drawCircle:(struct CGRect)arg1 withColor:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

