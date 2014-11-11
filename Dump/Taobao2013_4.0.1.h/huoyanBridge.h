//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBSDKServerDelegate.h"
#import "huoyanViewControllerDelegate.h"

@class huoyanBridgeViewController;

__attribute__((visibility("hidden")))
@interface huoyanBridge : NSObject <huoyanViewControllerDelegate, TBSDKServerDelegate>
{
    huoyanBridgeViewController *_huoyan;
}

@property(nonatomic) huoyanBridgeViewController *huoyan; // @synthesize huoyan=_huoyan;
- (void)huoyanURLUserTrack:(id)arg1;
- (void)onTip;
- (void)huoyanUserTrack:(id)arg1 args:(id)arg2;
- (void)huoyanUserTrack:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)didFind:(id)arg1;
- (void)dealloc;
- (id)initWithViewController:(id)arg1;

@end
