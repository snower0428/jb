//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSString;

@protocol TBSDSKServerRule <NSObject>

@optional
- (void)performReciveResponseHeaders:(NSDictionary *)arg1;
- (void)performDelegatFailSelector;
- (void)performDelegatSuccessSelector;
- (void)performDelegatStartSelector;
- (void)setResponseData:(NSData *)arg1;
- (void)setTbsdkError:(id <TBSDKErrorRule>)arg1;
- (void)setApiMethod:(NSString *)arg1;
@end
