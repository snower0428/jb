//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SBAppContextHostManager;

@interface SBAppContextHostView : UIView
{
    SBAppContextHostManager *_manager;
}

@property(nonatomic) SBAppContextHostManager *manager; // @synthesize manager=_manager;
- (id)window;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithDefaultSize;

@end
