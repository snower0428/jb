/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SafePayDelegate.h"
#import "SADyncRouterResponse.h"


@interface SADyncRouterMsMergepayResponse : SADyncRouterResponse <SafePayDelegate> {
}
-(void)safepayDidFinishWithResult:(id)safepay;
-(id)currentRouter;
-(void)performAction;
-(BOOL)canPerformAction;
-(id)initWithRpcResponse:(id)rpcResponse;
@end
