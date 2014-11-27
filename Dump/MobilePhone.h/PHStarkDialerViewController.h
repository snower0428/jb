//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHStarkGenericViewController.h"

@class DialerController;

@interface PHStarkDialerViewController : PHStarkGenericViewController
{
    DialerController *_dialerController;
    long long _currentHighlightedControlIndex;
}

@property long long currentHighlightedControlIndex; // @synthesize currentHighlightedControlIndex=_currentHighlightedControlIndex;
@property(retain) DialerController *dialerController; // @synthesize dialerController=_dialerController;
- (void)hardwareControlEventNotification:(id)arg1;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_viewControllerWasSelected;
- (void)highlightControlAtIndex:(long long)arg1;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)deleteButtonHide:(id)arg1;
- (void)dealloc;
- (void)loadView;

@end
