//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISlider.h"

__attribute__((visibility("hidden")))
@interface MTSectionSlider : UISlider
{
    BOOL _dragging;
    int _sectionNodeNum;
}

@property(nonatomic) int sectionNodeNum; // @synthesize sectionNodeNum=_sectionNodeNum;
- (void)actionTap:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)awakeFromNib;
- (void)initialize;

@end

