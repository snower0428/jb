//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTResponse.h"

@class NSArray;

@interface MTMessageResponse : MTResponse
{
    int _total;
    int _unread;
    NSArray *_messageIDs;
}

@property(retain, nonatomic) NSArray *messageIDs; // @synthesize messageIDs=_messageIDs;
@property(nonatomic) int unread; // @synthesize unread=_unread;
@property(nonatomic) int total; // @synthesize total=_total;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
