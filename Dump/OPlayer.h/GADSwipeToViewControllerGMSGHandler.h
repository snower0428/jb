//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADGMSGHandler.h"

@class GADSlot;

__attribute__((visibility("hidden")))
@interface GADSwipeToViewControllerGMSGHandler : GADGMSGHandler
{
    GADSlot *_slot;
}

@property(nonatomic) __weak GADSlot *slot; // @synthesize slot=_slot;
- (void).cxx_destruct;
- (void)disableSwipeToViewController:(id)arg1;
- (void)enableSwipeToViewController:(id)arg1;
- (id)initWithSlot:(id)arg1;

@end
