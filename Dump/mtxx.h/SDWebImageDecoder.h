//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface SDWebImageDecoder : NSObject
{
    NSOperationQueue *imageDecodingQueue;
}

+ (id)sharedImageDecoder;
- (void)dealloc;
- (void)decodeImage:(id)arg1 withDelegate:(id)arg2 userInfo:(id)arg3;
- (id)init;
- (void)decodeImageWithInfo:(id)arg1;
- (void)notifyDelegateOnMainThreadWithInfo:(id)arg1;

@end

