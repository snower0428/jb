//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

__attribute__((visibility("hidden")))
@interface MTSelectionGrabber : UIView
{
    BOOL _dragging;
    unsigned int _dotMetric;
    UIView *_caretView;
    UIView *_dotView;
}

@property(retain, nonatomic) UIView *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UIView *caretView; // @synthesize caretView=_caretView;
@property(nonatomic) unsigned int dotMetric; // @synthesize dotMetric=_dotMetric;
@property(nonatomic) BOOL dragging; // @synthesize dragging=_dragging;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
