//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface AsyncWritePacket : NSObject
{
    NSData *buffer;
    long bytesDone;
    long tag;
    double timeout;
}

- (void)dealloc;
- (id)initWithData:(id)arg1 timeout:(double)arg2 tag:(long)arg3;

@end

