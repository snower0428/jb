//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface DMViewControllerHolder : NSObject
{
    NSDictionary *_parameters;
    BOOL _shown;
    id <DMViewControllerHolderDelegate> _delegate;
}

@property(readonly, nonatomic) BOOL shown; // @synthesize shown=_shown;
@property(nonatomic) id <DMViewControllerHolderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)presentWithLifecycelBlock:(CDUnknownBlockType)arg1;
- (void)presentFullScreenModalViewController:(id)arg1;
- (void)trackEvent:(int)arg1 eventType:(id)arg2 data:(id)arg3;
- (void)dealloc;
- (id)initWithParameters:(id)arg1 delegate:(id)arg2;
- (id)initWithParameters:(id)arg1;

@end

